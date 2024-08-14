// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "NoiseVolume.h" 

void ANoiseVolume::OnConstruction(const FTransform& Transform)
{
	CustomVolumeNoise.SetSeed(Seed);

	//ReloadPlanet = false;
	if (PREVIOUS_NoiseScale != NoiseScale) {
		NeedRefresh = true;
		PREVIOUS_NoiseScale = NoiseScale;
	}
	if (PREVIOUS_Seed != Seed) {
		NeedRefresh = true;
		PREVIOUS_Seed = Seed;
	}
	if (PREVIOUS_NoiseIntensity != NoiseIntensity) {
		NeedRefresh = true;
		PREVIOUS_NoiseIntensity = NoiseIntensity;
	}
	if (PREVIOUS_WorldScapeNoise != WorldScapeNoise) {
		NeedRefresh = true;
		PREVIOUS_WorldScapeNoise = WorldScapeNoise;
	}
	if (PREVIOUS_NoiseOffset != NoiseOffset) {
		NeedRefresh = true;
		PREVIOUS_NoiseOffset = NoiseOffset;
	}
	if (PREVIOUS_EdgeFalloff != EdgeFalloff) {
		NeedRefresh = true;
		PREVIOUS_EdgeFalloff = EdgeFalloff;
	}
	if (PREVIOUS_Location != GetActorLocation()) {
		PREVIOUS_Location = GetActorLocation();
		NeedRefresh = true;
	}
	if (PREVIOUS_Rotation != GetActorRotation()) {
		PREVIOUS_Rotation = GetActorRotation();
		NeedRefresh = true;
	}
	if (PREVIOUS_Scale != GetActorScale()) {
		PREVIOUS_Scale = GetActorScale();
		NeedRefresh = true;
	}
}
bool ANoiseVolume::IsValidNoise() {
	return IsValid(WorldScapeNoise);
}

FNoiseVolumeData ANoiseVolume::GetNoiseVolumeData()
{
	FNoiseVolumeData DataToReturn = FNoiseVolumeData();
	DataToReturn.WorldScapeNoise = WorldScapeNoise;
	DataToReturn.EdgeFalloff = EdgeFalloff;
	DataToReturn.NoiseScale = NoiseScale;
	DataToReturn.NoiseIntensity = NoiseIntensity;
	DataToReturn.NoiseHeightOffset = NoiseHeightOffset;
	DataToReturn.Seed = Seed;
	DataToReturn.CustomVolumeNoise = CustomVolumeNoise;
	DataToReturn.NoiseOffset = DataToReturn.NoiseOffset;
	DataToReturn.VolumeLocation = GetActorTransform();
	return DataToReturn;

};


ANoiseVolume::ANoiseVolume()
{
	CustomVolumeNoise = CustomNoise(Seed);
	WorldScapeNoise = CreateDefaultSubobject<UWorldScapeCustomNoise>(TEXT("Default Noise Generator"));
	PrimaryActorTick.bCanEverTick = false;
	NoiseScale = PREVIOUS_NoiseScale = 800;
	Seed = PREVIOUS_Seed = 10;
	NoiseIntensity = PREVIOUS_NoiseIntensity = 1200000;
	PREVIOUS_WorldScapeNoise = WorldScapeNoise;
	NeedRefresh = true;
}
