// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeNoiseClass.h" 


#if WITH_EDITOR
void UWorldScapeNoiseClass::PostEditChangeProperty(struct FPropertyChangedEvent& e)
{
	Super::PostEditChangeProperty(e);
	bNeedPlanetRefresh = true;
}
#endif


UCustomNoiseParameter::UCustomNoiseParameter() {
	
}



double Water_Biome::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	return NoiseClass.FractalRidge(position, octave, lacunarity, persistence);
}
double Water_Biome::GetMask(CustomNoise NoiseClass, DVector position, int octave) {
	return NoiseClass.Fractal(position,octave);
}
double Mountain_Biome::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	return NoiseClass.Fractal(position,5) * 0.15 + 0.85 * NoiseClass.FractalRidge(position*0.15, octave, lacunarity, persistence);
}
double Mountain_Biome::GetMask(CustomNoise NoiseClass, DVector position) {
	return NoiseClass.Fractal(position,6);
}

double Hill_Biome::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	return NoiseClass.Fractal(position, octave, lacunarity, persistence);
}

//Crater Noise Generation for the moon
double CraterGeneration::CavityShape(double distance)
{
	return distance * distance;

}
double CraterGeneration::RimShape(double distance, double rimSteepness, int power)
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
double CraterGeneration::CraterShape(double distance, double rimSteepness, double Height, double smoothness, int rimPower)
{

	return NoiseMathUtils::SmoothMax(NoiseMathUtils::SmoothMin(CavityShape(distance * 2.5f), RimShape(distance, rimSteepness, rimPower), smoothness), Height, smoothness);
}
double CraterGeneration::GetCrater(CustomNoise NoiseClass, DVector position, UCustomNoiseParameter* NoiseParam, int SizeGeneration)
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
double CraterGeneration::GetCraterFractal(CustomNoise NoiseClass, DVector position, UCustomNoiseParameter* NoiseParam, int octave, double lacunarity, double persistence, bool Min)
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




FNoiseData UWorldScapeCustomNoise::GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise)
{

	double warp = NoiseClass.Noise_01(NoisePosition * NoiseParameters->Warp2Scale);
	DVector WarpedPosition = NoisePosition * NoiseParameters->WarpScale + FVector(warp, warp, warp) * NoiseParameters->WarpIntensity;
	
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

	
	if (FlatWorld){
		Data.Temperature = NoiseClass.Fractal(WarpedPosition * 0.028143, 6);
		Data.Humidity = NoiseClass.Fractal(WarpedPosition * 0.032537, 6);
	}
	else{
		float LattitudeRemapped = 1-abs(lattitude);
		
		//Humidity and temperature based on planet latitude, you can use these value for terrain generation (using them as mask for biome) 
		//and for texture (they are saved as Green (temperature) and Blue (Humidity) in the vertex Color of the terrain Mesh;
		Data.Temperature = pow(1-abs(asin(lattitude)/3.1415926535897932384626433832795)*2,2) + NoiseParameters->TemperatureOffset ;
		Data.Temperature *= 0.8f + 0.2f * NoiseClass.Fractal(WarpedPosition * 0.001443, 6);
		Data.Humidity = NoiseMathUtils::SmoothMax(-pow(LattitudeRemapped, 3) + 0.75, pow(LattitudeRemapped, 10), 0.2); //Temperature based on Planet Latitude;:
		Data.Humidity *= 0.2f +  NoiseClass.Fractal(WarpedPosition * 0.0009537 * NoiseParameters->HumidityScale, 4);

		Data.Humidity = NoiseMathUtils::Clamp(Data.Humidity, 0.f, 1) + NoiseParameters->HumidityOffset;
		
		if (UsePlanetary && !NoiseParameters->bIgnorePlanetaryHeightmap)
		{
			
			if (ActualData.Temperature>=0)
			{
				Data.Temperature = ActualData.Temperature + NoiseParameters->TemperatureOffset;
			}
				
			if (ActualData.Humidity>=0)
			{
				Data.Humidity = ActualData.Humidity + NoiseParameters->HumidityOffset;
			}
			LandMassNoise = ActualData.HeightNormalize;
		}
		
		
	}
	


	
	//Generating Mountain Mask and noise
	double MountainMask = NoiseMathUtils::Clamp01(pow(Mountain_Biome::GetMask(NoiseClass,WarpedPosition*NoiseParameters->MountainWeightScale) * NoiseParameters->MountainWeight,NoiseParameters->MountainWeightPower));
	if (UsePlanetary && !NoiseParameters->bIgnorePlanetaryHeightmap)
	{
		MountainMask = NoiseMathUtils::Clamp01(MountainMask + (ActualData.HeightNormalize- 0.25)/0.25 );
	}
	const double MountainNoise = pow(Mountain_Biome::GetNoise(NoiseClass,WarpedPosition*NoiseParameters->MountainScale,NoiseParameters->MountainOctave,NoiseParameters->MountainLacunarity,NoiseParameters->MountainPersistence) * NoiseParameters->MountainHeight,NoiseParameters->MountainHeightPower);

	//Generating Hill, which serve as a default Noise
	const double HillNoise = Hill_Biome::GetNoise(NoiseClass,WarpedPosition*NoiseParameters->HillScale,NoiseParameters->HillOctave,NoiseParameters->HillLacunarity,NoiseParameters->HillPersistence) * NoiseParameters->HillHeight;

	
	double OceanFloorMask;
	
	double BeachMaskValue = NoiseParameters->BeachMask;
	double BeachMaskOffset = NoiseParameters->BeachMaskOffset;
	double BeachMaskWeight = NoiseParameters->BeachMaskWeight;

	//Making the Noise of the ocean floor
	double OceanFloorNoise = NoiseParameters->OceanFloorBaseHeight +
		Water_Biome::GetNoise(NoiseClass,WarpedPosition*NoiseParameters->OceanFloorScale,NoiseParameters->OceanFloorOctave,NoiseParameters->OceanFloorLacunarity,NoiseParameters->OceanFloorPersistence) * NoiseParameters->OceanFloorHeight;
	;
	
	
	//Generating Ocean Floor Mask if there is no Planetary heightmap, otherwise, simply make it based on the heightmap;
	if (UsePlanetary && !NoiseParameters->bIgnorePlanetaryHeightmap)
	{
		//Needed to make sure the default value work both if you use an height map or no
		BeachMaskValue/= 5;
		BeachMaskOffset/=15;
		BeachMaskWeight/=2;
		OceanFloorMask =(1-NoiseMathUtils::Clamp01(pow(LandMassNoise*(1/NoiseParameters->OceanFloorWeight) * 50,NoiseParameters->OceanFloorWeightPower/800)));
		OceanFloorNoise*=0.3;
	}
	else
	{
		OceanFloorMask = NoiseMathUtils::Clamp01(pow(Water_Biome::GetMask(NoiseClass,WarpedPosition*NoiseParameters->OceanFloorWeightScale*0.001,NoiseParameters->OceanFloorWeightOctave) * NoiseParameters->OceanFloorWeight,NoiseParameters->OceanFloorWeightPower) - 0.05f);
	}

	//Making Mask and noise for beach
	const double BeachMask = NoiseMathUtils::Clamp01(exp(-pow(OceanFloorMask*BeachMaskValue - BeachMaskOffset ,2))*BeachMaskWeight);
	const double BeachNoise = pow(NoiseClass.FractalRidge(WarpedPosition * 1.5f*NoiseParameters->BeachScale, 6), 2)*NoiseParameters->BeachHeight;

	

	//Lerping together the differents noise made based on their mask (Mountain on Hill, Ocean on previous result, and beach on top)
	Data.HeightNormalize = NoiseMathUtils::Lerp(HillNoise,MountainNoise,MountainMask);
	Data.HeightNormalize = NoiseMathUtils::Lerp(Data.HeightNormalize,OceanFloorNoise,OceanFloorMask);
	Data.HeightNormalize = NoiseMathUtils::Lerp(Data.HeightNormalize,BeachNoise,BeachMask);
	

	Data.Temperature = NoiseMathUtils::Clamp(Data.Temperature - MountainMask * NoiseParameters->MountainTemperatureReduction, -1, Data.Temperature);
	//Reducing the temperature based on the altitude;
	Data.Temperature = NoiseMathUtils::Clamp(Data.Temperature - powf(NoiseMathUtils::Clamp01(Data.HeightNormalize - 0.01) * NoiseParameters->TemperatureHeightReduction, NoiseParameters->TemperatureHeightReductionPower), -1, Data.Temperature);

	//Random noise for foliage mask
	Data.FoliageMask = GeneralNoise * 0.5 + 0.5;


	return Data;
}
FNoiseData UWorldScapeCustomNoise::GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{
	double LandMassNoise;
	FNoiseData Data = FNoiseData();

	//Noise scale with the planet, to avoid issue if the position value is too high
	NoisePosition = (position / PlanetScale) * NoiseScale;

	switch (NoiseParameters->WorldType)
	{
	case EWorldGenerationType::Earth:
		Data = GetHeight(NoiseClass, position, PlanetPosition, NoiseScale, NoiseIntensity, PlanetScale, FlatWorld, lattitude, NoisePosition,ActualData,UsePlanetary, LandMassNoise);
		break;
	case EWorldGenerationType::Moon:
		Data.HeightNormalize = CraterGeneration::GetCraterFractal(NoiseClass, NoisePosition * 0.002f * NoiseParameters->CraterFrequency, NoiseParameters, NoiseParameters->CraterOctave, NoiseParameters->CraterLacunarity, NoiseParameters->CraterPersistence);
		Data.HeightNormalize *= 0.9f + 0.05f * Hill_Biome::GetNoise(NoiseClass, NoisePosition * 0.1f,4,2,0.5) + 0.05f * CraterGeneration::GetCraterFractal(NoiseClass, NoisePosition * 0.5f * NoiseParameters->CraterFrequency, NoiseParameters, NoiseParameters->CraterOctave, NoiseParameters->CraterLacunarity, NoiseParameters->CraterPersistence);;
		break;
	default:
		break;
	}

	Data.Height = Data.HeightNormalize * NoiseIntensity;

	return Data;

}
FNoiseData UWorldScapeCustomNoise::GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{


	//Noise scale with the planet, to avoid issue if the position value is too high
	NoisePosition = (position / PlanetScale) * NoiseScale;

	FNoiseData Data = FNoiseData();
	switch (NoiseParameters->WorldType)
	{
	case EWorldGenerationType::Earth:
		Data.HeightNormalize = 0;
		break;
	default:
		break;
	}


	Data.Height = Data.HeightNormalize * NoiseIntensity;

	return Data;

}


UWorldScapeCustomNoise::UWorldScapeCustomNoise() {
	NoiseParameters = CreateDefaultSubobject<UCustomNoiseParameter>(TEXT("Noise Parameters"));
}