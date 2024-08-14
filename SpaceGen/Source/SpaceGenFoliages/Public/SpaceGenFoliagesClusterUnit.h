// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInterface.h"
#include "WorldScapeFoliagesClusterUnit.generated.h"


USTRUCT(BlueprintType)
struct WORLDSCAPEFOLIAGES_API FWorldScapeFoliagesClusterUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Foliage|Mesh", meta = (DisplayThumbnail = "true"))
		UStaticMesh* StaticMesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Foliage|Mesh", meta = (DisplayThumbnail = "true"))
		TArray<UMaterialInterface*> OverrideMaterial;

	UPROPERTY(EditAnywhere, Category = "Foliage|Mesh")
		bool bCollision = false;

	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bCastShadows = true;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bReceiveDecal = false;
	
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bAffectDynamicIndirectLighting = true;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bAffectDistanceFieldLighting = true;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bCastFarShadow = true;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bNeverDistanceCull = false;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bCastDistanceFieldIndirectShadow = true;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering")
		bool bSelfShadowOnly = false;

	UPROPERTY(EditAnywhere, Category = "Foliage")
		FVector Offset = FVector(0, 0, 0);
	UPROPERTY(EditAnywhere, Category = "Foliage")
		float MinScale = 0.8f;
	UPROPERTY(EditAnywhere, Category = "Foliage")
		float MaxScale = 1.2f;

	// Distance multiplier at which the foliage is culled (based on the foliage sector size)
	UPROPERTY(EditAnywhere, Category = "Spacing")
		float FoliageCullDistanceMultiplier = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Foliage")
		bool bGenerateOnServer = true;

	//Min Number of this mesh in the cluster
	UPROPERTY(EditAnywhere, Category = "Clustering", meta = (EditCondition = "GrowInCluster == true"))
		int ClusterMin = 2;
	//Max Number of this mesh in the cluster
	UPROPERTY(EditAnywhere, Category = "Clustering", meta = (EditCondition = "GrowInCluster == true"))
		int ClusterMax = 4;
	//FoliagesConcentration
	UPROPERTY(EditAnywhere, Category = "Clustering", meta = (EditCondition = "GrowInCluster == true"))
		float FoliagesConcentration = 1;
	// The radius of clusters in world space units
	UPROPERTY(EditAnywhere, Category = "Clustering", meta = (EditCondition = "GrowInCluster == true"))
		float ClusterRadius = 500.0f;
	
	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bRandomRotation = false;
	// Set to true to allign the mesh to the ground
	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bAlignedToGround = true;

	//How much the mesh rotation is influenced by the ground
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bAllignedToGround == true"))
		float GroundRotationInfluenceMin = 0.35f;
	//How much the mesh rotation is influenced by the ground
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bAllignedToGround == true"))
		float GroundRotationInfluenceMax = 0.6f;



	FORCEINLINE bool notEqual(const FWorldScapeFoliagesClusterUnit other) const
	{
		return StaticMesh != other.StaticMesh
			|| OverrideMaterial != other.OverrideMaterial
			|| bCastShadows != other.bCastShadows
			|| bReceiveDecal != other.bReceiveDecal
			|| bCollision != other.bCollision
			|| Offset != other.Offset
			|| MinScale != other.MinScale
			|| MaxScale != other.MaxScale
			|| FoliageCullDistanceMultiplier != other.FoliageCullDistanceMultiplier
			|| ClusterMin != other.ClusterMin
			|| ClusterMax != other.ClusterMax
			|| ClusterRadius != other.ClusterRadius
			|| bRandomRotation != other.bRandomRotation
			|| bAlignedToGround != other.bAlignedToGround
			|| FoliagesConcentration != other.FoliagesConcentration
			|| GroundRotationInfluenceMin != other.GroundRotationInfluenceMin
			|| GroundRotationInfluenceMax != other.GroundRotationInfluenceMax;

	}

};