// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "FoliagesSector.h"

FFoliagesSector::FFoliagesSector(DVector pPosition, double pSize) 
{
		Position = pPosition;
		Size = pSize;
		FoliageSpawned = false;
}

bool FFoliagesSector::operator==(const FFoliagesSector& sector) const
{
	return (sector.Position == this->Position && sector.Size == this->Size);
}

bool FFoliagesSector::operator!=(const FFoliagesSector& sector) const
{
	const double SizeDiff = abs(this->Size - sector.Size);
	const double Distance = DVector::Dist(sector.Position,this->Position);
	
	return (SizeDiff < this->Size*0.01 && Distance < this->Size*0.01);
}

FBox FFoliagesSector::GetFBox(DVector Offset, double scale)
{
	return FBox((Position + Offset - DVector(Size * scale * 0.5)).ToFVector(), (Position + DVector(Size * scale * 0.5) + Offset).ToFVector());
}
