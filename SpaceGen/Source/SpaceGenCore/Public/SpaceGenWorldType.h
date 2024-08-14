// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "DoublePrecisionUtils.h"
#include "NoiseData.h"

class WorldScapeWorld {

public:

	static DVector GetVirtualPosition(DVector ECEFPosition, double PlanetScale, bool FlatWorld);

	static DVector GetUpVectorSnapped(DVector ECEFPosition, float GridAngle, bool FlatWorld);

	static DVector GetUpVector(DVector ECEFPosition, bool FlatWorld);

	static FVector GetTangent(FVector ECEFPosition, float GridAngle, bool FlatWorld);

	static DVector GetTangent(DVector ECEFPosition, float GridAngle, bool FlatWorld);

	static FVector GetBiTangent(FVector ECEFPosition, float GridAngle, bool FlatWorld);

	static DVector GetBiTangent(DVector ECEFPosition, float GridAngle, bool FlatWorld);

	static double  GetPawnDistanceFromGround(DVector ECEFPosition, bool FlatWorld, FNoiseData NData, double PlanetScale);

	static double  GetPawnAltitude(DVector ECEFPosition, bool FlatWorld, double PlanetScale, double OceanHeight);

	static DVector GetVertexTransformation(double Height, DVector VertexPos, bool FlatWorld, DVector ECEFVertexPosition);

	static double GetLattitude(DVector Position, FRotator LattitudeRotation, bool FlatWorld, double PlanetScaleCode);

	static void GetSnappedPosition(DVector& SnappedPosition, FVector& HardenNormal, FVector2D& SubPosition, bool NormalBeenChanged, double& StepSize,
		bool& ForceUpdate, DVector PPos, DVector PlanetLocation, int Lod, double AltitudeMultiplier, double TriangleSize, int LodResolution, double PlanetScaleCode, double GridAngle,
		bool flatWorld, bool UpdateHarden = false, FVector2D pFlatWorldLimit = FVector2D(10000, 10000), bool pLimitFlatWorld = false);

	static DVector GetProjectedPos(DVector PlayerPos, float GridAngle, double PlanetScaleCode,
		bool FlatWorld, DVector PlayerPositionNormal);

	static DVector GetHeightZeroPosition(DVector Position, double PlanetScaleCode, bool FlatWorld);

};