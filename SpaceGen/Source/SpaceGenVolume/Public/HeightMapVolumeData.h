// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "DoublePrecisionUtils.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "HeightMapVolumeData.generated.h"


//Data of an HeightMap Volume, Can be shared by multiple HeightMap Volume


UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EWSHeightMask : uint8
{
	Height 	UMETA(DisplayName = "Height"),
	Temperature	UMETA(DisplayName = "Temperature"),
	Humidity 	UMETA(DisplayName = "Humidity"),
	Alpha 	UMETA(DisplayName = "Alpha"),
	OceanHeight 	UMETA(DisplayName = "OceanHeight"),
	OceanAlpha 	UMETA(DisplayName = "OceanAlpha")
	
};

UENUM(BlueprintType)
enum class EHMTilingMethod : uint8
{
	Wrap 	UMETA(DisplayName = "Wrap"),
	Clamp	UMETA(DisplayName = "Clamp"),
    Mirror 	UMETA(DisplayName = "Mirror")
};

UENUM(BlueprintType)
enum class EHMSamplingMethod : uint8
{
	Nearest 	UMETA(DisplayName = "Nearest"),
	Bilinear 	UMETA(DisplayName = "Bilinear"),
	Bicubic	UMETA(DisplayName = "Bicubic"),
    //CatmullRom 	UMETA(DisplayName = "Catmull-Rom")
};


UCLASS(hideCategories = (Code))
class WORLDSCAPEVOLUME_API UHeightMapVolumeData : public UObject
{
	GENERATED_BODY()

public:

	FName ClassName = "HeightMap Volume Data";

	UHeightMapVolumeData();

#if WITH_EDITOR
	UFUNCTION(BlueprintCallable, Category = "Defaults")
		void Generate();
	UFUNCTION(BlueprintCallable, Category = "Defaults")
		void CleanData();
#endif

	UFUNCTION(BlueprintCallable, Category = "Texture")
		bool BuildTexture();
	UFUNCTION(BlueprintCallable, Category = "Texture")
		bool BuildOceanTexture();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Texture", meta = (ExposeOnSpawn = true))
		UTexture2D* HeightMap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Texture", meta = (ExposeOnSpawn = true))
		UTexture2D* HeightMapOcean;

	//Is the texture 16bit ?
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool HighQuality = true;
	//Is the bOcean texture 16bit ?
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool OceanHighQuality = true;
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		EHMTilingMethod HeightXTiling = EHMTilingMethod::Wrap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
    	EHMTilingMethod HeightYTiling = EHMTilingMethod::Wrap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
	EHMTilingMethod OceanXTiling = EHMTilingMethod::Wrap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
	EHMTilingMethod OceanYTiling = EHMTilingMethod::Wrap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool bIgnoreHeightMap = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool bIgnoreTemperature = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool bIgnoreHumidity = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool bIgnoreAlpha = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool bIgnoreOceanHeightMap = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
		bool bIgnoreOceanAlpha = false;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo", meta = (ExposeOnSpawn = true))
	//float CatmullRomAlpha = 0.5;

	//Resolution in pixel of the sampled map for height values (0 mean no limits)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo|CustomResolution", meta = (ExposeOnSpawn = true))
	int32 MaxHeightResolution = 0;
	//Resolution in pixel of the sampled map for Temperature values (0 mean no limits)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo|CustomResolution", meta = (ExposeOnSpawn = true))
	int32 MaxTemperatureResolution = 0;
	//Resolution in pixel of the sampled map for Humidity values (0 mean no limits)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo|CustomResolution", meta = (ExposeOnSpawn = true))
	int32 MaxHumidityResolution = 0;
	//Resolution in pixel of the sampled map for Alpha values (0 mean no limits)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo|CustomResolution", meta = (ExposeOnSpawn = true))
	int32 MaxAlphaResolution = 0;
	//Resolution in pixel of the sampled map for Ocean Height values (0 mean no limits)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo|CustomResolution", meta = (ExposeOnSpawn = true))
	int32 MaxOceanHeightResolution = 0;
	//Resolution in pixel of the sampled map for Ocean Alpha values (0 mean no limits)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextureInfo|CustomResolution", meta = (ExposeOnSpawn = true))
	int32 MaxOceanAlphaResolution = 0;
		

	bool bHeightGenerated = false;
	bool bTemperatureGenerated = false;
	bool bHumidityGenerated = false;
	bool bAlphaGenerated = false;
	bool bOceanHeightGenerated = false;
	bool bOceanAlphaMGenerated = false;


	UTexture2D* PREVIOUS_HeightMap;
	UTexture2D* PREVIOUS_HeightMapOcean;
	
	bool PREVIOUS_HighQuality;
	bool PREVIOUS_OceanHighQuality;
	bool PREVIOUS_SmoothValue;
	bool PREVIOUS_OceanSmoothValue;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
    		int32 DataVersion = 0;

	double ApplyTilingMethod(double Value, EHMTilingMethod Method) const;
	double GetBilinearValue(FDVector2D Position, EWSHeightMask Mask) const;
	double GetBicubicValue(FDVector2D Position, EWSHeightMask Mask) const;
	double GetCatmullRomValue(FDVector2D Position, EWSHeightMask Mask) const;
	double GetSampledValue(FDVector2D Position, EWSHeightMask Mask, EHMSamplingMethod SamplingMethod) const;
	
	float GetStoredValue(FIntPoint Position, EWSHeightMask Mask) const;
	float GetStoredValue(FDVector2D Position, EWSHeightMask Mask) const;
	UFUNCTION(BlueprintCallable, Category = "Code")
		float GetStoredValue(int32 Index, EWSHeightMask Mask) const;
	UFUNCTION(BlueprintCallable, Category = "Code")
    	bool IsValidIndex(int32 Index, EWSHeightMask Mask) const;
    UFUNCTION(BlueprintCallable, Category = "Code")
		int32 MaskSize(EWSHeightMask Mask) const;

	//Sampled Heightmap
	UPROPERTY(EditAnywhere, Category = "Code")
		TArray<uint16> StoredHeightMapData;
	//Sampled Temperature
	UPROPERTY(EditAnywhere, Category = "Code")
		TArray<uint16> StoredTemperatureData;
	//Sampled Humidity
	UPROPERTY(EditAnywhere, Category = "Code")
		TArray<uint16> StoredHumidityData;
	//Sampled Heightmap Alpha
	UPROPERTY(EditAnywhere, Category = "Code")
		TArray<uint16> StoredHeightMapAlphaData;
	//Sampled Water Heightmap
	UPROPERTY(EditAnywhere, Category = "Code")
		TArray<uint16> StoredWaterHeightMapData;
	//Sampled Water Heightmap Alpha
	UPROPERTY(EditAnywhere, Category = "Code")
		TArray<uint16> StoredWaterHeightMapAlphaData;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		int BaseHeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		int BaseWidth;

	UFUNCTION(BlueprintCallable, Category = "Code")
		int Height(EWSHeightMask Mask) const;
	UFUNCTION(BlueprintCallable, Category = "Code")
		int Width(EWSHeightMask Mask) const;

	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		int HeightOcean;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		int WidthOcean;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Code")
		bool PlanedUpdated;
};