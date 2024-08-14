// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "Stats/Stats.h"
#include "Math/RandomStream.h"
#include "CustomNoise.h"
#include "UObject/Object.h"
#include "Components/ActorComponent.h"
#include <string>
#include "NoiseData.h"
#include "WorldScapeNoiseClass.h"
#include "TinyPlanet.generated.h"

/**
 * 
 */
UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API UTinyPlanet : public UNoiseParameter
{
	GENERATED_BODY()

public:

	UTinyPlanet();

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
		bool bIgnorePlanetaryHeightmap = false;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverVienScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverHeightScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverSharpness = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverBumpiness = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverBumpinessOffset = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverWarp")
		float RiverWarpIntensity = 0.01f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverWarp")
		float Warp3Scape = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverWarp")
		float RiverWarpScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverBranches")
		float RiverBranchScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverBranches")
		float RiverBranchSharpness = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainHeight = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainHeightPower = 1.2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainScale = 0.15;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		int MountainOctave = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainLacunarity = 1.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainPersistence = 0.7;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWeight = 1.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWeightScale = 0.0025;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWeightPower = 10;

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

};


class Water_Biome2 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position, int octave);
};


class Mountain_Biome2 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position);
};

class Hill_Biome2 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
};

UCLASS()
class WORLDSCAPENOISE_API UTinyPlanetExample : public UWorldScapeNoiseClass {

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UTinyPlanet* NoiseParameters;

	FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;
	FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;


	FNoiseData GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise);
	UTinyPlanetExample();
};
