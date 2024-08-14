// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WorldScapeNoiseClass.h"
#include "Selenae.generated.h"

/**
 * 
 */
UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API USelenae : public UNoiseParameter
{
	GENERATED_BODY()
public:

	USelenae();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureOffset = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float HumidityOffset = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float HumidityScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpIntensity = 0.01f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpScale = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float Warp2Scale = 100;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpScale2 = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float Warp2Scale2 = 100;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpIntensity2 = 0.01f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float CraterSurfaceApperanceInfluence = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		bool bIgnorePlanetaryHeightmap = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|surfaceFeature")
		float surfaceFeature = 0.4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill")
		float HillHeight = .1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill")
		float HillScale = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill")
		int HillOctave = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill")
		float HillLacunarity = 2.3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill")
		float HillPersistence = 0.4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Deformations")
		float SurfaceDeformationHeight = .1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Deformations")
		float SurfaceDeformationScale = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Deformations")
		int SurfaceDeformationOcative = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Deformations")
		float  SurfaceDeformationLacunarity = 2.3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Deformations")
		float  SurfaceDeformationPersistence = 0.4;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ridge")
		float RidgeHeight = .1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ridge")
		float RidgeScale = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ridge")
		float RidgeShaprness = 2.3;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterFrequency = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		int CraterOctave = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterLacunarity = 1.25f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterPersistence = 0.75f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterHeightMultiplier = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterSize = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterRimHeight = 15;
	//Number of crater Octave that possess crater rim
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterRimOctaveLimit = 3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		int CraterRimPower = 4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterWarp = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		float CraterWarpFrequency = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		int CraterWarpOctave = 4;
};

class Hill_BiomeSelena : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
};

class CraterGen
{
public:
	static double CavityShape(double distance);
	static double RimShape(double distance, double rimSteepness, int power);
	static double CraterShape(double distance, double rimSteepness, double floorHeight, double smoothness, int rimPower);


	//TODO : Replace NoiseParameter by a struct to gain flexibility
	static double GetCrater(CustomNoise NoiseClass, DVector position, USelenae* NoiseParam, int SizeGeneration);
	static double GetCraterFractal(CustomNoise NoiseClass, DVector position, USelenae* NoiseParam, int octave, double lacunarity, double persistence, bool Min = false);
};



UCLASS()
class WORLDSCAPENOISE_API USelenaeNoise : public UWorldScapeNoiseClass
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		USelenae* NoiseParameters;

	FNoiseData GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector&, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise);

	FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;
	FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;


	USelenaeNoise();
};
