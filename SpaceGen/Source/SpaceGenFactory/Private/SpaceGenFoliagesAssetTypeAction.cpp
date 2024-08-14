// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesAssetTypeAction.h>


FWorldScapeFoliagesAssetTypeAction::FWorldScapeFoliagesAssetTypeAction(EAssetTypeCategories::Type InAssetCategory)
	: WorldScapeAssetCategory(InAssetCategory)
{
}

FText FWorldScapeFoliagesAssetTypeAction::GetName() const
{
	return FText::FromString("WorldScape Foliages");
}

FColor FWorldScapeFoliagesAssetTypeAction::GetTypeColor() const
{
	return FColor(10, 150, 20);
}


UClass* FWorldScapeFoliagesAssetTypeAction::GetSupportedClass() const
{
	return UWorldScapeFoliagesAsset::StaticClass();
}

uint32 FWorldScapeFoliagesAssetTypeAction::GetCategories()
{
	return WorldScapeAssetCategory;
}
