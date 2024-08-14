// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"

#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "WorldScapeFoliagesInterfaceData.h"
#include "WorldScapeFoliagesCollectionData.generated.h"


USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FWorldScapeFoliagesCollectionData
{
	GENERATED_BODY()
public :	
	TArray<FWorldScapeFoliagesInterfaceData> FoliageList;
	
	float FoliagesCount = 100.0f;
	FWorldScapeFoliagesContraint Elevation = FWorldScapeFoliagesContraint(-100, 1000, 50000, 200000);
	FWorldScapeFoliagesContraintNormalized Temperature = FWorldScapeFoliagesContraintNormalized(0.35, 0.5, 0.85, 1);
	FWorldScapeFoliagesContraintNormalized Humidity = FWorldScapeFoliagesContraintNormalized(0.35, 0.5, 0.95, 1);
	FWorldScapeFoliagesContraintNormalized Slope = FWorldScapeFoliagesContraintNormalized(0, 0, 0.35, 0.5);


	bool bSpawnInWater = false;
	int FoliageLayer = -1;
	bool SpawnOnlyInVolume = false;
};

