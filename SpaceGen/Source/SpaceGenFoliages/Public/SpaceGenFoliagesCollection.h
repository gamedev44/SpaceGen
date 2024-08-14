// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"

#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "WorldScapeFoliagesAsset.h"
#include "WorldScapeFoliagesInterfaceData.h"
#include "WorldScapeFoliagesCollectionData.h"
#include "WorldScapeFoliagesContraintInterface.h"
#include "WorldScapeFoliagesCollection.generated.h"



UCLASS(ClassGroup = WorldScape, Category = "WorldScapeFoliages",editinlinenew, BlueprintType, Blueprintable)
class WORLDSCAPEFOLIAGES_API UWorldScapeFoliagesCollection : public UObject
{
	GENERATED_BODY()

		//Convert from old data to the new data
#if WITH_EDITOR
		virtual void LoadedFromAnotherClass(const FName& OldClassName) override
	{
		Elevation.MinValue = MinElevation;
		Elevation.MinIdealValue = MinElevation;
		Elevation.MaxValue = MaxElevation;
		Elevation.MaxIdealValue = MaxElevation;

		Temperature.MinValue = MinTemperature;
		Temperature.MinIdealValue = MinTemperature;
		Temperature.MaxValue = MaxTemperature;
		Temperature.MaxIdealValue = MaxTemperature;

		Humidity.MinValue = MinHumidity;
		Humidity.MinIdealValue = MinHumidity;
		Humidity.MaxValue = MaxHumidity;
		Humidity.MaxIdealValue = MaxHumidity;

		Slope.MinValue = MinSlope;
		Slope.MinIdealValue = MinSlope;
		Slope.MaxValue = MaxSlope;
		Slope.MaxIdealValue = MaxSlope;
	}
#endif

public:
	// The foliage's mesh
	UPROPERTY(EditAnywhere, Category = "Foliages", meta = (DisplayThumbnail = "true"))
		TArray<UWorldScapeFoliagesInterface*> FoliageList;

	UFUNCTION()
	FWorldScapeFoliagesCollectionData CreateFoliagesCollectionDataData()
	{
		FWorldScapeFoliagesCollectionData DataToReturn = FWorldScapeFoliagesCollectionData();

		for (int i = 0; i < FoliageList.Num(); i++)
		{
			if (IsValid(FoliageList[i]))
			{
				DataToReturn.FoliageList.Add(FoliageList[i]->CreateData());
			}

		}

		DataToReturn.Elevation = Elevation;
		DataToReturn.Temperature = Temperature;
		DataToReturn.Humidity = Humidity;
		DataToReturn.Slope = Slope;
		DataToReturn.bSpawnInWater = bSpawnInWater;
		DataToReturn.FoliageLayer = FoliageLayer;
		DataToReturn.SpawnOnlyInVolume = SpawnOnlyInVolume;

		return DataToReturn;
	}


	//Legacy will be removed in a future update
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Elevation (Obsolete)", EditConditionHides))
		float MinElevation = -200000.0f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Elevation (Obsolete)", EditConditionHides))
		float MaxElevation = 200000.0f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Temperature (Obsolete)", EditConditionHides))
		float MinTemperature = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Temperature (Obsolete)", EditConditionHides))
		float MaxTemperature = 1.f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Humidity (Obsolete)", EditConditionHides))
		float MinHumidity = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Humidity (Obsolete)", EditConditionHides))
		float MaxHumidity = 1.f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Min Slope (Obsolete)", EditConditionHides))
		float MinSlope = 0.f;
	UPROPERTY(EditAnywhere, Category = "Placement", meta = (EditCondition = "false", DisplayName = "Max Slope (Obsolete)", EditConditionHides))
		float MaxSlope = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Placement")
		FWorldScapeFoliagesContraint Elevation = FWorldScapeFoliagesContraint(-1000, 1000, 50000, 200000);
	UPROPERTY(EditAnywhere, Category = "Placement")
		FWorldScapeFoliagesContraintNormalized Temperature = FWorldScapeFoliagesContraintNormalized(0.35f, 0.5f, 0.85f, 1.0f);
	UPROPERTY(EditAnywhere, Category = "Placement")
		FWorldScapeFoliagesContraintNormalized Humidity = FWorldScapeFoliagesContraintNormalized(0.35f, 0.5f, 0.85f, 1.0f);
	UPROPERTY(EditAnywhere, Category = "Placement")
		FWorldScapeFoliagesContraintNormalized Slope = FWorldScapeFoliagesContraintNormalized(0.0f, 0.0f, 0.35f, 0.5f);

	UPROPERTY(EditAnywhere, Category = "Placement")
		bool bSpawnInWater = false;
	UPROPERTY(EditAnywhere, Category = "Placement")
		int FoliageLayer = 1;

	UPROPERTY(EditAnywhere, Category = "Placement")
		bool SpawnOnlyInVolume = false;


	bool IsInequal(const FWorldScapeFoliagesCollectionData WorldScapeFoliageCollection) const
	{
		if (FoliageList.Num() != WorldScapeFoliageCollection.FoliageList.Num()) return true;

		if (Elevation.notEqual(WorldScapeFoliageCollection.Elevation)) return true;
		if (Temperature.notEqual(WorldScapeFoliageCollection.Temperature)) return true;
		if (Humidity.notEqual(WorldScapeFoliageCollection.Humidity)) return true;
		if (Slope.notEqual(WorldScapeFoliageCollection.Slope)) return true;
		if (bSpawnInWater != WorldScapeFoliageCollection.bSpawnInWater) return true;
		if (FoliageLayer != WorldScapeFoliageCollection.FoliageLayer) return true;
		if (SpawnOnlyInVolume != WorldScapeFoliageCollection.SpawnOnlyInVolume) return true;
		for (int i = 0; i < FoliageList.Num(); i++)
		{
			if (FoliageList[i]->IsInequal(WorldScapeFoliageCollection.FoliageList[i]))
			{
				return true;
			}
				
		}

		return false;
	}
	
protected:
	UPROPERTY(VisibleAnywhere, Category = WorldScapeFoliage)
		FString Description;

	UPROPERTY(VisibleAnywhere, Category = WorldScapeFoliage)
		bool bIsActive;
};


