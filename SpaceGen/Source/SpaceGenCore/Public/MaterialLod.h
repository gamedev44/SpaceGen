// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "UObject/Class.h"
#include "DoublePrecisionUtils.h"
#include "NoiseData.h"
#include "WorldScapeMeshComponent.h"
#include "Math/Range.h"
#include "Materials/MaterialInterface.h"
#include "Math/Interval.h"
#include "MaterialLod.generated.h"


/*
UCLASS()
class WORLDSCAPECORE_API UInt32Range
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Interval)
	int32 Min;

	UPROPERTY(EditAnywhere, Category = Interval)
	int32 Max;

	UFUNCTION(BlueprintCallable, Category = "Defaults")
	bool Contains(int32 value) 
	{
		return (value >= Min && value <= Max);
	}

};
*/


USTRUCT(BlueprintType)
struct FWSMaterialLod 
{

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AssetRegistrySearchable, Category = "Defaults")
		FInt32Range LodRange = FInt32Range();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		UMaterialInterface* Material = nullptr;
	bool operator!=(const FWSMaterialLod& FwsMaterialLod) const
	{
		if (Material != FwsMaterialLod.Material)
			return true;
		if (FwsMaterialLod.LodRange != LodRange)
			return true;
		return false;
	}
};


USTRUCT(BlueprintType)
struct FWSMaterialLodArray 
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
	TArray<FWSMaterialLod> MaterialsLod;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		UMaterialInterface* DefaultMaterial = nullptr;
	bool operator!=(const FWSMaterialLodArray& FwsMaterialLods) const
	{
		if (DefaultMaterial != FwsMaterialLods.DefaultMaterial) return true;

		if (MaterialsLod.Num() != FwsMaterialLods.MaterialsLod.Num())
			return true;

		for (int i = 0; i < MaterialsLod.Num(); i++)
		{
			if (MaterialsLod[i] != FwsMaterialLods.MaterialsLod[i])
			{
				return true;
			}
				
		}

		return false;
	}
};