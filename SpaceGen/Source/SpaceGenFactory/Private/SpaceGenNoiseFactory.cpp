// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <WorldScapeNoiseFactory.h>


UWorldScapeNoiseFactory::UWorldScapeNoiseFactory()
{
	// Provide the factory with information about how to handle our asset
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UWorldScapeNoiseClass::StaticClass();
}

UObject* UWorldScapeNoiseFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Create and return a new instance of our MyCustomAsset object
	if (NoiseClass != nullptr)
	{
		return NewObject<UWorldScapeNoiseClass>(InParent, NoiseClass, Name, Flags | RF_Transactional);
	}
	else {
		check(Class->IsChildOf(UWorldScapeNoiseClass::StaticClass()));
        return NewObject<UWorldScapeNoiseClass>(InParent, Class, Name, Flags | RF_Transactional);
	}
}



bool UWorldScapeNoiseFactory::ConfigureProperties()
{
    NoiseClass = nullptr;

    FClassViewerModule& ClassViewerModule = FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer");
    FClassViewerInitializationOptions Options;
    Options.Mode = EClassViewerMode::ClassPicker;

    const TSharedRef<FNoiseFilterViewer> Filter = MakeShareable<FNoiseFilterViewer>(new FNoiseFilterViewer);

#if ENGINE_MAJOR_VERSION == 5
    Options.ClassFilters.Add(Filter);
#else
    Options.ClassFilter = Filter;
#endif

    Filter->DisallowedClassFlags = CLASS_Abstract | CLASS_Deprecated;
    Filter->AllowedChildrenOfClasses.Add(UWorldScapeNoiseClass::StaticClass());

    const FText TitleText = FText::FromString("Pick Noise Class");
    UClass* ChosenClass = nullptr;
    const bool bPressedOk = SClassPickerDialog::PickClass(TitleText, Options, ChosenClass, UWorldScapeNoiseClass::StaticClass());

    if (bPressedOk)
    {
        NoiseClass = ChosenClass;
    }

    return bPressedOk;
}


/*

*/


/*
uint32 UWorldScapeFoliageFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return EAssetTypeCategories::;
}*/