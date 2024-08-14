// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/CoreDelegates.h"
#include "UObject/Object.h"
#include "UObject/UObjectBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include <algorithm>
#include <map>
#include "WorldScapeMeshComponent.h"
#include <DoublePrecisionUtils.h>
#include <StopWatch.h>
#include <NoiseData.h>
#include <WorldScapeNoiseClass.h>
#include "NoiseVolume.h"
#include "HeightMapVolume.h"
#include "FoliageMaskVolume.h"
#include "TerrainHoleVolume.h"
#include "NoiseVolumeData.h"
#include "HeightMapVolumeDataCopy.h"
#include "FoliageMaskVolumeData.h"
#include "WorldScapeHelper.h"
#include "NoiseMathUtils.h"
#include "WorldScapeLod.h"
#include "LodData.h"
#include "WorldScapeFoliagesAsset.h"
#include "WorldScapeFoliagesBlueprint.h"
#include "WorldScapeFoliagesCluster.h"
#include "WorldScapeFoliagesClusterUnit.h"
#include "FoliagesSector.h"
#include "WorldScapeFoliagesCollection.h"
#include "MaterialLod.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "WorldScapeWorldType.h"
#include <iostream>
#if WITH_EDITOR
#include <PCUtils.h>
#endif

#include "WorldScapeRoot.generated.h"


UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EWorldScapeType : uint8
{
	Flat 	UMETA(DisplayName = "Flat World"),
	Planet 	UMETA(DisplayName = "Planet")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EPlanetaryHeightMapBlendType : uint8
{
	//Replace the default noise data with the one from the heightmap
	Replace 	UMETA(DisplayName = "Normal"),
	Addition	UMETA(DisplayName = "Additional"),
    Subtract 	UMETA(DisplayName = "Subtract")
};

static void ProcessVertices(LodData& Data, int32 MinY, int32 MinX, int32 MaxY, int32 MaxX, DVector Tangent, DVector BiTangent, double StepSize, double HalfSize, double uvSpacing,
	FVector2D SubPosition, int32 MinBorderY, int32 MinBorderX, int32 MaxBorderY, int32 MaxBorderX, double OffsetX, double OffsetY, bool InvertOrder, double PlanetScaleCode,
	DVector PPos, bool FlatWorld, FVector2D pWorldSizeLimit = FVector2D(1000000, 1000000), bool pLimitWorldSize = false, bool DealSewing = true)
{
	DVector X, Y;
	DVector PositionNormal;
	bool doSewing = false;



	if (InvertOrder)
	{
		for (int32 y = MinY; y < MaxY; y++)
		{
			for (int32 x = MaxX - 1; x >= MinX; x--)
			{

				if (DealSewing)
				{

					doSewing = (bool)(y % 2);
					if (SubPosition.Y > 0.5) doSewing = !doSewing;

					if (x == MinBorderX && doSewing)
					{
						Y = BiTangent * ((y + 1) * StepSize - HalfSize + OffsetY);
					}
					else if (x == MaxBorderX && doSewing)
					{
						Y = BiTangent * ((y - 1) * StepSize - HalfSize + OffsetY);
					}
					else
					{
						Y = BiTangent * (y * StepSize - HalfSize + OffsetY);
					}

					doSewing = (bool)(x % 2);
					if (SubPosition.X > 0.5) doSewing = !doSewing;

					if (y == MinBorderY && doSewing)
					{
						X = Tangent * ((x + 1) * StepSize - HalfSize + OffsetX);
					}
					else if (y == MaxBorderY && doSewing)
					{
						X = Tangent * ((x - 1) * StepSize - HalfSize + OffsetX);
					}
					else
					{
						X = Tangent * (x * StepSize - HalfSize + OffsetX);
					}
				}
				else
				{
					Y = BiTangent * (y * StepSize - HalfSize + OffsetY);
					X = Tangent * (x * StepSize - HalfSize + OffsetX);
				}

				if (FlatWorld)
				{
					if (pLimitWorldSize)
					{
						if (abs(X.X) > pWorldSizeLimit.X) X = (pWorldSizeLimit.X * FMath::Sign(X.X));
						if (abs(Y.Y) > pWorldSizeLimit.Y) Y = pWorldSizeLimit.Y * FMath::Sign(Y.Y);
					}

					Data.Vertices.Add(DVector(X + Y).ToFVector());
				}
				else
				{
					PositionNormal = DVector(X + Y); // Plane Position
					PositionNormal = PositionNormal + PPos; // ECEF position
					PositionNormal.Normalize();
					Data.Vertices.Add(((PositionNormal * PlanetScaleCode) - PPos).ToFVector());
				}

				Data.Normals.Add(FVector(0.0f, 0.0f, 1.0f));
				Data.UV.Add(FVector2D((x + (int32)SubPosition.X) * uvSpacing, (y + (int32)SubPosition.Y) * uvSpacing));
				Data.Tangents.Add(FWorldScapeMeshTangent(Tangent.X, Tangent.Y, Tangent.Z));
			}
		}
	}
	else
	{
		for (int32 y = MinY; y < MaxY; y++)
		{
			for (int32 x = MinX; x < MaxX; x++)
			{
				if (DealSewing) {

					doSewing = (bool)(y % 2);
					if (SubPosition.Y > 0.5) doSewing = !doSewing;

					if (x == MinBorderX && doSewing)
					{
						Y = BiTangent * ((y + 1) * StepSize - HalfSize + OffsetY);
					}
					else if (x == MaxBorderX && doSewing)
					{
						Y = BiTangent * ((y - 1) * StepSize - HalfSize + OffsetY);
					}
					else
					{
						Y = BiTangent * (y * StepSize - HalfSize + OffsetY);
					}

					doSewing = (bool)(x % 2);
					if (SubPosition.X > 0.5) doSewing = !doSewing;

					if (y == MinBorderY && doSewing)
					{
						X = Tangent * ((x + 1) * StepSize - HalfSize + OffsetX);
					}
					else if (y == MaxBorderY && doSewing)
					{
						X = Tangent * ((x - 1) * StepSize - HalfSize + OffsetX);
					}
					else
					{
						X = Tangent * (x * StepSize - HalfSize + OffsetX);
					}
				}
				else
				{
					Y = BiTangent * (y * StepSize - HalfSize + OffsetY);
					X = Tangent * (x * StepSize - HalfSize + OffsetX);
				}

				if (FlatWorld)
				{
					if (pLimitWorldSize)
					{
						if (abs(X.X + PPos.X) > pWorldSizeLimit.X) X.X = pWorldSizeLimit.X * FMath::Sign(X.X) - PPos.X;
						if (abs(Y.Y + PPos.Y) > pWorldSizeLimit.Y) Y.Y = pWorldSizeLimit.Y * FMath::Sign(Y.Y) - PPos.Y;
					}

					Data.Vertices.Add(DVector(X + Y).ToFVector());
				}
				else
				{
					PositionNormal = DVector(X + Y); // Plane Position
					PositionNormal = PositionNormal + PPos; // ECEF position
					PositionNormal.Normalize();
					Data.Vertices.Add(((PositionNormal * PlanetScaleCode) - PPos).ToFVector());
				}

				Data.Normals.Add(FVector(0.0f, 0.0f, 1.0f));
				Data.UV.Add(FVector2D((x + (int32)SubPosition.X) * uvSpacing, (y + (int32)SubPosition.Y) * uvSpacing));
				Data.Tangents.Add(FWorldScapeMeshTangent(Tangent.X, Tangent.Y, Tangent.Z));
			}
		}
	}

}


//Forward Declaration

class LodGenerationThread;
class FoliageGenerationThread;


//DECLARE_LOG_CATEGORY_EXTERN(LogWorldScapeCore, Log, All);

UCLASS(hideCategories = ( Code,Debug,MeshInfo,Rebase))
//UCLASS(hideCategories = (MeshInfo, Rebase))
class WORLDSCAPECORE_API AWorldScapeRoot : public AActor
{
	GENERATED_BODY()

public:
	AWorldScapeRoot();

	void InitializeValues();
	
	virtual void Tick(float DeltaTime) override;
	void CleanFoliage();
	void UpdateFoliageData();
	/** Allows Tick To happen in the editor viewport*/
	virtual bool ShouldTickIfViewportsOnly() const override;

	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;
	virtual void PostLoad() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void ClearCrossLevelReferences() override;



	//void UpdateWorldOrigin(FIntVector NewPosition);


		//Number of tick per seconds
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor")
		float TickPerSecond;



	//Default Properties : 

	//WorldScape Generation Type
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	EWorldScapeType GenerationType;
	bool bFlatWorld = false;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		TArray<UMaterialInstanceDynamic*> MaterialTerrainInstances;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		TArray<UMaterialInstanceDynamic*> MaterialOceanInstances;
	

	//Start or stop planet generation, when disabled, the planet is destroyed
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (DisplayName = "Generate"))
	bool bGenerateWorldScape;
	//Freeze the Planet Generation without destroying the planet
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (DisplayName = "Freeze Generation"))
	bool bFreezeGeneration;
	//Generate The Ocean (and river/pond if noise is set for)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (DisplayName = "Generate Ocean"))
	bool bOcean;
	//Radius of the planet in Cm (UE4 units)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Scale", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet", EditConditionHides))
	float PlanetScale = 637817792;
	// Would like to add World Size limit in future
	//Limit flatworld size
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Scale", meta = (EditCondition = "GenerationType == EWorldScapeType::Flat", DisplayName = "Limit FlatWorld (Experimental)", EditConditionHides))
		bool bLimitFlatWorldSize;
	//Size of the flatworld
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Scale", meta = (EditCondition = "bLimitFlatWorldSize == true", DisplayName = "FlatWorld Size", EditConditionHides))
		FVector2D FlatWorldLimit = FVector2D(1000000, 1000000);
	

	bool bIsInPlay = false;

	double PlanetScaleCode = 637817792;
	
	FVector LastGenerationNormal;

	

	

	float GridAngle = 5;



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Material")
	FWSMaterialLodArray TerrainMaterial;
	FWSMaterialLodArray Prev_TerrainMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Material", meta = (EditCondition = "bOcean == true", EditConditionHides))
	FWSMaterialLodArray OceanMaterial;
	FWSMaterialLodArray Prev_OceanMaterial;


	//Project the editor position to where the camera look
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (DisplayName = "Projected Position (Experimental)"))
	bool bProjectPosition;

	//Foliages List
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (DisplayName = "Foliages"))
		TArray<UWorldScapeFoliagesCollection*> Foliages;




	//Contact Shadow for Terrain
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (DisplayName = "Contact Shadows"))
		bool bContactShadow = false;
	bool Prev_bContactShadow;
	//Override the player 0 position (for visual generation)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Override", meta = (DisplayName = "Override Player Position"))
	bool bOverridePlayerPosition;
	//Overrided Player Position in World Position
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default|Override", meta = (DisplayName = "New Player Position", EditCondition = "bOverridePlayerPosition == true", EditConditionHides))
	FVector OverridedPlayerPosition;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default", meta = (ToolTip = "Distance from the planet at which the planet highly slowdown the update to prevent performance impact"))
		float DistanceToFreezeGeneration;

	//Maximum Lod when in Runtime
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters")
	int32 MaxLod;

	//Number of Polygon on X axis per on Lod 0 , Need to be a multiplier or 4
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters")
	int32 LodResolution;
	
	//Triangle Size in Unit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters")
	float TriangleSize;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	AActor* DebugObject;




	//Maximum Lod when in Runtime
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters", meta = (EditCondition = "bOcean == true", EditConditionHides))
	int32 OceanMaxLod;

	//Number of Polygon on X axis per on Lod 0 , Need to be a multiplier of 4
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters", meta = (EditCondition = "bOcean == true", EditConditionHides))
	int32 OceanLodResolution;

	//Triangle Size in Unit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters", meta = (EditCondition = "bOcean == true", EditConditionHides))
	float OceanTriangleSize;

	//Generate accurate mesh tangents, it'll give better result when using normal, but greatly slow the generation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters", AdvancedDisplay, meta = (DisplayName = "Generate Accurate Mesh Tangents (Slow)"))
		bool bGenerateTangents;

	//Should Collision have an overlaping quad on each size, prevent weird issues when going from a chunk to another, slighty lower performance
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (DisplayName = "Pad Collisions"), AdvancedDisplay)
		bool bPaddedCollision = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (DisplayName = "RunTime Collision"))
	bool bGenerateCollision = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (DisplayName = "All Collision For All Player", ToolTip = "Generate collision for all Collision dependant actor for all player when on server and not just the server/host player"))
	bool bGenerateCollisionForAllPlayer;
	//bCollision Generation in Editor
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (DisplayName = "Editor Collision"))
	bool bGenerateCollisionInEditor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (EditCondition = "bGenerateCollisionInEditor == true", DisplayName = "Static Editor Collision", EditConditionHides))
	bool bStaticCollisionInEditor;

	//Number of Polygon on X axis per on Lod 0 , Need to be a multiplier of 4
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (EditCondition = "bGenerateCollision == true || bGenerateCollisionInEditor == true", EditConditionHides))
		int32 CollisionResolution;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (EditCondition = "bGenerateCollision == true || bGenerateCollisionInEditor == true", EditConditionHides))
	float CollisionTriangleSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (EditCondition = "bGenerateCollision == true || bGenerateCollisionInEditor == true", DisplayName = "Display Collision", EditConditionHides))
	bool bDisplayCollision;

	bool Prev_bDisplayCollision;

	//List of Actor generating collision on WorldScape;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Collision", meta = (EditCondition = "bGenerateCollision == true || bGenerateCollisionInEditor == true", EditConditionHides))
	TArray<AActor*> CollisionDependantActor;

	//At which Altitue shall the Triangle Size increase in scale
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters")
	float HeightAnchor;
	//Maximum value of the grid angle at high altitude used by the terrain
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters", meta = (DisplayName = "Lod Angle Max (Experimental)"))
	float GridAngleMax = 5;
	//Minimum value of the grid angle at low altitude used by the terrain
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lod Parameters", meta = (DisplayName = "Lod Angle min (Experimental)"))
	float GridAngleMin = 5;


	



	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Debug")
	TArray<FVegetation> FoliageDataList;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	TArray<FQueueVegetation> FoliageDataToSpawn;



	TAtomic<bool> FoliageGenerationDone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Debug")
		bool FoliageGenerationInProgress;
	
	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, Category = "Volumes",meta = (DisplayName = "Terrain Hole List (Experimental)"))
		TArray<ATerrainHoleVolume*> TerrainHoleList;
	


	//Noise Properties
	//The Scale of the noise, Higger value = wide details
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
	float NoiseScale = 800;
	//Intensity of the noise in cm, Higger value = Higger montains
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
	float NoiseIntensity= 1200000;
	//Seed value
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
	int32 Seed = 10;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
	FRotator LattitudeRotation = FRotator(0,0,0);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
	FVector NoiseOffset = FVector(0,0,0);
	//Height of the ocean
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise", meta = (EditCondition = "bOcean == true", EditConditionHides))
	float OceanHeight = 0;
	//Custom Noise Subclass
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise")
	UWorldScapeNoiseClass* WorldScapeNoise = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet", EditConditionHides))
	bool bUsePlanetaryHeightMap = false;
	bool Prev_bUsePlanetaryHeightMap = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet", EditConditionHides))
	UHeightMapVolumeData* PlanetaryHeightMap = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet", EditConditionHides))
	EPlanetaryHeightMapBlendType PlanetaryHeightMapBlend = EPlanetaryHeightMapBlendType::Addition;
	EPlanetaryHeightMapBlendType Prev_PlanetaryHeightMapBlend = EPlanetaryHeightMapBlendType::Addition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet",UIMin = "0", UIMax = "1", EditConditionHides))
	float PlanetaryBlendAlpha = 1;
	float Prev_PlanetaryBlendAlpha = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet", EditConditionHides))
	bool bPlanetaryInvertMapBlend = false;
	bool Prev_bPlanetaryInvertMapBlend = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet", EditConditionHides))
	EHMSamplingMethod SamplingMethod = EHMSamplingMethod::Bilinear;
	EHMSamplingMethod Prev_SamplingMethod = EHMSamplingMethod::Bilinear;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true", EditConditionHides))
	bool bPlanetaryHeight = false;
	bool Prev_bPlanetaryHeight = false;
	//Height of the heightmap (Red Channel)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	float PlanetaryMapHeight = 800000; //8 Km
	float Prev_PlanetaryMapHeight = 800000; //8 Km
	//Base Altitude of the heightmap (Red Channel)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	float PlanetaryAltitude = -1000000; // -10km
	float Prev_PlanetaryAltitude = -1000000; // -10km
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true",UIMin = "0", UIMax = "1", EditConditionHides))
	float HeightBlendAlpha = 1;
	float Prev_HeightBlendAlpha = 1;
	
	float PlanetaryMaxHeight = 0;
	float PlanetaryMinHeight = 0;
	
	//Does it Affect Temperature ?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true", EditConditionHides))
	bool bPlanetaryTemperature = false;
	bool Prev_bPlanetaryTemperature = false;
	//Maximum temperature of the heightmap (Green Chanel)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (UIMin = 0, UIMax = 1), meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryTemperature == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	float PlanetaryMaxTemperature = 1;
	float Prev_PlanetaryMaxTemperature = 1;
	//Minimum temperature of the heightmap (Green Chanel)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (UIMin = 0, UIMax = 1), meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryTemperature == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	float PlanetaryMinTemperature = 0;
	float Prev_PlanetaryMinTemperature = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true",UIMin = "0", UIMax = "1", EditConditionHides))
	float TemperatureBlendAlpha = 1;
	float Prev_TemperatureBlendAlpha = 1;
	
	//Does it Affect Humidity ?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true", EditConditionHides))
	bool bPlanetaryHumidity = false;
	bool Prev_bPlanetaryHumidity = false;
	//Maximum Humidity of the heightmap (Blue Chanel)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (UIMin = 0, UIMax = 1), meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHumidity == true", EditConditionHides))
	float PlanetaryMaxHumidity = 1;
	float Prev_PlanetaryMaxHumidity = 1;
	//Minimum Humidity of the heightmap (Blue Chanel)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (UIMin = 0, UIMax = 1), meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHumidity == true", EditConditionHides))
	float PlanetaryMinHumidity = 0;
	float Prev_PlanetaryMinHumidity = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true",UIMin = "0", UIMax = "1", EditConditionHides))
	float HumidityBlendAlpha = 1;
	float Prev_HumidityBlendAlpha = 1;
	
	//Use the HeightMap Alpha ?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true && ( bPlanetaryHeight == true || bPlanetaryHumidity == true || bPlanetaryTemperature == true )", EditConditionHides))
	bool bPlanetaryHeightAlpha = false;
	bool Prev_bPlanetaryHeightAlpha = false;
	
	//Does it Affect Ocean height ?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true", EditConditionHides))
	bool bPlanetaryOceanHeight = false;
	bool Prev_bPlanetaryOceanHeight = false;
	//Maximum Height of the heightmap (Red Channel Second Texture)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryOceanHeight == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	float PlanetaryMaxOceanHeight = 0;
	float Prev_PlanetaryMaxOceanHeight = 0;
	//Minimum Height of the heightmap (Alpha Channel Second Texture)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryOceanHeight == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	float PlanetaryMinOceanHeight = 0;
	float Prev_PlanetaryMinOceanHeight = 0;
	//Use the Ocean HeightMap Alpha ?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Noise|PlanetaryHeightmap", meta = (EditCondition = "GenerationType == EWorldScapeType::Planet && bPlanetaryOceanHeight == true && bUsePlanetaryHeightMap == true", EditConditionHides))
	bool bPlanetaryOceanHeightAlpha = false;
	bool Prev_bPlanetaryOceanHeightAlpha = false;



	FDVector2D GetPlanetaryCoordinate(DVector Position) const;

	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetPlanetaryDataFromPosition(FVector Position) const;
	
	



	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volumes")
	bool bEnableVolumes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volumes")
	TArray<AHeightMapVolume*> HeightMapVolumeList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volumes")
	TArray<ANoiseVolume*> NoiseVolumeList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Volumes")
	TArray<AFoliageMaskVolume*> FoliageMaskList;

	TArray<FHeightMapVolumeDataCopy> HeightMapVolumeDataList;
	TArray<FNoiseVolumeData> NoiseVolumeDataList;
	TArray<FFoliageMaskVolumeData> FoliageMaskDataList;
	TArray<FTerrainHoleVolumeData> TerrainHoleDataList;

	//Player Distance to the ground (based on noise and Height map Volumes)
	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "Info" , meta = (EditCondition = "false"))
	float PlayerDistanceToGround;
	//Player Altitudes to the Ocean Level
	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "Info", meta = (EditCondition = "false"))
	float PlayerAltitude;
	//Player Altitudes to the Ocean Level
	UPROPERTY(BlueprintReadWrite, Transient,EditAnywhere, Category = "Info", meta = (EditCondition = "false"))
		float TemperatureAtPlayerPosition;
	//Player Altitudes to the Ocean Level
	UPROPERTY(BlueprintReadWrite, Transient,EditAnywhere, Category = "Info", meta = (EditCondition = "false"))
		float HumidityAtPlayerPosition;
	//Foliages instance Left to generate in the current sector
	UPROPERTY(BlueprintReadWrite, Transient,EditAnywhere, Category = "Info", meta = (EditCondition = "false"))
	int32 FoliageCountLeft;
	//Foliages Sector Left to generate for the current foliage
	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "Info", meta = (EditCondition = "false"))
	int32 FoliageSectorLeft;
	//Foliages Left to generate
	UPROPERTY(BlueprintReadWrite, Transient,EditAnywhere, Category = "Info", meta = (EditCondition = "false"))
	int32 FoliageLeft;

	
	
	/**
	* Component Used so the Actor keep it's Transform... It's totaly an hack
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	UWorldScapeLod* TransformKeeper= nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Debug")
	TArray<UHierarchicalInstancedStaticMeshComponent*> InstancedMeshs;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	bool bGenerateFoliages;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Code")
	TArray<UWorldScapeLod*> WorldScapeLod;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Code")
	TArray<UWorldScapeLod*> WorldScapeLodOcean;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Code")
	TArray<UWorldScapeLod*> CollisionLods;
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Transient, Category = "Code")
	TMap<UWorldScapeLod*, bool> WorldScapeLodInGeneration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	FVector PlayerPos;

	/**
	* The Function that check for Update on Important parameters change based on buffer parameters
	* @param bUpdate does it update the Buffer ?
	* @return true if the Planet need to be regenerated, false otherwise.
	*/
	bool CheckForRegenerate(const bool bUpdate = true);
	/**
	* The Function that check for HeightMapVolume modifications and regenerate the planet if that the case
	* TODO : Make update only on needed Vertex;
	*/
	void CheckForHeightmapModifier();


	//Position TransformFunctions

	//Convert from RebasedWorld to 'Earth-Centered,Earth-Fixed Coordinate'
	DVector WorldToECEF(const DVector Position);
	/**Convert from RebasedWorld to 'Earth-Centered,Earth-Fixed Coordinate'
	* #WARNING : MAY LACK PRECISION
	**/
	DVector WorldToECEF(const FVector FloatPosition);



	//Convert from 'Earth-Centered,Earth-Fixed Coordinate' to Rebased World
	DVector ECEFToWorld(const  DVector Position);
	/**Convert from 'Earth-Centered,Earth-Fixed Coordinate' to Rebased World
	* #WARNING : MAY LACK PRECISION
	**/
	DVector ECEFToWorld(const  FVector FloatPosition);


	DVector ECEFToProjectedPos(const DVector Position);

	FFoliagesSector GetFoliageSector(const DVector ECEFPosition, const  int32 SectorLod);
	TArray<FFoliagesSector> GetSurroundingFoliageSector(const DVector Position, const  double pSectorSize);

	void GetVolumesData(TArray<FHeightMapVolumeDataCopy>& HeightMapVolumesData,
		TArray<FNoiseVolumeData>& NoiseVolumesData,
		TArray<FFoliageMaskVolumeData>& FoliageMaskVolumesData,
		TArray<FTerrainHoleVolumeData>& TerrainHoleVolumesData,
		const FBox pFBox
	);
	void GetVolumesData(TArray<FHeightMapVolumeDataCopy>& HeightMapVolumesData,
		TArray<FNoiseVolumeData>& NoiseVolumesData,
		TArray<FTerrainHoleVolumeData>& TerrainHoleVolumesData,
		const FBox pFBox
	);
	/**
	* Get the List of HeightMapVolume from position
	* @param Position Position to obtain the Volume from
	* @return List of Volume affecting the noise at Position
	*/
	TArray<AHeightMapVolume*> GetHeightMapVolumeList(const DVector Position);
	/**
	* Get the List of HeightMapVolume from FBox
	* @param pFBox FBox used for Intersect
	* @return List of Volume affecting the noise in the FBox
	*/
	TArray<AHeightMapVolume*> GetHeightMapVolumeList(const FBox pFBox);

	/**
	* Get the List of TerrainHole from position
	* @param Position Position to obtain the NoiseVolume from
	* @return List of TerrainHole affecting the noise at Position
	*/
	TArray<ATerrainHoleVolume*> GetTerrainHoleList(DVector Position);
	/**
	* Get the List of TerrainHole from FBox
	* @param pFBox FBox used for Intersect
	* @return List of TerrainHole affecting the noise in the FBox
	*/
	TArray<ATerrainHoleVolume*> GetTerrainHoleList(FBox pFBox);



	TArray<FHeightMapVolumeDataCopy> GetHeightMapVolumeDataCopyList(const DVector Position);
	TArray<FHeightMapVolumeDataCopy> GetHeightMapVolumeDataCopyList(const FBox pFBox);

	/**
	* Get the List of NoiseVolume from position
	* @param Position Position to obtain the NoiseVolume from
	* @return List of NoiseVolume affecting the noise at Position
	*/
	TArray<ANoiseVolume*> GetNoiseVolumeList(const DVector Position);
	/**
	* Get the List of NoiseVolume from FBox
	* @param pFBox FBox used for Intersect
	* @return List of NoiseVolume affecting the noise in the FBox
	*/
	TArray<ANoiseVolume*> GetNoiseVolumeList(const FBox pFBox);

	TArray<FNoiseVolumeData> GetNoiseVolumeDataList(const DVector Position);
	TArray<FNoiseVolumeData> GetNoiseVolumeDataList(const FBox pFBox);


	/**
	* Get the List of NoiseVolume from position
	* @param Position Position to obtain the NoiseVolume from
	* @return List of NoiseVolume affecting the noise at Position
	*/
	TArray<AFoliageMaskVolume*> GetFoliageMaskList(const DVector Position);
	/**
	* Get the List of NoiseVolume from FBox
	* @param pFBox FBox used for Intersect
	* @return List of NoiseVolume affecting the noise in the FBox
	*/
	TArray<AFoliageMaskVolume*> GetFoliageMaskList(const FBox pFBox);


	TArray<FFoliageMaskVolumeData> GetFoliageMaskVolumeDataList(const DVector Position);
	TArray<FFoliageMaskVolumeData> GetFoliageMaskVolumeDataList(const FBox pFBox);

	/**
	* Get the Noise from Position
	* @param Position Position to obtain the Noise From
	* @param Water Is the noise sampled for water or ground
	* @return Noises Data
	*/
	UFUNCTION(BlueprintCallable, Category = "Info")
	FNoiseData GetNoise(const FVector Position, const  bool Water = false, const bool IgnoreWorldBorder = false);
	FNoiseData GetNoise(const FVector Position, 
		const  TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
		const  TArray<FTransform> VolumeTransformList, const bool Water = false, const bool IgnoreWorldBorder = false);
	FNoiseData GetNoise(const DVector Position, const  bool Water = false, const bool IgnoreWorldBorder = false);
	FNoiseData GetNoise(const DVector Position,
		const  TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
		const  TArray<FTransform> VolumeTransformList, const bool Water = false, const bool IgnoreWorldBorder = false);
	/**
	* Get the Noise from Position projected to the ground
	* @param Position Position to obtain the Noise From
	* @param Water Is the noise sampled for water or ground
	* @return Noises Data
	*/
	UFUNCTION(BlueprintCallable, Category = "Info")
	FNoiseData GetGroundNoise(const FVector Position, const bool Water = false, const bool IgnoreWorldBorder = false);
	FNoiseData GetGroundNoise(const FVector Position, 
		const TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
		const TArray<FTransform> VolumeTransformList, const bool Water = false, const bool IgnoreWorldBorder = false);
	FNoiseData GetGroundNoise(const DVector Position, const bool Water = false, const bool IgnoreWorldBorder = false);
	FNoiseData GetGroundNoise(const DVector Position,
		const TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
		const TArray<FTransform> VolumeTransformList, const bool Water = false, const bool IgnoreWorldBorder = false);


	
	/*
	UFUNCTION(BlueprintCallable, Category = "Info")
		FVector GetGroundNormal(FVector ECEFPosition);
	*/

	FVector GetTangentFromECEFPoint(const FVector ECEFPosition);
	FVector GetBiTangentFromECEFPoint(const FVector ECEFPosition);
	UFUNCTION(BlueprintCallable, Category = "Info")
	FVector GetPawnNormal(const FVector PawnWorldPosition);
	UFUNCTION(BlueprintCallable, Category = "Info")
	FVector GetPawnSnappedNormal(const FVector PawnWorldPosition);
	UFUNCTION(BlueprintCallable, Category = "Info")
	FVector GetPawnTangent(const FVector PawnWorldPosition);
	UFUNCTION(BlueprintCallable, Category = "Info")
	FVector GetPawnBiTangent(const FVector PawnWorldPosition);
	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetPawnAltitude(const FVector PawnWorldPosition, const bool WaterNoiseHeight = false);
	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetPawnDistanceFromGround(const FVector PawnPosition, const bool ECEFCoordinate = false);

	float GetPawnDistanceFromGround(const DVector PawnPosition, const bool ECEFCoordinate = false);

	/**
	* Get the Noise Height at set position
	* @param Position Position to obtain the Noise From
	* @param Water Is the noise sampled for water or ground
	* @return float
	*/
	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetGroundHeight(const FVector PawnWorldPosition, const bool Water = false);
	/**
	* Get the Noise Normalized Height at set position
	* @param Position Position to obtain the Noise From
	* @param Water Is the noise sampled for water or ground
	* @return float
	*/
	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetGroundHeightNormalize(const FVector PawnWorldPosition, const bool Water = false);


	/**
	* Get the Noise Height at set position
	* @param Position Position to obtain the Noise From
	* @param Water Is the noise sampled for water or ground
	* @return float
	*/
	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetHeight(const FVector PawnWorldPosition, const bool Water = false);
	/**
	* Get the Noise Normalized Height at set position
	* @param Position Position to obtain the Noise From
	* @param Water Is the noise sampled for water or ground
	* @return float
	*/
	UFUNCTION(BlueprintCallable, Category = "Info")
	float GetHeightNormalize(const FVector PawnWorldPosition, const bool Water = false);

	float GetLattitude(const FVector Position);
	double GetLattitude(const DVector Position);

	/**
	* Generate the Base Mesh, used when Check for Regenerate is true
	*/
	void GenerateBaseMesh();
	/**
	* Delete all chunks and mesh instances
	*/
	void CleanComponents();
	//Main Update Function.
	void UpdatePosition();
	//Check if lod generation are done, and update them.
	void CheckForLodGeneration();
	//Foliages Related Ticks
	void FoliageHandleTick();

	void CreateInstancedMesh(FFoliagesSector* Sector, const UWorldScapeFoliagesInterface* Foliage);
	
	void CollisionLodHandler(const FVector HardenNormal, const  double AltitudeMultiplier, const bool ResetCollisions, const double GroundHeight);
	void CheckCollisionDeletion(const FVector HardenNormal, const bool ResetCollisions);
	int32 CreateNewColisionMesh(const DVector RelativePosition);





	bool init = false;
	bool HMIForceUpdate;

	//Altitude of the player at the last tick
	float LastAltitude;
	//PlayerPosition In WorldSpace
	DVector PlayerWorldPos;
	//Actual Planet Location 
	DVector PlanetLocation;

	TArray<DVector> CollisionActorList;
	TArray<DVector> SnapedCollisionActorList;
	CustomNoise PlanetNoise;
	TArray<UWorldScapeFoliagesInterface*> FoliagesList;

	bool bRegenFoliages = false;

	//Save of previous State of default variable (change lead to a complete new regen)
	EWorldScapeType GenerationType_Previous;
	int32 Prev_MaxLoD;
	int32 Prev_OceanMaxLoD;
	int32 Prev_LodResolution;
	int32 Prev_OceanLodResolution;
	double Prev_PlanetScale;
	float Prev_OceanHeight;
	float Prev_HeightAnchor;
	float Prev_TriangleSize;
	float Prev_OceanTriangleSize;
	UWorldScapeNoiseClass* Prev_WorldScapeNoise;
	bool Prev_Ocean;
	FTransform Prev_PlanetTransform;
	TArray<FWorldScapeFoliagesCollectionData> Prev_Foliages;
	int32 Prev_NoiseScale;
	int32 Prev_NoiseIntensity;
	int32 Prev_Seed;
	FVector Prev_NoiseOffset;
	FRotator Prev_LattitudeRotation;
	FVector Prev_Normal;
	int32 Prev_HeightMult;
	int32 Prev_WaterHeightMult;
	//Check if a rebase is in progress to wait for it before regenerating lod and foliages 
	UFUNCTION(BlueprintCallable, Category = "Defaults")
	void OnBeginRebase();
	UFUNCTION(BlueprintCallable, Category = "Defaults")
	void OnFinishedRebase();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Rebase")
	bool RebaseInProgress = false;


	UFUNCTION(BlueprintCallable, Category = "Defaults")
	void UpdateTerrainMaterial(const FWSMaterialLodArray pMaterialLodArray);
	UFUNCTION(BlueprintCallable, Category = "Defaults")
	void UpdateOceanMaterial(const FWSMaterialLodArray pMaterialLodArray);


	TArray<FAsyncTask<LodGenerationThread>*> LodGenerationThreadPool;
	FAsyncTask<FoliageGenerationThread>* FoliageGenerationThreadPool = nullptr;
	
	
};




class LodGenerationThread : public FNonAbandonableTask
{
public:
	
	LodGenerationThread(UWorldScapeLod* pWorldScapeLod, AWorldScapeRoot* pRoot, DVector pRelativePosition, DVector pPlanetLocation, FVector2D pSubPosition,
		double pPlanetScale, int32 pLod, float pSize, int32 pVertWidth, double pPlayerAltitude, FVector pHardenNormal, bool pFlatWorld, bool pIsInViewPort);

	~LodGenerationThread();

	//required by ue4, is required 


	bool IsInViewPort;

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(NormalThreadTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	UWorldScapeLod* WorldScapeLodRef = nullptr;
	AWorldScapeRoot* RootRef = nullptr;


	LodData MainPatch;
	LodData PatchA;
	LodData PatchB;

	void DoWork();
	void DoWorkMain();
	

	void SetPointPosition();

	//Step 3
	void CalculateNoise();
	void CalculateNormal(LodData &PatchData, int32 PatchID = 0);

	int32 Lod;
	
	DVector OffSetHelper;
	DVector RelativePosition;
	FVector HardenNormal;
	double PlanetScaleCode;

	float Size;
	int32 TriResolution;
	double PlayerDistanceToGround;
	FVector2D SubPosition;

	bool bFlatWorld;
};


class ColisionGeneration
{
public:
	ColisionGeneration(UWorldScapeLod* pWorldScapeLod, AWorldScapeRoot* pRoot, DVector pRelativePosition, DVector pPlanetLocation, FVector2D pSubPosition,
		double pPlanetScale, int32 pLod, float pSize, int32 pVertWidth, double pPlayerAltitude, DVector pHardenNormal, bool pFlatWorld);

	//required by ue4, is required 



	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(NormalThreadTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	UWorldScapeLod* WorldScapeLodRef = nullptr;
	AWorldScapeRoot* RootRef = nullptr;


	LodData MainPatch;
	LodData PatchA;
	LodData PatchB;

	void SetPointPosition();
	//Step 3
	void CalculateNoise();

	int32 Lod;

	DVector RelativePosition;
	DVector HardenNormal;
	double PlanetScaleCode;

	float Size;
	int32 TriResolution;
	double PlayerDistanceToGround;
	FVector2D SubPosition;

	bool bFlatWorld;

};


class FoliageGenerationThread : public FNonAbandonableTask
{
public:

	FoliageGenerationThread(AWorldScapeRoot* pRoot,
		double pPlanetScale, bool pFlatWorld,DVector pPlayerPosition ,TArray< FVegetation> pVegetationList, double pPlayerDistanceToGround);

	~FoliageGenerationThread();

	//required by ue4, is required 

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(NormalThreadTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	AWorldScapeRoot* RootRef;

	void DoWork();
	void DoWorkMain();


	bool ShouldSectorBeSampled(FFoliagesSector& Sector, int32 FoliageCollectionID, int32 FoliageID, int32 FLID);
	bool CheckPositionValidity(UWorldScapeFoliagesInterface* Foliage, UWorldScapeFoliagesCollection* FoliageCollection,
		DVector Position, TArray<FHeightMapVolumeDataCopy> VolumeListVar, TArray<FNoiseVolumeData> NoiseVolumeListVar,
		TArray<FTerrainHoleVolumeData> TerrainHoleVolumeListVar, TArray<FTransform> VolumeTransformArray
	);

	void GenerateVegetationForSector(FFoliagesSector& Sector, int32 FoliageCollectionID, int32 FoliageID, int32 FLID);
	
	DVector RelativePosition;
	DVector PlayerPos;
	double PlanetScaleCode;

	bool bFlatWorld;
	
	TArray< FVegetation> VegetationList;

	double PlayerDistanceToGround;
};



