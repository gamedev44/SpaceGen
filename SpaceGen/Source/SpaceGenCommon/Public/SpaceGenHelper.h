// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "DoublePrecisionUtils.h"
#include "NoiseMathUtils.h"



class WORLDSCAPECOMMON_API WorldScapeHelper
{
public:
	static bool IsPointInCube(FVector Point, FVector CubePosition, double CubeSize);
	static bool IsPointInCube(DVector Point, DVector CubePosition, double CubeSize);
	static bool IsPointInCube(DVector Point, DVector CubePosition, FVector CubeSize);
	static bool IsPointInsideCube(FVector Point, FVector CubePosition, double CubeSize);
	static bool IsPointInsideCube(DVector Point, DVector CubePosition, double CubeSize);
	static bool IsPointInRange(FVector Point, FVector rootPosition, double NodeScale);
	static bool IsPointInRange(DVector Point, DVector rootPosition, double NodeScale);
	static bool AreCubeIntersect(FVector CubeAPos, double CubeASize, FVector CubeBPos, double CubeBSize);
	static FVector GetSeedOffset(int32 Seed);
	static float GetFalloff(double pos, double edgefalloff);
	static FVector RandPointInBox(FBox& Box, FRandomStream& Stream);
	static void FindVertOverlaps(int32 TestVertIndex, const TArray<FVector>& Verts, TArray<int32>& VertOverlaps);
};