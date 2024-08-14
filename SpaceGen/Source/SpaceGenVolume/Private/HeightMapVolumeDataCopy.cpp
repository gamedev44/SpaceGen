// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "HeightMapVolumeDataCopy.h" 


bool FHeightMapVolumeDataCopy::IsHeightDataValid() const
{
	if (IsValid(HeightMapData))
	{
		//TODO : Print warning because the HMI don't have data 
		return true;
	}
	return false;
}


bool FHeightMapVolumeDataCopy::CanSample()
{
	return (CanSample(EWSHeightMask::OceanHeight) || CanSample(EWSHeightMask::Humidity)  || CanSample(EWSHeightMask::Temperature)  || CanSample(EWSHeightMask::Height) );
}

bool FHeightMapVolumeDataCopy::CanSample(const EWSHeightMask Mask)
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
		return bHeight && !HeightMapData->bIgnoreHeightMap;
	case EWSHeightMask::Temperature:
		return bTemperature && !HeightMapData->bIgnoreTemperature;
	case EWSHeightMask::Humidity:
		return bHumidity && !HeightMapData->bIgnoreHumidity;
	case EWSHeightMask::Alpha:
		return bHeightAlpha && !HeightMapData->bIgnoreAlpha;
	case EWSHeightMask::OceanHeight:
		return bOceanHeight && !HeightMapData->bIgnoreOceanHeightMap;
	case EWSHeightMask::OceanAlpha:
		return bOceanHeightAlpha && !HeightMapData->bIgnoreOceanAlpha;
	default:
		return bHeight && !HeightMapData->bIgnoreHeightMap;
	}
}


double FHeightMapVolumeDataCopy::GetData(const FDVector2D UV, const EWSHeightMask Mask) const
{
	return HeightMapData->GetSampledValue(UV,Mask,SamplingMethod);
}
