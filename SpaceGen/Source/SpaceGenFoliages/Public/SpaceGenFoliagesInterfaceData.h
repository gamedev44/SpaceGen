// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "WorldScapeFoliagesContraint.h"
#include "WorldScapeFoliagesClusterUnit.h"
#include "WorldScapeFoliagesInterfaceData.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EWSFoliagesType : uint8
{
	//Replace the default noise data with the one from the heightmap
	FoliagesAsset 	UMETA(DisplayName = "Foliages Assets"),
	FoliagesBlueprint	UMETA(DisplayName = "Foliages Blueprint"),
	FoliagesCluster 	UMETA(DisplayName = "Foliages Cluster")
};


USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FWorldScapeFoliagesInterfaceData
{
	
	GENERATED_BODY()
public :
	EWSFoliagesType FoliagesType;
	TSubclassOf<AActor> ObjectToSpawn;
	UStaticMesh* StaticMesh;
	TArray<UMaterialInterface*> OverrideMaterial;
	TArray<FWorldScapeFoliagesClusterUnit> FoliagesClusterUnitList;
	float ClusterRadius = 500;

	bool bCastShadows = true;
	bool bReceiveDecal = false;
	int EndDrawDistance = 0;
	float MinScale = 0.8f;
	float MaxScale = 1.2f;
	bool bCollision = false;
	FVector Offset = FVector(0,0,0);
	double FoliageSectorSize = 2000;
	float FoliagesCount = 100.0f;
	bool bOverrideCollectionConstraint = false;
	FWorldScapeFoliagesContraint Elevation = FWorldScapeFoliagesContraint();
	FWorldScapeFoliagesContraintNormalized Temperature = FWorldScapeFoliagesContraintNormalized();
	FWorldScapeFoliagesContraintNormalized Humidity = FWorldScapeFoliagesContraintNormalized();
	FWorldScapeFoliagesContraintNormalized Slope = FWorldScapeFoliagesContraintNormalized();
	bool bAlignedToGround = true;
	bool bRandomRotation = false;
	float GroundRotationInfluenceMin = 0.35f;
	float GroundRotationInfluenceMax = 0.6f;
	bool bUseFoliageNoiseMask = false;
	bool bSpawnInWater = false;
	int FoliageLayer = -1;
	bool SpawnOnlyInVolume = false;
};
