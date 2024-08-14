// Fill out your copyright notice in the Description page of Project Settings.


#include "Selenae.h"

USelenae::USelenae() {
}


double Hill_BiomeSelena::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	return NoiseClass.Fractal(position, octave, lacunarity, persistence);
}


//Crater Noise Generation for the moon
double CraterGen::CavityShape(double distance)
{
	return distance * distance;

}
double CraterGen::RimShape(double distance, double rimSteepness, int power)
{
	distance = distance - 1;
	if (power == 1)
		return 1 + rimSteepness * distance;
	if (power == 2)
		return 1 + rimSteepness * distance * distance;
	if (power == 3)
		return 1 + rimSteepness * distance * distance * distance;
	if (power == 4)
		return 1 + rimSteepness * distance * distance * distance * distance;
	if (power == 5)
		return 1 + rimSteepness * distance * distance * distance * distance * distance;

	return 1 + rimSteepness * powf(distance, power);

}
double CraterGen::CraterShape(double distance, double rimSteepness, double Height, double smoothness, int rimPower)
{

	return NoiseMathUtils::SmoothMax(NoiseMathUtils::SmoothMin(CavityShape(distance * 2.5f), RimShape(distance, rimSteepness, rimPower), smoothness), Height, smoothness);
}
double CraterGen::GetCrater(CustomNoise NoiseClass, DVector position, USelenae* NoiseParam, int SizeGeneration)
{


	double warp = 0;
	if (NoiseParam->CraterWarpOctave > 1)
		warp = NoiseClass.Fractal(position * 5 * NoiseParam->CraterWarpFrequency, NoiseParam->CraterWarpOctave);
	else
		warp = NoiseClass.Noise_01(position * 5 * NoiseParam->CraterWarpFrequency);
	DVector WapredPosition = position + DVector(warp, warp, warp) * 0.05f * NoiseParam->CraterWarp;

	double CraterDistance = NoiseMathUtils::Clamp01(NoiseClass.Noise_01(WapredPosition, ENoiseType::Cellular, ECellularDistanceType::EuclideanSq, ECellularType::Distance, 0.5f) * NoiseParam->CraterSize);
	double CraterAge = NoiseClass.Noise(WapredPosition, ENoiseType::Cellular, ECellularDistanceType::EuclideanSq, ECellularType::CellValue, 0.5f);

	double CraterRim = NoiseParam->CraterRimHeight;
	if (NoiseParam->CraterRimOctaveLimit < SizeGeneration) CraterRim = 0;


	return CraterShape(CraterDistance, (0.15f + (1 - CraterAge) * 0.15f) * CraterRim, 0.15f + 0.35f * CraterAge, 0.025f + 0.15f * powf(1 - CraterAge, 2), NoiseParam->CraterRimPower) * NoiseParam->CraterHeightMultiplier;
}
double CraterGen::GetCraterFractal(CustomNoise NoiseClass, DVector position, USelenae* NoiseParam, int octave, double lacunarity, double persistence, bool Min)
{

	if (Min) {
		double noise = 1;
		double intensity = 1;
		double scale = 1;

		for (int i = 0; i < octave; i++) {
			noise = NoiseMathUtils::SmoothMin(noise, (1 - intensity) + (intensity * GetCrater(NoiseClass, position * scale, NoiseParam, i)), 0.1);
			intensity *= persistence;
			scale *= lacunarity;
		}

		return noise;
	}
	else {
		double noise = 0;
		double intensity = 1;
		double scale = 1;
		double noiseRemap = 0;

		for (int i = 0; i < octave; i++) {
			noise += (intensity * GetCrater(NoiseClass, position * scale, NoiseParam, i));
			noiseRemap += intensity;
			intensity *= persistence;
			scale *= lacunarity;
		}

		return noise;
	}


}




FNoiseData USelenaeNoise::GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise)
{
	double warp = NoiseClass.Noise_01(NoisePosition * NoiseParameters->Warp2Scale);
	DVector WarpedPosition = NoisePosition * NoiseParameters->WarpScale + FVector(warp, warp, warp) * NoiseParameters->WarpIntensity;

	double warp2 = NoiseClass.Noise_01(NoisePosition * NoiseParameters->Warp2Scale2);
	DVector WarpedPosition2 = NoisePosition * NoiseParameters->WarpScale2 + FVector(warp2, warp2, warp2) * NoiseParameters->WarpIntensity2;

	double GeneralNoise = NoiseClass.Noise_01(NoisePosition * 0.005f);

	/*
	**	FNoiseData, is a struct to register every data you want from the noise generation, you can edit them as you wish and use the param here,
	*
	**	the only parametter the PlanetRoot is using are :
	**	HeightNormalize		- Height value in a range of 0 to 1, used to register the height value in the Red Vertex Color.
	**	Height;				- Height value in Unreal Unit, allow to get the real height of the ground.
	**	Temperature;		- Temperature from a range of 0 to 1.
	**	Humidity;			- Humidity from a range of 0 to 1.
	**	FoliageMask			- Used for foliage densitty (not used right now but will be is near future).
	*/
	FNoiseData Data = FNoiseData();
	if (FlatWorld) {
		Data.Temperature = NoiseClass.Fractal(WarpedPosition * 0.028143, 6);
		Data.Humidity = NoiseClass.Fractal(WarpedPosition * 0.032537, 6);
	}
	else {
		float LattitudeRemapped = 1 - abs(lattitude);

		//Humidity and temperature based on planet latitude, you can use these value for terrain generation (using them as mask for biome) 
		//and for texture (they are saved as Green (temperature) and Blue (Humidity) in the vertex Color of the terrain Mesh;
		Data.Temperature = pow(1 - abs(asin(lattitude) / 3.1415926535897932384626433832795) * 2, 2) + NoiseParameters->TemperatureOffset;
		Data.Temperature *= 0.8f + 0.2f * NoiseClass.Fractal(WarpedPosition * 0.001443, 6);
		Data.Humidity = NoiseClass.Fractal(WarpedPosition * 0.0009537 * NoiseParameters->HumidityScale, 4);

		Data.Humidity = NoiseMathUtils::Clamp(Data.Humidity, 0.f, 1) + NoiseParameters->HumidityOffset;

		if (UsePlanetary && !NoiseParameters->bIgnorePlanetaryHeightmap)
		{

			if (ActualData.Temperature >= 0)
			{
				Data.Temperature = ActualData.Temperature + NoiseParameters->TemperatureOffset;
			}

			if (ActualData.Humidity >= 0)
			{
				Data.Humidity = ActualData.Humidity + NoiseParameters->HumidityOffset;
			}
			LandMassNoise = ActualData.HeightNormalize;
		}


	}

	double Ridge = (pow(NoiseMathUtils::Clamp01(NoiseParameters->RidgeScale - abs(asin(lattitude) / 3.1415926535897932384626433832795)) * 2, NoiseParameters->RidgeShaprness)) * NoiseParameters->RidgeHeight;

	double Hillmask = NoiseMathUtils::Clamp01(NoiseClass.Fractal(WarpedPosition * 1.5f * NoiseParameters->surfaceFeature, 2) * 1.2);
	double SurfaceDeformation = (NoiseClass.Fractal(WarpedPosition * 1.5f * NoiseParameters->SurfaceDeformationScale, NoiseParameters->SurfaceDeformationOcative, NoiseParameters->SurfaceDeformationLacunarity, NoiseParameters->SurfaceDeformationPersistence) * NoiseParameters->SurfaceDeformationHeight);

	const double HillNoise = Hill_BiomeSelena::GetNoise(NoiseClass, WarpedPosition * NoiseParameters->HillScale, NoiseParameters->HillOctave, NoiseParameters->HillLacunarity, NoiseParameters->HillPersistence) * NoiseParameters->HillHeight;
	Data.HeightNormalize = CraterGen::GetCraterFractal(NoiseClass, NoisePosition * 0.002f * NoiseParameters->CraterFrequency, NoiseParameters, NoiseParameters->CraterOctave, NoiseParameters->CraterLacunarity, NoiseParameters->CraterPersistence);
	Data.Humidity *= ((Data.HeightNormalize - NoiseParameters->CraterSurfaceApperanceInfluence) + (Ridge / NoiseMathUtils::Clamp(NoiseParameters->RidgeHeight * 3, 1 , 50000)));
	Data.HeightNormalize *= 0.9f + 0.05f * Hill_Biome::GetNoise(NoiseClass, NoisePosition * 0.1f, 4, 2, 0.5) + 0.05f * CraterGen::GetCraterFractal(NoiseClass, NoisePosition * 0.5f * NoiseParameters->CraterFrequency, NoiseParameters, NoiseParameters->CraterOctave, NoiseParameters->CraterLacunarity, NoiseParameters->CraterPersistence);;
	Data.HeightNormalize = Data.HeightNormalize + (HillNoise * Hillmask) + SurfaceDeformation + Ridge;


	//Reducing the temperature based on the altitude;
	Data.Temperature = NoiseMathUtils::Clamp(Data.Temperature - powf(NoiseMathUtils::Clamp01(Data.HeightNormalize - 0.01) * 2, 1.2), 0.f, Data.Temperature);



	return Data;


}

FNoiseData USelenaeNoise::GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{
	double LandMassNoise;
	FNoiseData Data = FNoiseData();
	//Noise scale with the planet, to avoid issue if the position value is too high
	NoisePosition = (position / PlanetScale) * NoiseScale;

	Data = GetHeight(NoiseClass, position, PlanetPosition, NoiseScale, NoiseIntensity, PlanetScale, FlatWorld, lattitude, NoisePosition, ActualData, UsePlanetary, LandMassNoise);

	Data.Height = Data.HeightNormalize * NoiseIntensity;

	return Data;

}
FNoiseData USelenaeNoise::GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{


	//Noise scale with the planet, to avoid issue if the position value is too high
	NoisePosition = (position / PlanetScale) * NoiseScale;

	FNoiseData Data = FNoiseData();
	
	Data.Height = Data.HeightNormalize * NoiseIntensity;

	return Data;

}


USelenaeNoise::USelenaeNoise() {
	NoiseParameters = CreateDefaultSubobject<USelenae>(TEXT("Noise Parameters"));
}