// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "WorldScapeFoliagesContraint.h"
#include "WorldScapeFoliagesInterfaceData.h"
#include "WorldScapeFoliagesContraintInterface.h"
#include "WorldScapeFoliagesContraint.h"
#include "WorldScapeFoliagesInterface.generated.h"


UCLASS(ClassGroup = WorldScape, Category = "WorldScapeCore", editinlinenew, BlueprintType, Blueprintable)
class WORLDSCAPEFOLIAGES_API UWorldScapeFoliagesInterface : public UObject
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere, Category = "Foliage")
		bool bGenerateOnServer = true;

	// Set the size of each Foliage Sector
	UPROPERTY(EditAnywhere, Category = "Spacing")
		double FoliageSectorSize = 2000;
	//Poisson disc sampling allow better foliage distribution and can prevent foliages from being placed inside each other
	UPROPERTY(EditAnywhere, Category = "Spacing",meta = (EditCondition = "false", EditConditionHides))
		bool bUsePoissonDisc = false;
	//Density, you can estimate foliages count by about density*density*0.7
	UPROPERTY(EditAnywhere, Category = "Spacing", meta = (EditCondition = "bUsePoissonDisc == true", DisplayName = "Use Poisson Disc Sampling (Experimental)", EditConditionHides, UIMin = "1", UIMax = "200"))
		float PoissonDiscDensity = 20;
	//Density variation in percent, high value will greatly increase the foliage generation time
	UPROPERTY(EditAnywhere, Category = "Spacing", meta = (EditCondition = "bUsePoissonDisc == true", EditConditionHides, UIMin = "0", UIMax = "90"))
		float PoissonDiscDensityVariation = 25;
	//Amount of foliage spawn per sector
	UPROPERTY(EditAnywhere, Category = "Spacing", meta = (EditCondition = "bUsePoissonDisc == false", EditConditionHides, UIMin = "1", UIMax = "30000", SliderExponent = 2.0))
		float FoliagesCount = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bOverrideCollectionConstraint = false;

	
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bOverrideCollectionConstraint == true", EditConditionHides))
		FWorldScapeFoliagesContraint Elevation = FWorldScapeFoliagesContraint(-1000, 1000, 50000, 200000);
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bOverrideCollectionConstraint == true", EditConditionHides))
		FWorldScapeFoliagesContraintNormalized Temperature = FWorldScapeFoliagesContraintNormalized(0.35f, 0.5f, 0.85f, 1.0f);
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bOverrideCollectionConstraint == true", EditConditionHides))
		FWorldScapeFoliagesContraintNormalized Humidity = FWorldScapeFoliagesContraintNormalized(0.35f, 0.5f, 0.85f, 1.0f);
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "bOverrideCollectionConstraint == true", EditConditionHides))
		FWorldScapeFoliagesContraintNormalized Slope = FWorldScapeFoliagesContraintNormalized(0.0f, 0.0f, 0.35f, 0.5f);
	

	// Whether or not it use the Tree mask from noise generation
	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bUseFoliageNoiseMask = false;
	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bSpawnInWater = false;

	//Value < 0 mean use of collection's value instead;
	UPROPERTY(EditAnywhere, Category = "Placement")
		int FoliageLayer = -1;

	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "FoliageLayer >= 0", EditConditionHides))
		bool SpawnOnlyInVolume = false;

	virtual FWorldScapeFoliagesInterfaceData CreateData() const
	{
		return FWorldScapeFoliagesInterfaceData();
	}


	virtual bool IsInequal(const FWorldScapeFoliagesInterfaceData WorldScapeFoliage) const
	{
		UE_LOG(LogTemp, Log, TEXT("Foliage Data check for inequality not Implemented for class : %s"), *GetClass()->GetName());
		return false;

	}
protected:
	UPROPERTY(VisibleAnywhere, Category = WorldScapeFoliage)
		FString Description;

	UPROPERTY(VisibleAnywhere, Category = WorldScapeFoliage)
		bool bIsActive;

	
};


