// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "Components/BoxComponent.h"
#include "TerrainHoleVolumeData.generated.h"

USTRUCT(BlueprintType)
struct WORLDSCAPEVOLUME_API FTerrainHoleVolumeData {
	GENERATED_BODY()
public :
	float EdgeFalloff;
	FTransform VolumeLocation;
};
