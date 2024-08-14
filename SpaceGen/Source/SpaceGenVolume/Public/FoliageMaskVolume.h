// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "Components/BoxComponent.h"
#include "VolumeInterface.h" 
#include "FoliageMaskVolumeData.h" 
#include "FoliageMaskVolume.generated.h"

UCLASS(hideCategories = (Code))
class WORLDSCAPEVOLUME_API AFoliageMaskVolume : public AVolumeInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFoliageMaskVolume();

	FFoliageMaskVolumeData GetFoliageMaskVolumeData();


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<int> FoliageLayerMask;

	//When true, the foliage in mask will be allowed to spawn in the foliage mask (option need to be toggled in the foliages properties)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		bool SpawnVolume = false;

	TArray<int> PREVIOUS_FoliageLayerMask;
	bool PREVIOUS_SpawnVolume = false;

	virtual void OnConstruction(const FTransform& Transform) override;
};