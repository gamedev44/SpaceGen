// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <HeightMapVolumeDataFactory.h>


UHeightMapVolumeDataFactory::UHeightMapVolumeDataFactory()
{
	// Provide the factory with information about how to handle our asset
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UHeightMapVolumeData::StaticClass();
}

UObject* UHeightMapVolumeDataFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Create and return a new instance of our MyCustomAsset object
	UHeightMapVolumeData* CreatedAsset = NewObject<UHeightMapVolumeData>(InParent, Class, Name, Flags);
	return CreatedAsset;
}

