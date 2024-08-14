// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeLod.h"
#include <limits>


void UWorldScapeLod::Init(int pLod,int TriResolution, double Size, DVector pRelativePosition, FWSMaterialLodArray pMaterialLodArray, double PlanetScaleCode, DVector PlanetLocation, bool pWaterBody,bool bCollision)
{

	MaterialLodArray = pMaterialLodArray;

	Mesh->ClearAllMeshSections();

	//UE_LOG(LogTemp, Warning, TEXT("Create New Planet Lod"));

	Vertices.Empty();
	Normals.Empty();
	Triangles.Empty();
	VertexColors.Empty();
	UV.Empty();
	Tangents.Empty();
	
	Lod = pLod;
	if (bCollision)
	{
		Mesh->bUseComplexAsSimpleCollision = true;
		Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	else 
	{
		Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	Mesh->SetGenerateOverlapEvents(false);
	RelativePosition = pRelativePosition;
	WaterBody = pWaterBody;


	if (WaterBody) 
	{
		Mesh->SetCastShadow(false);
		Mesh->bCastFarShadow = false;
		Mesh->bAffectDistanceFieldLighting = false;
	}

	float uvSpacing = 1.0f / (float)TriResolution;
	

	FVector SurfaceNormal = RelativePosition.ToFVector();

	SurfaceNormal.Normalize();

	FVector Tangent = FVector::CrossProduct(SurfaceNormal, FVector::RightVector);

	if (Tangent.SizeSquared() <= FLT_EPSILON) 
	{
		Tangent = FVector::CrossProduct(SurfaceNormal, FVector::UpVector);
	}
	Tangent.Normalize();

	FVector BiTangent = FVector::CrossProduct(SurfaceNormal, Tangent);
	DVector X, Y;
	DVector PositionNormal;

	double StepSize = (double)Size / (double)TriResolution;
	double HalfSize = Size * 0.5;
	int MinY = 0, MinX = 0, MaxY = 0, MaxX = 0;
	int Width = 2;
	if (Lod == 0)
	{
		Width = TriResolution -2;
		for (int32 y = 0; y < TriResolution-2; y++)
		{
			for (int32 x = 0; x < TriResolution-2; x++)
			{
				X = Tangent * (x * StepSize - HalfSize);
				Y = BiTangent * (y * StepSize - HalfSize);
				PositionNormal = DVector(X + Y);
				PositionNormal = PositionNormal + RelativePosition ;
				PositionNormal.Normalize();
				Vertices.Add(((PositionNormal * PlanetScaleCode) - RelativePosition).ToFVector());
				Normals.Add(FVector(0.0f, 0.0f, 1.0f));
				UV.Add(FVector2D(x * uvSpacing, y * uvSpacing));
				VertexColors.Add(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f));
				Tangents.Add(FWorldScapeMeshTangent(Tangent.X, Tangent.Y, Tangent.Z));
			}
		}

		for (int32 y = 0; y < TriResolution-3; y++)
		{
			for (int32 x = 0; x < TriResolution-3; x++)
			{
				Triangles.Add(x + (y * (Width)));					//current vertex
				Triangles.Add(x + (y * (Width)) + Width);			//current vertex + row
				Triangles.Add(x + (y * (Width)) + Width + 1);		//current vertex + row + one right

				Triangles.Add(x + (y * (Width) ) );					//current vertex
				Triangles.Add(x + (y * (Width) ) + Width + 1);		//current vertex + row + one right
				Triangles.Add(x + (y * (Width) ) + 1);				//current vertex + one right
			}
		}


		Mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV, VertexColors, Tangents, bCollision);
		Mesh->SetMaterial(0, MaterialLodArray.DefaultMaterial);

		

	}
	else 
	{
		int IndexOffset = 0;
		int PreviousOffset = 0;
		Width = TriResolution / 4;

		for (int step = 0; step < 4; step++) {


			switch (step)
			{
			case 0:
				MinY = 0;
				MaxY = TriResolution / 4;
				MinX = 0;
				MaxX = TriResolution - 2;
				break;
			case 1:
				MinY = TriResolution / 4 - 1;
				MaxY = (3 * TriResolution) / 4 - 1;
				MinX = 0;
				MaxX = TriResolution / 4;
				break;
			case 2:
				MinY = TriResolution / 4 - 1;
				MaxY = (3 * TriResolution) / 4 - 1;
				MinX = (3 * TriResolution) / 4 - 2;
				MaxX = TriResolution - 2;
				break;
			case 3:
				MinY = (3 * TriResolution) / 4 - 2;
				MaxY = TriResolution - 2;
				MinX = 0;
				MaxX = TriResolution - 2;
				break;
			default:
				MinY = 0;
				MaxY = 0;
				MinX = 0;
				MaxX = 0;
				break;
			}

			for (int32 y = MinY; y < MaxY; y++)
			{
				for (int32 x = MinX; x < MaxX; x++)
				{
					IndexOffset++;
					X = Tangent * (x * StepSize - HalfSize);
					Y = BiTangent * (y * StepSize - HalfSize);
					PositionNormal = DVector(X + Y);
					PositionNormal = PositionNormal + RelativePosition;
					PositionNormal.Normalize();
					Vertices.Add(((PositionNormal * PlanetScaleCode) - RelativePosition).ToFVector());
					Normals.Add(FVector(0.0f, 0.0f, 1.0f));
					UV.Add(FVector2D(x * uvSpacing, y * uvSpacing));
					VertexColors.Add(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f));
					Tangents.Add(FWorldScapeMeshTangent(Tangent.X, Tangent.Y, Tangent.Z));
				}
			}


			Width = (MaxX - MinX);


			for (int32 y = 0; y < (MaxY-MinY)-1 ; y++)
			{
				for (int32 x = 0; x < (MaxX - MinX)-1; x++)
				{

					Triangles.Add(PreviousOffset + x + (y * (Width )));					//current vertex
					Triangles.Add(PreviousOffset + x + (y * (Width )) + Width);			//current vertex + row
					Triangles.Add(PreviousOffset + x + (y * (Width )) + Width + 1);		//current vertex + row + one right

					Triangles.Add(PreviousOffset + x + (y * (Width )));					//current vertex
					Triangles.Add(PreviousOffset + x + (y * (Width )) + Width + 1);		//current vertex + row + one right
					Triangles.Add(PreviousOffset + x + (y * (Width )) + 1);				//current vertex + one right
					
				}
			}

			PreviousOffset = IndexOffset;
		}

		Mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV, VertexColors, Tangents, bCollision);
		Mesh->SetMaterial(0, MaterialLodArray.DefaultMaterial);

	}

	if (!bCollision)
	{
		Width = 2;
		for (int32 y = -1; y < TriResolution - 2; y++)
		{
			for (int32 x = -1; x < 1; x++)
			{
				X = Tangent * (x * StepSize - HalfSize);
				Y = BiTangent * (y * StepSize - HalfSize);
				PositionNormal = DVector(X + Y);
				PositionNormal = PositionNormal + RelativePosition;
				PositionNormal.Normalize();
				VerticesPA.Add(((PositionNormal * PlanetScaleCode) - RelativePosition).ToFVector());
				VerticesNormalPA.Add(FVector(0.0f, 0.0f, 1.0f));
				UVPA.Add(FVector2D(x * uvSpacing, y * uvSpacing));
				VerticesColorPA.Add(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f));
				TangentsPA.Add(FWorldScapeMeshTangent(Tangent.X, Tangent.Y, Tangent.Z));
			}
		}

		for (int32 y = 0; y < TriResolution - 2; y++)
		{
			for (int32 x = 0; x < 1; x++)
			{
				TrianglesPatchA.Add(x + (y * (Width)));					//current vertex
				TrianglesPatchA.Add(x + (y * (Width)) + Width);			//current vertex + row
				TrianglesPatchA.Add(x + (y * (Width)) + Width + 1);		//current vertex + row + one right

				TrianglesPatchA.Add(x + (y * (Width)));					//current vertex
				TrianglesPatchA.Add(x + (y * (Width)) + Width + 1);		//current vertex + row + one right
				TrianglesPatchA.Add(x + (y * (Width)) + 1);				//current vertex + one right
			}
		}
		Mesh->CreateMeshSection_LinearColor(1, VerticesPA, TrianglesPatchA, VerticesNormalPA, UVPA, VerticesColorPA, TangentsPA, bCollision);
		Mesh->SetMaterial(1, MaterialLodArray.DefaultMaterial);

	

		Width = TriResolution - 2;
		for (int32 y = -1; y < 1; y++)
		{
			for (int32 x = -1; x < TriResolution - 3; x++)
			{
				X = Tangent * (x * StepSize - HalfSize);
				Y = BiTangent * (y * StepSize - HalfSize);
				PositionNormal = DVector(X + Y);
				PositionNormal = PositionNormal + RelativePosition;
				PositionNormal.Normalize();
				VerticesPB.Add(((PositionNormal * PlanetScaleCode) - RelativePosition).ToFVector());
				VerticesNormalPB.Add(FVector(0.0f, 0.0f, 1.0f));
				UVPB.Add(FVector2D(x * uvSpacing, y * uvSpacing));
				VerticesColorPB.Add(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f));
				TangentsPB.Add(FWorldScapeMeshTangent(Tangent.X, Tangent.Y, Tangent.Z));
			}
		}

		for (int32 y = 0; y < 1; y++)
		{
			for (int32 x = 0; x < TriResolution- 3; x++)
			{
				TrianglesPatchB.Add(x + (y * (Width)));					//current vertex
				TrianglesPatchB.Add(x + (y * (Width)) + Width);			//current vertex + row
				TrianglesPatchB.Add(x + (y * (Width)) + Width + 1);		//current vertex + row + one right

				TrianglesPatchB.Add(x + (y * (Width)));					//current vertex
				TrianglesPatchB.Add(x + (y * (Width)) + Width + 1);		//current vertex + row + one right
				TrianglesPatchB.Add(x + (y * (Width)) + 1);				//current vertex + one right
			}
		}
		Mesh->CreateMeshSection_LinearColor(2, VerticesPB, TrianglesPatchB, VerticesNormalPB, UVPB, VerticesColorPB, TangentsPB, bCollision);
		Mesh->SetMaterial(2, MaterialLodArray.DefaultMaterial);
	}

	TriangleSize = FVector(Size, Size, Size);
	//UE_LOG(LogWorldScapeCore, Log, TEXT("World Position = %s"), *WorldPosition.ToString());
	//UE_LOG(LogWorldScapeCore, Log, TEXT("Size = %f"),  (float)HalfSize);
	Mesh->SetRelativeLocation(RelativePosition.ToFVector(), false, nullptr, ETeleportType::ResetPhysics);


	Mesh->SetRenderCustomDepth(true);
}

FBox UWorldScapeLod::GetFBox(FVector Offset, float scale)
{
	return FBox((RelativePosition - DVector(LodSize *scale * 0.5) + Offset).ToFVector(), (RelativePosition + DVector(LodSize * scale * 0.5) + Offset).ToFVector());
}


UWorldScapeLod::UWorldScapeLod() 
{
	USceneComponent::SetMobility(EComponentMobility::Movable);
	UActorComponent::SetComponentTickEnabled(false);

	Mesh = CreateDefaultSubobject<UWorldScapeMeshComponent>(TEXT("WorldScapeMesh"));
	Mesh->SetMobility(EComponentMobility::Movable);

#if ENGINE_MAJOR_VERSION == 5
	Mesh->SetWorldTransform(FTransform(FVector::Zero()));
#else
	Mesh->SetWorldTransform(FTransform(FVector::ZeroVector));
#endif
	//Mesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
	Mesh->bUseAsyncCooking = true;
	Mesh->bUseComplexAsSimpleCollision = false;
	Mesh->SetCastShadow(true);
	Mesh->bCastFarShadow = true;
	Mesh->bAffectDistanceFieldLighting = true;

	if (IsValid(GetOwner()) && IsValid(GetOwner()->GetWorld())){
		Mesh->RegisterComponent();
	}
	Mesh->SetComponentTickEnabled(false);
}

void UWorldScapeLod::SetData(LodData data, double pSize, int Patch)
{
	LodSize = pSize;


	TArray<FVector> FVerticeList;
	for (int i = 0; i < data.Vertices.Num(); i++) 
	{
		if (data.Vertices.IsValidIndex(i))
		{
			FVerticeList.Add(data.Vertices[i].ToFVector());
		}	
	}


	if (Patch == 1) 
	{
		VerticesNormalPA = data.Normals;
		VerticesColorPA = data.VertexColors;
		VerticesPA = FVerticeList;
		UVPA = data.UV;
		TangentsPA = data.Tangents;
	}
	else if (Patch == 2) 
	{
		VerticesNormalPB = data.Normals;
		VerticesColorPB = data.VertexColors;
		VerticesPB = FVerticeList;
		UVPB = data.UV;
		TangentsPB = data.Tangents;
	}
	else if (Patch == 0) 
	{
		Normals = data.Normals;
		VertexColors = data.VertexColors;
		Vertices = FVerticeList;
		UV = data.UV;
		Tangents = data.Tangents;
	}
	
	
}


void UWorldScapeLod::SetRelativePosition(DVector pRelativePosition) 
{
	RelativePosition = pRelativePosition;
}

void UWorldScapeLod::SetMeshLod(int pMaterialLod)
{
	MaterialLod = pMaterialLod;
}

void UWorldScapeLod::UpdateMesh()
{
	//RelativePosition
	
	Mesh->SetRelativeLocation(RelativePosition.ToFVector(), false, nullptr, ETeleportType::TeleportPhysics);
	//Mesh->SetWorldLocationAndRotationNoPhysics(RelativePosition.ToFVector(), FRotator());
	Mesh->ComponentVelocity = FVector(0, 0, 0);
	Mesh->SetPhysicsLinearVelocity(FVector(0, 0, 0));


	Mesh->UpdateMeshSection_LinearColor(0, Vertices, Normals, UV, VertexColors, Tangents);
	Mesh->UpdateMeshSection_LinearColor(1, VerticesPA, VerticesNormalPA, UVPA, VerticesColorPA, TangentsPA);
	Mesh->UpdateMeshSection_LinearColor(2, VerticesPB, VerticesNormalPB, UVPB, VerticesColorPB, TangentsPB);
	

	/*
	UMaterialInterface* MaterialToUse = MaterialLodArray.DefaultMaterial;

	for (int i = 0; i < MaterialLodArray.MaterialsLod.Num();i++) 
	{
		if (MaterialLodArray.MaterialsLod[i].LodRange.Contains(MaterialLod))
		{
			MaterialToUse = MaterialLodArray.MaterialsLod[i].Material;
			break;
		}
	}
	
	Mesh->SetMaterial(0, MaterialToUse);
	Mesh->SetMaterial(1, MaterialToUse);
	Mesh->SetMaterial(2, MaterialToUse);
	*/

	//Mesh->SetRelativeLocation(RelativePosition.ToFVector(), false, nullptr, ETeleportType::TeleportPhysics);
	
	
}

void UWorldScapeLod::SetMesh()
{
	//RelativePosition

	Mesh->ClearAllMeshSections();

	Mesh->SetRelativeLocation(RelativePosition.ToFVector(), false, nullptr, ETeleportType::TeleportPhysics);
	//Mesh->SetWorldLocationAndRotationNoPhysics(RelativePosition.ToFVector(), FRotator());

	Mesh->CreateMeshSection_LinearColor(0, Vertices,Triangles ,Normals, UV, VertexColors, Tangents,true);
		Mesh->CreateMeshSection_LinearColor(1, VerticesPA, TrianglesPatchA,VerticesNormalPA, UVPA, VerticesColorPA, TangentsPA,true);
		Mesh->CreateMeshSection_LinearColor(2, VerticesPB, TrianglesPatchB,VerticesNormalPB, UVPB, VerticesColorPB, TangentsPB, true);
	//Mesh->SetRelativeLocation(RelativePosition.ToFVector(), false, nullptr, ETeleportType::TeleportPhysics);


}


FVector UWorldScapeLod::GetClosestSurfaceNormal(FVector pRelativePosition)
{
	int closestTriangle = 0;
	float closestDistance = std::numeric_limits<float>::max();
	for (int i = 0; i < Triangles.Num(); i += 3) 
	{
		FVector Avg = (Vertices[Triangles[i]] + Vertices[Triangles[i+1]] + Vertices[Triangles[i + 2]]) / 3;
		float dist = FVector::Distance(Avg, pRelativePosition);
		if (dist < closestDistance) 
		{
			closestDistance = dist;
			closestTriangle = i;
		}
	}
	FVector normal = Normals[Triangles[closestTriangle]] + Normals[Triangles[closestTriangle + 1]] + Normals[Triangles[closestTriangle + 2]];
	normal.Normalize();
	return normal;
}
