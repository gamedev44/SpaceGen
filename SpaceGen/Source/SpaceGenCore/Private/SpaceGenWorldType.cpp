// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeWorldType.h"




DVector WorldScapeWorld::GetVirtualPosition(DVector ECEFPosition, double PlanetScale,bool FlatWorld) 
{
	if (FlatWorld) 
	{
		return DVector(ECEFPosition.X, ECEFPosition.Y, 0);
	}
	else 
	{
		DVector Normal = ECEFPosition;
		Normal.Normalize();
		return Normal * PlanetScale;
	}
	
}

DVector WorldScapeWorld::GetUpVectorSnapped(DVector ECEFPosition, float GridAngle, bool FlatWorld) 
{
	if (FlatWorld)
	{
		return  DVector(0, 0, 1);
	}

	DVector Normal = ECEFPosition;
	Normal.Normalize();
	Normal.SnapNormal(GridAngle);

	return Normal;
}


DVector WorldScapeWorld::GetUpVector(DVector ECEFPosition,  bool FlatWorld) 
{
	if (FlatWorld) {
		return  DVector(0, 0, 1);
	}
	DVector Normal = ECEFPosition;
	Normal.Normalize();
	return Normal;
}

FVector WorldScapeWorld::GetTangent(FVector ECEFPosition, float GridAngle, bool FlatWorld) 
{
	if (FlatWorld)
	{
		return  FVector(1, 0, 0);
	}

	DVector Tangent;
	DVector Normal = ECEFPosition;
	Normal.Normalize();
	Normal.SnapNormal(GridAngle);

	if (abs(Normal.Z) > 0.90) 
	{
		return FVector(1, 0, 0);
	}
	else 
	{
		Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		Tangent.Normalize();
	}
	return Tangent.ToFVector();
}

DVector WorldScapeWorld::GetTangent(DVector ECEFPosition, float GridAngle, bool FlatWorld) 
{
	if (FlatWorld)
	{
		return  DVector(1, 0, 0);
	}

	DVector Tangent;
	DVector Normal = ECEFPosition;
	Normal.Normalize();
	Normal.SnapNormal(GridAngle);

	if (abs(Normal.Z) > 0.90) 
	{
		return DVector(1, 0, 0);
	}
	else 
	{
		Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		Tangent.Normalize();
	}
	return Tangent;
}

FVector WorldScapeWorld::GetBiTangent(FVector ECEFPosition, float GridAngle, bool FlatWorld) 
{
	if (FlatWorld)
	{
		return  FVector(0, 1, 0);
	}
		

	DVector Tangent;
	DVector BiTangent;
	DVector Normal = ECEFPosition;
	Normal.Normalize();
	Normal.SnapNormal(GridAngle);
	if (abs(Normal.Z) > 0.90) 
	{
		return FVector(0, 1, 0);
	}
	else 
	{
		Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		Tangent.Normalize();
		BiTangent = DVector::CrossProduct(Normal, Tangent);
		BiTangent.Normalize();
	}
	return BiTangent.ToFVector();
}

DVector WorldScapeWorld::GetBiTangent(DVector ECEFPosition, float GridAngle, bool FlatWorld) 
{
	if (FlatWorld)
	{
		return  DVector(1, 0, 0);
	}

	DVector Tangent;
	DVector BiTangent;
	DVector Normal = ECEFPosition;
	Normal.Normalize();
	Normal.SnapNormal(GridAngle);
	if (abs(Normal.Z) > 0.90) 
	{
		return DVector(0, 1, 0);
	}
	else 
	{
		Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		Tangent.Normalize();
		BiTangent = DVector::CrossProduct(Normal, Tangent);
		BiTangent.Normalize();
	}
	return BiTangent;
}


double  WorldScapeWorld::GetPawnDistanceFromGround(DVector ECEFPosition, bool FlatWorld, FNoiseData NData, double PlanetScale) 
{
	if (FlatWorld) 
	{
		return ECEFPosition.Z - NData.Height;
	}
	else 
	{
		double PlayerDistanceFromCenter = (ECEFPosition).Lenght();
		double SurfaceDistanceFromCenter = NData.Height + PlanetScale;

		return PlayerDistanceFromCenter - SurfaceDistanceFromCenter;
	}
}


double  WorldScapeWorld::GetPawnAltitude(DVector ECEFPosition, bool FlatWorld, double PlanetScale, double OceanHeight) 
{
	if (FlatWorld) 
	{
		return ECEFPosition.Z - OceanHeight;
	}
	else 
	{
		double PlayerDistanceFromCenter = (ECEFPosition).Lenght();
		return PlayerDistanceFromCenter - (PlanetScale + OceanHeight);
	}

	return 0;
}

DVector WorldScapeWorld::GetVertexTransformation(double Height, DVector VertexPos,bool FlatWorld, DVector ECEFVertexPosition) 
{
	if (FlatWorld) 
	{
		return (DVector(0, 0, Height) + VertexPos).ToFVector();
	}
	else 
	{
		ECEFVertexPosition.Normalize();
		return (ECEFVertexPosition * Height + VertexPos).ToFVector();
	}
	
}

double WorldScapeWorld::GetLattitude(DVector Position,FRotator LattitudeRotation, bool FlatWorld, double PlanetScaleCode)
{
	if (!FlatWorld) 
	{
		FTransform NoiseTransform = FTransform(LattitudeRotation, FVector(0, 0, 0));
		//TODO Make use of FVector4 transform (once it is fixed)
		FVector TransformedVector = NoiseTransform.TransformVectorNoScale(Position.ToFVector());
		return (TransformedVector.Z/ PlanetScaleCode);
	}
	else 
	{
		return 0.5;
	}
}

double CeilGridValue(double Value, double Grid) 
{
	return ceil(Value / Grid) * Grid;
}

void WorldScapeWorld::GetSnappedPosition(DVector& SnappedPosition, FVector& HardenNormal, FVector2D& SubPosition, bool NormalBeenChanged, double& StepSize, 
	bool& ForceUpdate, DVector PPos, DVector PlanetLocation, int Lod, double AltitudeMultiplier, double TriangleSize, int LodResolution, double PlanetScaleCode, double GridAngle, 
	bool flatWorld, bool UpdateHarden, FVector2D pFlatWorldLimit, bool pLimitFlatWorld)
{
	DVector Normal = HardenNormal;
	Normal.SnapNormal(GridAngle);
	double StepSizePO = (double)TriangleSize * pow(2, Lod + 1) * AltitudeMultiplier;
	DVector SnappedPositionPO;

	if (flatWorld) 
	{

		if (pLimitFlatWorld)
		{
			if (abs(PPos.X) > pFlatWorldLimit.X) PPos.X = pFlatWorldLimit.X * FMath::Sign(PPos.X) - (TriangleSize * LodResolution*0.5) * FMath::Sign(PPos.X);
			if (abs(PPos.Y) > pFlatWorldLimit.Y) PPos.Y = pFlatWorldLimit.Y * FMath::Sign(PPos.Y) - (TriangleSize * LodResolution * 0.5) * FMath::Sign(PPos.Y);
		}


		SnappedPosition = DVector(
			CeilGridValue(PPos.X, StepSize),
			CeilGridValue(PPos.Y, StepSize),
			0);

		SnappedPositionPO = DVector(
			CeilGridValue(PPos.X, StepSizePO),
			CeilGridValue(PPos.Y, StepSizePO),
			0);

		SubPosition = FVector2D(0, 0);

		if (abs(SnappedPosition.X - SnappedPositionPO.X) < 0.5 * StepSizePO) SubPosition += FVector2D(1, 0);
		if (abs(SnappedPosition.Y - SnappedPositionPO.Y) < 0.5 * StepSizePO) SubPosition += FVector2D(0, 1);

		


		return;
	}

	if (NormalBeenChanged) 
	{
		ForceUpdate = true;
	}



	if (abs(Normal.Z) > 0.90) 
	{
		SnappedPosition = DVector(
			CeilGridValue(PPos.X, StepSize),
			CeilGridValue(PPos.Y, StepSize),
			PlanetScaleCode * FMath::Sign(Normal.Z));

		SnappedPositionPO = DVector(
			CeilGridValue(PPos.X, StepSizePO),
			CeilGridValue(PPos.Y, StepSizePO),
			PlanetScaleCode * FMath::Sign(Normal.Z));

		SubPosition = FVector2D(0, 0);

		if (abs(SnappedPosition.X - SnappedPositionPO.X) < 0.5 * StepSizePO) SubPosition += FVector2D(1, 0);
		if (abs(SnappedPosition.Y - SnappedPositionPO.Y) < 0.5 * StepSizePO) SubPosition += FVector2D(0, 1);
	}
	else 
	{
		bool WaterBody = false;

		DVector Tangent = DVector::CrossProduct(Normal, DVector(0, 0, 1));
		DVector BiTangent = DVector::CrossProduct(Normal, Tangent);

		Tangent.Normalize();
		BiTangent.Normalize();

		DVector4 Quaternion = DVector4(Tangent, BiTangent, Normal, (Normal * PlanetScaleCode));

		DVector PPosPlan = (PPos - (Normal * PlanetScaleCode)).InverseTransformNoScale(Quaternion);


		SnappedPosition = DVector(
			CeilGridValue(PPosPlan.X, StepSize),
			CeilGridValue(PPosPlan.Y, StepSize),
			0);

		SnappedPositionPO = DVector(
			CeilGridValue(PPosPlan.X, StepSizePO),
			CeilGridValue(PPosPlan.Y, StepSizePO),
			0);

		SubPosition = FVector2D(0, 0);

		if (abs(SnappedPosition.X - SnappedPositionPO.X) < 0.5 * StepSizePO) SubPosition += FVector2D(1, 0);
		if (abs(SnappedPosition.Y - SnappedPositionPO.Y) < 0.5 * StepSizePO) SubPosition += FVector2D(0, 1);


		DVector SnappedPositionA = SnappedPosition.TransformNoScale(Quaternion) + (Normal * PlanetScaleCode);

		SnappedPosition = SnappedPositionA;
	}
}


DVector ECEFToCube(const DVector position, const  double PlanetScaleCode)
{
	DVector Normal = position;
	Normal.Normalize();

	if (abs(Normal.Z) > abs(Normal.X) && abs(Normal.Z) > abs(Normal.Y)) 
	{
		return DVector((Normal.X * PlanetScaleCode) / abs(Normal.Z), (Normal.Y * PlanetScaleCode) / abs(Normal.Z), FMath::Sign(Normal.Z) * PlanetScaleCode);
	}
	else if (abs(Normal.X) > abs(Normal.Y)) 
	{
		return DVector(FMath::Sign(Normal.X) * PlanetScaleCode, (Normal.Y * PlanetScaleCode) / abs(Normal.X), (Normal.Z * PlanetScaleCode) / abs(Normal.X));
	}
	else 
	{
		return DVector((Normal.X * PlanetScaleCode) / abs(Normal.Y), FMath::Sign(Normal.Y) * PlanetScaleCode, (Normal.Z * PlanetScaleCode) / abs(Normal.Y));
	}
}


DVector intersectPoint(DVector rayVector, DVector rayPoint, DVector planeNormal, DVector planePoint) 
{
	DVector diff = rayPoint - planePoint;
	double prod1 = diff.X * planeNormal.X + diff.Y * planeNormal.Y + diff.Z * planeNormal.Z;
	double prod2 = rayVector.X * planeNormal.X + rayVector.Y * planeNormal.Y + rayVector.Z * planeNormal.Z;
	double prod3 = prod1 / prod2;
	return rayPoint - rayVector * prod3;
}

DVector ProjectedPosition(DVector position, DVector Normal, double AngleSnap, double Apothem) 
{
	double DegreeToRad = 3.1415926535897932384626433832795 / 180.;
	double SideLenght = Apothem * 2 * tan(AngleSnap * 0.5 * DegreeToRad);
	double ShapeRadius = Apothem / cos(AngleSnap * 0.5 * DegreeToRad);

	DVector SnappedNorm = Normal;
	SnappedNorm.SnapNormal(AngleSnap);
	DVector ProjectedPosition = intersectPoint(Normal, position, SnappedNorm, SnappedNorm * Apothem);


	return ProjectedPosition;
}

DVector WorldScapeWorld::GetProjectedPos(DVector PlayerPos, float GridAngle, double PlanetScaleCode,
	bool FlatWorld, DVector PlayerPositionNormal) 
{
	if (!FlatWorld) 
	{
		DVector PPos = ProjectedPosition(PlayerPositionNormal * PlanetScaleCode, PlayerPositionNormal, GridAngle, PlanetScaleCode);

		DVector PlayerPositionNormalSnapped = PlayerPositionNormal;
		PlayerPositionNormalSnapped.SnapNormal(GridAngle);
		if (abs(PlayerPositionNormalSnapped.Z) > 0.9)
			return ECEFToCube(PlayerPositionNormal * PlanetScaleCode, PlanetScaleCode);

		return PPos;
	}
	return PlayerPos;
}


DVector WorldScapeWorld::GetHeightZeroPosition(DVector Position, double PlanetScaleCode,bool FlatWorld) 
{
	if (FlatWorld) 
	{
		Position.Z = 0;
	}
	else 
	{
		DVector PositionNormal = Position;
		PositionNormal.Normalize();
		Position = (PositionNormal * PlanetScaleCode).ToFVector();
	}
	return Position;
}