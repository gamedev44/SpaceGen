// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeNoiseTypeAction.h>


FWorldScapeNoiseTypeAction::FWorldScapeNoiseTypeAction(EAssetTypeCategories::Type InAssetCategory)
	: WorldScapeAssetCategory(InAssetCategory)
{
}

FText FWorldScapeNoiseTypeAction::GetName() const
{
	return FText::FromString("WorldScape Noise");
}

FColor FWorldScapeNoiseTypeAction::GetTypeColor() const
{
	return FColor(100, 150, 255);
}


UClass* FWorldScapeNoiseTypeAction::GetSupportedClass() const
{
	return UWorldScapeNoiseClass::StaticClass();
}

uint32 FWorldScapeNoiseTypeAction::GetCategories()
{
	return WorldScapeAssetCategory;
}
