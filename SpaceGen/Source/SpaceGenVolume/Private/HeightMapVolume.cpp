// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "HeightMapVolume.h" 



FHeightMapVolumeDataCopy AHeightMapVolume::GetHeightMapVolumeData()
{
	FHeightMapVolumeDataCopy DataToReturn = FHeightMapVolumeDataCopy();
	DataToReturn.EdgeFalloff = EdgeFalloff;
	DataToReturn.VolumeLocation = GetActorTransform();
	DataToReturn.HeightMapData = HeightMapData;
	DataToReturn.bOverrideHeight = OverrideHeight;
	DataToReturn.bHeight = Height;
	DataToReturn.bTemperature = Temperature;
	DataToReturn.bHumidity = Humidity;
	DataToReturn.bHeightAlpha = HeightAlpha;
	DataToReturn.bOceanHeight = OceanHeight;
	DataToReturn.bOceanHeightAlpha = OceanHeightAlpha;
	DataToReturn.MapHeight = MapHeight;
	DataToReturn.Altitude = Altitude;
	DataToReturn.MaxHeight = MaxHeight;
	DataToReturn.MaxTemperature = MaxTemperature;
	DataToReturn.MinTemperature = MinTemperature;
	DataToReturn.MaxHumidity = MaxHumidity;
	DataToReturn.MinHumidity = MinHumidity;
	DataToReturn.MaxOceanHeight = MaxOceanHeight;
	DataToReturn.MinOceanHeight = MinOceanHeight;
	DataToReturn.SamplingMethod = SamplingMethod;

	return DataToReturn;
};
void AHeightMapVolume::OnConstruction(const FTransform& Transform)
{
	MaxHeight = MapHeight + Altitude;
	MinHeight = Altitude;
	
		if (PREVIOUS_Location != GetActorLocation()) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_Rotation != GetActorRotation()) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_Scale != GetActorScale()) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MaxHeight != MaxHeight) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MinHeight != MinHeight) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MaxOceanHeight != MaxOceanHeight) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MinOceanHeight != MinOceanHeight) 
		{
			NeedRefresh = true;
		}
		
		if (PREVIOUS_MaxHumidity != MaxHumidity) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MinHumidity != MinHumidity) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MaxTemperature != MaxTemperature) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_MinTemperature != MinTemperature) 
		{
			NeedRefresh = true;
		}

		if (PREVIOUS_EdgeFalloff != EdgeFalloff) 
		{
			NeedRefresh = true;
		}

		if (IsValid(HeightMapData) && HeightMapData->PlanedUpdated == false) {
			HeightMapData->PlanedUpdated = true;
			NeedRefresh = true;
		}

		if (NeedRefresh)
		{

			PREVIOUS_Location = GetActorLocation();
			PREVIOUS_Rotation = GetActorRotation();
			PREVIOUS_Scale = GetActorScale();
			PREVIOUS_MaxHeight = MaxHeight;
			PREVIOUS_MinHeight = MinHeight;
			PREVIOUS_MaxOceanHeight = MaxOceanHeight;
			PREVIOUS_MinOceanHeight = MinOceanHeight;
			PREVIOUS_MaxHumidity = MaxHumidity;
			PREVIOUS_MinHumidity = MinHumidity;
			PREVIOUS_MaxTemperature = MaxTemperature;
			PREVIOUS_MinTemperature = MinTemperature;
			PREVIOUS_EdgeFalloff = EdgeFalloff;
		}

}
AHeightMapVolume::AHeightMapVolume()
{
	if (!HeightMapData) HeightMapData = CreateDefaultSubobject<UHeightMapVolumeData>(TEXT("HeightMapData"));
	PrimaryActorTick.bCanEverTick = false;
	MaxHeight = MapHeight + Altitude;
	MinHeight = Altitude;
}
bool AHeightMapVolume::IsHeightDataValid() 
{
	if (IsValid(HeightMapData)) 
	{
		//TODO : Print warning because the HMI don't have data 
		return true;
	}
	return false;
}
bool AHeightMapVolume::CanSample()
{
	return (CanSampleMask(EWSHeightMask::OceanHeight) || CanSampleMask(EWSHeightMask::Humidity)  || CanSampleMask(EWSHeightMask::Temperature)  || CanSampleMask(EWSHeightMask::Height) );
}

bool AHeightMapVolume::CanSampleMask(const EWSHeightMask Mask)
{
	MaxHeight = MapHeight + Altitude;
	MinHeight = Altitude;
	
	if (!IsHeightDataValid())
		return false;
	if (HeightMapData->MaskSize(Mask) <= 0)
		return false;

	switch (Mask)
	{
	case EWSHeightMask::Height:
		return Height && !HeightMapData->bIgnoreHeightMap;
	case EWSHeightMask::Temperature:
		return Temperature && !HeightMapData->bIgnoreTemperature;
	case EWSHeightMask::Humidity:
		return Humidity && !HeightMapData->bIgnoreHumidity;
	case EWSHeightMask::Alpha:
		return HeightAlpha && !HeightMapData->bIgnoreAlpha;
	case EWSHeightMask::OceanHeight:
		return OceanHeight && !HeightMapData->bIgnoreOceanHeightMap;
	case EWSHeightMask::OceanAlpha:
		return OceanHeightAlpha && !HeightMapData->bIgnoreOceanAlpha;
	default:
		return Height && !HeightMapData->bIgnoreHeightMap;
	}
}

float AHeightMapVolume::GetData(const FVector2D UV, const EWSHeightMask Mask) const
{
	return GetData(FDVector2D(UV),Mask);
}

double AHeightMapVolume::GetData(const FDVector2D UV, const EWSHeightMask Mask) const
{
	return HeightMapData->GetSampledValue(UV,Mask,SamplingMethod);
}

//PixelY * HeightMipMap->SizeX + PixelX

