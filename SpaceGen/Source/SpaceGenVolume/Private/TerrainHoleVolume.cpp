// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "TerrainHoleVolume.h" 



FTerrainHoleVolumeData ATerrainHoleVolume::GetTerrainHoleVolumeData()
{
	FTerrainHoleVolumeData DataToReturn = FTerrainHoleVolumeData();
	DataToReturn.VolumeLocation = GetActorTransform();

	return DataToReturn;
}

void ATerrainHoleVolume::OnConstruction(const FTransform& Transform)
{
	if (PREVIOUS_Location != GetActorLocation()) 
	{
		NeedRefresh = true;
	}

	if (PREVIOUS_Rotation != GetActorRotation()) 
	{
		NeedRefresh = true;
	}

	if (PREVIOUS_Scale != GetActorScale()) 
	{
		NeedRefresh = true;
	}


	if (NeedRefresh)
	{
		PREVIOUS_Location = GetActorLocation();
		PREVIOUS_Rotation = GetActorRotation();
		PREVIOUS_Scale = GetActorScale();
	}
	

}





ATerrainHoleVolume::ATerrainHoleVolume()
{
	PrimaryActorTick.bCanEverTick = false;
}


