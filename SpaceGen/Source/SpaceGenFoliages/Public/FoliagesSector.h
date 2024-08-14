// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "UObject/Class.h"
#include "DoublePrecisionUtils.h"
#include "NoiseData.h"
#include "Components/BoxComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "FoliagesSector.generated.h"




USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FVegetationTransformArray {

	GENERATED_BODY()

public:

	TArray<FTransform> VegetationTransform;
	TArray<DVector> VegetationPosition;
};

USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FFoliagesSector {

	GENERATED_BODY()

public:

	FFoliagesSector(DVector pPosition = DVector(0, 0, 0), double pSize = 0);

	DVector Position = DVector(0);
	double Size = 0;
	
	
	TArray<FVegetationTransformArray> VegetationTransformArray;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "General")
	TArray<UHierarchicalInstancedStaticMeshComponent*> HimcMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "General")
	TArray<AActor*> ActorsSpawned;
	
	FBox GetFBox(DVector Offset = DVector(0), double scale = 1);

	bool FoliageSpawned;
	bool operator==(const FFoliagesSector& sector) const;
	bool operator!=(const FFoliagesSector& sector) const;

};


