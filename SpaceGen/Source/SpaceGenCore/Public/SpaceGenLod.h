// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "WorldScapeMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h"
#include "KismetProceduralMeshLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DoublePrecisionUtils.h"
#include "WorldScapeNoiseClass.h"
#include "NoiseData.h"
#include "LodData.h"
#include "HeightMapVolume.h"
#include <map>
#include "WorldScapeFoliagesAsset.h"
#include "MaterialLod.h"
#include "TerrainHoleVolume.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

#if WITH_EDITOR
#include "Editor.h"
#endif
#include "WorldScapeLod.generated.h"

//#define DEBUGPCore true


UCLASS(hideCategories = (Code,MeshInfo ))
class WORLDSCAPECORE_API UWorldScapeLod : public USceneComponent
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	int Lod;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
		bool WaterBody;

	
	double LodSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
	UWorldScapeMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
	TArray<FVector> Vertices;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
	TArray<int32> Triangles;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
		TArray<int32> TrianglesPatchA;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
		TArray<int32> TrianglesPatchB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
	TArray<FLinearColor> VertexColors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
	TArray<FVector> Normals;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
	FVector SnappedAngle;


	//Patch A (Up to down strip)
	TArray<FVector> VerticesPA;
	TArray<FVector> VerticesNormalPA;
	TArray<FLinearColor>  VerticesColorPA;
	TArray<FVector2D> UVPA;
	TArray<FWorldScapeMeshTangent> TangentsPA;

	//Patch B (Left to Right Strip)
	TArray<FVector> VerticesPB;
	TArray<FVector> VerticesNormalPB;
	TArray<FLinearColor>  VerticesColorPB;
	TArray<FVector2D> UVPB;
	TArray<FWorldScapeMeshTangent> TangentsPB;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
		FVector TriangleSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
	TArray<FVector2D> UV;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MeshInfo")
		TArray<FWorldScapeMeshTangent> Tangents;
	/*
	UFUNCTION(BlueprintCallable)
		FVector GetClosestSurfacePosition(FVector Position);
		*/
	UFUNCTION(BlueprintCallable, Category = "Defaults")
		FVector GetClosestSurfaceNormal(FVector pRelativePosition);

	UWorldScapeLod();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	FWSMaterialLodArray MaterialLodArray;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	int MaterialLod;


	bool IsSupportedForNetworking() const override
	{
		return true;
	}

	DVector RelativePosition;
	void Init(int pLod, int TriResolution, double Size, DVector pRelativePosition, FWSMaterialLodArray pMaterialLodArray, double PlanetScaleCode, 
		DVector PlanetLocation, bool pWaterBody, bool bCollision);

	void InitCollision(int TriResolution, double Size, DVector pRelativePosition, FWSMaterialLodArray pMaterialLodArray, double PlanetScaleCode, 
		DVector PlanetLocation);


	void UpdateMesh();

	void SetMesh();

	void SetMeshLod(int pMaterialLod);

	void SetData(LodData data, double pSize, int Patch = 0);

	void SetRelativePosition(DVector pRelativePosition);

	FBox GetFBox(FVector Offset = FVector(0,0,0), float scale = 1.f);
};