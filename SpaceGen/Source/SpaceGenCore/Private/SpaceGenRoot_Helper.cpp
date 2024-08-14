// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeRoot.h"


#pragma region Helper

#pragma region CoordinateConversion
DVector AWorldScapeRoot::WorldToECEF(const FVector FloatPosition)
{
	return WorldToECEF(DVector(FloatPosition));
}

DVector AWorldScapeRoot::WorldToECEF(const DVector Position)
{

	return GetTransform().InverseTransformPositionNoScale(Position.ToFVector());
}


DVector AWorldScapeRoot::ECEFToWorld(const FVector FloatPosition)
{
	return ECEFToWorld(DVector(FloatPosition));
}

DVector AWorldScapeRoot::ECEFToWorld(const DVector Position)
{
	if (IsValid(this))
	{
		return GetTransform().TransformPositionNoScale(Position.ToFVector());
	}
	//This is where curse is starting :(
	return NULL;
}

DVector AWorldScapeRoot::ECEFToProjectedPos(const DVector Position)
{
	DVector PlayerPositionNormal = WorldScapeWorld::GetUpVector(Position, bFlatWorld);
	return WorldScapeWorld::GetProjectedPos(Position, GridAngle, PlanetScaleCode,
		bFlatWorld, PlayerPositionNormal);
}

#pragma endregion


void AWorldScapeRoot::UpdateTerrainMaterial(const FWSMaterialLodArray pMaterialLodArray)
{
	MaterialTerrainInstances.Empty();
	
	TerrainMaterial = pMaterialLodArray;
	for (int32 i = 0; i < WorldScapeLod.Num(); i++)
	{
		WorldScapeLod[i]->MaterialLodArray = TerrainMaterial;

		UMaterialInterface* MaterialToUse = WorldScapeLod[i]->MaterialLodArray.DefaultMaterial;

		for (int j = 0; j < WorldScapeLod[i]->MaterialLodArray.MaterialsLod.Num(); j++)
		{
			if (WorldScapeLod[i]->MaterialLodArray.MaterialsLod[j].LodRange.Contains(WorldScapeLod[i]->MaterialLod))
			{
				MaterialToUse = WorldScapeLod[i]->MaterialLodArray.MaterialsLod[j].Material;
				break;
			}
		}
		if (MaterialToUse != nullptr)
		{
			UMaterialInstanceDynamic* MID = WorldScapeLod[i]->Mesh->CreateDynamicMaterialInstance(0, MaterialToUse);
			WorldScapeLod[i]->Mesh->SetMaterial(0, MID);
			if (WorldScapeLod[i]->Mesh->GetNumSections() > 0)
			{
				WorldScapeLod[i]->Mesh->SetMaterial(1, MID);
				WorldScapeLod[i]->Mesh->SetMaterial(2, MID);
			}
			MID->SetVectorParameterValue("PlanetLocation", PlanetLocation.ToFVector());
			MaterialTerrainInstances.Add(MID);
		}
		
	}
}

void AWorldScapeRoot::UpdateOceanMaterial(const FWSMaterialLodArray pMaterialLodArray)
{
	MaterialOceanInstances.Empty();
	OceanMaterial = pMaterialLodArray;
	for (int32 i = 0; i < WorldScapeLodOcean.Num(); i++)
	{
		WorldScapeLodOcean[i]->MaterialLodArray = OceanMaterial;

		UMaterialInterface* MaterialToUse = WorldScapeLodOcean[i]->MaterialLodArray.DefaultMaterial;

		for (int j = 0; j < WorldScapeLodOcean[i]->MaterialLodArray.MaterialsLod.Num(); j++)
		{
			if (WorldScapeLodOcean[i]->MaterialLodArray.MaterialsLod[j].LodRange.Contains(WorldScapeLodOcean[i]->MaterialLod))
			{
				MaterialToUse = WorldScapeLodOcean[i]->MaterialLodArray.MaterialsLod[j].Material;
				break;
			}
		}
		if (MaterialToUse != nullptr)
		{ 
			UMaterialInstanceDynamic* MID = WorldScapeLodOcean[i]->Mesh->CreateDynamicMaterialInstance(0, MaterialToUse);
			WorldScapeLodOcean[i]->Mesh->SetMaterial(0, MID);
			if ( WorldScapeLodOcean[i]->Mesh->GetNumSections() > 1)
			{
				WorldScapeLodOcean[i]->Mesh->SetMaterial(1, MID);
				WorldScapeLodOcean[i]->Mesh->SetMaterial(2, MID);
			}

			MID->SetVectorParameterValue("PlanetLocation", PlanetLocation.ToFVector());
			MaterialOceanInstances.Add(MID);
		}
	}

}

#pragma region NormalTangentBitangentGetter

FVector AWorldScapeRoot::GetPawnNormal(const FVector PawnWorldPosition)
{

	DVector Normal = PawnWorldPosition - PlanetLocation.ToFVector();
	Normal.Normalize();
	return Normal.ToFVector();
}

FVector AWorldScapeRoot::GetPawnSnappedNormal(const FVector PawnWorldPosition)
{

	DVector Normal = GetPawnNormal(PawnWorldPosition);
	Normal.SnapNormal(GridAngle);
	return Normal.ToFVector();
}

FVector AWorldScapeRoot::GetPawnTangent(const FVector PawnWorldPosition)
{
	DVector Tangent;
	DVector Normal = GetPawnNormal(PawnWorldPosition);
	Normal.SnapNormal(GridAngle);

	if (Normal == DVector(0, 0, 1)) {
		return FVector(1, 0, 0);
	}
	else {
		Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		Tangent.Normalize();
	}
	return Tangent.ToFVector();
}

FVector AWorldScapeRoot::GetPawnBiTangent(const FVector PawnWorldPosition)
{
	DVector Tangent;
	DVector BiTangent;
	DVector Normal = GetPawnNormal(PawnWorldPosition);
	Normal.SnapNormal(GridAngle);
	if (abs(Normal.Z) > 0.90) {
		return FVector(0, 1, 0);
	}
	else {
		Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		Tangent.Normalize();
		BiTangent = DVector::CrossProduct(Normal, Tangent);
		BiTangent.Normalize();
	}
	return BiTangent.ToFVector();
}

FVector AWorldScapeRoot::GetTangentFromECEFPoint(const FVector ECEFPosition)
{
	return WorldScapeWorld::GetTangent(ECEFPosition, GridAngle, bFlatWorld);
}

FVector AWorldScapeRoot::GetBiTangentFromECEFPoint(const FVector ECEFPosition)
{
	return WorldScapeWorld::GetBiTangent(ECEFPosition, GridAngle, bFlatWorld);
}
#pragma endregion

#pragma region HeightAltitudeDistanceGetter
float AWorldScapeRoot::GetPawnDistanceFromGround(const FVector PawnPosition, bool ECEFCoordinate)
{
	return GetPawnDistanceFromGround(DVector(PawnPosition), ECEFCoordinate);
}

float AWorldScapeRoot::GetPawnDistanceFromGround(const DVector PawnPosition, bool ECEFCoordinate)
{
	FNoiseData NData;
	DVector ECEFPosition = PawnPosition;

	if (!ECEFCoordinate)
	{
		ECEFPosition = WorldToECEF(ECEFPosition);
	}

	NData = GetGroundNoise(ECEFPosition.ToFVector(),false,true);

	return WorldScapeWorld::GetPawnDistanceFromGround(ECEFPosition, bFlatWorld, NData, PlanetScaleCode);
}

float AWorldScapeRoot::GetGroundHeight(const FVector PawnWorldPosition, bool Water)
{
	FNoiseData NData;

	DVector ECEFPosition = WorldToECEF(DVector(PawnWorldPosition));

	NData = GetGroundNoise(ECEFPosition.ToFVector(), Water);

	return NData.Height;
}

float AWorldScapeRoot::GetGroundHeightNormalize(const FVector PawnWorldPosition, bool Water)
{
	FNoiseData NData;

	DVector ECEFPosition = WorldToECEF(DVector(PawnWorldPosition));

	NData = GetGroundNoise(ECEFPosition.ToFVector(), Water);

	return NData.HeightNormalize;
}

float AWorldScapeRoot::GetHeight(const FVector PawnWorldPosition, bool Water)
{
	FNoiseData NData;

	DVector ECEFPosition = WorldToECEF(DVector(PawnWorldPosition));

	NData = GetNoise(ECEFPosition.ToFVector(), Water);

	return NData.Height;
}

float AWorldScapeRoot::GetHeightNormalize(const FVector PawnWorldPosition, bool Water)
{
	FNoiseData NData;

	DVector ECEFPosition = WorldToECEF(DVector(PawnWorldPosition));

	NData = GetNoise(ECEFPosition.ToFVector(), Water);

	return NData.HeightNormalize;
}

float AWorldScapeRoot::GetPawnAltitude(const FVector PawnWorldPosition, const bool WaterNoiseHeight)
{
	DVector ECEFPosition = WorldToECEF(DVector(PawnWorldPosition));

	float oceanHeight = OceanHeight;

	if (WaterNoiseHeight)
	{
		oceanHeight = GetGroundHeight(PawnWorldPosition, true);
	}

	return WorldScapeWorld::GetPawnAltitude(ECEFPosition, bFlatWorld, PlanetScaleCode, oceanHeight);
}
#pragma endregion

float AWorldScapeRoot::GetLattitude(const FVector Position)
{
	return GetLattitude(DVector(Position));
}

double AWorldScapeRoot::GetLattitude(const DVector Position)
{
	return WorldScapeWorld::GetLattitude(Position, LattitudeRotation, bFlatWorld, PlanetScaleCode);
}

#pragma region WorldScapeVolumeGetter

TArray<AHeightMapVolume*> AWorldScapeRoot::GetHeightMapVolumeList(const DVector Position)
{
	TArray<AHeightMapVolume*> HeightVolumeListVar;

	//Make sure only Volumes touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && HeightMapVolumeList.Num() > 0))
	{
		return HeightVolumeListVar;
	}

	if (HeightMapVolumeList.Num() < 3) {
		return HeightMapVolumeList;
	}

	for (int32 i = 0; i < HeightMapVolumeList.Num(); i++)
	{
		if (!(HeightMapVolumeList.IsValidIndex(i) && IsValid(HeightMapVolumeList[i]) && HeightMapVolumeList[i]->CanSample()))
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(HeightMapVolumeList[i]->GetActorLocation()), HeightMapVolumeList[i]->GetActorScale() * 500))
		{
			HeightVolumeListVar.Add(HeightMapVolumeList[i]);
		}
	}
	return HeightVolumeListVar;
}

TArray<AHeightMapVolume*> AWorldScapeRoot::GetHeightMapVolumeList(const FBox pFBox)
{
	TArray<AHeightMapVolume*> VolumeListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && HeightMapVolumeList.Num() > 0))
	{
		return VolumeListVar;
	}

	if (HeightMapVolumeList.Num() < 3) {
		return HeightMapVolumeList;
	}


	if (!GetTransform().GetRotation().Euler().IsNearlyZero() ) {
		return HeightMapVolumeList;
	}

	for (int32 i = 0; i < HeightMapVolumeList.Num(); i++)
	{
		if (!(HeightMapVolumeList.IsValidIndex(i) && IsValid(HeightMapVolumeList[i]) && HeightMapVolumeList[i]->CanSample()))
		{
			continue;
		}


		float VolumeSize = HeightMapVolumeList[i]->GetActorScale().X * 250;
		FBox VolumeBox = FBox(WorldToECEF(DVector(HeightMapVolumeList[i]->GetActorLocation()) - DVector(VolumeSize)).ToFVector(), WorldToECEF(DVector(HeightMapVolumeList[i]->GetActorLocation()) + DVector(VolumeSize)).ToFVector());

		if (pFBox.Intersect(VolumeBox))	VolumeListVar.Add(HeightMapVolumeList[i]);
		/*
		else 
			UE_LOG(LogWorldScapeCore, Log, TEXT("\npFBox : %s\nVolumeBox : %s"), *pFBox.ToString(),*VolumeBox.ToString());
			*/
	}

	return VolumeListVar;
}

TArray<ANoiseVolume*> AWorldScapeRoot::GetNoiseVolumeList(const DVector Position)
{
	TArray<ANoiseVolume*> NoiseVolumeListVar;

	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && NoiseVolumeList.Num() > 0))
	{
		return NoiseVolumeListVar;
	}

	if (NoiseVolumeList.Num() < 3)
	{
		return NoiseVolumeList;
	}

	for (int32 i = 0; i < NoiseVolumeList.Num(); i++)
	{
		if (!(NoiseVolumeList.IsValidIndex(i) && IsValid(NoiseVolumeList[i]) && NoiseVolumeList[i]->IsValidNoise()))
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(NoiseVolumeList[i]->GetActorLocation()), HeightMapVolumeList[i]->GetActorScale() * 500))
		{
			NoiseVolumeListVar.Add(NoiseVolumeList[i]);
		}
	}

	return NoiseVolumeListVar;
}

TArray<ANoiseVolume*> AWorldScapeRoot::GetNoiseVolumeList(const FBox pFBox)
{

	TArray<ANoiseVolume*> NoiseVolumeListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && NoiseVolumeList.Num() > 0))
	{
		return NoiseVolumeListVar;
	}

	if (NoiseVolumeList.Num() < 3)
	{
		return NoiseVolumeList;
	}

	if (!GetTransform().GetRotation().Euler().IsNearlyZero()) {
		return NoiseVolumeList;
	}

	for (int32 i = 0; i < NoiseVolumeList.Num(); i++)
	{
		if (!(NoiseVolumeList.IsValidIndex(i) && IsValid(NoiseVolumeList[i]) && NoiseVolumeList[i]->IsValidNoise()))
		{
			continue;
		}

		float VolumeSize = NoiseVolumeList[i]->GetActorScale().X * 250;
		FBox VolumeBox = FBox(WorldToECEF(DVector(NoiseVolumeList[i]->GetActorLocation()) - DVector(VolumeSize)).ToFVector(), WorldToECEF(DVector(NoiseVolumeList[i]->GetActorLocation()) + DVector(VolumeSize)).ToFVector());

		if (pFBox.Intersect(VolumeBox))
		{
			NoiseVolumeListVar.Add(NoiseVolumeList[i]);
		}

	}
	return NoiseVolumeListVar;
}

TArray<AFoliageMaskVolume*> AWorldScapeRoot::GetFoliageMaskList(const DVector Position)
{

	TArray<AFoliageMaskVolume*> FoliageMaskListVar;

	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (bEnableVolumes && FoliageMaskList.Num() > 0)
	{
		return FoliageMaskList;
	}

	if (FoliageMaskList.Num() < 3)
	{
		return FoliageMaskList;
	}

	FoliageMaskListVar.Empty();
	for (int32 i = 0; i < FoliageMaskList.Num(); i++)
	{
		if (!(FoliageMaskList.IsValidIndex(i) && IsValid(FoliageMaskList[i])))
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(FoliageMaskList[i]->GetActorLocation()), HeightMapVolumeList[i]->GetActorScale() * 500))
		{
			FoliageMaskListVar.Add(FoliageMaskList[i]);
		}
	}

	return FoliageMaskListVar;
}

TArray<AFoliageMaskVolume*> AWorldScapeRoot::GetFoliageMaskList(const FBox pFBox)
{

	TArray<AFoliageMaskVolume*> FoliageMaskListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (bEnableVolumes && FoliageMaskList.Num() > 0)
	{
		return FoliageMaskList;
	}

	if (FoliageMaskList.Num() < 3)
	{
		return FoliageMaskList;
	}

	if (!GetTransform().GetRotation().Euler().IsNearlyZero()) {
		return FoliageMaskList;
	}

	FoliageMaskListVar.Empty();
	for (int32 i = 0; i < FoliageMaskList.Num(); i++)
	{
		if (!(FoliageMaskList.IsValidIndex(i) && IsValid(FoliageMaskList[i])))
		{
			continue;
		}

		float VolumeSize = FoliageMaskList[i]->GetActorScale().X * 250;
		FBox VolumeBox = FBox(WorldToECEF(DVector(FoliageMaskList[i]->GetActorLocation()) - DVector(VolumeSize)).ToFVector(), WorldToECEF(DVector(FoliageMaskList[i]->GetActorLocation()) + DVector(VolumeSize)).ToFVector());
		if (pFBox.Intersect(VolumeBox))
		{
			FoliageMaskListVar.Add(FoliageMaskList[i]);
		}
	}
	return FoliageMaskListVar;
}


void AWorldScapeRoot::GetVolumesData(
	TArray<FHeightMapVolumeDataCopy>& HeightMapVolumesData,
	TArray<FNoiseVolumeData>& NoiseVolumesData,
	TArray<FTerrainHoleVolumeData>& TerrainHoleVolumesData,
	const FBox pFBox
)
{
	TArray<FFoliageMaskVolumeData> FoliageMaskVolumesData;
	GetVolumesData(HeightMapVolumesData, NoiseVolumesData, FoliageMaskVolumesData, TerrainHoleVolumesData, pFBox);
	FoliageMaskVolumesData.Empty();
}
void AWorldScapeRoot::GetVolumesData(
	TArray<FHeightMapVolumeDataCopy>& HeightMapVolumesData,
	TArray<FNoiseVolumeData>& NoiseVolumesData,
	TArray<FFoliageMaskVolumeData>& FoliageMaskVolumesData,
	TArray<FTerrainHoleVolumeData>& TerrainHoleVolumesData,
	const FBox pFBox
) 
{
	TArray<AHeightMapVolume*> HeightVolumeOriginListVar = GetHeightMapVolumeList(pFBox);
	TArray<ANoiseVolume*> NoiseVolumeOirignListVar = GetNoiseVolumeList(pFBox);
	TArray<AFoliageMaskVolume*> FoliageVolumeOirignListVar = GetFoliageMaskList(pFBox);
	TArray<ATerrainHoleVolume*> TerrainHoleOirignListVar = GetTerrainHoleList(pFBox);

	for (int32 i = 0; i < NoiseVolumeOirignListVar.Num(); i++)
	{
		if (NoiseVolumeOirignListVar.IsValidIndex(i) && IsValid(NoiseVolumeOirignListVar[i]))
			NoiseVolumesData.Add(NoiseVolumeOirignListVar[i]->GetNoiseVolumeData());
	}
	for (int32 i = 0; i < HeightVolumeOriginListVar.Num(); i++)
	{
		if (HeightVolumeOriginListVar.IsValidIndex(i) && IsValid(HeightVolumeOriginListVar[i]))
			HeightMapVolumesData.Add(HeightVolumeOriginListVar[i]->GetHeightMapVolumeData());
	}
	for (int32 i = 0; i < FoliageVolumeOirignListVar.Num(); i++)
	{
		if (FoliageVolumeOirignListVar.IsValidIndex(i) && IsValid(FoliageVolumeOirignListVar[i]))
			FoliageMaskVolumesData.Add(FoliageVolumeOirignListVar[i]->GetFoliageMaskVolumeData());
	}
	for (int32 i = 0; i < TerrainHoleOirignListVar.Num(); i++)
	{
		if (TerrainHoleOirignListVar.IsValidIndex(i) && IsValid(TerrainHoleOirignListVar[i]))
			TerrainHoleVolumesData.Add(TerrainHoleOirignListVar[i]->GetTerrainHoleVolumeData());
	}

	HeightVolumeOriginListVar.Empty();
	NoiseVolumeOirignListVar.Empty();
	FoliageVolumeOirignListVar.Empty();
	TerrainHoleOirignListVar.Empty();

}



TArray<FHeightMapVolumeDataCopy> AWorldScapeRoot::GetHeightMapVolumeDataCopyList(const DVector Position)
{
	TArray<FHeightMapVolumeDataCopy> HeightVolumeListVar;

	//Make sure only Volumes touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && HeightMapVolumeList.Num() > 0))
	{
		return HeightVolumeListVar;
	}

	if (HeightMapVolumeList.Num() < 3) {
		return HeightMapVolumeDataList;
	}

	for (int32 i = 0; i < HeightMapVolumeDataList.Num(); i++)
	{
		if (!(HeightMapVolumeDataList.IsValidIndex(i) && HeightMapVolumeDataList[i].CanSample()))
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(HeightMapVolumeDataList[i].VolumeLocation.GetLocation()), HeightMapVolumeDataList[i].VolumeLocation.GetScale3D() * 500))
		{
			HeightVolumeListVar.Add(HeightMapVolumeDataList[i]);
		}
	}
	return HeightVolumeListVar;
}

TArray<FHeightMapVolumeDataCopy> AWorldScapeRoot::GetHeightMapVolumeDataCopyList(const FBox pFBox)
{
	TArray<FHeightMapVolumeDataCopy> VolumeListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && HeightMapVolumeList.Num() > 0))
	{
		return VolumeListVar;
	}

	if (HeightMapVolumeList.Num() < 3) {
		return HeightMapVolumeDataList;
	}

	if (!GetTransform().GetRotation().Euler().IsNearlyZero()) {
		return HeightMapVolumeDataList;
	}

	for (int32 i = 0; i < HeightMapVolumeList.Num(); i++)
	{
		if (!HeightMapVolumeDataList.IsValidIndex(i)  && HeightMapVolumeDataList[i].CanSample())
		{
			continue;
		}


		float VolumeSize = HeightMapVolumeDataList[i].VolumeLocation.GetScale3D().X * 250;
		FBox VolumeBox = FBox(WorldToECEF(DVector(HeightMapVolumeList[i]->GetActorLocation()) - DVector(VolumeSize)).ToFVector(), WorldToECEF(DVector(HeightMapVolumeDataList[i].VolumeLocation.GetLocation()) + DVector(VolumeSize)).ToFVector());

		if (pFBox.Intersect(VolumeBox))	VolumeListVar.Add(HeightMapVolumeDataList[i]);
	}

	return VolumeListVar;
}

TArray<FNoiseVolumeData> AWorldScapeRoot::GetNoiseVolumeDataList(const DVector Position)
{
	TArray<FNoiseVolumeData> NoiseVolumeListVar;

	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && NoiseVolumeList.Num() > 0))
	{
		return NoiseVolumeListVar;
	}

	if (NoiseVolumeList.Num() < 3)
	{
		return NoiseVolumeDataList;
	}

	for (int32 i = 0; i < NoiseVolumeDataList.Num(); i++)
	{
		if (!NoiseVolumeDataList.IsValidIndex(i)  && NoiseVolumeDataList[i].IsValidNoise())
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(NoiseVolumeDataList[i].VolumeLocation.GetLocation()), NoiseVolumeDataList[i].VolumeLocation.GetScale3D() * 500))
		{
			NoiseVolumeListVar.Add(NoiseVolumeDataList[i]);
		}
	}

	return NoiseVolumeListVar;
}

TArray<FNoiseVolumeData> AWorldScapeRoot::GetNoiseVolumeDataList(const FBox pFBox)
{

	TArray<FNoiseVolumeData> NoiseVolumeListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (!(bEnableVolumes && NoiseVolumeList.Num() > 0))
	{
		return NoiseVolumeListVar;
	}

	if (NoiseVolumeList.Num() < 3)
	{
		return NoiseVolumeDataList;
	}

	if (!GetTransform().GetRotation().Euler().IsNearlyZero()) {
		return NoiseVolumeDataList;
	}

	for (int32 i = 0; i < NoiseVolumeList.Num(); i++)
	{
		if (!NoiseVolumeDataList.IsValidIndex(i) && NoiseVolumeDataList[i].IsValidNoise())
		{
			continue;
		}

		float VolumeSize = NoiseVolumeDataList[i].VolumeLocation.GetScale3D().X * 250;
		FBox VolumeBox = FBox(WorldToECEF(DVector(NoiseVolumeList[i]->GetActorLocation()) - DVector(VolumeSize)).ToFVector(), WorldToECEF(DVector(NoiseVolumeDataList[i].VolumeLocation.GetLocation()) + DVector(VolumeSize)).ToFVector());

		if (pFBox.Intersect(VolumeBox))
		{
			NoiseVolumeListVar.Add(NoiseVolumeDataList[i]);
		}

	}
	return NoiseVolumeListVar;
}

TArray<FFoliageMaskVolumeData> AWorldScapeRoot::GetFoliageMaskVolumeDataList(const DVector Position)
{

	TArray<FFoliageMaskVolumeData> FoliageMaskListVar;

	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (bEnableVolumes && FoliageMaskDataList.Num() > 0)
	{
		return FoliageMaskDataList;
	}

	if (FoliageMaskDataList.Num() < 3)
	{
		return FoliageMaskDataList;
	}

	FoliageMaskListVar.Empty();
	for (int32 i = 0; i < FoliageMaskDataList.Num(); i++)
	{
		if (!FoliageMaskDataList.IsValidIndex(i) )
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(FoliageMaskDataList[i].VolumeLocation.GetLocation()), FoliageMaskDataList[i].VolumeLocation.GetScale3D() * 500))
		{
			FoliageMaskListVar.Add(FoliageMaskDataList[i]);
		}
	}

	return FoliageMaskListVar;
}

TArray<FFoliageMaskVolumeData> AWorldScapeRoot::GetFoliageMaskVolumeDataList(const FBox pFBox)
{

	TArray<FFoliageMaskVolumeData> FoliageMaskListVar;
	//Make sure only Volume touching the chunk are proceced to reduce CPU Cost
	if (bEnableVolumes && FoliageMaskDataList.Num() > 0)
	{
		return FoliageMaskDataList;
	}

	if (FoliageMaskDataList.Num() < 3)
	{
		return FoliageMaskDataList;
	}

	if (!GetTransform().GetRotation().Euler().IsNearlyZero()) {
		return FoliageMaskDataList;
	}

	FoliageMaskListVar.Empty();
	for (int32 i = 0; i < FoliageMaskList.Num(); i++)
	{
		if (!FoliageMaskDataList.IsValidIndex(i))
		{
			continue;
		}

		float VolumeSize = FoliageMaskDataList[i].VolumeLocation.GetScale3D().X * 250;
		FBox VolumeBox = FBox(WorldToECEF(DVector(FoliageMaskDataList[i].VolumeLocation.GetLocation()) - DVector(VolumeSize)).ToFVector(), WorldToECEF(DVector(FoliageMaskList[i]->GetActorLocation()) + DVector(VolumeSize)).ToFVector());
		if (pFBox.Intersect(VolumeBox))
		{
			FoliageMaskListVar.Add(FoliageMaskDataList[i]);
		}
	}
	return FoliageMaskListVar;
}




#pragma endregion

FFoliagesSector AWorldScapeRoot::GetFoliageSector(const DVector ECEFPosition, const int SectorLod)
{
	double SectorSize = PlanetScaleCode * pow(0.5, SectorLod);

	DVector GridPosition = DVector(
		round(ECEFPosition.X / SectorSize) * SectorSize,
		round(ECEFPosition.Y / SectorSize) * SectorSize,
		round(ECEFPosition.Z / SectorSize) * SectorSize);
	if (bFlatWorld) GridPosition.Z = 0;

	return FFoliagesSector(GridPosition, SectorSize);
}

TArray<FFoliagesSector> AWorldScapeRoot::GetSurroundingFoliageSector(const DVector ECEFPosition, const  double pSectorSize)
{
	TArray<FFoliagesSector> SectorList;
	double SectorSize = pSectorSize;

	DVector GridPosition = DVector(
		round(ECEFPosition.X / SectorSize) * SectorSize,
		round(ECEFPosition.Y / SectorSize) * SectorSize,
		round(ECEFPosition.Z / SectorSize) * SectorSize);

	if (bFlatWorld) {
		GridPosition.Z = 0;
		SectorList.Add(FFoliagesSector(GridPosition, SectorSize));

		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, 0, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, 0, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, -SectorSize, 0), SectorSize));

		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, -SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, -SectorSize, 0), SectorSize));
	}
	else
	{
		SectorList.Add(FFoliagesSector(GridPosition, SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, 0, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, 0, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, -SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, -SectorSize, 0), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, -SectorSize, 0), SectorSize));

		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, 0, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, 0, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, 0, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, SectorSize, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, -SectorSize, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, SectorSize, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, SectorSize, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, -SectorSize, SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, -SectorSize, SectorSize), SectorSize));

		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, 0, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, 0, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, 0, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, SectorSize, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(0, -SectorSize, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, SectorSize, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, SectorSize, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(SectorSize, -SectorSize, -SectorSize), SectorSize));
		SectorList.Add(FFoliagesSector(GridPosition + DVector(-SectorSize, -SectorSize, -SectorSize), SectorSize));
	}

	return SectorList;
}

TArray<ATerrainHoleVolume*> AWorldScapeRoot::GetTerrainHoleList(DVector Position)
{

	TArray<ATerrainHoleVolume*> TerrainHoleListVar;

	//Make sure only Influencer touching the chunk are proceced to reduce CPU Cost
	if (bEnableVolumes && TerrainHoleList.Num() > 0)
	{
		return TerrainHoleList;
	}

	if (TerrainHoleList.Num() < 3)
	{
		return TerrainHoleList;
	}

	TerrainHoleListVar.Empty();
	for (int32 i = 0; i < TerrainHoleList.Num(); i++)
	{
		if (!(TerrainHoleList.IsValidIndex(i) && IsValid(TerrainHoleList[i])))
		{
			continue;
		}

		if (WorldScapeHelper::IsPointInCube(Position, WorldToECEF(TerrainHoleList[i]->GetActorLocation()), TerrainHoleList[i]->GetActorScale().X * 250))
		{
			TerrainHoleListVar.Add(TerrainHoleList[i]);
		}
	}

	return TerrainHoleListVar;
}

TArray<ATerrainHoleVolume*> AWorldScapeRoot::GetTerrainHoleList(FBox pFBox)
{

	TArray<ATerrainHoleVolume*> TerrainHoleListVar;
	//Make sure only Influencer touching the chunk are proceced to reduce CPU Cost
	if (bEnableVolumes && TerrainHoleList.Num() > 0)
	{
		return TerrainHoleList;
	}

	if (TerrainHoleList.Num() < 3)
	{
		return TerrainHoleList;
	}

	TerrainHoleListVar.Empty();
	for (int32 i = 0; i < TerrainHoleList.Num(); i++)
	{
		if (!(TerrainHoleList.IsValidIndex(i) && IsValid(TerrainHoleList[i])))
		{
			continue;
		}

		float InfluencerSize = TerrainHoleList[i]->GetActorScale().X * 250;
		FBox InfluencerBox = FBox(WorldToECEF(DVector(TerrainHoleList[i]->GetActorLocation()) - DVector(InfluencerSize)).ToFVector(), WorldToECEF(DVector(TerrainHoleList[i]->GetActorLocation()) + DVector(InfluencerSize)).ToFVector());
		if (pFBox.Intersect(InfluencerBox))
		{
			TerrainHoleListVar.Add(TerrainHoleList[i]);
		}
	}
	return TerrainHoleListVar;
}


void convert_xyz_to_cube_uv(DVector Position, int *index, FDVector2D *Uv)
{
	const DVector AbsPosition = DVector(abs(Position.X), abs(Position.Y),abs(Position.Z));

	const int IsXPositive = AbsPosition.X > 0 ? 1 : 0;
	const int IsYPositive =  AbsPosition.Y > 0 ? 1 : 0;
	const int IsZPositive =  AbsPosition.Z > 0 ? 1 : 0;
  
	double MaxAxis = 0;
	double Uc = 0;
	double VC = 0;
  
	// POSITIVE X
	if (IsXPositive && AbsPosition.X >= AbsPosition.Y && AbsPosition.X >= AbsPosition.Z) {
		// u (0 to 1) goes from +z to -z
		// v (0 to 1) goes from -y to +y
		MaxAxis = AbsPosition.X;
		Uc = -Position.Z;
		VC = Position.Y;
		*index = 0;
	}
	// NEGATIVE X
	if (!IsXPositive && AbsPosition.X >= AbsPosition.Y && AbsPosition.X >= AbsPosition.Z) {
		// u (0 to 1) goes from -z to +z
		// v (0 to 1) goes from -y to +y
		MaxAxis = AbsPosition.X;
		Uc = Position.Z;
		VC = Position.Y;
		*index = 1;
	}
	// POSITIVE Y
	if (IsYPositive && AbsPosition.Y >= AbsPosition.X && AbsPosition.Y >= AbsPosition.Z) {
		// u (0 to 1) goes from -x to +x
		// v (0 to 1) goes from +z to -z
		MaxAxis = AbsPosition.Y;
		Uc = Position.X;
		VC = -Position.Z;
		*index = 2;
	}
	// NEGATIVE Y
	if (!IsYPositive && AbsPosition.Y >= AbsPosition.X && AbsPosition.Y >= AbsPosition.Z) {
		// u (0 to 1) goes from -x to +x
		// v (0 to 1) goes from -z to +z
		MaxAxis = AbsPosition.Y;
		Uc = Position.X;
		VC = Position.Z;
		*index = 3;
	}
	// POSITIVE Z
	if (IsZPositive && AbsPosition.Z >= AbsPosition.X && AbsPosition.Z >= AbsPosition.Y) {
		// u (0 to 1) goes from -x to +x
		// v (0 to 1) goes from -y to +y
		MaxAxis = AbsPosition.Z;
		Uc = Position.X;
		VC = Position.Y;
		*index = 4;
	}
	// NEGATIVE Z
	if (!IsZPositive && AbsPosition.Z >= AbsPosition.X && AbsPosition.Z >= AbsPosition.Y) {
		// u (0 to 1) goes from +x to -x
		// v (0 to 1) goes from -y to +y
		MaxAxis = AbsPosition.Z;
		Uc = -Position.X;
		VC = Position.Y;
		*index = 5;
	}

	// Convert range from -1 to 1 to 0 to 1
	Uv->X = 0.5f * (Uc / MaxAxis + 1.0f);
	Uv->Y = 0.5f * (VC / MaxAxis + 1.0f);
}

FDVector2D AWorldScapeRoot::GetPlanetaryCoordinate(const DVector Position) const
{
	FVector NormalizedPosition = Position.ToFVector();
	NormalizedPosition.Normalize();

	NormalizedPosition = LattitudeRotation.Quaternion() * NormalizedPosition;

	const double u = 0.5 + atan2(NormalizedPosition.X,NormalizedPosition.Y)/(2*3.1415926535897932384626433832795);
	const double v = 0.5 - asin(NormalizedPosition.Z)/3.1415926535897932384626433832795;
	
	return FDVector2D(u,v);
}

float AWorldScapeRoot::GetPlanetaryDataFromPosition(FVector Position) const
{
	return PlanetaryHeightMap->GetSampledValue(FDVector2D(GetPlanetaryCoordinate( Position)),EWSHeightMask::Height, SamplingMethod);
}

#pragma endregion


