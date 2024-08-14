// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeFoliagesCollectionFactory.h>


UWorldScapeFoliagesCollectionFactory::UWorldScapeFoliagesCollectionFactory()
{
	// Provide the factory with information about how to handle our asset
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UWorldScapeFoliagesCollection::StaticClass();
}

UObject* UWorldScapeFoliagesCollectionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Create and return a new instance of our MyCustomAsset object
	UWorldScapeFoliagesCollection* CreatedAsset = NewObject<UWorldScapeFoliagesCollection>(InParent, Class, Name, Flags);
	return CreatedAsset;
}