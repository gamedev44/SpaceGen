// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include <random>
#include <limits>
#include "Kismet/KismetMathLibrary.h"
#include "Engine/StaticMesh.h"
#include "WorldScapeFoliagesContraint.h"




class WORLDSCAPEFOLIAGES_API UWorldScapeFoliagesContraintHelper 
{
public :
	static float getFactor(float x, float min, float minIdeal, float maxIdeal, float max)
	{
		if (x < minIdeal)
		{
			return (x - min) / (minIdeal - min);
		}
		else
		{
			return 1 - (x - maxIdeal) / (max - maxIdeal);
		}
	}

	static float GetCombinedFactor(
		float elevation, float temperature, float humidity, float slope,
		FWorldScapeFoliagesContraint Elevation, FWorldScapeFoliagesContraintNormalized Temperature, 
		FWorldScapeFoliagesContraintNormalized Humidity, FWorldScapeFoliagesContraintNormalized Slope)
	{
		if (slope < Slope.MinValue || slope > Slope.MaxValue) {
			return 0;
		}
		if (elevation < Elevation.MinValue || elevation > Elevation.MaxValue) {
			return 0;
		}
		if (temperature < Temperature.MinValue || temperature > Temperature.MaxValue) {
			return 0;
		}
		if (humidity < Humidity.MinValue || humidity > Humidity.MaxValue) {
			return 0;
		}


		FVector4 IndependantFactor = FVector4(0, 0, 0, 0);

		if (elevation >= Elevation.MinIdealValue && elevation <= Elevation.MaxIdealValue) {
			IndependantFactor.X = 1;
		}
		else
		{
			IndependantFactor.X = getFactor(elevation, Elevation.MinValue, Elevation.MinIdealValue, Elevation.MaxIdealValue, Elevation.MaxValue);
		}

		if (temperature >= Temperature.MinIdealValue && temperature <= Temperature.MaxIdealValue) {
			IndependantFactor.Y = 1;
		}
		else
		{
			IndependantFactor.Y = getFactor(temperature, Temperature.MinValue, Temperature.MinIdealValue, Temperature.MaxIdealValue, Temperature.MaxValue);
		}

		if (humidity >= Humidity.MinIdealValue && humidity <= Humidity.MaxIdealValue) {
			IndependantFactor.Z = 1;
		}
		else
		{
			IndependantFactor.Z = getFactor(humidity, Humidity.MinValue, Humidity.MinIdealValue, Humidity.MaxIdealValue, Humidity.MaxValue);
		}

		if (slope >= Slope.MinIdealValue && slope <= Slope.MaxIdealValue) {
			IndependantFactor.W = 1;
		}
		else
		{
			IndependantFactor.W = getFactor(slope, Slope.MinValue, Slope.MinIdealValue, Slope.MaxIdealValue, Slope.MaxValue);
		}


		return IndependantFactor.X * IndependantFactor.Y * IndependantFactor.Z * IndependantFactor.W;
	}

	static float GetCombinedFactor(
		float elevation, float temperature, float humidity,
		FWorldScapeFoliagesContraint Elevation, FWorldScapeFoliagesContraintNormalized Temperature,
		FWorldScapeFoliagesContraintNormalized Humidity)
	{
		if (elevation < Elevation.MinValue || elevation > Elevation.MaxValue) {
			return 0;
		}
		if (temperature < Temperature.MinValue || temperature > Temperature.MaxValue) {
			return 0;
		}
		if (humidity < Humidity.MinValue || humidity > Humidity.MaxValue) {
			return 0;
		}


		FVector IndependantFactor = FVector(0, 0, 0);

		if (elevation >= Elevation.MinIdealValue && elevation <= Elevation.MaxIdealValue) {
			IndependantFactor.X = 1;
		}
		else
		{
			IndependantFactor.X = getFactor(elevation, Elevation.MinValue, Elevation.MinIdealValue, Elevation.MaxIdealValue, Elevation.MaxValue);
		}

		if (temperature >= Temperature.MinIdealValue && temperature <= Temperature.MaxIdealValue) {
			IndependantFactor.Y = 1;
		}
		else
		{
			IndependantFactor.Y = getFactor(temperature, Temperature.MinValue, Temperature.MinIdealValue, Temperature.MaxIdealValue, Temperature.MaxValue);
		}

		if (humidity >= Humidity.MinIdealValue && humidity <= Humidity.MaxIdealValue) {
			IndependantFactor.Z = 1;
		}
		else
		{
			IndependantFactor.Z = getFactor(humidity, Humidity.MinValue, Humidity.MinIdealValue, Humidity.MaxIdealValue, Humidity.MaxValue);
		}


		return IndependantFactor.X * IndependantFactor.Y * IndependantFactor.Z;
	}

	static float GetCombinedFactor(
		float temperature, float humidity,
		FWorldScapeFoliagesContraintNormalized Temperature,FWorldScapeFoliagesContraintNormalized Humidity)
	{
		if (temperature < Temperature.MinValue || temperature > Temperature.MaxValue) {
			return 0;
		}
		if (humidity < Humidity.MinValue || humidity > Humidity.MaxValue) {
			return 0;
		}


		FVector2D IndependantFactor = FVector2D(0, 0);


		if (temperature >= Temperature.MinIdealValue && temperature <= Temperature.MaxIdealValue) {
			IndependantFactor.X = 1;
		}
		else
		{
			IndependantFactor.X = getFactor(temperature, Temperature.MinValue, Temperature.MinIdealValue, Temperature.MaxIdealValue, Temperature.MaxValue);
		}

		if (humidity >= Humidity.MinIdealValue && humidity <= Humidity.MaxIdealValue) {
			IndependantFactor.Y = 1;
		}
		else
		{
			IndependantFactor.Y = getFactor(humidity, Humidity.MinValue, Humidity.MinIdealValue, Humidity.MaxIdealValue, Humidity.MaxValue);
		}



		return IndependantFactor.X * IndependantFactor.Y ;
	}

	static float GetCombinedFactor(
		float slope,
		FWorldScapeFoliagesContraintNormalized Slope)
	{
		if (slope < Slope.MinValue || slope > Slope.MaxValue) {
			return 0;
		}


		FVector2D IndependantFactor = FVector2D(0, 0);


		if (slope >= Slope.MinIdealValue && slope <= Slope.MaxIdealValue) {
			return 1;
		}
		else
		{
			return getFactor(slope, Slope.MinValue, Slope.MinIdealValue, Slope.MaxIdealValue, Slope.MaxValue);
		}
	}

};