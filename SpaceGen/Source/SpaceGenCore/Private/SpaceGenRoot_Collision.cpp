// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeRoot.h"

void AWorldScapeRoot::CheckCollisionDeletion(FVector HardenNormal, bool ResetCollisions)
{
	if (ResetCollisions)
	{
		for (int32 i = 0; i < CollisionLods.Num(); i++)
		{
			CollisionLods[i]->Mesh->DestroyComponent();
			CollisionLods[i]->DestroyComponent();
		}
		CollisionLods.Empty();
		return;
	}



	DVector SnappedPosition;
	DVector SnappedPositionPO;
	FVector2D SubPosition;


	bool bForceUpdate = true;
	double stepSize = (double)CollisionTriangleSize;

	double offset = stepSize * (CollisionResolution - 2);
	if (bPaddedCollision) 
	{
		offset = stepSize * (CollisionResolution - 2);
	}
		

	

	TArray<bool> CollisionToKeep;
	CollisionToKeep.Init(false, CollisionLods.Num());

	SnapedCollisionActorList = CollisionActorList;

	for (int32 p = 0; p < CollisionActorList.Num(); p++)
	{
		

		DVector ProjectedPosition = ECEFToProjectedPos(CollisionActorList[p]);

		FVector PositionNormal = WorldScapeWorld::GetUpVectorSnapped(CollisionActorList[p], GridAngle, bFlatWorld).ToFVector();

		WorldScapeWorld::GetSnappedPosition(SnappedPosition, PositionNormal, SubPosition, ResetCollisions, offset, bForceUpdate, ProjectedPosition,
			PlanetLocation, 0, 1, CollisionTriangleSize, LodResolution, PlanetScaleCode, GridAngle, bFlatWorld, true);

		

		if (bFlatWorld)
		{
			SnappedPosition.Z = 0;
			//Fix for the chunk at "0,0,0", else it's simply position itself at the world origin when telling the engine to set the chunk at relative position 0,0,0;
			SnappedPosition = SnappedPosition + DVector(1, 0, 0);
		}

		

		SnapedCollisionActorList[p] = SnappedPosition;

		

		for (int32 i = 0; i < CollisionLods.Num(); i++)
		{
			if (WorldScapeHelper::IsPointInCube(SnappedPosition, CollisionLods[i]->RelativePosition, offset * 3))
			{
				CollisionToKeep[i] = true;
			}
		}

		
	}

	for (int32 i = CollisionLods.Num() - 1; i >= 0; i--)
	{
		if (!CollisionToKeep[i])
		{
			CollisionLods[i]->Mesh->DestroyComponent();
			CollisionLods[i]->DestroyComponent();
			CollisionLods.RemoveAt(i);
		}
		else
			CollisionLods[i]->Mesh->SetVisibility(bDisplayCollision);
	}


}

int32 AWorldScapeRoot::CreateNewColisionMesh(DVector RelativePosition)
{
	int32 ID = CollisionLods.Add(NewObject <UWorldScapeLod>(this));
	CollisionLods[ID]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	CollisionLods[ID]->Mesh->Rename(TEXT("WorldScapeMeshCollision"));
	CollisionLods[ID]->SetRelativeLocation(FVector(0, 0, 0));
	CollisionLods[ID]->RegisterComponentWithWorld(GetWorld());

	if (bPaddedCollision)
	{
		CollisionLods[ID]->Init(0, CollisionResolution + 3, CollisionTriangleSize, RelativePosition, TerrainMaterial, PlanetScaleCode, PlanetLocation, false, true);
	}
	else
	{
		CollisionLods[ID]->Init(0, CollisionResolution + 1, CollisionTriangleSize, RelativePosition, TerrainMaterial, PlanetScaleCode, PlanetLocation, false, true);
	}
	
	CollisionLods[ID]->Mesh->SetMeshSectionVisible(0, false);
	CollisionLods[ID]->Mesh->SetMeshSectionVisible(1, false);
	CollisionLods[ID]->Mesh->SetMeshSectionVisible(2, false);
	CollisionLods[ID]->Mesh->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
	CollisionLods[ID]->Mesh->SetRelativeLocation(FVector(0, 0, 0));
	CollisionLods[ID]->Mesh->bHiddenInGame = !bDisplayCollision;
	CollisionLods[ID]->Mesh->SetVisibility(bDisplayCollision);
	return ID;
}

void AWorldScapeRoot::CollisionLodHandler(FVector HardenNormal, double AltitudeMultiplier, bool ResetCollisions, double GroundHeight)
{
	DVector SnappedPosition, SnappedPositionPO;
	FVector2D SubPosition;


	bool ForceUpdate = true;
	const double StepSize = static_cast<double>(CollisionTriangleSize);

	int BonusResolution = 0;
	int Padding = 2;
	if (bPaddedCollision) {
		BonusResolution += 2;
		Padding = 4;
	}
		

	const double Offset = StepSize * ((CollisionResolution + BonusResolution) - Padding);

	//Generate List Of bCollision Actor based on players :
	CollisionActorList.Empty();

	if (IsValid(GetWorld()))
	{
		FVector ActorPos;

		//if its a server, load collision of all player, else, simply load the collision of the first player;

		bool bGenerateAllCollision = (bGenerateCollisionForAllPlayer || GetNetMode() == ENetMode::NM_DedicatedServer || GetNetMode() == ENetMode::NM_ListenServer || GetNetMode() == ENetMode::NM_Standalone);

		if (bGenerateAllCollision) {

#if WITH_EDITOR
			if (WorldScapeEditorUtils::IsInViewPort())
			{
				CollisionActorList.Add(WorldToECEF(WorldScapeEditorUtils::GetViewPortCameraPosition()));
			}
#endif

			for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
			{
				APlayerController* PlayerController = Iterator->Get();
				if (IsValid(PlayerController) && IsValid(PlayerController->GetPawn()))
				{
					ActorPos = PlayerController->GetPawn()->GetActorLocation();
					CollisionActorList.Add(WorldToECEF(ActorPos));
				}
			}

			for (int32 i = 0; i < CollisionDependantActor.Num(); i++)
			{
				if (CollisionDependantActor.IsValidIndex(i) && IsValid(CollisionDependantActor[i]))
				{
					ActorPos = CollisionDependantActor[i]->GetActorLocation();
					CollisionActorList.Add(WorldToECEF(ActorPos));
				}
			}
		}
		else
		{

#if WITH_EDITOR
			if (WorldScapeEditorUtils::IsInViewPort())
			{
				CollisionActorList.Add(WorldToECEF(WorldScapeEditorUtils::GetViewPortCameraPosition()));
			}
			else if (IsValid(GetWorld()) && IsValid(GetWorld()->GetFirstPlayerController()) && IsValid(GetWorld()->GetFirstPlayerController()->GetPawn()))
			{
				CollisionActorList.Add(WorldToECEF(GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation()));
			}

#else

			if (IsValid(GetWorld()) && IsValid(GetWorld()->GetFirstPlayerController()) && IsValid(GetWorld()->GetFirstPlayerController()->GetPawn()))
			{
				CollisionActorList.Add(WorldToECEF(GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation()));
			}
#endif
		}
	}



	CheckCollisionDeletion(HardenNormal, ResetCollisions);

	double AltitudeMultiplierL;
	FNoiseData Data;

	for (int32 p = 0; p < SnapedCollisionActorList.Num(); p++)
	{
		if (!SnapedCollisionActorList.IsValidIndex(p) || !CollisionActorList.IsValidIndex(p))
		{
			continue;
		}

		DVector ActorPos = SnapedCollisionActorList[p];

		FVector Tangent = GetTangentFromECEFPoint(ActorPos.ToFVector());
		FVector BiTangent = GetBiTangentFromECEFPoint(ActorPos.ToFVector());


		float ActorDistanceToGround = GetPawnDistanceFromGround(CollisionActorList[p], true);

		AltitudeMultiplierL = pow(2, round(FMath::Max(0.f, log2(ActorDistanceToGround / HeightAnchor))));

		DVector OffSettedPos = ActorPos;

		//No need to update collision when High over ground.
		if (AltitudeMultiplierL >= 2)
		{
			continue;
		}

		for (int32 i = 0; i < 9; i++)
		{
			switch (i)
			{
			case 1:
				OffSettedPos = ActorPos + (Tangent * Offset);
				break;
			case 2:
				OffSettedPos = ActorPos - (Tangent * Offset);
				break;
			case 3:
				OffSettedPos = ActorPos + (BiTangent * Offset);
				break;
			case 4:
				OffSettedPos = ActorPos - (BiTangent * Offset);
				break;
			case 5:
				OffSettedPos = ActorPos + (BiTangent * Offset) + (Tangent * Offset);
				break;
			case 6:
				OffSettedPos = ActorPos - (BiTangent * Offset) + (Tangent * Offset);
				break;
			case 7:
				OffSettedPos = ActorPos + (BiTangent * Offset) - (Tangent * Offset);
				break;
			case 8:
				OffSettedPos = ActorPos - (BiTangent * Offset) - (Tangent * Offset);
				break;
			default:
				OffSettedPos = ActorPos;
				break;
			}


			//Check if bCollision allready there, else Create new collision
			bool MakeCollision = true;
			if (!ResetCollisions)
			{
				for (int32 j = 0; j < CollisionLods.Num(); j++)
				{
					if (DVector::Dist(CollisionLods[j]->RelativePosition, OffSettedPos) < StepSize)
					{
						MakeCollision = false;
					}
				}
			}

			if (MakeCollision)
			{
				int32 ID = CreateNewColisionMesh(OffSettedPos);

				FVector PositionNormal = WorldScapeWorld::GetUpVectorSnapped(CollisionActorList[p], GridAngle, bFlatWorld).ToFVector();

				ColisionGeneration(CollisionLods[ID], this, OffSettedPos, PlanetLocation, FVector2D(0, 0), PlanetScaleCode, 0,
					CollisionTriangleSize, CollisionResolution + 1 + BonusResolution, PlayerDistanceToGround, PositionNormal, bFlatWorld);

				CollisionLods[ID]->SetMesh();
			}
		}
	}
	CollisionActorList.Empty();
	SnapedCollisionActorList.Empty();
}

ColisionGeneration::ColisionGeneration(UWorldScapeLod* pWorldScapeLod, AWorldScapeRoot* pRoot, DVector pRelativePosition, DVector pPlanetLocation, FVector2D pSubPosition,
	double pPlanetScale, int32 pLod, float pSize, int32 pVertWidth, double pPlayerAltitude, DVector pHardenNormal, bool pFlatWorld)
{
	WorldScapeLodRef = pWorldScapeLod;
	RootRef = pRoot;
	Lod = pLod;
	PlanetScaleCode = pPlanetScale;
	Size = pSize;
	TriResolution = pVertWidth;
	PlayerDistanceToGround = pPlayerAltitude;
	RelativePosition = pRelativePosition;
	SubPosition = pSubPosition;
	HardenNormal = pHardenNormal;
	MainPatch = LodData();
	PatchA = LodData();
	PatchB = LodData();
	bFlatWorld = pFlatWorld;

	double ChunkSize = Size * TriResolution;
	WorldScapeLodRef->SetData(MainPatch, ChunkSize, -1);

	SetPointPosition();

	if (RootRef->NoiseIntensity > 0) CalculateNoise();

	if (IsValid(RootRef) && IsValid(WorldScapeLodRef))
	{
		WorldScapeLodRef->SetData(MainPatch, ChunkSize, 0);
		WorldScapeLodRef->SetRelativePosition(RelativePosition);
	}
}

void ColisionGeneration::CalculateNoise()
{

	DVector ECEFVertexPosition;

	FVector NoisePosition;
	FLinearColor VertexColor;
	TArray<FHeightMapVolumeDataCopy> VolumeListVar;
	TArray<FNoiseVolumeData> NoiseVolumeListVar;
	TArray<FTerrainHoleVolumeData> TerrainHoleVolumeListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost

	if (IsValid(RootRef) && IsValid(WorldScapeLodRef))
	{
		RootRef->GetVolumesData(VolumeListVar, NoiseVolumeListVar, TerrainHoleVolumeListVar,WorldScapeLodRef->GetFBox());
	}

	TArray<FTransform> VolumeTransformArray;

	for (int32 i = 0; i < VolumeListVar.Num(); i++)
	{
		if (VolumeListVar.IsValidIndex(i))
		{
			VolumeTransformArray.Add(VolumeListVar[i].VolumeLocation);
		}

	}

	FVector VertexWorldTransformedPosition;
	FVector VertexTransformedPosition;
	for (int32 i = 0; i < MainPatch.Vertices.Num(); i++)
	{
		ECEFVertexPosition = MainPatch.Vertices[i] + RelativePosition;


		FNoiseData Data = RootRef->GetNoise(ECEFVertexPosition, NoiseVolumeListVar, VolumeListVar, TerrainHoleVolumeListVar, VolumeTransformArray);
		VertexColor = FLinearColor(Data.HeightNormalize, Data.Temperature, Data.Humidity, Data.FoliageMask);

		MainPatch.Vertices[i] = WorldScapeWorld::GetVertexTransformation(Data.Height, MainPatch.Vertices[i], bFlatWorld, ECEFVertexPosition).ToFVector();

		MainPatch.VertexColors.Add(VertexColor);
	}
}

void ColisionGeneration::SetPointPosition()
{
	DVector Normal = HardenNormal;

	Normal.SnapNormal(RootRef->GridAngle);


	bool WaterBody = false;


	bool bLimitWorld = RootRef->bLimitFlatWorldSize && RootRef->bFlatWorld;
	FVector2D FlatWorldLimit = RootRef->FlatWorldLimit;

	float uvSpacing = 1.0f / (float)TriResolution;
	double StepSize = (double)Size * pow(2, Lod);


	DVector Tangent = WorldScapeWorld::GetTangent(Normal, RootRef->GridAngle, bFlatWorld);
	DVector BiTangent = WorldScapeWorld::GetBiTangent(Normal, RootRef->GridAngle, bFlatWorld);


	if (bFlatWorld)
	{
		Tangent = FVector(1, 0, 0);
		BiTangent = FVector(0, 1, 0);
	}




	double OffsetX = StepSize * 0.5;
	double OffsetY = StepSize * 0.5;

	bool InvertOrder = false;

	if (abs(Normal.Z) > 0.90)
	{
		Tangent = FVector(1, 0, 0);
		BiTangent = FVector(0, 1, 0);
		if (Normal.Z < 0)
		{
			InvertOrder = true;
		}
	}
	else if (abs(Normal.Z) > 0.9)
	{
		Tangent = FVector(1, 0, 0);
		BiTangent = FVector(0, 1, 0);
		if (Normal.Z < 0)
		{
			InvertOrder = true;
		}
	}



	//DVector Center = FVector(WorldPosition.X, WorldPosition.Y, PlanetScaleCode);

	DVector X, Y;
	DVector PositionNormal;

	//double stepSize = (double)Size * pow(2, Lod);
	double HalfSize = (Size * pow(2, Lod)) * (TriResolution - 1) * 0.5;


	int32 MinBorderY;
	int32 MinBorderX;
	int32 MaxBorderY;
	int32 MaxBorderX;


	MinBorderX = 0;
	MaxBorderX = TriResolution - 2;
	MinBorderY = 0;
	MaxBorderY = TriResolution - 2;


	ProcessVertices(MainPatch, 0, 0, TriResolution - 2, TriResolution - 2, Tangent, BiTangent, StepSize, HalfSize, uvSpacing, SubPosition,
		MinBorderY, MinBorderX, MaxBorderY, MaxBorderX, OffsetX, OffsetY, InvertOrder, PlanetScaleCode, RelativePosition, bFlatWorld, FlatWorldLimit, bLimitWorld, false);
}

