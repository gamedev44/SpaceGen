// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "HeightMapVolumeData.h" 

#include "DoublePrecisionUtils.h"
#include "NoiseMathUtils.h"


double UHeightMapVolumeData::ApplyTilingMethod(const double Value, const EHMTilingMethod Method) const
{
	switch (Method)
	{
	case EHMTilingMethod::Clamp:
		return NoiseMathUtils::Clamp01(Value);
		break;
	case EHMTilingMethod::Mirror:
		if ( ((int)floor(Value) % 2 != 0 && Value >= 0) || ((int)floor(Value) % 2 == 0 && Value < 0)  )
		{
			return 1 - abs(NoiseMathUtils::Frac(Value));
		}
		else
		{
			return abs(NoiseMathUtils::Frac(Value));
		}
		break;
	case EHMTilingMethod::Wrap:
		if (Value >= 0)
		{
			return NoiseMathUtils::Frac(Value);
		}
		else
		{
			return 1 - abs(NoiseMathUtils::Frac(Value));
		}
		break;
	}
	return Value;
}

double UHeightMapVolumeData::GetBilinearValue(const FDVector2D Position, const EWSHeightMask Mask) const
{
	const FIntPoint Size = FIntPoint(Width(Mask),Height(Mask));
	const double PosX = (double)Size.X * Position.X;
	const double PosY = (double)Size.Y * Position.Y;
	const double PosXFrac = NoiseMathUtils::Frac(PosX), PosYFrac = NoiseMathUtils::Frac(PosY);
	const int PixelX = (int)floor(PosX), PixelY = (int)floor(PosY);
	
	const double ValueA = NoiseMathUtils::Lerp(GetStoredValue(FIntPoint(PixelX,PixelY),Mask), GetStoredValue(FIntPoint(PixelX+1,PixelY),Mask), PosXFrac);
	const double ValueB = NoiseMathUtils::Lerp(GetStoredValue(FIntPoint(PixelX,PixelY+1),Mask), GetStoredValue(FIntPoint(PixelX+1,PixelY+1),Mask), PosXFrac);
	return NoiseMathUtils::Lerp(ValueA, ValueB, PosYFrac);
}

double UHeightMapVolumeData::GetBicubicValue(const FDVector2D Position, const EWSHeightMask Mask) const
{
	const FIntPoint Size = FIntPoint(Width(Mask),Height(Mask));
	const double PosX = (double)Size.X * Position.X;
	const double PosY = (double)Size.Y * Position.Y;
	const double PosXFrac = NoiseMathUtils::Frac(PosX), PosYFrac = NoiseMathUtils::Frac(PosY);
	const int PixelX = (int)floor(PosX), PixelY = (int)floor(PosY);
	
	TArray<double> YPoints;
	for (int y = -1; y < 3; y++)
	{
		TArray<double> XPoints;
		for (int x = -1; x < 3; x++ )
		{
			XPoints.Add(GetStoredValue(FIntPoint(PixelX + x, PixelY + y ),Mask));
		}
		YPoints.Add(NoiseMathUtils::CubicInterpolate(XPoints[0],XPoints[1],XPoints[2],XPoints[3],PosXFrac));
	}
	return NoiseMathUtils::CubicInterpolate(YPoints[0],YPoints[1],YPoints[2],YPoints[3],PosYFrac);
}

double UHeightMapVolumeData::GetCatmullRomValue(const FDVector2D Position, const EWSHeightMask Mask) const
{
	const FIntPoint Size = FIntPoint(Width(Mask),Height(Mask));
	const double PosX = (double)Size.X * Position.X;
	const double PosY = (double)Size.Y * Position.Y;
	const double PosXFrac = NoiseMathUtils::Frac(PosX), PosYFrac = NoiseMathUtils::Frac(PosY);
	const int PixelX = (int)floor(PosX), PixelY = (int)floor(PosY);
	
	TArray<double> YPoints;
	for (int y = -1; y < 3; y++)
	{
		TArray<double> XPoints;
		for (int x = -1; x < 3; x++ )
		{
			XPoints.Add(GetStoredValue(FIntPoint(PixelX + x, PixelY + y ),Mask));
		}
		YPoints.Add(NoiseMathUtils::CatmullRom(XPoints[0],XPoints[1],XPoints[2],XPoints[3],PosXFrac,0.5));
	}
	return NoiseMathUtils::CatmullRom(YPoints[0],YPoints[1],YPoints[2],YPoints[3],PosYFrac,0.5);
}

double UHeightMapVolumeData::GetSampledValue(const FDVector2D Position, const EWSHeightMask Mask, const EHMSamplingMethod SamplingMethod) const
{
	switch (SamplingMethod)
	{
	case EHMSamplingMethod::Nearest:
		return GetStoredValue(Position,Mask);
	case EHMSamplingMethod::Bilinear:
		return GetBilinearValue(Position,Mask);
	case EHMSamplingMethod::Bicubic:
		return GetBicubicValue(Position,Mask);
	//case EHMSamplingMethod::CatmullRom:
	//	return GetCatmullRomValue(Position,Mask);
	}
	return GetStoredValue(Position,Mask);
}

float UHeightMapVolumeData::GetStoredValue(const FIntPoint Position, const EWSHeightMask Mask) const
{

	const FIntPoint Size = FIntPoint(Width(Mask),Height(Mask));
	FDVector2D TiledPosition = FDVector2D(Position.X, Position.Y)/FDVector2D(Size.X, Size.Y);

	EHMTilingMethod XTiling = HeightXTiling;
	EHMTilingMethod YTiling = HeightYTiling;

	if (Mask == EWSHeightMask::OceanHeight||Mask == EWSHeightMask::OceanAlpha)
	{
		XTiling = OceanXTiling;
		YTiling = OceanYTiling;
	}

	TiledPosition.X = ApplyTilingMethod(TiledPosition.X,XTiling);
	TiledPosition.Y = ApplyTilingMethod(TiledPosition.Y,YTiling);
	
	const double PosX = static_cast<double>(Size.X) * TiledPosition.X;
	const double PosY = static_cast<double>(Size.Y) * TiledPosition.Y;
	const int PixelX = static_cast<int>(floor(PosX)), PixelY = static_cast<int>(floor(PosY));
	return GetStoredValue(PixelY * Size.X + PixelX,Mask);
}
float UHeightMapVolumeData::GetStoredValue(const FDVector2D Position, const EWSHeightMask Mask) const
{
	const FIntPoint Size = FIntPoint(Width(Mask),Height(Mask));
	FDVector2D TiledPosition = Position;

	EHMTilingMethod XTiling = HeightXTiling;
	EHMTilingMethod YTiling = HeightYTiling;

	if (Mask == EWSHeightMask::OceanHeight||Mask == EWSHeightMask::OceanAlpha)
	{
		XTiling = OceanXTiling;
		YTiling = OceanYTiling;
	}

	TiledPosition.X = ApplyTilingMethod(TiledPosition.X,XTiling);
	TiledPosition.Y = ApplyTilingMethod(TiledPosition.Y,YTiling);
	
	const double PosX = static_cast<double>(Size.X) * TiledPosition.X;
	const double PosY = static_cast<double>(Size.Y) * TiledPosition.Y;
	const int PixelX = static_cast<int>(floor(PosX)), PixelY = static_cast<int>(floor(PosY));
	return GetStoredValue(PixelY * Size.X + PixelX,Mask);
}

float UHeightMapVolumeData::GetStoredValue(const int Index, const EWSHeightMask Mask) const
{
	uint16 Value = 0;
	switch(Mask)
	{
	case EWSHeightMask::Height:
		if (StoredHeightMapData.IsValidIndex(Index))
			Value = StoredHeightMapData[Index];
		break;
	case EWSHeightMask::Temperature:
		if (StoredTemperatureData.IsValidIndex(Index))
			Value =  StoredTemperatureData[Index];
		break;
	case EWSHeightMask::Humidity:
		if (StoredHumidityData.IsValidIndex(Index))
			Value =  StoredHumidityData[Index];
		break;
	case EWSHeightMask::Alpha:
		if (StoredHeightMapAlphaData.IsValidIndex(Index))
			Value =  StoredHeightMapAlphaData[Index];
		break;
	case EWSHeightMask::OceanHeight:
		if (StoredWaterHeightMapData.IsValidIndex(Index))
			Value =  StoredWaterHeightMapData[Index];
		break;
	case EWSHeightMask::OceanAlpha:
		if (StoredWaterHeightMapAlphaData.IsValidIndex(Index))
			Value =  StoredWaterHeightMapAlphaData[Index];
		break;
	default: 
		if (StoredHeightMapData.IsValidIndex(Index))
			Value =  StoredHeightMapData[Index];
		break;
	}
	return ((float)Value/65535.);
}

bool UHeightMapVolumeData::IsValidIndex(const int Index, const EWSHeightMask Mask) const
{
	switch(Mask)
	{
	case EWSHeightMask::Height:
		return StoredHeightMapData.IsValidIndex(Index);
	case EWSHeightMask::Temperature:
		return StoredTemperatureData.IsValidIndex(Index);
	case EWSHeightMask::Humidity:
		return StoredHumidityData.IsValidIndex(Index);
	case EWSHeightMask::Alpha:
		return StoredHeightMapAlphaData.IsValidIndex(Index);
	case EWSHeightMask::OceanHeight:
		return StoredWaterHeightMapData.IsValidIndex(Index);
	case EWSHeightMask::OceanAlpha:
		return StoredWaterHeightMapAlphaData.IsValidIndex(Index);
	default: 
		return StoredHeightMapData.IsValidIndex(Index);
	}
}

int32 UHeightMapVolumeData::MaskSize(const EWSHeightMask Mask) const
{
	switch(Mask)
	{
	case EWSHeightMask::Height:
		return StoredHeightMapData.Num();
	case EWSHeightMask::Temperature:
		return StoredTemperatureData.Num();
	case EWSHeightMask::Humidity:
		return StoredHumidityData.Num();
	case EWSHeightMask::Alpha:
		return StoredHeightMapAlphaData.Num();
	case EWSHeightMask::OceanHeight:
		return StoredWaterHeightMapData.Num();
	case EWSHeightMask::OceanAlpha:
		return StoredWaterHeightMapAlphaData.Num();
	default: 
		return StoredHeightMapData.Num();
	}
}

int UHeightMapVolumeData::Height(const EWSHeightMask Mask) const
{
	const int BaseValue = BaseHeight;		
	switch (Mask) 
	{  
	case EWSHeightMask::Height:
		if (MaxHeightResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxHeightResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::Temperature:
		if (MaxTemperatureResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxTemperatureResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::Humidity:
		if (MaxHumidityResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxHumidityResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::Alpha:
		if (MaxAlphaResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxAlphaResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::OceanHeight:
		if (MaxOceanHeightResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxOceanHeightResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::OceanAlpha:
		if (MaxOceanAlphaResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxOceanAlphaResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	default:
		return BaseValue;
	}
};

int UHeightMapVolumeData::Width(const EWSHeightMask Mask) const
{
	const int BaseValue = BaseWidth;		
	switch (Mask) 
	{  
	case EWSHeightMask::Height:
		if (MaxHeightResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxHeightResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::Temperature:
		if (MaxTemperatureResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxTemperatureResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::Humidity:
		if (MaxHumidityResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxHumidityResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::Alpha:
		if (MaxAlphaResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxAlphaResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::OceanHeight:
		if (MaxOceanHeightResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxOceanHeightResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	case EWSHeightMask::OceanAlpha:
		if (MaxOceanAlphaResolution == 0)
		{
			return BaseValue;
		}
		else {
			const int CustomResolution = pow(2, round(log(MaxOceanAlphaResolution)/log(2)));
			return FMath::Min( CustomResolution,BaseValue); //return closest power of two
		}
	default:
		return BaseValue;
	}
};


UHeightMapVolumeData::UHeightMapVolumeData() {
	
}
#if WITH_EDITOR
void UHeightMapVolumeData::CleanData()
{
	StoredHeightMapData.Empty();
	StoredTemperatureData.Empty();
	StoredHumidityData.Empty();
	StoredHeightMapAlphaData.Empty();

	StoredWaterHeightMapData.Empty();
	StoredWaterHeightMapAlphaData.Empty();
}

	void UHeightMapVolumeData::Generate()
	{
		/*
		bool BuildHeight = false;
		bool BuildOcean= false;

		if (PREVIOUS_HeightMap != HeightMap)
		{
			PREVIOUS_HeightMap = HeightMap;
			BuildHeight = true;
		}

		if (PREVIOUS_HighQuality != HighQuality) {

			PREVIOUS_HighQuality = HighQuality;
			BuildHeight = true;
		}

		if (PREVIOUS_SmoothValue != SmoothValue) {

			PREVIOUS_SmoothValue = SmoothValue;
			BuildHeight = true;
		}


		if (PREVIOUS_HeightMapOcean != HeightMapOcean)
		{
			PREVIOUS_HeightMapOcean = HeightMapOcean;
			BuildOcean = true;
		}

		if (PREVIOUS_OceanHighQuality != OceanHighQuality) {

			PREVIOUS_OceanHighQuality = OceanHighQuality;
			BuildOcean = true;
		}

		if (PREVIOUS_OceanSmoothValue != OceanSmoothValue) {

			PREVIOUS_OceanSmoothValue = OceanSmoothValue;
			BuildOcean = true;
		}
		

		if (BuildHeight)
			BuildTexture();
		if (BuildOcean)
			BuildOceanTexture();
			*/
		if (IsValid(HeightMap))
		{
			UE_LOG(LogTemp, Warning, TEXT("Building HeightMap..."));
			if (BuildTexture())
			UE_LOG(LogTemp, Warning, TEXT("HeightMap Build Done !"));
		}
			
		if (IsValid(HeightMapOcean))
		{
			UE_LOG(LogTemp, Warning, TEXT("Building Ocean HeightMap..."));
			if (BuildOceanTexture())
				UE_LOG(LogTemp, Warning, TEXT("HeightMap Build Done !"));
		}
			

	
	}
#endif

bool UHeightMapVolumeData::BuildTexture()
{
#if WITH_EDITOR

	if (HeightMap == nullptr)
		return false;

	const TextureCompressionSettings OldCompressionSettings = HeightMap->CompressionSettings;

	const TEnumAsByte<enum ETexturePowerOfTwoSetting::Type> OldPowerOfTwoMode = HeightMap->PowerOfTwoMode;
	
	const TextureMipGenSettings OldMipGenSettings = HeightMap->MipGenSettings;

	const bool OldSRGB = HeightMap->SRGB;

	HeightMap->PowerOfTwoMode = ETexturePowerOfTwoSetting::PadToPowerOfTwo;

	HeightMap->CompressionSettings = TextureCompressionSettings::TC_HDR;

	HeightMap->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;

	const EPixelFormat PixelFormat = HeightMap->GetPixelFormat();

	FString PixFormat = UEnum::GetValueAsString<EPixelFormat>(PixelFormat);

	HeightMap->SRGB = false;
	HeightMap->UpdateResource();


#if ENGINE_MAJOR_VERSION == 5
	const FTexture2DMipMap* HeightMipMap = &HeightMap->GetPlatformData()->Mips[0];
#else
	const FTexture2DMipMap* HeightMipMap = &HeightMap->PlatformData->Mips[0];
#endif
	StoredHeightMapData.Empty();
	StoredTemperatureData.Empty();
	StoredHumidityData.Empty();
	StoredHeightMapAlphaData.Empty();

	BaseWidth = HeightMipMap->SizeX;
	BaseHeight = HeightMipMap->SizeY;

	const FIntVector HeightmapResolution = FIntVector(Width(EWSHeightMask::Height),Height(EWSHeightMask::Height),0);
	const FIntVector TemperatureResolution = FIntVector(Width(EWSHeightMask::Temperature),Height(EWSHeightMask::Temperature),0);
	const FIntVector HumidityResolution = FIntVector(Width(EWSHeightMask::Humidity),Height(EWSHeightMask::Humidity),0);
	const FIntVector AlphaResolution = FIntVector(Width(EWSHeightMask::Alpha),Height(EWSHeightMask::Alpha),0);

	const int SampledWidth = FMath::Max3(HeightmapResolution.X,TemperatureResolution.X, FMath::Max(HumidityResolution.X,AlphaResolution.X));
	const int SampledHeight = FMath::Max3(HeightmapResolution.Y,TemperatureResolution.Y, FMath::Max(HumidityResolution.Y,AlphaResolution.Y));

	const int32 XValueSkip = BaseWidth/SampledWidth;
	const int32 YValueSkip = BaseHeight/SampledHeight;
	
	bool SkipHeightX = false;
	bool SkipTemperatureX = false;
	bool SkipHumidityX = false;
	bool SkipAlphaX = false;
	bool SkipHeightY = false;
	bool SkipTemperatureY = false;
	bool SkipHumidityY = false;
	bool SkipAlphaY = false;

#if ENGINE_MAJOR_VERSION == 5
	if (!IsValid(HeightMap) || !HeightMap->GetPlatformData() || !HeightMap->GetPlatformData()->Mips.IsValidIndex(0) || HeightMap->GetPlatformData()->Mips[0].BulkData.IsLocked())
	{
		UE_LOG(LogTemp, Warning, TEXT("Warning ! Ocean Height Data couldn't be build !"));
		if (!IsValid(HeightMap) )
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap reference not valid !"));
		}
		else if (!HeightMap->GetPlatformData())
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap Platform Data reference not valid !"));
		}
		else if (!HeightMap->GetPlatformData()->Mips.IsValidIndex(0)) {
			UE_LOG(LogTemp, Warning, TEXT("MIP 0 is not valid !"));
		}
		else if (HeightMap->GetPlatformData()->Mips[0].BulkData.IsLocked()) {
			UE_LOG(LogTemp, Warning, TEXT("Texture is currently used by another process !"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Unknow Error"));
		}
		return false;
	}
#else
	if (!IsValid(HeightMap) || !HeightMap->PlatformData || !HeightMap->PlatformData->Mips.IsValidIndex(0) || HeightMap->PlatformData->Mips[0].BulkData.IsLocked())
	{
		UE_LOG(LogTemp, Warning, TEXT("Warning ! Ocean Height Data couldn't be build !"));
		if (!IsValid(HeightMap) )
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap reference not valid !"));
		}
		else if (!HeightMap->PlatformData)
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap Platform Data reference not valid !"));
		}
		else if (!HeightMap->PlatformData->Mips.IsValidIndex(0)) {
			UE_LOG(LogTemp, Warning, TEXT("MIP 0 is not valid !"));
		}
		else if (HeightMap->PlatformData->Mips[0].BulkData.IsLocked()) {
			UE_LOG(LogTemp, Warning, TEXT("Texture is currently used by another process !"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Unknow Error"));
		}
		return false;
	}
#endif
	
#if ENGINE_MAJOR_VERSION == 5
	void* FormattedImageData = HeightMap->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
#else
	void* FormattedImageData = HeightMap->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
#endif
	
    if (static_cast<FFloat16Color*>(FormattedImageData) == nullptr || (static_cast<FFloat16Color*>(FormattedImageData) + (BaseWidth * BaseHeight)-1) == nullptr)
    {
        //Texture is in 8bit;
        HighQuality = false;
    }
    else
        HighQuality = true;

		
	
	
	for (int y = 0; y < BaseHeight; y+= YValueSkip)
	{
		//I check for each channel if the modulo of (y on MaxHeight/CurrentHeight) is equal 0 (which mean we don't skip)
		if ( !bIgnoreHeightMap)
			y % (BaseHeight/HeightmapResolution.Y) == 0?	SkipHeightY = false : SkipHeightY = true;
		if ( !bIgnoreTemperature)
			y % (BaseHeight/TemperatureResolution.Y) == 0?	SkipTemperatureY = false : SkipTemperatureY = true;
		if ( !bIgnoreHumidity)
			y % (BaseHeight/HumidityResolution.Y) == 0?	SkipHumidityY = false : SkipHumidityY = true;
		if ( !bIgnoreAlpha)
			y % (BaseHeight/AlphaResolution.Y) == 0?	SkipAlphaY = false : SkipAlphaY = true;

		for (int x = 0; x < BaseWidth ; x+= XValueSkip)
		{

			//Same as for y but for X
			if (!SkipHeightY && !bIgnoreHeightMap)
			{
				x % (BaseWidth/HeightmapResolution.X) == 0?	SkipHeightX = false : SkipHeightX = true;
			}
			if (!SkipTemperatureY && !bIgnoreTemperature)
			{
				x % (BaseWidth/TemperatureResolution.X) == 0?	SkipTemperatureX = false : SkipTemperatureX = true;
			}
			if (!SkipHumidityY && !bIgnoreHumidity)
			{
				x % (BaseWidth/HumidityResolution.X) == 0?	SkipHumidityX = false : SkipHumidityX = true;
			}
			if (!SkipAlphaY && !bIgnoreAlpha)
			{
				x % (BaseWidth/AlphaResolution.X) == 0?	SkipAlphaX = false : SkipAlphaX = true;
			}
			
			

			if (!SkipHeightX && !SkipHeightY && !bIgnoreHeightMap)
			{
				//UE_LOG(LogTemp, Warning, TEXT("Position %i : "), x+y*BaseWidth);
				if (HighQuality)
				{
					StoredHeightMapData.Add(static_cast<uint16>(static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].R*65535));
					//UE_LOG(LogTemp, Warning, TEXT("HDValue of %i : %f"), x+y*BaseWidth, static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].R.GetFloat());
					
				}
				else
				{
					StoredHeightMapData.Add(static_cast<uint16>( static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].R*256));
					//UE_LOG(LogTemp, Warning, TEXT("LDValue of %i : %f"), x+y*BaseWidth, (float)static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].R);
				}
				//UE_LOG(LogTemp, Warning, TEXT("Added Height Value of %i : %f"), x+y*BaseWidth, (float)StoredHeightMapData.Last());
			}



			
			if (!SkipTemperatureX && !SkipTemperatureY && !bIgnoreTemperature)
			{
				if (HighQuality)
				{
					StoredTemperatureData.Add(static_cast<uint16>(static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].G*65535));
				}
				else
				{
					StoredTemperatureData.Add(static_cast<uint16>(static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].G*256));
				}
			}
			if (!SkipHumidityX && !SkipHumidityY && !bIgnoreHumidity)
			{
				if (HighQuality)
				{
					StoredHumidityData.Add(static_cast<uint16>(static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].B*65535));
				}
				else
				{
					StoredHumidityData.Add(static_cast<uint16>(static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].B*256));
				}
			}
			if (!SkipAlphaX && !SkipAlphaY && !bIgnoreAlpha)
			{
				if (HighQuality)
				{
					StoredHeightMapAlphaData.Add(static_cast<uint16>(static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].A*65535));
				}
				else
				{
					StoredHeightMapAlphaData.Add(static_cast<uint16>(static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].A*256));
				}
			}
		}
	}
	
#if ENGINE_MAJOR_VERSION == 5
	HeightMap->GetPlatformData()->Mips[0].BulkData.Unlock();
#else
	HeightMap->PlatformData->Mips[0].BulkData.Unlock();
#endif
	HeightMap->CompressionSettings = OldCompressionSettings;

	HeightMap->MipGenSettings = OldMipGenSettings;

	HeightMap->PowerOfTwoMode = OldPowerOfTwoMode;
	
	HeightMap->SRGB = OldSRGB;
	HeightMap->UpdateResource();
#endif
	PlanedUpdated = false;
	return true;
}



bool UHeightMapVolumeData::BuildOceanTexture()
{
#if WITH_EDITOR

	if (HeightMapOcean == nullptr)
		return false;

	const TextureCompressionSettings OldCompressionSettings = HeightMapOcean->CompressionSettings;

	const TextureMipGenSettings OldMipGenSettings = HeightMapOcean->MipGenSettings;

	const TEnumAsByte<enum ETexturePowerOfTwoSetting::Type> OldPowerOfTwoMode = HeightMap->PowerOfTwoMode;	

	const bool OldSRGB = HeightMapOcean->SRGB;

	HeightMap->PowerOfTwoMode = ETexturePowerOfTwoSetting::PadToPowerOfTwo;
	
	HeightMapOcean->CompressionSettings = TextureCompressionSettings::TC_HDR;

	HeightMapOcean->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;

	const EPixelFormat PixelFormat = HeightMapOcean->GetPixelFormat();

	FString PixFormat = UEnum::GetValueAsString<EPixelFormat>(PixelFormat);

	HeightMapOcean->SRGB = false;
	HeightMapOcean->UpdateResource();
#if ENGINE_MAJOR_VERSION == 5
	const FTexture2DMipMap* HeightMipMap = &HeightMapOcean->GetPlatformData()->Mips[0];
#else
	const FTexture2DMipMap* HeightMipMap = &HeightMapOcean->PlatformData->Mips[0];
#endif
	StoredWaterHeightMapData.Empty();
	StoredWaterHeightMapAlphaData.Empty();

	BaseWidth = HeightMipMap->SizeX;
	BaseHeight = HeightMipMap->SizeY;

	const FIntVector HeightmapResolution = FIntVector(Width(EWSHeightMask::OceanHeight),Height(EWSHeightMask::OceanHeight),0);
	const FIntVector AlphaResolution = FIntVector(Width(EWSHeightMask::OceanAlpha),Height(EWSHeightMask::OceanAlpha),0);

	const int SampledWidth = FMath::Max(HeightmapResolution.X,AlphaResolution.X);
	const int SampledHeight = FMath::Max(HeightmapResolution.Y,AlphaResolution.Y);

	const int32 XValueSkip = BaseWidth/SampledWidth;
	const int32 YValueSkip = BaseHeight/SampledHeight;
	
	bool SkipHeightX = false;
	bool SkipAlphaX = false;
	bool SkipHeightY = false;
	bool SkipAlphaY = false;
	
#if ENGINE_MAJOR_VERSION == 5
	if (!IsValid(HeightMapOcean) || !HeightMapOcean->GetPlatformData() || !HeightMapOcean->GetPlatformData()->Mips.IsValidIndex(0) || HeightMapOcean->GetPlatformData()->Mips[0].BulkData.IsLocked())
	{
		UE_LOG(LogTemp, Warning, TEXT("Warning ! Ocean Height Data couldn't be build !"));
		if (!IsValid(HeightMapOcean) )
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap reference not valid !"));
		}
		else if (!HeightMapOcean->GetPlatformData())
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap Platform Data reference not valid !"));
		}
		else if (!HeightMapOcean->GetPlatformData()->Mips.IsValidIndex(0)) {
			UE_LOG(LogTemp, Warning, TEXT("MIP 0 is not valid !"));
		}
		else if (HeightMapOcean->GetPlatformData()->Mips[0].BulkData.IsLocked()) {
			UE_LOG(LogTemp, Warning, TEXT("Texture is currently used by another process !"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Unknow Error"));
		}
		return false;
	}
#else
	if (!IsValid(HeightMapOcean) || !HeightMapOcean->PlatformData || !HeightMapOcean->PlatformData->Mips.IsValidIndex(0) || HeightMapOcean->PlatformData->Mips[0].BulkData.IsLocked())
	{
		UE_LOG(LogTemp, Warning, TEXT("Warning ! Ocean Height Data couldn't be build !"));
		if (!IsValid(HeightMapOcean) )
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap reference not valid !"));
		}
		else if (!HeightMapOcean->PlatformData)
		{
			UE_LOG(LogTemp, Warning, TEXT("HeightMap Platform Data reference not valid !"));
		}
		else if (!HeightMapOcean->PlatformData->Mips.IsValidIndex(0)) {
			UE_LOG(LogTemp, Warning, TEXT("MIP 0 is not valid !"));
		}
		else if (HeightMapOcean->PlatformData->Mips[0].BulkData.IsLocked()) {
			UE_LOG(LogTemp, Warning, TEXT("Texture is currently used by another process !"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Unknow Error"));
		}
		return false;
	}
#endif
#if ENGINE_MAJOR_VERSION == 5
	void* FormattedImageData = HeightMapOcean->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
#else
	void* FormattedImageData = HeightMapOcean->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
#endif
	

	if (HighQuality && (static_cast<FFloat16Color*>(FormattedImageData) == nullptr || (static_cast<FFloat16Color*>(FormattedImageData) + (BaseWidth * BaseHeight)-1) == nullptr))
	{
		//Texture is in 8bit;
		HighQuality = false;
	}
	else
		HighQuality = true;
		


	for (int y = 0; y < BaseHeight; y+=YValueSkip)
	{
		//I check for each channel if the modulo of (y on MaxHeight/CurrentHeight) is equal 0 (which mean we don't skip)
		if ( !bIgnoreOceanHeightMap)
		y % BaseHeight/HeightmapResolution.Y == 0?	SkipHeightY = false : SkipHeightY = true;
		if ( !bIgnoreOceanAlpha)
		y % BaseHeight/AlphaResolution.Y == 0?	SkipAlphaY = false : SkipAlphaY = true;

		for (int x = 0; x < BaseWidth ; x+= XValueSkip)
		{
			//Same as for y but for X
			if (!SkipHeightY&& !bIgnoreOceanHeightMap)
			{
				x % BaseWidth/HeightmapResolution.X == 0?	SkipHeightX = false : SkipHeightX = true;
			}
			if (!SkipAlphaY&& !bIgnoreOceanAlpha)
			{
				x % BaseWidth/AlphaResolution.X == 0?	SkipAlphaX = false : SkipAlphaX = true;
			}


			if (!SkipHeightX && !SkipHeightY && !bIgnoreOceanHeightMap)
			{
				if (HighQuality)
				{
					StoredWaterHeightMapData.Add(static_cast<uint16>(static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].R*65535));
				}
				else
				{
					StoredWaterHeightMapData.Add(static_cast<uint16>(static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].R*256));
				}
				
			}

			if (!SkipAlphaX && !SkipAlphaY && !bIgnoreOceanAlpha)
			{
				if (HighQuality)
				{
					StoredWaterHeightMapAlphaData.Add(static_cast<uint16>(static_cast<FFloat16Color*>(FormattedImageData)[x+y*BaseWidth].A*65535));
				}
				else
				{
					StoredWaterHeightMapAlphaData.Add(static_cast<uint16>(static_cast<FColor*>(FormattedImageData)[x+y*BaseWidth].A*256));
				}
				
			}
		}
	}
	
#if ENGINE_MAJOR_VERSION == 5
	HeightMapOcean->GetPlatformData()->Mips[0].BulkData.Unlock();
#else
	HeightMapOcean->PlatformData->Mips[0].BulkData.Unlock();
#endif
	HeightMapOcean->CompressionSettings = OldCompressionSettings;

	HeightMapOcean->MipGenSettings = OldMipGenSettings;

	HeightMap->PowerOfTwoMode = OldPowerOfTwoMode;
	
	HeightMapOcean->SRGB = OldSRGB;
	HeightMapOcean->UpdateResource();
#endif
	PlanedUpdated = false;

	return true;
}
