// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "WorldScapeFoliagesInterface.h"
#include "WorldScapeFoliagesClusterUnit.h"
#include "WorldScapeFoliagesCluster.generated.h"


UCLASS(ClassGroup = WorldScape, Category = "WorldScapeFoliage", editinlinenew, BlueprintType, Blueprintable)
class WORLDSCAPEFOLIAGES_API UWorldScapeFoliagesCluster : public UWorldScapeFoliagesInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Foliage|Cluster", meta = (DisplayThumbnail = "true"))
	TArray<FWorldScapeFoliagesClusterUnit> FoliagesClusterUnitList;

	//How much the mesh rotation is influenced by the ground
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bAllignedToGround == true"))
		bool ConstraintAffectFoliages = true;

	virtual FWorldScapeFoliagesInterfaceData CreateData() const override;

	virtual bool IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const override;
};


inline FWorldScapeFoliagesInterfaceData UWorldScapeFoliagesCluster::CreateData() const
{
	FWorldScapeFoliagesInterfaceData DataToReturn = FWorldScapeFoliagesInterfaceData();
	DataToReturn.FoliagesType = EWSFoliagesType::FoliagesCluster;
	DataToReturn.FoliagesClusterUnitList = FoliagesClusterUnitList;
	DataToReturn.bOverrideCollectionConstraint = bOverrideCollectionConstraint;
	DataToReturn.Elevation = Elevation;
	DataToReturn.Temperature = Temperature;
	DataToReturn.Humidity = Humidity;
	DataToReturn.Slope = Slope;
	DataToReturn.bSpawnInWater = bSpawnInWater;
	DataToReturn.FoliageLayer = FoliageLayer;
	DataToReturn.FoliageSectorSize = FoliageSectorSize;
	DataToReturn.FoliagesCount = FoliagesCount;
	DataToReturn.bUseFoliageNoiseMask = bUseFoliageNoiseMask;
	DataToReturn.SpawnOnlyInVolume = SpawnOnlyInVolume;

	return DataToReturn;
}

inline bool UWorldScapeFoliagesCluster::IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const
{
	if (WorldScapeFoliage.FoliagesType != EWSFoliagesType::FoliagesCluster) return true;
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

	if (FoliagesClusterUnitList.Num() != WorldScapeFoliage.FoliagesClusterUnitList.Num()) return true;
	for (int i = 0; i < FoliagesClusterUnitList.Num(); i++) 
	{
		if (FoliagesClusterUnitList[i].notEqual(WorldScapeFoliage.FoliagesClusterUnitList[i])) return true;
	}
	


	if (FoliageSectorSize != WorldScapeFoliage.FoliageSectorSize) return true;
	if (FoliagesCount != WorldScapeFoliage.FoliagesCount) return true;


	if (bUseFoliageNoiseMask != WorldScapeFoliage.bUseFoliageNoiseMask) return true;
	if (SpawnOnlyInVolume != WorldScapeFoliage.SpawnOnlyInVolume) return true;

	return false;
}