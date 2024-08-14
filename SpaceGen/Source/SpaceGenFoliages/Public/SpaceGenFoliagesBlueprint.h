// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "WorldScapeFoliagesInterface.h"
#include "WorldScapeFoliagesBlueprint.generated.h"



UCLASS(ClassGroup = WorldScape, Category = "WorldScapeFoliage",editinlinenew, BlueprintType, Blueprintable)
class WORLDSCAPEFOLIAGES_API UWorldScapeFoliagesBlueprint : public UWorldScapeFoliagesInterface
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, Category = "Foliage|Actor", meta = (DisplayName = "Object To Spawn"))
	 TSubclassOf<AActor> ObjectToSpawn;
	//Should the actor be kept when it is out of generation position
	//UPROPERTY(EditAnywhere, Category = "Foliage|Actor", meta = (EditCondition = "bSpawnActorInstead == true"))
	//bool bKeepActorWhenFar = false;

	UPROPERTY(EditAnywhere, Category = "Foliage")
		FVector Offset = FVector(0,0,0);
	UPROPERTY(EditAnywhere, Category = "Foliage")
	float MinScale = 0.8f;
	UPROPERTY(EditAnywhere, Category = "Foliage")
	float MaxScale = 1.2f;


	// Set to true to allign the mesh to the ground
	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bAlignedToGround = true;
	// Set to true to rotate the mesh randomly
	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bRandomRotation = false;
	//How much the mesh rotation is influenced by the ground
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bAllignedToGround == true", EditConditionHides))
		float GroundRotationInfluenceMin = 0.35f;
	//How much the mesh rotation is influenced by the ground
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bAllignedToGround == true", EditConditionHides))
		float GroundRotationInfluenceMax = 0.6f;

	virtual FWorldScapeFoliagesInterfaceData CreateData() const override;

	virtual bool IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const override;


};

inline FWorldScapeFoliagesInterfaceData UWorldScapeFoliagesBlueprint::CreateData() const
{
	FWorldScapeFoliagesInterfaceData DataToReturn = FWorldScapeFoliagesInterfaceData();

	DataToReturn.FoliagesType = EWSFoliagesType::FoliagesBlueprint;
	DataToReturn.ObjectToSpawn = ObjectToSpawn;
	DataToReturn.bOverrideCollectionConstraint = bOverrideCollectionConstraint;
	DataToReturn.Elevation = Elevation;
	DataToReturn.Temperature = Temperature;
	DataToReturn.Humidity = Humidity;
	DataToReturn.Slope = Slope;
	DataToReturn.bSpawnInWater = bSpawnInWater;
	DataToReturn.FoliageLayer = FoliageLayer;
	DataToReturn.MinScale = MinScale;
	DataToReturn.MaxScale = MaxScale;
	DataToReturn.Offset = Offset;
	DataToReturn.FoliageSectorSize = FoliageSectorSize;
	DataToReturn.FoliagesCount = FoliagesCount;
	DataToReturn.bAlignedToGround = bAlignedToGround;
	DataToReturn.bRandomRotation = bRandomRotation;
	DataToReturn.GroundRotationInfluenceMin = GroundRotationInfluenceMin;
	DataToReturn.GroundRotationInfluenceMax = GroundRotationInfluenceMax;
	DataToReturn.bUseFoliageNoiseMask = bUseFoliageNoiseMask;

	return DataToReturn;
}

inline bool UWorldScapeFoliagesBlueprint::IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const
{
	if (WorldScapeFoliage.FoliagesType != EWSFoliagesType::FoliagesBlueprint) return true;
	if (bOverrideCollectionConstraint != WorldScapeFoliage.bOverrideCollectionConstraint) return true;
	if (bOverrideCollectionConstraint)
	{
		if (Elevation.notEqual(WorldScapeFoliage.Elevation)) return true;
		if (Temperature.notEqual(WorldScapeFoliage.Temperature)) return true;
		if (Humidity.notEqual(WorldScapeFoliage.Humidity)) return true;
		if (Slope.notEqual(WorldScapeFoliage.Slope)) return true;
		if (bSpawnInWater != WorldScapeFoliage.bSpawnInWater) return true;
		if (FoliageLayer != WorldScapeFoliage.FoliageLayer) return true;
	}


	if (ObjectToSpawn != WorldScapeFoliage.ObjectToSpawn) return true;
	if (MinScale != WorldScapeFoliage.MinScale) return true;
	if (MaxScale != WorldScapeFoliage.MaxScale) return true;
	if (Offset != WorldScapeFoliage.Offset) return true;

	if (FoliageSectorSize != WorldScapeFoliage.FoliageSectorSize) return true;
	if (FoliagesCount != WorldScapeFoliage.FoliagesCount) return true;


	if (bAlignedToGround != WorldScapeFoliage.bAlignedToGround) return true;
	if (bRandomRotation != WorldScapeFoliage.bRandomRotation) return true;
	if (GroundRotationInfluenceMin != WorldScapeFoliage.GroundRotationInfluenceMin) return true;
	if (GroundRotationInfluenceMax != WorldScapeFoliage.GroundRotationInfluenceMax) return true;
	if (bUseFoliageNoiseMask != WorldScapeFoliage.bUseFoliageNoiseMask) return true;

	return false;
}
