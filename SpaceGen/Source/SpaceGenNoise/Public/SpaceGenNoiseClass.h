// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "Stats/Stats.h"
#include "Math/RandomStream.h"
#include "CustomNoise.h"
#include "UObject/Object.h"
#include "Components/ActorComponent.h"
#include <string>
#include "NoiseMathUtils.h"
#include "DoublePrecisionUtils.h"
#include "NoiseData.h"
#include "WorldScapeNoiseClass.generated.h"





//Defaults Classes
UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API UNoiseParameter : public UActorComponent
{
	GENERATED_BODY()
};

UCLASS(BlueprintType)
class WORLDSCAPENOISE_API UWorldScapeNoiseClass : public UObject
{
	GENERATED_BODY()

public:


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		bool bNeedPlanetRefresh;

	virtual FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
	{
		return FNoiseData();
	};
	virtual FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary)
	{
		return FNoiseData();
	};

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
#endif
};





UENUM(BlueprintType)
enum class EWorldGenerationType : uint8
{
	Earth 	UMETA(DisplayName = "Earth"),
	Moon	UMETA(DisplayName = "Moon")
};

UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API UCustomNoiseParameter : public UNoiseParameter
{
	GENERATED_BODY()

public:

	UCustomNoiseParameter();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		EWorldGenerationType WorldType = EWorldGenerationType::Earth;


	//You can add any parameters you need for your planet


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureOffset = 0;
	//How much height actualy reduce temperature
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureHeightReduction = 2;
	//the heightpower used to reduce temperature
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureHeightReductionPower = 1.2;


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
		bool bIgnorePlanetaryHeightmap = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachMask = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachMaskOffset = 3.75;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachMaskWeight = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachHeight = 0.001;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachScale = 1;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorHeight = 0.015;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorBaseHeight = -0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		int OceanFloorOctave = 5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorLacunarity = 2.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorPersistence = 0.4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorWeight = 2.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		int OceanFloorWeightOctave = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorWeightScale = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorWeightPower = 256.0;


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
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainTemperatureReduction = 0.35f;

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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterFrequency = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		int CraterOctave = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterLacunarity = 1.25f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterPersistence = 0.75f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterHeightMultiplier = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterSize = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterRimHeight = 15;
	//Number of crater Octave that possess crater rim
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterRimOctaveLimit = 3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		int CraterRimPower = 4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterWarp = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		float CraterWarpFrequency = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon", meta = (EditCondition = "WorldType = EWorldGenerationType::Moon", EditConditionHides))
		int CraterWarpOctave = 4;
};


//
class BiomeNoise
{
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, double LandMassNoise, double PlanetScale = 0, DVector PlanetPosition = DVector(0, 0, 0), int octave = 5);
	static double GetMask(CustomNoise NoiseClass, DVector position, double LandMassNoise, double PlanetScale = 0, DVector PlanetPosition = DVector(0, 0, 0), int octave = 5);
};

class Water_Biome : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position, int octave);
};


class Mountain_Biome : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position);
};

class Hill_Biome : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
};

class CraterGeneration
{
public:
	static double CavityShape(double distance);
	static double RimShape(double distance, double rimSteepness, int power);
	static double CraterShape(double distance, double rimSteepness, double floorHeight, double smoothness, int rimPower);

	static double GetCrater(CustomNoise NoiseClass, DVector position, UCustomNoiseParameter* NoiseParam, int SizeGeneration);
	static double GetCraterFractal(CustomNoise NoiseClass, DVector position, UCustomNoiseParameter* NoiseParam, int octave, double lacunarity, double persistence, bool Min = false);
};




UCLASS()
class WORLDSCAPENOISE_API UWorldScapeCustomNoise : public UWorldScapeNoiseClass
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UCustomNoiseParameter* NoiseParameters;

	FNoiseData GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector&, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise);

	FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;
	FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;


	UWorldScapeCustomNoise();
};

