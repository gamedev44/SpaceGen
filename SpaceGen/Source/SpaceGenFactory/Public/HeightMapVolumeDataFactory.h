// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AssetTypeCategories.h"
#include "UnrealEd.h"
#include <HeightMapVolumeData.h>

#include "HeightMapVolumeDataFactory.generated.h"

UCLASS()
class WORLDSCAPEFACTORY_API UHeightMapVolumeDataFactory : public UFactory
{
	GENERATED_BODY()

public:
	UHeightMapVolumeDataFactory();
	// Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};