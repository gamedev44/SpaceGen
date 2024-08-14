// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesCollectionTypeAction.h>


FWorldScapeFoliagesCollectionTypeAction::FWorldScapeFoliagesCollectionTypeAction(EAssetTypeCategories::Type InAssetCategory)
	: WorldScapeAssetCategory(InAssetCategory)
{
}

FText FWorldScapeFoliagesCollectionTypeAction::GetName() const
{
	return FText::FromString("WorldScape Foliages Collection");
}

FColor FWorldScapeFoliagesCollectionTypeAction::GetTypeColor() const
{
	return FColor(75, 120, 10);
}


UClass* FWorldScapeFoliagesCollectionTypeAction::GetSupportedClass() const
{
	return UWorldScapeFoliagesCollection::StaticClass();
}

uint32 FWorldScapeFoliagesCollectionTypeAction::GetCategories()
{
	return WorldScapeAssetCategory;
}
