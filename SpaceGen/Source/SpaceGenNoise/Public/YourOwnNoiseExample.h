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
#include "NoiseData.h"
#include "WorldScapeNoiseClass.h"
#include "YourOwnNoiseExample.generated.h"

UCLASS(hideCategories = (Code))
class WORLDSCAPENOISE_API UYourNoiseParameter : public UNoiseParameter
{

	GENERATED_BODY()

public:

	UYourNoiseParameter();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		float ExampleParameter;

};


class AnotherExampleBiome : BiomeNoise {
public:
	static double GetNoise(CustomNoise NoiseClass, DVector position);
};

UCLASS()
class WORLDSCAPENOISE_API UYourOwnNoiseExample : public UWorldScapeNoiseClass {

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		UYourNoiseParameter* NoiseParameters;

	FNoiseData GetNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;
	FNoiseData GetOceanNoise(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary) override;


	FNoiseData GetHeight(CustomNoise NoiseClass, DVector position, DVector PlanetPosition, double NoiseScale, double NoiseIntensity, double PlanetScale, bool FlatWorld, double lattitude, DVector& NoisePosition, FNoiseData ActualData, bool UsePlanetary, double& LandMassNoise);
	UYourOwnNoiseExample();
};

