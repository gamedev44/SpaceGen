// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeHelper.h"

//IsPointInCube is inside or on border, where IsPointInsideCube is only inside

bool WorldScapeHelper::IsPointInCube(FVector Point, FVector CubePosition, double CubeSize) 
{
	return (Point.X  <=  CubePosition.X + CubeSize &&
		Point.X >=  CubePosition.X - CubeSize &&
		Point.Y   <=  CubePosition.Y + CubeSize &&
		Point.Y >=  CubePosition.Y - CubeSize &&
		Point.Z <=  CubePosition.Z + CubeSize &&
		Point.Z >=  CubePosition.Z - CubeSize);
}
bool WorldScapeHelper::IsPointInCube(DVector Point, DVector CubePosition, double CubeSize)
{
	return (Point.X <= CubePosition.X + CubeSize &&
		Point.X >= CubePosition.X - CubeSize &&
		Point.Y <= CubePosition.Y + CubeSize &&
		Point.Y >= CubePosition.Y - CubeSize &&
		Point.Z <= CubePosition.Z + CubeSize &&
		Point.Z >= CubePosition.Z - CubeSize);
}

bool WorldScapeHelper::IsPointInCube(DVector Point, DVector CubePosition, FVector CubeSize)
{
	return (Point.X <= CubePosition.X + CubeSize.X*0.5f &&
		Point.X >= CubePosition.X - CubeSize.X*0.5f &&
		Point.Y <= CubePosition.Y + CubeSize.Y*0.5f &&
		Point.Y >= CubePosition.Y - CubeSize.Y * 0.5f &&
		Point.Z <= CubePosition.Z + CubeSize.Z * 0.5f &&
		Point.Z >= CubePosition.Z - CubeSize.Z * 0.5f);
}


bool WorldScapeHelper::IsPointInsideCube(FVector Point, FVector CubePosition, double CubeSize)
{
	return (Point.X < CubePosition.X + CubeSize &&
		Point.X > CubePosition.X - CubeSize &&
		Point.Y < CubePosition.Y + CubeSize &&
		Point.Y > CubePosition.Y - CubeSize &&
		Point.Z < CubePosition.Z + CubeSize &&
		Point.Z > CubePosition.Z - CubeSize);
}
bool WorldScapeHelper::IsPointInsideCube(DVector Point, DVector CubePosition, double CubeSize)
{
	return (Point.X < CubePosition.X + CubeSize &&
		Point.X > CubePosition.X - CubeSize &&
		Point.Y < CubePosition.Y + CubeSize &&
		Point.Y > CubePosition.Y - CubeSize &&
		Point.Z < CubePosition.Z + CubeSize &&
		Point.Z > CubePosition.Z - CubeSize);
}

bool WorldScapeHelper::IsPointInRange(FVector Point, FVector rootPosition, double NodeScale)
{
	return IsPointInCube(Point, rootPosition, NodeScale);
}
bool WorldScapeHelper::IsPointInRange(DVector Point, DVector rootPosition, double NodeScale)
{
	return IsPointInCube(Point, rootPosition, NodeScale);
}

bool WorldScapeHelper::AreCubeIntersect(FVector CubeAPos, double CubeASize, FVector CubeBPos, double CubeBSize)
{
	return (IsPointInCube(CubeBPos + FVector(CubeBSize,0,0), CubeAPos, CubeASize*0.5) && 
		IsPointInCube(CubeBPos - FVector(CubeBSize*0.5, 0, 0), CubeAPos, CubeASize * 0.5)&&
	IsPointInCube(CubeBPos + FVector(0, CubeBSize, 0), CubeAPos, CubeASize * 0.5) && 
		IsPointInCube(CubeBPos - FVector(0, CubeBSize, 0), CubeAPos, CubeASize * 0.5)&&
		IsPointInCube(CubeBPos + FVector(0, 0, CubeBSize), CubeAPos, CubeASize * 0.5) && 
		IsPointInCube(CubeBPos - FVector(0, 0, CubeBSize), CubeAPos, CubeASize * 0.5));
}

FVector WorldScapeHelper::GetSeedOffset(int32 Seed) {
	return FVector(975 * Seed * Seed, -.012 * Seed * Seed, 100514.3 * Seed);
}

float WorldScapeHelper::GetFalloff(double pos, double edgefalloff)
{
	return NoiseMathUtils::Clamp((0.5 / edgefalloff) - abs(0.5 - pos) / edgefalloff, 0., 1.);
}


FVector WorldScapeHelper::RandPointInBox(FBox& Box, FRandomStream& Stream)
{
	return FVector(Stream.FRandRange(Box.Min.X, Box.Max.X),
		Stream.FRandRange(Box.Min.Y, Box.Max.Y),
		Stream.FRandRange(Box.Min.Z, Box.Max.Z));
}



void WorldScapeHelper::FindVertOverlaps(int32 TestVertIndex, const TArray<FVector>& Verts, TArray<int32>& VertOverlaps)
{
	// Check if Verts is empty or test is outside range
	if (TestVertIndex < Verts.Num())
	{
		const FVector TestVert = Verts[TestVertIndex];

		for (int32 VertIdx = 0; VertIdx < Verts.Num(); VertIdx++)
		{
			// First see if we overlap, and smoothing groups are the same
			if (TestVert.Equals(Verts[VertIdx]))
			{
				// If it, so we are at least considered an 'overlap' for normal gen
				VertOverlaps.Add(VertIdx);
			}
		}
	}
}

