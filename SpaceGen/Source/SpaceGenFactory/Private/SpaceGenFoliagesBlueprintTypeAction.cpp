// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesBlueprintTypeAction.h>


FWorldScapeFoliagesBlueprintTypeAction::FWorldScapeFoliagesBlueprintTypeAction(EAssetTypeCategories::Type InAssetCategory)
	: WorldScapeAssetCategory(InAssetCategory)
{
}

FText FWorldScapeFoliagesBlueprintTypeAction::GetName() const
{
	return FText::FromString("WorldScape Actor Foliages");
}

FColor FWorldScapeFoliagesBlueprintTypeAction::GetTypeColor() const
{
	return FColor(10, 150, 120);
}


UClass* FWorldScapeFoliagesBlueprintTypeAction::GetSupportedClass() const
{
	return UWorldScapeFoliagesBlueprint::StaticClass();
}

uint32 FWorldScapeFoliagesBlueprintTypeAction::GetCategories()
{
	return WorldScapeAssetCategory;
}
