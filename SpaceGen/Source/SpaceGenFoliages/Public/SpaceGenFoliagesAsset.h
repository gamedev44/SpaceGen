// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInterface.h"
#include "WorldScapeFoliagesInterface.h"
#include "WorldScapeFoliagesAsset.generated.h"



UCLASS(ClassGroup = WorldScape, Category = "WorldScapeFoliage",editinlinenew, BlueprintType, Blueprintable)
class WORLDSCAPEFOLIAGES_API UWorldScapeFoliagesAsset : public UWorldScapeFoliagesInterface
{
	GENERATED_BODY()

#if WITH_EDITOR
		virtual void LoadedFromAnotherClass(const FName& OldClassName) override 
	{
		Elevation.MinValue = MinElevation;
		Elevation.MinIdealValue = MinElevation;
		Elevation.MaxValue = MaxElevation;
		Elevation.MaxIdealValue = MaxElevation;

		Temperature.MinValue = MinTemperature;
		Temperature.MinIdealValue = MinTemperature;
		Temperature.MaxValue = MaxTemperature;
		Temperature.MaxIdealValue = MaxTemperature;

		Humidity.MinValue = MinHumidity;
		Humidity.MinIdealValue = MinHumidity;
		Humidity.MaxValue = MaxHumidity;
		Humidity.MaxIdealValue = MaxHumidity;

		Slope.MinValue = MinSlope;
		Slope.MinIdealValue = MinSlope;
		Slope.MaxValue = MaxSlope;
		Slope.MaxIdealValue = MaxSlope;
	}
#endif

public:
	// The foliage's mesh
	UPROPERTY(EditAnywhere, Category = "Foliage", meta = (DisplayName = "Spawn Actor Instead (Obselete)"))
	bool bSpawnActorInstead = false;
	UPROPERTY(EditAnywhere, Category = "Foliage|Actor", meta = (DisplayName = "Object To Spawn",EditCondition = "bSpawnActorInstead == true", EditConditionHides))
	 TSubclassOf<AActor> ObjectToSpawn;
	//Should the actor be kept when it is out of generation position
	//UPROPERTY(EditAnywhere, Category = "Foliage|Actor", meta = (EditCondition = "bSpawnActorInstead == true"))
	//bool bKeepActorWhenFar = false;
	UPROPERTY(EditAnywhere, Category = "Foliage|Mesh", meta = (EditCondition = "bSpawnActorInstead == false", EditConditionHides))
		bool bCollision = false;
	
	UPROPERTY(EditAnywhere, Category = "Foliage|Mesh", meta = (DisplayThumbnail = "true",EditCondition = "bSpawnActorInstead == false", EditConditionHides))
		UStaticMesh* StaticMesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Foliage|Mesh", meta = (DisplayThumbnail = "true"))
		TArray<UMaterialInterface*> OverrideMaterial;

	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering", meta = (EditCondition = "bSpawnActorInstead == false", EditConditionHides))
		bool bCastShadows = true;
	UPROPERTY(EditAnywhere, Category = "Foliage|Rendering", meta = (EditCondition = "bSpawnActorInstead == false", EditConditionHides))
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
		FVector Offset = FVector(0,0,0);
	UPROPERTY(EditAnywhere, Category = "Foliage")
	float MinScale = 0.8f;
	UPROPERTY(EditAnywhere, Category = "Foliage")
	float MaxScale = 1.2f;
	

	

	

	// Distance multiplier at which the foliage is culled (based on the foliage sector size)
	UPROPERTY(EditAnywhere, Category = "Spacing")
		float FoliageCullDistanceMultiplier = 0.5f;

	
	

	

	

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
	

	//Legacy will be removed in a future update
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Elevation (Obsolete)", EditConditionHides))
		float MinElevation = -200000.0f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Elevation (Obsolete)", EditConditionHides))
		float MaxElevation = 200000.0f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Temperature (Obsolete)", EditConditionHides))
		float MinTemperature = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Temperature (Obsolete)", EditConditionHidesv))
		float MaxTemperature = 1.f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Humidity (Obsolete)", EditConditionHides))
		float MinHumidity = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Humidity (Obsolete)", EditConditionHides))
		float MaxHumidity = 1.f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Slope (Obsolete)", EditConditionHides))
		float MinSlope = 0.f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Slope (Obsolete)", EditConditionHides))
		float MaxSlope = 0.5f;
	
	
	

	virtual FWorldScapeFoliagesInterfaceData CreateData() const override;

	virtual bool IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const override;


};

inline FWorldScapeFoliagesInterfaceData UWorldScapeFoliagesAsset::CreateData() const
{
	FWorldScapeFoliagesInterfaceData DataToReturn = FWorldScapeFoliagesInterfaceData();

	DataToReturn.FoliagesType = EWSFoliagesType::FoliagesAsset;
	DataToReturn.bOverrideCollectionConstraint = bOverrideCollectionConstraint;
	DataToReturn.Elevation = Elevation;
	DataToReturn.Temperature = Temperature;
	DataToReturn.Humidity = Humidity;
	DataToReturn.Slope = Slope;
	DataToReturn.bSpawnInWater = bSpawnInWater;
	DataToReturn.FoliageLayer = FoliageLayer;
	DataToReturn.StaticMesh = StaticMesh;
	DataToReturn.OverrideMaterial = OverrideMaterial;
	DataToReturn.bCastShadows = bCastShadows;
	DataToReturn.bReceiveDecal = bReceiveDecal;
	DataToReturn.MinScale = MinScale;
	DataToReturn.MaxScale = MaxScale;
	DataToReturn.bCollision = bCollision;
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

inline bool UWorldScapeFoliagesAsset::IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const
{
	if (WorldScapeFoliage.FoliagesType != EWSFoliagesType::FoliagesAsset) return true;
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


	if (StaticMesh != WorldScapeFoliage.StaticMesh) return true;
	if (OverrideMaterial != WorldScapeFoliage.OverrideMaterial) return true;
	if (bCastShadows != WorldScapeFoliage.bCastShadows) return true;
	if (bReceiveDecal != WorldScapeFoliage.bReceiveDecal) return true;
	if (MinScale != WorldScapeFoliage.MinScale) return true;
	if (MaxScale != WorldScapeFoliage.MaxScale) return true;
	if (bCollision != WorldScapeFoliage.bCollision) return true;
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
