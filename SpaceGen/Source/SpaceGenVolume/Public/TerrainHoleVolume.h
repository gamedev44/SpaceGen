// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "Components/BoxComponent.h"
#include "VolumeInterface.h" 
#include "TerrainHoleVolumeData.h" 
#include "TerrainHoleVolume.generated.h"

UCLASS(hideCategories = (Code))
class WORLDSCAPEVOLUME_API ATerrainHoleVolume : public AVolumeInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATerrainHoleVolume();

	FTerrainHoleVolumeData GetTerrainHoleVolumeData();

	virtual void OnConstruction(const FTransform& Transform) override;
};