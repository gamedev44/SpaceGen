// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include <DoublePrecisionUtils.h>
#include <NoiseData.h>
#include <WorldScapeNoiseClass.h>
#include "Components/BoxComponent.h"
#include "NoiseVolumeData.generated.h"


USTRUCT(BlueprintType)
struct WORLDSCAPEVOLUME_API FNoiseVolumeData {
	GENERATED_BODY()
public:
	float EdgeFalloff;
	float NoiseScale;
	float NoiseIntensity;
	float NoiseHeightOffset;
	int Seed;
	CustomNoise CustomVolumeNoise;
	UWorldScapeNoiseClass* WorldScapeNoise;
	FVector NoiseOffset;
	FTransform VolumeLocation;

	bool IsValidNoise();
};