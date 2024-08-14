// Copyright 2021 IOLACORP STUDIO. All Rights Reserved

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AssetTypeCategories.h"
#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"
#include "Preferences/UnrealEdOptions.h"
#include "Kismet2/SClassPickerDialog.h"
#include "UnrealEd.h"
#include <WorldScapeNoiseClass.h>
#include "WorldScapeNoiseFactory.generated.h"


class FNoiseFilterViewer : public IClassViewerFilter
{
public:
    TSet<const UClass*> AllowedChildrenOfClasses;
    uint32 DisallowedClassFlags;

    virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef<class FClassViewerFilterFuncs> InFilterFuncs) override
    {
        return !InClass->HasAnyClassFlags((EClassFlags)DisallowedClassFlags)
            && InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
    }

    virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef<const IUnloadedBlueprintData> InUnloadedClassData, TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
    {
        return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
            && InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
    }
};


UCLASS()
class WORLDSCAPEFACTORY_API UWorldScapeNoiseFactory : public UFactory
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = Noise)
	TSubclassOf<UWorldScapeNoiseClass> NoiseClass;
	UWorldScapeNoiseFactory();
	// Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	virtual bool ConfigureProperties() override;
};