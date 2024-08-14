// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "WorldScapeFoliagesContraint.generated.h"



USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FWorldScapeFoliagesContraint
{
	GENERATED_BODY()
public:

	// The minimum value the foliage will generate at
	UPROPERTY(EditAnywhere, Category = "Placement")
		float MinValue = 0.5f;
	// The minimum value the foliage will spawn at full density
	UPROPERTY(EditAnywhere, Category = "Placement")
		float MinIdealValue = 0.6f;
	// The minimum value the foliage will spawn at full density
	UPROPERTY(EditAnywhere, Category = "Placement")
		float MaxIdealValue = 0.9f;
	// The maximum value the foliage will generate at
	UPROPERTY(EditAnywhere, Category = "Placement")
		float MaxValue = 1;

	FWorldScapeFoliagesContraint(){};

	FWorldScapeFoliagesContraint(float min, float idealMin, float idealMax, float max) 
	{
		MinValue = min;
		MinIdealValue = idealMin;
		MaxIdealValue = idealMax;
		MaxValue = max;
	}

	FORCEINLINE bool equal(const FWorldScapeFoliagesContraint contraints) const
	{
		return MinValue == contraints.MinValue && MinIdealValue == contraints.MinIdealValue && MaxIdealValue == contraints.MaxIdealValue && MaxValue == contraints.MaxValue;
	}

	FORCEINLINE bool notEqual(const FWorldScapeFoliagesContraint contraints) const
	{
		return MinValue != contraints.MinValue || MinIdealValue != contraints.MinIdealValue || MaxIdealValue != contraints.MaxIdealValue || MaxValue != contraints.MaxValue;
	}
};


USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FWorldScapeFoliagesContraintNormalized
{
	GENERATED_BODY()
public:

	// The minimum value the foliage will generate at
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (UIMin = "0", UIMax = "1"))
		float MinValue = 0.5f;
	// The minimum value the foliage will spawn at full density
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (UIMin = "0", UIMax = "1"))
		float MinIdealValue = 0.6f;
	// The minimum value the foliage will spawn at full density
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (UIMin = "0", UIMax = "1"))
		float MaxIdealValue = 0.9f;
	// The maximum value the foliage will generate at
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (UIMin = "0", UIMax = "1"))
		float MaxValue = 1;

	FWorldScapeFoliagesContraintNormalized() {};

	FWorldScapeFoliagesContraintNormalized(float min, float idealMin, float idealMax, float max)
	{
		MinValue = min;
		MinIdealValue = idealMin;
		MaxIdealValue = idealMax;
		MaxValue = max;
	}

	FORCEINLINE bool equal(const FWorldScapeFoliagesContraintNormalized contraints) const
	{
		return MinValue == contraints.MinValue && MinIdealValue == contraints.MinIdealValue && MaxIdealValue == contraints.MaxIdealValue && MaxValue == contraints.MaxValue;
	}

	FORCEINLINE bool notEqual(const FWorldScapeFoliagesContraintNormalized contraints) const
	{
		return MinValue != contraints.MinValue || MinIdealValue != contraints.MinIdealValue || MaxIdealValue != contraints.MaxIdealValue || MaxValue != contraints.MaxValue;
	}
};

