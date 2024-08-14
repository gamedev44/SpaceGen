// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include <DoublePrecisionUtils.h>
#include <NoiseData.h>
#include <WorldScapeNoiseClass.h>
#include "Components/BoxComponent.h"
#include "VolumeInterface.h" 
#include "NoiseVolumeData.h" 
#include "NoiseVolume.generated.h"

UCLASS(hideCategories = (Code))
class WORLDSCAPEVOLUME_API ANoiseVolume : public AVolumeInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANoiseVolume();
	FNoiseVolumeData GetNoiseVolumeData();
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		float EdgeFalloff;
	float PREVIOUS_EdgeFalloff;
	//Noise Properties
	//The Scale of the noise, Higger value = wide details
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		float NoiseScale;
	float PREVIOUS_NoiseScale;
	//Intensity of the noise in cm, Higger value = Higger montains
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		float NoiseIntensity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		float NoiseHeightOffset;

	float PREVIOUS_NoiseIntensity;
	
	
	//Seed value
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		int Seed;
	int PREVIOUS_Seed;

	CustomNoise CustomVolumeNoise; //Used for Seed

	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		FRotator LattitudeRotation;
		*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		FVector NoiseOffset;
	FVector PREVIOUS_NoiseOffset;
	//Custom Noise Subclass
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
		UWorldScapeNoiseClass* WorldScapeNoise;
	UWorldScapeNoiseClass* PREVIOUS_WorldScapeNoise;

	virtual void OnConstruction(const FTransform& Transform) override;
	
	bool IsValidNoise();
};