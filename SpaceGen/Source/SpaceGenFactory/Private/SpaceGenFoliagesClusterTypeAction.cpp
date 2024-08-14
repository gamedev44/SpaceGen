// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesClusterTypeAction.h>


FWorldScapeFoliagesClusterTypeAction::FWorldScapeFoliagesClusterTypeAction(EAssetTypeCategories::Type InAssetCategory)
	: WorldScapeAssetCategory(InAssetCategory)
{
}

FText FWorldScapeFoliagesClusterTypeAction::GetName() const
{
	return FText::FromString("WorldScape Foliage Cluster");
}

FColor FWorldScapeFoliagesClusterTypeAction::GetTypeColor() const
{
	return FColor(40, 120, 20);
}


UClass* FWorldScapeFoliagesClusterTypeAction::GetSupportedClass() const
{
	return UWorldScapeFoliagesCluster::StaticClass();
}

uint32 FWorldScapeFoliagesClusterTypeAction::GetCategories()
{
	return WorldScapeAssetCategory;
}
