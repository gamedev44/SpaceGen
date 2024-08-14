// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "PoissonDiscSampling.h"

FPoissonObject::FPoissonObject(FVector2D position, float radius)
{
    Position = position;
    Radius = radius;
}


TArray<FPoissonObject> FPoissonDiscSampling::GeneratePoints(float minRadius, float maxRadius, FVector2D SampleRegionSize, FRandomStream stream, int numSamplesBeforeRejection)
{
    float sqOf2 = 1.41421356237f;

    float RadiusVariation = FMath::Min(maxRadius / minRadius, 5.f);

    if (minRadius <= 0 || maxRadius <= 0)
    {
        //RIP
        return TArray<FPoissonObject>();
    }

    if (minRadius > maxRadius) 
    {
        float buffer = minRadius;
        minRadius = maxRadius;
        maxRadius = buffer;
    }

    float cellSize = minRadius / sqOf2;

    int sizeX = FMath::CeilToInt(SampleRegionSize.X / cellSize);
    int sizeY = FMath::CeilToInt(SampleRegionSize.Y / cellSize);

    int** grid = new int*[sizeX];

    for (int i = 0; i < sizeX; i++) {

        grid[i] = new int[sizeY];
    }


    TArray<FPoissonObject> points = TArray<FPoissonObject>();
    TArray<FPoissonObject> spawnPoints = TArray<FPoissonObject>();

    spawnPoints.Add(FPoissonObject(SampleRegionSize / 2, minRadius));
    while (spawnPoints.Num() > 0)
    {
        int spawnIndex = FMath::FloorToInt(FMath::Max(stream.FRandRange(0, spawnPoints.Num())-0.1f,0.f));
        FVector2D spawnCenter = spawnPoints[spawnIndex].Position;
        float spawnRadius = spawnPoints[spawnIndex].Radius;
        bool candidateAccepted = false;
        for (int i = 0; i < numSamplesBeforeRejection; i++)
        {
            float angle = stream.FRand() * PI * 2;
            FVector2D direction = FVector2D(FMath::Sin(angle), FMath::Cos(angle));
            float candidateRadius = FMath::Max(0.01f, stream.FRandRange(minRadius, maxRadius));
            FPoissonObject candidate = FPoissonObject(spawnCenter + direction * stream.FRandRange(spawnRadius, 2 * spawnRadius), candidateRadius);

            if (IsValid(candidate, SampleRegionSize, RadiusVariation, cellSize, points, grid))
            {
                points.Add(candidate);
                spawnPoints.Add(candidate);
                grid[(int)(candidate.Position.X / cellSize)] [(int)(candidate.Position.Y / cellSize)] = points.Num();
                candidateAccepted = true;
                break;
            }
        }

        if (!candidateAccepted)
        {
            spawnPoints.RemoveAt(spawnIndex);
        }
    }

    delete[] grid;

    return points;

}

bool FPoissonDiscSampling::IsValid(FPoissonObject candidate, FVector2D sampleRegionSize, float RadiusVariation, float cellSize, TArray<FPoissonObject> points, int** grid)
{
    if (candidate.Position.X > 0 && candidate.Position.X < sampleRegionSize.X && candidate.Position.Y > 0 && candidate.Position.Y < sampleRegionSize.Y)
    {

        int cellX = (int)(candidate.Position.X / cellSize);
        int cellY = (int)(candidate.Position.Y / cellSize);
        int searchStartX = FMath::Max(cellX - (int)(2 * RadiusVariation), 0);
        int searchEndX = FMath::Min(cellX + (int)(2 * RadiusVariation), (int)sizeof(grid) - 1);
        int searchStartY = FMath::Max(cellY - (int)(2 * RadiusVariation), 0);
        int searchEndY = FMath::Min(cellY + (int)(2 * RadiusVariation), (int)sizeof(grid[0]) - 1);

        for (int x = searchStartX; x <= searchEndX; x++)
        {
            for (int y = searchStartY; y <= searchEndY; y++)
            {
                int pointsIndex = grid[x][y] - 1;
                if (points.IsValidIndex(pointsIndex))
                {
                    float sqrDst = (candidate.Position - points[pointsIndex].Position).SizeSquared();
                    if (sqrDst < (candidate.Radius * candidate.Radius) || sqrDst < (points[pointsIndex].Radius * points[pointsIndex].Radius))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    return false;
}


