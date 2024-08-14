// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "NoiseMathUtils.h"
#include "Math/UnrealMathUtility.h"
#include "UObject/Class.h"
#include "NoiseData.generated.h"


USTRUCT(Blueprintable, BlueprintType)
struct WORLDSCAPENOISE_API FNoiseData 
{

	GENERATED_BODY()
public:

	FNoiseData();
	UPROPERTY(EditAnywhere, Category = NoiseData)
	double HeightNormalize = 0;
	UPROPERTY(EditAnywhere, Category = NoiseData)
	double Height = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NoiseData)
	float Temperature = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NoiseData)
	float Humidity = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NoiseData)
	float WaterMask = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NoiseData)
	float FoliageMask = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = NoiseData)
	bool Hole = false;

/*
	static double LerpSingleData(double Value& A, double Value& B, const double Alpha)
	{
		return A + (B-A)*Alpha;
	}

	static double AddSingleData(double Value& A, double Value& B, const double Alpha)
	{
		return (A + B*Alpha)/(1+Alpha);
	}

	static double SubtractSingleData(double Value& A, double Value& B, const double Alpha)
	{
		return NoiseMathUtils::Lerp(A,A- B, Alpha);
	}
	*/
	
	static FNoiseData LerpData(const FNoiseData& A, const FNoiseData& B, const double Alpha, const double HeightAlpha, const double TemperatureAlpha, const double HumidityAlpha) 
	{
		FNoiseData NewData = FNoiseData();
		NewData.HeightNormalize = A.HeightNormalize + ((B.HeightNormalize - A.HeightNormalize) * Alpha*HeightAlpha);
		NewData.Height = A.Height + ((B.Height - A.Height) * Alpha*HeightAlpha);
		NewData.Temperature = A.Temperature + ((B.Temperature - A.Temperature) * Alpha*TemperatureAlpha);
		NewData.Humidity = A.Humidity + ((B.Humidity - A.Humidity) * Alpha*HumidityAlpha);
		NewData.WaterMask = A.WaterMask + ((B.WaterMask - A.WaterMask) * Alpha);
		NewData.FoliageMask = A.FoliageMask + ((B.FoliageMask - A.FoliageMask) * Alpha);

		return NewData;
	}

	static FNoiseData AddData(const FNoiseData& A, const FNoiseData& B, const double Alpha, const double HeightAlpha, const double TemperatureAlpha, const double HumidityAlpha) 
	{
		FNoiseData NewData = FNoiseData();
		NewData.HeightNormalize = (A.HeightNormalize + (B.HeightNormalize) * (Alpha*HeightAlpha))/(1+(Alpha*HeightAlpha));
		NewData.Height = (A.Height + (B.Height) * (Alpha*HeightAlpha))/(1+(Alpha*HeightAlpha));
		NewData.Temperature =( A.Temperature + (B.Temperature) * (Alpha*TemperatureAlpha))/(1+(Alpha*TemperatureAlpha));
		NewData.Humidity = (A.Humidity + (B.Humidity) * (Alpha*HumidityAlpha))/(1+(Alpha*HumidityAlpha));
		NewData.WaterMask = (A.WaterMask + (B.WaterMask) * Alpha)/(1+Alpha);
		NewData.FoliageMask = (A.FoliageMask + (B.FoliageMask) * Alpha)/(1+Alpha);

		return NewData;
	}

	static FNoiseData SubtractData(const FNoiseData& A, const FNoiseData& B, const double Alpha, const double HeightAlpha, const double TemperatureAlpha, const double HumidityAlpha)
	{
		FNoiseData NewData = FNoiseData();
		NewData.HeightNormalize = NoiseMathUtils::Lerp(A.HeightNormalize,A.HeightNormalize- B.HeightNormalize, Alpha*HeightAlpha);
		NewData.Height = NoiseMathUtils::Lerp(A.Height,A.Height - B.Height, Alpha*HeightAlpha);
		NewData.Temperature = NoiseMathUtils::Lerp(A.Temperature,A.Temperature - B.Temperature , Alpha*TemperatureAlpha);
		NewData.Humidity = NoiseMathUtils::Lerp(A.Humidity ,A.Humidity - B.Humidity, Alpha*HumidityAlpha);
		NewData.WaterMask = NoiseMathUtils::Lerp(A.WaterMask,A.WaterMask - B.WaterMask, Alpha);
		NewData.FoliageMask = NoiseMathUtils::Lerp(A.FoliageMask,A.FoliageMask - B.FoliageMask, Alpha);

		return NewData;
	}
};
