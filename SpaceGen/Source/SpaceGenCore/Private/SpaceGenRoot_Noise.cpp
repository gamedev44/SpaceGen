// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeRoot.h"


FNoiseData AWorldScapeRoot::GetGroundNoise(const FVector Position, const bool Water, const bool IgnoreWorldBorder)
{
	return GetGroundNoise(DVector(Position), Water, IgnoreWorldBorder);
}

FNoiseData AWorldScapeRoot::GetGroundNoise(const DVector Position, const bool Water,const bool IgnoreWorldBorder)
{


	TArray<FHeightMapVolumeDataCopy> VolumeListVar;
	TArray<FNoiseVolumeData> NoiseVolumeListVar;
	TArray<FTerrainHoleVolumeData> TerrainHoleVolumeListVar;

	TArray<ANoiseVolume*> NoiseVolumeOriginListVar = GetNoiseVolumeList(Position);
	for (int32 i = 0; i < NoiseVolumeOriginListVar.Num(); i++)
	{
		if (NoiseVolumeOriginListVar.IsValidIndex(i) && IsValid(NoiseVolumeOriginListVar[i]))
			NoiseVolumeListVar.Add(NoiseVolumeOriginListVar[i]->GetNoiseVolumeData());
	}

	TArray<AHeightMapVolume*> HeightVolumeOriginListVar = GetHeightMapVolumeList(Position);
	for (int32 i = 0; i < HeightVolumeOriginListVar.Num(); i++)
	{
		if (HeightVolumeOriginListVar.IsValidIndex(i) && IsValid(HeightVolumeOriginListVar[i]))
			VolumeListVar.Add(HeightVolumeOriginListVar[i]->GetHeightMapVolumeData());
	}

	TArray<ATerrainHoleVolume*> TerrainHoleVolumeOirignListVar = GetTerrainHoleList(Position);
	for (int32 i = 0; i < TerrainHoleVolumeOirignListVar.Num(); i++)
	{
		if (TerrainHoleVolumeOirignListVar.IsValidIndex(i) && IsValid(TerrainHoleVolumeOirignListVar[i]))
			TerrainHoleVolumeListVar.Add(TerrainHoleVolumeOirignListVar[i]->GetTerrainHoleVolumeData());
	}

	TArray<FTransform> VolumeTransformArray;
	for (int32 i = 0; i < VolumeListVar.Num(); i++)
	{
		if (VolumeListVar.IsValidIndex(i))
		{
			VolumeTransformArray.Add(VolumeListVar[i].VolumeLocation);
		}
	}

	return GetGroundNoise(Position, NoiseVolumeListVar, VolumeListVar, TerrainHoleVolumeListVar, VolumeTransformArray, Water, IgnoreWorldBorder);


}


FNoiseData AWorldScapeRoot::GetGroundNoise(const FVector Position,
	const TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
	const TArray<FTransform> VolumeTransformList, const bool Water, const bool IgnoreWorldBorder)
{
	return GetGroundNoise(DVector(Position), NoiseVolumeListVar, VolumeListVar, TerrainHoleListVar, VolumeTransformList, Water, IgnoreWorldBorder);
}

FNoiseData AWorldScapeRoot::GetGroundNoise(const DVector Position,
	const TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
	const TArray<FTransform> VolumeTransformList, const bool Water, const bool IgnoreWorldBorder)
{
	DVector NewPosition = WorldScapeWorld::GetHeightZeroPosition(Position, PlanetScaleCode, bFlatWorld);
	return GetNoise(NewPosition, NoiseVolumeListVar, VolumeListVar, TerrainHoleListVar, VolumeTransformList, Water, IgnoreWorldBorder);
}


FNoiseData AWorldScapeRoot::GetNoise(const FVector Position, const bool Water, const bool IgnoreWorldBorder)
{
	return GetNoise(DVector(Position), Water, IgnoreWorldBorder);
}

FNoiseData AWorldScapeRoot::GetNoise(const DVector Position, const bool Water, const bool IgnoreWorldBorder)
{

	TArray<FHeightMapVolumeDataCopy> VolumeListVar;
	TArray<FNoiseVolumeData> NoiseVolumeListVar;
	TArray<FTerrainHoleVolumeData> TerrainHoleVolumeListVar;

	TArray<ANoiseVolume*> NoiseVolumeOriginListVar = GetNoiseVolumeList(Position);
	for (int32 i = 0; i < NoiseVolumeOriginListVar.Num(); i++)
	{
		if (NoiseVolumeOriginListVar.IsValidIndex(i) && IsValid(NoiseVolumeOriginListVar[i]))
			NoiseVolumeListVar.Add(NoiseVolumeOriginListVar[i]->GetNoiseVolumeData());
	}

	TArray<AHeightMapVolume*> HeightVolumeOriginListVar = GetHeightMapVolumeList(Position);
	for (int32 i = 0; i < HeightVolumeOriginListVar.Num(); i++)
	{
		if (HeightVolumeOriginListVar.IsValidIndex(i) && IsValid(HeightVolumeOriginListVar[i]))
			VolumeListVar.Add(HeightVolumeOriginListVar[i]->GetHeightMapVolumeData());
	}

	TArray<ATerrainHoleVolume*> TerrainHoleVolumeOirignListVar = GetTerrainHoleList(Position);
	for (int32 i = 0; i < TerrainHoleVolumeOirignListVar.Num(); i++)
	{
		if (TerrainHoleVolumeOirignListVar.IsValidIndex(i) && IsValid(TerrainHoleVolumeOirignListVar[i]))
			TerrainHoleVolumeListVar.Add(TerrainHoleVolumeOirignListVar[i]->GetTerrainHoleVolumeData());
	}

	TArray<FTransform> VolumeTransformArray;
	for (int32 i = 0; i < VolumeListVar.Num(); i++)
	{
		if (VolumeListVar.IsValidIndex(i))
		{
			VolumeTransformArray.Add(VolumeListVar[i].VolumeLocation);
		}
	}

	return GetNoise(Position, NoiseVolumeListVar, VolumeListVar, TerrainHoleVolumeListVar, VolumeTransformArray, Water, IgnoreWorldBorder);
}


FNoiseData AWorldScapeRoot::GetNoise(const FVector Position,
	const TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
	const TArray<FTransform> VolumeTransformList, const bool Water, const bool IgnoreWorldBorder)
{
	return GetNoise(DVector(Position), NoiseVolumeListVar, VolumeListVar, TerrainHoleListVar, VolumeTransformList, Water, IgnoreWorldBorder);
}

FNoiseData AWorldScapeRoot::GetNoise(const DVector Position,
	const TArray<FNoiseVolumeData> NoiseVolumeListVar, const TArray<FHeightMapVolumeDataCopy> VolumeListVar, const TArray<FTerrainHoleVolumeData> TerrainHoleListVar,
	const TArray<FTransform> VolumeTransformList, const bool Water, const bool IgnoreWorldBorder)
{


	if (bFlatWorld && bLimitFlatWorldSize && !IgnoreWorldBorder)
	{
		if (abs(Position.X) >= FlatWorldLimit.X || abs(Position.Y) >= FlatWorldLimit.Y) {

			FNoiseData EmptyNoise = FNoiseData();
			EmptyNoise.Height = -NoiseIntensity;
			return EmptyNoise;
		}
	}

	DVector PositionWorldTransformedPosition;
	DVector PositionTransformedPosition;
	DVector PositionNormal = Position;
	PositionNormal.Normalize();
	DVector NoisePosition;

	FNoiseData Data = FNoiseData();
	FNoiseData TempData = FNoiseData();
	FNoiseData OceanTerrainTempData = FNoiseData();
	if (Water)
	{
		
	}
	float lattitude = GetLattitude(Position);

	FVector SeedOffset = FVector(0);
	if (bFlatWorld) SeedOffset = WorldScapeHelper::GetSeedOffset(Seed);

	double AlphaPlanetary = 0;
	double TerrainAlphaPlanetary = 0;
	bool UsePlanetary = false;
	if (GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap && IsValid(PlanetaryHeightMap) )
	{
		TerrainAlphaPlanetary = 0;
		AlphaPlanetary = 1;
		TempData.Temperature = -1;
		TempData.Humidity = -1;

		OceanTerrainTempData.Temperature = -1;
		OceanTerrainTempData.Humidity = -1;
		
		FDVector2D PlanetaryCoordinate = GetPlanetaryCoordinate(Position);

		// Pit :						0.211780
		// out of pit :					0.212736

		
		if (!Water)
		{
			if (bPlanetaryHeight&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Height)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Height,SamplingMethod);
				TempData.Height = PlanetaryMinHeight + SampleValue * (PlanetaryMaxHeight - PlanetaryMinHeight);
				TempData.HeightNormalize = SampleValue;
				UsePlanetary = true;
			}
			if (bPlanetaryTemperature&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Temperature)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Temperature,SamplingMethod);
				TempData.Temperature = PlanetaryMinTemperature + SampleValue * (PlanetaryMaxTemperature - PlanetaryMinTemperature);
					
			}
			if (bPlanetaryHumidity&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Humidity)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Humidity,SamplingMethod);
				TempData.Humidity = PlanetaryMinHumidity + SampleValue  * (PlanetaryMaxHumidity - PlanetaryMinHumidity);
			}
			if (bPlanetaryHeightAlpha&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Alpha)>0)
			{
				AlphaPlanetary = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Alpha,SamplingMethod);
			}

		}
		else
		{
			if (bPlanetaryOceanHeight&&PlanetaryHeightMap->MaskSize(EWSHeightMask::OceanHeight)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::OceanHeight,SamplingMethod);

				TempData.Height = PlanetaryMinOceanHeight + SampleValue * (PlanetaryMaxOceanHeight - PlanetaryMinOceanHeight);
				TempData.HeightNormalize = SampleValue;
				UsePlanetary = true;
			}

			if (bPlanetaryOceanHeight&&PlanetaryHeightMap->MaskSize(EWSHeightMask::OceanAlpha)>0)
			{
				AlphaPlanetary = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::OceanAlpha,SamplingMethod);
			}


			if (bPlanetaryHeight&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Height)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Height,SamplingMethod);
				OceanTerrainTempData.Height = PlanetaryMinHeight + SampleValue * (PlanetaryMaxHeight - PlanetaryMinHeight);
				OceanTerrainTempData.HeightNormalize = SampleValue;
				UsePlanetary = true;
			}
			if (bPlanetaryTemperature&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Temperature)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Temperature,SamplingMethod);
				OceanTerrainTempData.Temperature = PlanetaryMinTemperature + SampleValue * (PlanetaryMaxTemperature - PlanetaryMinTemperature);
					
			}
			if (bPlanetaryHumidity&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Humidity)>0)
			{
				double SampleValue = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Humidity,SamplingMethod);
				OceanTerrainTempData.Humidity = PlanetaryMinHumidity + SampleValue  * (PlanetaryMaxHumidity - PlanetaryMinHumidity);
			}
			if (bPlanetaryHeightAlpha&&PlanetaryHeightMap->MaskSize(EWSHeightMask::Alpha)>0)
			{
				TerrainAlphaPlanetary = PlanetaryHeightMap->GetSampledValue(PlanetaryCoordinate,EWSHeightMask::Alpha,SamplingMethod);
			}
		}

		

		//Out of pit :	TempData Height : 170193.203125
		//In pit :		TempData Height : 169423.968750
		
		
		AlphaPlanetary*= PlanetaryBlendAlpha;
		TerrainAlphaPlanetary*= PlanetaryBlendAlpha;
	}
	

	
	if (IsValid(WorldScapeNoise))
	{
		if (Water)
		{
			Data = WorldScapeNoise->GetOceanNoise(PlanetNoise, Position + NoiseOffset + SeedOffset, PlanetLocation, NoiseScale, NoiseIntensity, PlanetScaleCode, bFlatWorld, lattitude, NoisePosition,OceanTerrainTempData,UsePlanetary);
			if (Data.Height < OceanHeight) Data.Height = OceanHeight;
		}
		else
		{
			Data = WorldScapeNoise->GetNoise(PlanetNoise, Position + NoiseOffset + SeedOffset, PlanetLocation, NoiseScale, NoiseIntensity, PlanetScaleCode, bFlatWorld, lattitude, NoisePosition, TempData,UsePlanetary);

		}
	}
	else
	{
		return TempData;
	}

	if (TempData.Temperature<0)
	{
		TempData.Temperature = Data.Temperature;
	}
	if (TempData.Humidity<0)
	{
		TempData.Humidity = Data.Humidity;
	}

	switch (PlanetaryHeightMapBlend)
	{
	case EPlanetaryHeightMapBlendType::Addition:
		if (bPlanetaryInvertMapBlend)
			Data = FNoiseData::AddData(TempData,Data, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		else
			Data = FNoiseData::AddData(Data, TempData, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		break;
	case EPlanetaryHeightMapBlendType::Subtract:
		if (bPlanetaryInvertMapBlend)
			Data = FNoiseData::SubtractData(TempData,Data, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		else
			Data = FNoiseData::SubtractData(Data, TempData, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		break;
	case EPlanetaryHeightMapBlendType::Replace:
		if (bPlanetaryInvertMapBlend)
			Data = FNoiseData::LerpData(TempData,Data, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		else
			Data = FNoiseData::LerpData(Data, TempData, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		break;
	default:
		if (bPlanetaryInvertMapBlend)
			Data = FNoiseData::LerpData(TempData,Data, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		else
			Data = FNoiseData::LerpData(Data, TempData, AlphaPlanetary, HeightBlendAlpha,TemperatureBlendAlpha,HumidityBlendAlpha);
		break;
	}
	

	if (!(TerrainHoleListVar.Num() > 0 || VolumeListVar.Num() > 0 || NoiseVolumeListVar.Num() > 0))
	{
		return Data;
	}

	DVector Normal = Position;
	Normal.Normalize();

	if (bFlatWorld) {
		Normal = DVector(0, 0, 1);
	}

	PositionWorldTransformedPosition = Position + Normal * Data.Height;
	DVector PlanetSurfacePos = PositionWorldTransformedPosition;
	PositionWorldTransformedPosition = ECEFToWorld(PositionWorldTransformedPosition);


	if (NoiseVolumeListVar.Num() > 0)
	{
		for (int32 l = 0; l < NoiseVolumeListVar.Num(); l++)
		{
			if (!(NoiseVolumeListVar.IsValidIndex(l) ))
			{
				continue;
			}
			FNoiseVolumeData ActualNoiseVolume = NoiseVolumeListVar[l];

			FTransform ActualNoiseTransform = ActualNoiseVolume.VolumeLocation;

			float MaxDistance = (ActualNoiseTransform.GetScale3D().X + ActualNoiseTransform.GetScale3D().Y + ActualNoiseTransform.GetScale3D().Z) * 2;

			if ((PositionWorldTransformedPosition - ActualNoiseTransform.GetLocation()).Lenght() > MaxDistance) continue;

			//TODO : Make Double precision transformation
			PositionTransformedPosition = ActualNoiseTransform.InverseTransformPositionNoScale(PositionWorldTransformedPosition.ToFVector());

			if (WorldScapeHelper::IsPointInCube(PositionTransformedPosition, DVector(0, 0, 0), ActualNoiseTransform.GetScale3D() * 100) )
			{
				DVector VolumeRelative = PositionTransformedPosition;
				VolumeRelative = VolumeRelative / DVector(ActualNoiseTransform.GetScale3D() * 100);
				VolumeRelative = VolumeRelative + DVector(0.5, 0.5, 0.5);

				if (bFlatWorld) SeedOffset = WorldScapeHelper::GetSeedOffset(ActualNoiseVolume.Seed);

				if (Water) {
					TempData = ActualNoiseVolume.WorldScapeNoise->GetOceanNoise(ActualNoiseVolume.CustomVolumeNoise, Position + ActualNoiseVolume.NoiseOffset + SeedOffset, PlanetLocation, ActualNoiseVolume.NoiseScale, ActualNoiseVolume.NoiseIntensity, PlanetScaleCode, bFlatWorld, lattitude, NoisePosition, Data,UsePlanetary);
				}
				else {
					TempData = ActualNoiseVolume.WorldScapeNoise->GetNoise(ActualNoiseVolume.CustomVolumeNoise, Position + ActualNoiseVolume.NoiseOffset + SeedOffset, PlanetLocation, ActualNoiseVolume.NoiseScale, ActualNoiseVolume.NoiseIntensity, PlanetScaleCode, bFlatWorld, lattitude, NoisePosition, Data,UsePlanetary);
					TempData.Height += ActualNoiseVolume.NoiseHeightOffset;
				}
				double Edgefalloff = WorldScapeHelper::GetFalloff(VolumeRelative.X, ActualNoiseVolume.EdgeFalloff) * WorldScapeHelper::GetFalloff(VolumeRelative.Y, ActualNoiseVolume.EdgeFalloff) * WorldScapeHelper::GetFalloff(VolumeRelative.Z, ActualNoiseVolume.EdgeFalloff);
				Data = FNoiseData::LerpData(Data, TempData, Edgefalloff,1,1,1);
			}
		}
	}

	PositionWorldTransformedPosition = Position + Normal * Data.Height;
	PositionWorldTransformedPosition = ECEFToWorld(PositionWorldTransformedPosition);


	if (VolumeListVar.Num() > 0)
	{
		for (int32 j = 0; j < VolumeListVar.Num(); j++) {

			if (!(VolumeListVar.IsValidIndex(j) && VolumeTransformList.IsValidIndex(j)))
			{
				continue;
			}
			FHeightMapVolumeDataCopy ActualVolume = VolumeListVar[j];
			float VolumeSize = VolumeTransformList[j].GetScale3D().X * 50;

			

			if ((PositionWorldTransformedPosition - VolumeTransformList[j].GetLocation()).Lenght() > VolumeSize * 5)
			{
				continue;
			}

			//TODO : Make Double precision transformation
			PositionTransformedPosition = VolumeTransformList[j].InverseTransformPositionNoScale(PositionWorldTransformedPosition.ToFVector());
			PositionTransformedPosition.Z = 0;

			if (WorldScapeHelper::IsPointInRange(PositionTransformedPosition, FVector(0, 0, 0), VolumeSize))
			{
				

				FDVector2D VolumeUV = FDVector2D(PositionTransformedPosition.X, PositionTransformedPosition.Y);
				VolumeUV = VolumeUV / (VolumeSize * 2);
				VolumeUV = VolumeUV + FDVector2D(0.5f, 0.5f);


				double edgefalloff = WorldScapeHelper::GetFalloff(VolumeUV.X, ActualVolume.EdgeFalloff) * WorldScapeHelper::GetFalloff(VolumeUV.Y, ActualVolume.EdgeFalloff);
				double value;
				double intensity = 1;
				if (!Water && ActualVolume.CanSample(EWSHeightMask::Height))
				{
					if (ActualVolume.CanSample(EWSHeightMask::Alpha))
						intensity = ActualVolume.GetData(VolumeUV,EWSHeightMask::Alpha);
					
					value = ActualVolume.MinHeight + ActualVolume.GetData(VolumeUV,EWSHeightMask::Height) * (ActualVolume.MaxHeight - ActualVolume.MinHeight);

					if (ActualVolume.bOverrideHeight)
					{
						Data.HeightNormalize = NoiseMathUtils::Lerp(Data.HeightNormalize, value/NoiseIntensity, edgefalloff * intensity);
						Data.Height = NoiseMathUtils::Lerp(Data.Height, value, edgefalloff * intensity);
					}
					else
					{
						Data.HeightNormalize = Data.HeightNormalize + (value/NoiseIntensity) * edgefalloff * intensity;
						Data.Height = Data.Height + value * edgefalloff * intensity;
					}

					if (ActualVolume.CanSample(EWSHeightMask::OceanHeight))
					{
						if (ActualVolume.CanSample(EWSHeightMask::OceanAlpha))
							intensity = ActualVolume.GetData(VolumeUV,EWSHeightMask::OceanAlpha);
						else
							intensity = 1;


						value = ActualVolume.MinOceanHeight +  ActualVolume.GetData(VolumeUV,EWSHeightMask::OceanHeight) * ( ActualVolume.MaxOceanHeight - ActualVolume.MinOceanHeight);
						float waterHeight = NoiseMathUtils::Lerp(OceanHeight,value/NoiseIntensity  , edgefalloff * intensity);

						if (Data.WaterMask < 0.5 && waterHeight > Data.Height)
						{
							Data.WaterMask = 1;
						}
						else if (Data.WaterMask >= 0.5 && waterHeight < Data.Height)
						{
							Data.WaterMask = 0;
						}
					}
				}
				if (ActualVolume.CanSample(EWSHeightMask::Temperature))
				{
					value = ActualVolume.MinTemperature + ActualVolume.GetData(VolumeUV,EWSHeightMask::Temperature)* (ActualVolume.MaxTemperature-ActualVolume.MinTemperature);
					Data.Temperature = NoiseMathUtils::Lerp(Data.Temperature, value, edgefalloff * intensity);
				}
				if (ActualVolume.CanSample(EWSHeightMask::Humidity))
				{
					value = ActualVolume.MinHumidity + ActualVolume.GetData(VolumeUV,EWSHeightMask::Humidity) * (ActualVolume.MaxHumidity-ActualVolume.MinHumidity);
					Data.Humidity = NoiseMathUtils::Lerp(Data.Humidity, value, edgefalloff * intensity);
				}
				if (Water && ActualVolume.CanSample(EWSHeightMask::OceanHeight))
				{
					value = ActualVolume.MinOceanHeight +  ActualVolume.GetData(VolumeUV,EWSHeightMask::OceanHeight) * ( ActualVolume.MaxOceanHeight - ActualVolume.MinOceanHeight);
					Data.HeightNormalize = NoiseMathUtils::Lerp(Data.HeightNormalize, value/NoiseIntensity, edgefalloff * intensity);
					Data.Height = NoiseMathUtils::Lerp(Data.Height, value, edgefalloff * intensity);
				}
			}
		}
	}

	PositionWorldTransformedPosition = Position + Normal * Data.Height;
	PositionWorldTransformedPosition = ECEFToWorld(PositionWorldTransformedPosition);

	if (TerrainHoleListVar.Num() > 0)
	{
		for (int32 l = 0; l < TerrainHoleListVar.Num(); l++)
		{
			if (!TerrainHoleListVar.IsValidIndex(l))
			{
				continue;
			}
			FTerrainHoleVolumeData TerrainHoleVolume = TerrainHoleListVar[l];
			float VolumeSize = TerrainHoleVolume.VolumeLocation.GetScale3D().X * 50;

			//TODO : Make Double precision transformation
			PositionTransformedPosition = TerrainHoleVolume.VolumeLocation.InverseTransformPositionNoScale(PositionWorldTransformedPosition.ToFVector());

			if (WorldScapeHelper::IsPointInRange(PositionTransformedPosition, FVector(0, 0, 0), VolumeSize))
			{
				Data.Hole = true;
			}
		}
	}

	return Data;
}

