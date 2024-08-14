// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WorldScapeNoiseClass.h"
#include "WarpedNoise.generated.h"

/**
 * 
 */

UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API UWarpedNoise : public UNoiseParameter
{
	GENERATED_BODY()
	
public:

	UWarpedNoise();


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureOffset = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureLandintensity = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureLandPower = 1.3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureWeight = -0.032;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureNoiseScale1 = 0.001;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureNoiseOffset = 0.588;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float PlanetaryHeight = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperatureOffset2 = -0.115;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Temperature")
		float TemperaturePolarSharpness = 2.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureNoiseScale = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureNoiseAffect = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float TemperatureMask = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float HumidityOffset = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float OverallLandHeight = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float HumidityScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpIntensity = 0.5f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpScale = 6.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float Warp2Scale = 12.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpScale2 = 3.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float Warp2Scale2 = 0.01;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float WarpIntensity2 = 900.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float continentalwarpIntensity = 2900.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float continentalwarpcale = 4.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float continentalwarp2Scale = 0.007;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		bool bIgnorePlanetaryHeightmap = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Foilage")
		float FoilageValue = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Foilage")
		float FoilagetypeMask = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|PlanetaryHeightmap")
		float PlanetaryMountainInfulnce = 0.25;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|PlanetaryHeightmap")
		float PlanetaryHillsInfulnce = 0.25;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|PlanetaryHeightmap")
		float PlanetaryHeightPower = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachMask = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachMaskOffset = 1.188;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachMaskWeight = 0.428;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachHeight = 0.001;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachScale = 0.2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Beach")
		float BeachHeight2 = -0.0005;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverVienScale = 0.028;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverHeightScale = -0.004382;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverSharpness = 59.275;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverBumpiness = 4.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverBumpinessIntensity = 0.4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2")
		float RiverBumpinessOffset = 1.071;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverWarp")
		float RiverWarpIntensity = 2.09f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverWarp")
		float Warp3Scape = 1.41;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverWarp")
		float RiverWarpScale = 0.7;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverBranches")
		float RiverBranchScale = 0.31;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River2|RiverBranches")
		float RiverBranchSharpness = 8.664;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverMask = 9;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverMaskOffset = 3.48;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverMaskWeight = 40;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverHeight = -0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverScale = 0.04;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverScale2 = 0.01;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverHeight2 = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverPow2 = 2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|River")
		float RiverPow3 = 2;

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
		float OceanFloorWeight = 2.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		int OceanFloorWeightOctave = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorWeightScale = 0.75;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Ocean")
		float OceanFloorWeightPower = 50;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainHeight = 1.05;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainHeightOffset = 0.1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		FVector MountainShift;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainHeightPower = 10.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainScale = 0.2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		int MountainOctave = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainLacunarity = 2.6;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainPersistence = 0.35;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWeight = 1.45;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWeightScale = 0.0025;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWeightPower = 12;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountWarpScale = 0.9;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountWarp2Scale = 0.9;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Mountain")
		float MountainWarpInsesnity = 1;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsHeight = 0.05;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsHeightOffset = 0.02;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsHeightPower = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsScale = 2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		int ExteameHillsOctave = 4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsLacunarity = 2.7;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsPersistence = 0.41;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsWeight = 1.7;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsWeightScale = 0.0025;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsWeightPower = 3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsWarpScale = 0.06;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsWarp2Scale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|ExteameHills")
		float ExteameHillsWarpInsesnity = 3;

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


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		float HillHeight2 = .1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		float HillScale2 = 0.8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		int HillOctave2 = 4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		float HillLacunarity2 = 2.3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		float HillPersistence2 = 0.6;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		float MaskScale = 3;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General|Hill2")
		float MaskScaleIntesnity = 0.6;

};


class Water_Biome12 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position, int octave);
};


class Mountain_Biome12 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position);
};

class Hill_Biome12 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
};

class ExteameHills_Biome12 : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
	static double GetMask(CustomNoise NoiseClass, DVector position);
};

UCLASS()
class WORLDSCAPENOISE_API UwarpedNoiseeExample : public UWorldScapeNoiseClass {

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UWarpedNoise* NoiseParameters;

	FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;
	FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;


	FNoiseData GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise);
	UwarpedNoiseeExample();
};
