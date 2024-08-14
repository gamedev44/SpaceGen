// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "CustomNoise.h"
#include "NoiseMathUtils.h"
#include "DoublePrecisionUtils.h"
#include "NoiseData.h"
#include "WorldScapeNoiseClass.h"
#include "CubeNoise.generated.h"



UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API UCubeNoiseParameter: public UNoiseParameter
{
	GENERATED_BODY()

public:
	
	UCubeNoiseParameter();

	//You can add any parameters you need for your planet

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	float TemperatureOffset = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	float HumidityOffset = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	float HumidityScale = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float CubeWidth = 100.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float CubeHeight = 100.0;
	
};



class Cube_Hill_Biome : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position, int octave, float lacunarity, float persistence);
};




UCLASS()
class WORLDSCAPENOISE_API UCubeNoise : public UWorldScapeNoiseClass 
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UCubeNoiseParameter* NoiseParameters;


	double GetRiver(CustomNoise NoiseClass, DVector NoisePosition);
	double GetRiverWidth(CustomNoise NoiseClass, DVector NoisePosition);

	
	FNoiseData GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& , FNoiseData ActualData, bool UsePlanetary);

	FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;
	FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;


	UCubeNoise();
};

