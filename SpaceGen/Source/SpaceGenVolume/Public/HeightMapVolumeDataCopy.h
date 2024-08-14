// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "DoublePrecisionUtils.h"
#include "NoiseMathUtils.h"
#include "HeightMapVolumeData.h"
#include "HeightMapVolumeDataCopy.generated.h"


USTRUCT(BlueprintType)
struct WORLDSCAPEVOLUME_API FHeightMapVolumeDataCopy {
	GENERATED_BODY()
public:
	float EdgeFalloff;
	FTransform VolumeLocation;
	UHeightMapVolumeData* HeightMapData;
	bool bOverrideHeight = true;
	bool bHeight = false;
	bool bTemperature = false;
	bool bHumidity = false;
	bool bHeightAlpha = false;
	bool bOceanHeight = false;
	bool bOceanHeightAlpha = false;
	float MapHeight = 10000;
	float Altitude = 0;
	float MaxHeight = 0;
	float MinHeight = 0;
	EHMSamplingMethod SamplingMethod = EHMSamplingMethod::Bilinear;

	float MaxTemperature = 0;
	float MinTemperature = 0;
	float MaxHumidity = 0;
	float MinHumidity = 0;
	float MaxOceanHeight = 0;
	float MinOceanHeight = 0;

	bool CanSample() ;

	bool CanSample(EWSHeightMask Mask);
	
	bool IsHeightDataValid() const;
	
	double GetData(FDVector2D UV, EWSHeightMask Mask) const;
};