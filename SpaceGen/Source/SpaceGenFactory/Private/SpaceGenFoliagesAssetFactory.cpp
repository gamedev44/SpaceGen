// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesAssetFactory.h>


UWorldScapeFoliagesAssetFactory::UWorldScapeFoliagesAssetFactory()
{
	// Provide the factory with information about how to handle our asset
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UWorldScapeFoliagesAsset::StaticClass();
}

UObject* UWorldScapeFoliagesAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Create and return a new instance of our MyCustomAsset object
	UWorldScapeFoliagesAsset* CreatedAsset = NewObject<UWorldScapeFoliagesAsset>(InParent, Class, Name, Flags);
	return CreatedAsset;
}

/*
uint32 UWorldScapeFoliageFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return EAssetTypeCategories::;
}*/