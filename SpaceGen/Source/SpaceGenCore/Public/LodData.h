// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Containers/Queue.h"
#include "Math/UnrealMathUtility.h"
#include "UObject/Class.h"
#include "DoublePrecisionUtils.h"
#include "NoiseData.h"
#include "WorldScapeMeshComponent.h"
#include "FoliagesSector.h"
#include "LodData.generated.h"

//USTRUCT()
struct LodData {

	//GENERATED_BODY()

public:
	LodData(TArray<FVector> pVertices, TArray<FLinearColor> pVertexColors, TArray<FVector> pNormals, TArray<FWorldScapeMeshTangent> pTangents, TArray<FVector2D> pUV);

	LodData();

	TArray<DVector> Vertices;
	TArray<FLinearColor> VertexColors;
	TArray<FVector> Normals;
	TArray<FWorldScapeMeshTangent> Tangents;
	TArray<FVector2D> UV;

	void CleanData();
};


USTRUCT(BlueprintType)
struct FQueueVegetation {

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "General")
		int FoliageIndex = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	int FoliageCollectionIndex = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	int FoliageListIndex = 0;
	TQueue<FFoliagesSector,EQueueMode::Spsc> ActiveFoliageSector;

	FQueueVegetation();

	FQueueVegetation(const FQueueVegetation&) {}
	FQueueVegetation& operator=(const FQueueVegetation&) { return *this; }
};


USTRUCT(BlueprintType)
struct FVegetation {

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		TArray <UMaterialInstanceDynamic*> MaterialInstances;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "General")
	float SectorSize = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "General")
	int FoliageIndex = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	int FoliageCollectionIndex = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	int FoliageListIndex = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
	bool IsActor = false; 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General")
		bool IsCluster = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "General")
	TArray<FFoliagesSector> ActiveFoliageSector;
	
};