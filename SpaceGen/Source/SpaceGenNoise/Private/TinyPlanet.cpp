// Fill out your copyright notice in the Description page of Project Settings.


#include "TinyPlanet.h"

UTinyPlanet::UTinyPlanet() {
}


double Mountain_Biome2::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	return NoiseClass.Fractal(position, 5) * 0.15 + 0.85 * NoiseClass.FractalRidge(position * 0.15, octave, lacunarity, persistence);
}
double Mountain_Biome2::GetMask(CustomNoise NoiseClass, DVector position) {
	return NoiseClass.Fractal(position, 6);
}

double Hill_Biome2::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	return NoiseClass.Fractal(position, octave, lacunarity, persistence);
}

FNoiseData UTinyPlanetExample::GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise)
{
	double warp = NoiseClass.Noise_01(NoisePosition * NoiseParameters->Warp2Scale);
	DVector WarpedPosition = NoisePosition * NoiseParameters->WarpScale + FVector(warp, warp, warp) * NoiseParameters->WarpIntensity;

	double warp2 = NoiseClass.Noise_01(NoisePosition * NoiseParameters->Warp2Scale2);
	DVector WarpedPosition2 = NoisePosition * NoiseParameters->WarpScale2 + FVector(warp2, warp2, warp2) * NoiseParameters->WarpIntensity2;

	double warp3 = NoiseClass.Noise_01(NoisePosition * NoiseParameters->Warp3Scape);
	DVector RiverWarpedPosition1 = NoisePosition * NoiseParameters->RiverWarpScale + FVector(warp3, warp3, warp3) * NoiseParameters->RiverWarpIntensity;

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
		Data.Humidity = NoiseMathUtils::SmoothMax(-pow(LattitudeRemapped, 3) + 0.75, pow(LattitudeRemapped, 10), 0.2); //Temperature based on Planet Latitude;:
		Data.Humidity *= 0.2f + NoiseClass.Fractal(WarpedPosition * 0.0009537 * NoiseParameters->HumidityScale, 4);

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

	//Generating Mountain Mask and noise
	double MountainMask = NoiseMathUtils::Clamp01(pow(Mountain_Biome2::GetMask(NoiseClass, WarpedPosition * NoiseParameters->MountainWeightScale) * NoiseParameters->MountainWeight, NoiseParameters->MountainWeightPower));
	if (UsePlanetary && !NoiseParameters->bIgnorePlanetaryHeightmap)
	{
		MountainMask = NoiseMathUtils::Clamp01(MountainMask + (ActualData.HeightNormalize - 0.25) / 0.25);
	}
	const double MountainNoise = pow(Mountain_Biome2::GetNoise(NoiseClass, WarpedPosition * NoiseParameters->MountainScale, NoiseParameters->MountainOctave, NoiseParameters->MountainLacunarity, NoiseParameters->MountainPersistence) * NoiseParameters->MountainHeight, NoiseParameters->MountainHeightPower);

	//Generating Hill, which serve as a default Noise
	const double HillNoise = Hill_Biome2::GetNoise(NoiseClass, WarpedPosition * NoiseParameters->HillScale, NoiseParameters->HillOctave, NoiseParameters->HillLacunarity, NoiseParameters->HillPersistence) * NoiseParameters->HillHeight;

	//GeneratingRiver
	double RiverVienMask = NoiseMathUtils::Clamp01(pow(NoiseClass.FractalRidge(RiverWarpedPosition1 * 1.5f * NoiseParameters->RiverVienScale, 1), NoiseParameters->RiverSharpness) * (NoiseClass.Fractal(WarpedPosition * 1.5f * NoiseParameters->RiverBumpiness, 4) + NoiseParameters->RiverBumpinessOffset));
	double RiverVienMaskArea = NoiseMathUtils::Clamp01(pow(NoiseClass.FractalRidge(RiverWarpedPosition1 * 1.5f * NoiseParameters->RiverVienScale, 1), 10) * 2);
	double RiverBranchVienMask = NoiseMathUtils::Clamp01(pow(NoiseClass.FractalRidge(RiverWarpedPosition1 * 1.1f * NoiseParameters->RiverBranchScale, 1), NoiseParameters->RiverBranchSharpness) * (NoiseClass.Fractal(WarpedPosition * 1.5f * NoiseParameters->RiverBumpiness, 4) + NoiseParameters->RiverBumpinessOffset));



	//Lerping together the differents noise made based on their mask (Mountain on Hill, Ocean on previous result, and beach on top)
	Data.HeightNormalize = NoiseMathUtils::Lerp(HillNoise, MountainNoise, MountainMask);
	Data.HeightNormalize = NoiseMathUtils::Lerp(Data.HeightNormalize, Data.HeightNormalize + NoiseParameters->RiverHeightScale, NoiseMathUtils::Lerp(RiverVienMask, 0, NoiseMathUtils::Clamp01(MountainMask * 5)));
	

	//Reducing the temperature based on the altitude;
	Data.Temperature = NoiseMathUtils::Clamp(Data.Temperature - powf(NoiseMathUtils::Clamp01(Data.HeightNormalize - 0.01) * 2, 1.2), 0.f, Data.Temperature);


	//Random noise for foliage mask
	Data.FoliageMask = GeneralNoise * 0.5 + 0.5;


	return Data;
}

FNoiseData UTinyPlanetExample::GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{
	double LandMassNoise;
	FNoiseData Data = FNoiseData();
	//Noise scale with the planet, to avoid issue if the position value is too high
	NoisePosition = (position / PlanetScale) * NoiseScale;

	Data = GetHeight(NoiseClass, position, PlanetPosition, NoiseScale, NoiseIntensity, PlanetScale, FlatWorld, lattitude, NoisePosition, ActualData, UsePlanetary, LandMassNoise);

	Data.Height = Data.HeightNormalize * NoiseIntensity;

	return Data;

}


FNoiseData UTinyPlanetExample::GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{
	//Noise scale with the planet, to avoid issue if the position value is too high
	NoisePosition = (position / PlanetScale) * NoiseScale;

	FNoiseData Data = FNoiseData();
	Data.Height = Data.HeightNormalize * NoiseIntensity;

	return Data;

}

UTinyPlanetExample::UTinyPlanetExample() {
	NoiseParameters = CreateDefaultSubobject<UTinyPlanet>(TEXT("Noise Parameters"));
}