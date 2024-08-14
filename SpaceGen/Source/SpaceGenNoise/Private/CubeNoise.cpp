// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "CubeNoise.h" 






UCubeNoiseParameter::UCubeNoiseParameter()
{
}

double Cube_Hill_Biome::GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence) {
	
	double hill = NoiseClass.Fractal(position, octave, lacunarity, persistence);
	double Mountain = powf(NoiseClass.FractalRidge(position * 0.08f, octave, lacunarity-0.25,persistence), 4.5) * 1.35f;
	return NoiseMathUtils::SmoothMax(hill, Mountain, 0.05) * 0.075f + 0.01f;
}






FNoiseData UCubeNoise::GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{

	double LandMassNoise = 0;

	double GeneralNoise = NoiseClass.Noise_01(NoisePosition * 0.005f);




	/*
	**	FNoiseData, is a struct to register every data you want from the noise generation, you can edit them as you wish and use the param here, 
	* 
	**	the only parametter the PlanetRoot is using are : 
	**	HeightNormalize		- Height value in a range of 0 to 1, used to register the height value in the Red Vertex Color.
	**	Height;				- Height value in Unreal Unit, allow to get the real height of the ground.
	**	Temperature;		- Temperature from a range of 0 to 1.
	**	Humidity;			- Humidity from a range of 0 to 1.
	**	FoliageMask			- Used for foliage density (not used right now but will be is near future).
	*/
	
	FNoiseData Data = FNoiseData();



	Data.HeightNormalize = Cube_Hill_Biome::GetNoise(NoiseClass,NoisePosition,8,2,0.5);

	return Data;
}


double UCubeNoise::GetRiver(CustomNoise NoiseClass, DVector NoisePosition)
{
	return (1 - abs(NoiseClass.Fractal(NoisePosition * 0.0465743f, 4) * 2 - 1));
	return NoiseMathUtils::Max((1 - abs(NoiseClass.Fractal(NoisePosition * 0.0465743f, 4) * 2 - 1)), (1 - abs(NoiseClass.Fractal(NoisePosition * 0.086743f, 4) * 2 - 1)));

}

double UCubeNoise::GetRiverWidth(CustomNoise NoiseClass, DVector NoisePosition)
{
	return NoiseMathUtils::Lerp(0.5, 1.5, NoiseClass.Noise_01(NoisePosition * 0.005));
}





FNoiseData UCubeNoise::GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{
	FNoiseData Data = FNoiseData();

	DVector CubedPosition = position;

	const double CubeWidth = NoiseParameters->CubeWidth;
	
	CubedPosition.X = FMath::GridSnap(CubedPosition.X,CubeWidth);
	CubedPosition.Y = FMath::GridSnap(CubedPosition.Y,CubeWidth);
	CubedPosition.Z = FMath::GridSnap(CubedPosition.Z,CubeWidth);
	
	
	NoisePosition = (CubedPosition / PlanetScale) * NoiseScale;

	Data = GetHeight(NoiseClass, position, PlanetPosition, NoiseScale, NoiseIntensity, PlanetScale, FlatWorld, lattitude, NoisePosition,ActualData,UsePlanetary);

	Data.Height = FMath::GridSnap(Data.HeightNormalize*NoiseIntensity,static_cast<double>(NoiseParameters->CubeHeight));
	Data.HeightNormalize = Data.Height/Data.HeightNormalize;
	
	return Data;

}
FNoiseData UCubeNoise::GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
{

	DVector CubedPosition = position;

	//Noise scale with the planet, to avoid issue if the position value is too high
	const double CubeWidth = NoiseParameters->CubeWidth;
	
	CubedPosition.X = FMath::GridSnap(CubedPosition.X,CubeWidth);
	CubedPosition.Y = FMath::GridSnap(CubedPosition.Y,CubeWidth);
	CubedPosition.Z = FMath::GridSnap(CubedPosition.Z,CubeWidth);
	
	
	NoisePosition = (CubedPosition / PlanetScale) * NoiseScale;

	FNoiseData Data = FNoiseData();
	
	
	
	return Data;

}


UCubeNoise::UCubeNoise()
{
	NoiseParameters = CreateDefaultSubobject<UCubeNoiseParameter>(TEXT("Noise Parameters"));
}