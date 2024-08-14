// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesBlueprintFactory.h>


UWorldScapeFoliagesBlueprintFactory::UWorldScapeFoliagesBlueprintFactory()
{
	// Provide the factory with information about how to handle our asset
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UWorldScapeFoliagesBlueprint::StaticClass();
}

UObject* UWorldScapeFoliagesBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Create and return a new instance of our MyCustomAsset object
	UWorldScapeFoliagesBlueprint* CreatedAsset = NewObject<UWorldScapeFoliagesBlueprint>(InParent, Class, Name, Flags);
	return CreatedAsset;
}

/*
uint32 UWorldScapeFoliageFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return EAssetTypeCategories::;
}*/