// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeRoot.h"

//ChunkGeneration Thread Functions

LodGenerationThread::~LodGenerationThread()
{

}





LodGenerationThread::LodGenerationThread(UWorldScapeLod* pWorldScapeLod, AWorldScapeRoot* pRoot, DVector pRelativePosition, DVector pPlanetLocation,FVector2D pSubPosition,
	double pPlanetScale, int32 pLod, float pSize, int32 pVertWidth, double pPlayerAltitude,FVector pHardenNormal, bool pFlatWorld, bool pIsInViewPort)
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
	IsInViewPort = pIsInViewPort;
}


void LodGenerationThread::CalculateNoise()
{
	DVector VertexNormal;

	FVector NoisePosition;
	FLinearColor VertexColor;

	TArray<FHeightMapVolumeDataCopy> VolumeListVar;
	TArray<FNoiseVolumeData> NoiseVolumeListVar;
	TArray<FTerrainHoleVolumeData> TerrainHoleVolumeListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost

	if (IsValid(RootRef) && IsValid(WorldScapeLodRef))
	{
		RootRef->GetVolumesData(VolumeListVar, NoiseVolumeListVar, TerrainHoleVolumeListVar, WorldScapeLodRef->GetFBox());
	}
		

	TArray<FTransform> VolumeTransformArray;
	for (int32 i = 0; i < VolumeListVar.Num(); i++)
	{
		if (VolumeListVar.IsValidIndex(i)) {
			VolumeTransformArray.Add(VolumeListVar[i].VolumeLocation);
		}
			
	}

	//UE_LOG(LogWorldScapeCore, Log, TEXT("Volume Size : %i"), VolumeListVar.Num());
	FVector VertexWorldTransformedPosition;
	FVector VertexTransformedPosition;
	for (int32 i = 0; i < MainPatch.Vertices.Num(); i++)
	{
		if (!IsValid(RootRef))
		{
			break;
		}
		//SurfacePosition
		FNoiseData Data;

		
		VertexNormal = MainPatch.Vertices[i] + RelativePosition + OffSetHelper;
			Data = RootRef->GetGroundNoise(VertexNormal, NoiseVolumeListVar, VolumeListVar, TerrainHoleVolumeListVar, VolumeTransformArray, WorldScapeLodRef->WaterBody);
		if (bFlatWorld) 
		{
			MainPatch.Vertices[i] = (DVector(0,0,1) * Data.Height + OffSetHelper + MainPatch.Vertices[i]).ToFVector();
		}
		else 
		{
			VertexNormal.Normalize();
			MainPatch.Vertices[i] = (VertexNormal * Data.Height + OffSetHelper + MainPatch.Vertices[i]).ToFVector();
		}
		float Hole = 0;
		if (Data.Hole) Hole = 1;
		VertexColor = FLinearColor(Data.HeightNormalize, Data.Temperature, Data.Humidity, Hole);
		MainPatch.VertexColors.Add(VertexColor);
	}

	for (int32 i = 0; i < PatchA.Vertices.Num(); i++)
	{

		if (!IsValid(RootRef))
		{
			break;
		}
		FNoiseData Data;

		VertexNormal = PatchA.Vertices[i] + RelativePosition + OffSetHelper;
		Data = RootRef->GetGroundNoise(VertexNormal, NoiseVolumeListVar, VolumeListVar, TerrainHoleVolumeListVar, VolumeTransformArray, WorldScapeLodRef->WaterBody);
		if (bFlatWorld) 
		{
			PatchA.Vertices[i] = (DVector(0, 0, 1) * Data.Height + PatchA.Vertices[i] + OffSetHelper).ToFVector();
		}
		else 
		{
			VertexNormal.Normalize();
			PatchA.Vertices[i] = (VertexNormal * Data.Height + PatchA.Vertices[i] + OffSetHelper).ToFVector();
		}
		float Hole = 0;
		if (Data.Hole) Hole = 1;
		VertexColor = FLinearColor(Data.HeightNormalize, Data.Temperature, Data.Humidity, Hole);
		PatchA.VertexColors.Add(VertexColor);
	}

	for (int32 i = 0; i < PatchB.Vertices.Num(); i++)
	{
		if (!IsValid(RootRef))
		{
			break;
		}
		FNoiseData Data;

		VertexNormal = PatchB.Vertices[i] + RelativePosition + OffSetHelper;
		Data = RootRef->GetGroundNoise(VertexNormal, NoiseVolumeListVar, VolumeListVar, TerrainHoleVolumeListVar, VolumeTransformArray, WorldScapeLodRef->WaterBody);
		if (bFlatWorld) 
		{
			PatchB.Vertices[i] = (DVector(0, 0, 1) * Data.Height + PatchB.Vertices[i] + OffSetHelper).ToFVector();
		}
		else 
		{
			VertexNormal.Normalize();
			PatchB.Vertices[i] = (VertexNormal * Data.Height + PatchB.Vertices[i] + OffSetHelper).ToFVector();
		}
		float Hole = 0;
		if (Data.Hole) Hole = 1;
		VertexColor = FLinearColor(Data.HeightNormalize, Data.Temperature, Data.Humidity, Hole);
		PatchB.VertexColors.Add(VertexColor);
	}
}

void LodGenerationThread::CalculateNormal(LodData& PatchData, int32 PatchID)
{
	//Patch ID Not Valid
	if (PatchID > 2 || PatchID < 0)
		return;


	TArray<FVector> Normals;
	TArray<FWorldScapeMeshTangent> Tangents;
	if (WorldScapeLodRef->WaterBody) 
	{
		FVector Normal;
		for (int32 i = 0; i < PatchData.Vertices.Num(); i++) 
		{
			if (!bFlatWorld){
				Normal = (DVector(PatchData.Vertices[i]) + RelativePosition).ToFVector();
				Normal.Normalize();
				Normals.Add(Normal);
			}
			else Normals.Add(FVector(0,0,1));
		}

	}
	else 
	{
		if (RootRef->bGenerateTangents)
		{
			// Number of triangles
			int32 NumTris = 0;
			if (PatchID == 0) NumTris = WorldScapeLodRef->Triangles.Num() / 3;
			if (PatchID == 1) NumTris = WorldScapeLodRef->TrianglesPatchA.Num() / 3;
			if (PatchID == 2) NumTris = WorldScapeLodRef->TrianglesPatchB.Num() / 3;
			// Number of verts
			const int32 NumVerts = PatchData.Vertices.Num();
			// Map of vertex to triangles in Triangles array
			TMultiMap<int32, int32> VertToTriMap;
			// Map of vertex to triangles to consider for normal calculation
			TMultiMap<int32, int32> VertToTriSmoothMap;

			// Normal/tangents for each face
			TArray<FVector> FaceTangentX, FaceTangentY, FaceTangentZ;
			FaceTangentX.AddUninitialized(NumTris);
			FaceTangentY.AddUninitialized(NumTris);
			FaceTangentZ.AddUninitialized(NumTris);

			TArray<FVector> FVerticeList;
			for (int32 i = 0; i < PatchData.Vertices.Num(); i++) 
			{
				if (PatchData.Vertices.IsValidIndex(i)) FVerticeList.Add(PatchData.Vertices[i].ToFVector());
			}


			// Iterate over triangles
			for (int32 TriIdx = 0; TriIdx < NumTris; TriIdx++)
			{
				int32 CornerIndex[3];
				FVector P[3];
				for (int32 CornerIdx = 0; CornerIdx < 3; CornerIdx++)
				{
					// Find vert index (clamped within range)

					int32 VertIndex = 0;
					if (PatchID == 0) VertIndex = FMath::Min(WorldScapeLodRef->Triangles[(TriIdx * 3) + CornerIdx], NumVerts - 1);
					if (PatchID == 1) VertIndex = FMath::Min(WorldScapeLodRef->TrianglesPatchA[(TriIdx * 3) + CornerIdx], NumVerts - 1);
					if (PatchID == 2) VertIndex = FMath::Min(WorldScapeLodRef->TrianglesPatchB[(TriIdx * 3) + CornerIdx], NumVerts - 1);
					
					CornerIndex[CornerIdx] = VertIndex;
					P[CornerIdx] = PatchData.Vertices[VertIndex].ToFVector();;

					// Find/add this vert to index buffer
					TArray<int32> VertOverlaps;
					WorldScapeHelper::FindVertOverlaps(VertIndex, FVerticeList, VertOverlaps);

					// Remember which triangles map to this vert
					VertToTriMap.AddUnique(VertIndex, TriIdx);
					VertToTriSmoothMap.AddUnique(VertIndex, TriIdx);

					// Also update map of triangles that 'overlap' this vert (ie don't match UV, but do match smoothing) and should be considered when calculating normal
					for (int32 OverlapIdx = 0; OverlapIdx < VertOverlaps.Num(); OverlapIdx++)
					{
						// For each vert we overlap..
						int32 OverlapVertIdx = VertOverlaps[OverlapIdx];

						// Add this triangle to that vert
						VertToTriSmoothMap.AddUnique(OverlapVertIdx, TriIdx);

						// And add all of its triangles to us
						TArray<int32> OverlapTris;
						VertToTriMap.MultiFind(OverlapVertIdx, OverlapTris);
						for (int32 OverlapTriIdx = 0; OverlapTriIdx < OverlapTris.Num(); OverlapTriIdx++)
						{
							VertToTriSmoothMap.AddUnique(VertIndex, OverlapTris[OverlapTriIdx]);
						}
					}
				}

				// Calculate triangle edge vectors and normal
				const FVector Edge21 = P[1] - P[2];
				const FVector Edge20 = P[0] - P[2];

				const FVector TriNormal = (Edge21 ^ Edge20).GetSafeNormal();

				if (PatchData.UV.Num() == NumVerts)
				{
					const FVector2D T1 = PatchData.UV[CornerIndex[0]];
					const FVector2D T2 = PatchData.UV[CornerIndex[1]];
					const FVector2D T3 = PatchData.UV[CornerIndex[2]];

					FMatrix	ParameterToLocal(
						FPlane(P[1].X - P[0].X, P[1].Y - P[0].Y, P[1].Z - P[0].Z, 0),
						FPlane(P[2].X - P[0].X, P[2].Y - P[0].Y, P[2].Z - P[0].Z, 0),
						FPlane(P[0].X, P[0].Y, P[0].Z, 0),
						FPlane(0, 0, 0, 1)
					);

					FMatrix ParameterToTexture(
						FPlane(T2.X - T1.X, T2.Y - T1.Y, 0, 0),
						FPlane(T3.X - T1.X, T3.Y - T1.Y, 0, 0),
						FPlane(T1.X, T1.Y, 1, 0),
						FPlane(0, 0, 0, 1)
					);

					// Use InverseSlow to catch singular matrices.  Inverse can miss this sometimes.
					const FMatrix TextureToLocal = ParameterToTexture.Inverse() * ParameterToLocal;

					FaceTangentX[TriIdx] = TextureToLocal.TransformVector(FVector(1, 0, 0)).GetSafeNormal();
					FaceTangentY[TriIdx] = TextureToLocal.TransformVector(FVector(0, 1, 0)).GetSafeNormal();
				}
				else
				{
					FaceTangentX[TriIdx] = Edge20.GetSafeNormal();
					FaceTangentY[TriIdx] = (FaceTangentX[TriIdx] ^ TriNormal).GetSafeNormal();
				}

				FaceTangentZ[TriIdx] = TriNormal;
			}

			// Arrays to accumulate tangents into
			TArray<FVector> VertexTangentXSum, VertexTangentYSum, VertexTangentZSum;
			VertexTangentXSum.AddZeroed(NumVerts);
			VertexTangentYSum.AddZeroed(NumVerts);
			VertexTangentZSum.AddZeroed(NumVerts);

			Normals.Reset();
			Normals.AddUninitialized(NumVerts);

			Tangents.Reset();
			Tangents.AddUninitialized(NumVerts);

			for (int32 VertxIdx = 0; VertxIdx < NumVerts; VertxIdx++)
			{
				TArray<int32> SmoothTris;
				VertToTriSmoothMap.MultiFind(VertxIdx, SmoothTris);

				for (int32 i = 0; i < SmoothTris.Num(); i++)
				{
					VertexTangentZSum[VertxIdx] += FaceTangentZ[SmoothTris[i]];
				}

				// Find relevant triangles for tangents
				TArray<int32> TangentTris;
				VertToTriMap.MultiFind(VertxIdx, TangentTris);

				for (int i = 0; i < TangentTris.Num(); i++)
				{
					int32 TriIdx = TangentTris[i];
					VertexTangentXSum[VertxIdx] += FaceTangentX[TriIdx];
					VertexTangentYSum[VertxIdx] += FaceTangentY[TriIdx];
				}

				FVector& TangentX = VertexTangentXSum[VertxIdx];
				FVector& TangentY = VertexTangentYSum[VertxIdx];
				FVector& TangentZ = VertexTangentZSum[VertxIdx];

				TangentZ.Normalize();

				Normals[VertxIdx] = TangentZ;

				// Use Gram-Schmidt orthogonalization to make sure X is orth with Z
				TangentX -= TangentZ * (TangentZ | TangentX);
				TangentX.Normalize();

				// See if we need to flip TangentY when generating from cross product
				const bool bFlipBitangent = ((TangentZ ^ TangentX) | TangentY) < 0.f;

				Tangents[VertxIdx] = FWorldScapeMeshTangent(TangentX, bFlipBitangent);
			}

		}
	
		else 
		{
			if (PatchData.Vertices.Num() == 0)
			{
				return;
			}
			FVector TangentX = FVector::CrossProduct(HardenNormal, FVector(0, 0, 1));

			for (int32 i = 0; i < PatchData.Vertices.Num(); i++)
			{
				Normals.Add(FVector(0));
				Tangents.Add(FWorldScapeMeshTangent(TangentX, false));
			}
			TArray<int32> TrianglesList;
			int32 TriCount = 0;
			if (IsValid(WorldScapeLodRef))
			{
				if (PatchID == 0) TrianglesList = WorldScapeLodRef->Triangles;
				else if (PatchID == 1) TrianglesList = WorldScapeLodRef->TrianglesPatchA;
				else if (PatchID == 2) TrianglesList = WorldScapeLodRef->TrianglesPatchB;

				TriCount = TrianglesList.Num();

				for (int32 i = 0; i < TriCount; i += 3)
				{

					FVector a, b, c;
					int A = 0,B = 1, C = 2;


					A = TrianglesList[i];
					B = TrianglesList[i + 1];
					C = TrianglesList[i + 2];

					if (PatchData.Vertices.IsValidIndex(A) && PatchData.Vertices.IsValidIndex(B) && PatchData.Vertices.IsValidIndex(C))
					{
						a = PatchData.Vertices[A].ToFVector();
						b = PatchData.Vertices[B].ToFVector();
						c = PatchData.Vertices[C].ToFVector();

						FVector Na = FVector::CrossProduct(c - a, b - a);

						Normals[A] += Na;
						Normals[B] += Na;
						Normals[C] += Na;
					}
				}
		
				for (int32 i = 0; i < PatchData.Vertices.Num(); i++)
				{
					Normals[i].Normalize();
					
				}
			}
		
		}
	}
	PatchData.Normals = Normals;
	PatchData.Tangents = Tangents;
}

void LodGenerationThread::SetPointPosition()
{

	DVector Normal = HardenNormal;
	
	Normal.SnapNormal(RootRef->GridAngle);
	bool bLimitWorld = RootRef->bLimitFlatWorldSize && RootRef->bFlatWorld;
	FVector2D FlatWorldLimit = RootRef->FlatWorldLimit;

	bool WaterBody = false;

	


	float uvSpacing = 1.0f / (float)TriResolution;
	double StepSize = (double)Size * pow(2, Lod);

	
	DVector Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
	DVector BiTangent = DVector::CrossProduct(Normal, Tangent);

	Tangent.Normalize();
	BiTangent.Normalize();




	double OffsetX = StepSize * 0.5;
	double OffsetY = StepSize * 0.5;

	bool InvertOrder = false;
	
	if (bFlatWorld) 
	{
		Tangent = FVector(1, 0, 0);
		BiTangent = FVector(0, 1, 0);
	}

	else if (abs(Normal.Z) > 0.9) 
	{
		Tangent = FVector(1,0,0);
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
	double HalfSize = (Size * pow(2, Lod) ) * (TriResolution-1)*0.5;


	/*
	UE_LOG(LogWorldScapeCore, Log, TEXT("Planet Scale : %f"), (float)PlanetScaleCode);
	UE_LOG(LogWorldScapeCore, Log, TEXT("Step Size : %f"), (float)stepSize);
	UE_LOG(LogWorldScapeCore, Log, TEXT("Step Size : %f"), (float)stepSize);
	*/
	int32 MinY;
	int32 MinX; 
	int32 MaxY;
	int32 MaxX;
	int32 MinBorderY;
	int32 MinBorderX;
	int32 MaxBorderY;
	int32 MaxBorderX;


	if (SubPosition.X < 0.5f) 
	{
		MinBorderX = 0;
		MaxBorderX = TriResolution - 2;

	}
	else 
	{
		MinBorderX = -1;
		MaxBorderX = TriResolution - 3;

	}
	if (SubPosition.Y < 0.5f) 
	{
		MinBorderY = 0;
		MaxBorderY = TriResolution - 2;
	}
	else 
	{
		MinBorderY = -1;
		MaxBorderY = TriResolution - 3;
	}

	if (Lod == 0) 
	{
		ProcessVertices(MainPatch, 0, 0, TriResolution - 2, TriResolution - 2, Tangent, BiTangent, StepSize, HalfSize, uvSpacing, SubPosition,
			MinBorderY, MinBorderX, MaxBorderY, MaxBorderX,OffsetX,OffsetY, InvertOrder,PlanetScaleCode, RelativePosition, bFlatWorld, FlatWorldLimit,bLimitWorld);
	}
	else 
	{
		for (int32 step = 0; step < 4; step++) 
		{
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

			ProcessVertices(MainPatch, MinY, MinX, MaxY, MaxX, Tangent, BiTangent, StepSize, HalfSize, uvSpacing, SubPosition,
				MinBorderY, MinBorderX, MaxBorderY, MaxBorderX,OffsetX, OffsetY, InvertOrder, PlanetScaleCode, RelativePosition, bFlatWorld, FlatWorldLimit, bLimitWorld);
		}
	}
	

	if (SubPosition.X < 0.5f) 
	{
		MinX = TriResolution - 3;
		MaxX = TriResolution-1;
	}
	else 
	{
		MinX = -1;
		MaxX =  1;
	}

	if (SubPosition.Y < 0.5f) 
	{
		MinY = 0;
		MaxY = TriResolution - 1;
	}
	else 
	{
		MinY = -1;
		MaxY = TriResolution - 2;
	}

	ProcessVertices(PatchA, MinY, MinX, MaxY, MaxX, Tangent, BiTangent, StepSize, HalfSize, uvSpacing, SubPosition,
		MinBorderY, MinBorderX, MaxBorderY, MaxBorderX, OffsetX, OffsetY, InvertOrder, PlanetScaleCode, RelativePosition, bFlatWorld, FlatWorldLimit, bLimitWorld);

	if (SubPosition.Y < 0.5f) 
	{
		MinY = TriResolution - 3;
		MaxY = TriResolution-1;
	}
	else 
	{
		MinY = -1;
		MaxY = 1;
	}

	MinX = 0;
	MaxX = TriResolution - 2;

	ProcessVertices(PatchB, MinY, MinX, MaxY, MaxX, Tangent, BiTangent, StepSize, HalfSize, uvSpacing, SubPosition, 
		MinBorderY, MinBorderX, MaxBorderY, MaxBorderX, OffsetX, OffsetY, InvertOrder, PlanetScaleCode, RelativePosition, bFlatWorld, FlatWorldLimit, bLimitWorld);
}

void LodGenerationThread::DoWork() 
{

	
	 //Size = (float)(FMath::Max((double)RootRef->HeightAnchor, AltitudeMultiplier) * (double)Size * (1. / (double)RootRef->HeightAnchor));

	double ChunkSize = Size * pow(2, Lod) * TriResolution;
	WorldScapeLodRef->SetData(MainPatch, ChunkSize, -1);

	SetPointPosition();
	
	bool DisplaceSurface = true;// !IsInViewPort;

	OffSetHelper = 0;

	if ( DisplaceSurface && IsValid(RootRef))
	{
		DVector OldRelativePosition = RelativePosition;

		if (!bFlatWorld)
		{
			RelativePosition.Normalize();
			RelativePosition = DVector((RelativePosition * PlanetScaleCode).ToFVector());
		}
		else 
		{
			RelativePosition = RelativePosition.ToFVector();
		}
		
		OffSetHelper = OldRelativePosition - RelativePosition;
	}
	if (IsValid(RootRef) && IsValid(WorldScapeLodRef) && RootRef->WorldScapeLodInGeneration.Contains(WorldScapeLodRef))
	{
		WorldScapeLodRef->SetRelativePosition(RelativePosition);
	}
	if (RootRef->NoiseIntensity > 0)
		CalculateNoise();
	
	CalculateNormal(MainPatch,0);
	CalculateNormal(PatchA, 1);
	CalculateNormal(PatchB, 2);
	
	if (IsValid(RootRef) && IsValid(WorldScapeLodRef)) 
	{
		WorldScapeLodRef->SetData(MainPatch, ChunkSize,0);
		WorldScapeLodRef->SetData(PatchA, ChunkSize,1);
		WorldScapeLodRef->SetData(PatchB, ChunkSize, 2);
		WorldScapeLodRef->SnappedAngle = HardenNormal;

		int AltitudeLod = (int)round(log2(PlayerDistanceToGround) - log2(RootRef->HeightAnchor)) ;

		if (AltitudeLod < 0) AltitudeLod = 0;

		WorldScapeLodRef->SetMeshLod(Lod+ AltitudeLod);

		if (RootRef->WorldScapeLodInGeneration.Contains(WorldScapeLodRef))
		{
			RootRef->WorldScapeLodInGeneration[WorldScapeLodRef] = true;
		}
		
	}

	MainPatch.CleanData();
	PatchA.CleanData();
	PatchB.CleanData();
}

void LodGenerationThread::DoWorkMain()
{
	DoWork();
	if (this)
		delete this;
}
