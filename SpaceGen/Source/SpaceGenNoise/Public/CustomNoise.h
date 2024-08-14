// Copyright 2021 IOLACORP STUDIO. All Rights Reserved



#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "DoublePrecisionUtils.h"
#include <array>
#include <utility>

enum ENoiseType
{
    Simplex,
    Cellular,
};


enum ECellularDistanceType
{
    Euclidean,
    EuclideanSq,
    Manhattan,
    Hybrid
};

enum ECellularType
{
    CellValue,
    Distance,
    Distance2,
    Distance2Add,
    Distance2Sub,
    Distance2Mul,
    Distance2Div
};

 /**
  * @brief Multiple Noise Implementation in a single class.
  */
class WORLDSCAPENOISE_API CustomNoise {
public:
    /**
     * 3D Cellular noise
     *
     * @param[in] position FVector coordinate
     * @param[in] CellularDistanceType ECellularDistanceType Cellular Distance Type
     * @param[in] CellularType ECellularType Cellular Type
     * @param[in] cellularJitter float How much are the cellular jiterred
     *
     * @return Noise value in the range[-1; 1], value of 0 on all integer coordinates.
     */

    float CellularNoise(FVector position, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, float cellularJitter = 1.f)
    {
        return CellularNoise((float)position.X, (float)position.Y, (float)position.Z, CellularDistanceType, CellularType,(float)cellularJitter);
    }
    float CellularNoise(float x, float y, float z, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, float cellularJitter = 1);

    /**
     * 3D Cellular noise
     *
     * @param[in] position DVector coordinate
     * @param[in] CellularDistanceType ECellularDistanceType Cellular Distance Type
     * @param[in] CellularType ECellularType Cellular Type
     * @param[in] cellularJitter double How much are the cellular jiterred
     *
     * @return Noise value in the range[-1; 1], value of 0 on all integer coordinates.
     */
    double CellularNoise(DVector position, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, double cellularJitter = 1.)
    {
        return CellularNoise((double)position.X, (double)position.Y, (double)position.Z, CellularDistanceType, CellularType, (double)cellularJitter);
    }
    double CellularNoise(double x, double y, double z, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, double cellularJitter = 1);


    /**
     * 3D Open simplex noise
     *
     * @param[in] position FVector coordinate
     *
     * @return Noise value in the range[-1; 1], value of 0 on all integer coordinates.
     */
    double OpenSimplexNoise(FVector position) const;
    double OpenSimplexNoise(DVector position) const;
    
    double m_stretch3d = (-1.0 / 6);
    double m_squish3d = (1.0 / 3);
    double m_norm3d = 103;
    std::array<short, 256> m_perm;
    std::array<short, 256> m_permGradIndex3d;
    std::array<char, 72> m_gradients3d;
    double extrapolate(int xsb, int ysb, int zsb, double dx, double dy, double dz) const;

    double OpenSimplexNoise(double x, double y, double z) const;
    //double extrapolate(int xsb, int ysb, int zsb, double dx, double dy, double dz) const;
    
    float Noise(FVector position) {
        return Noise(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance,1);
    }
    float Noise(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, float cellularJitter = 1);
    
    float Noise_01(FVector position) {
        return Noise_01(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance,1);
    }
    float Noise_01(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, float cellularJitter = 1);

    // 3D Perlin simplex Ridged noise
    float Ridge(FVector position) {
        return Ridge(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance,1);
    }
    float Ridge(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, float cellularJitter = 1);

    // Fractal/Fractional Brownian Motion (fBm) noise summation
    float Fractal(FVector position, int octave, float lacunarity = 2.f, float persistence = 0.5f) {
        return Fractal( position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance,1,octave, lacunarity, persistence);
    }
    float Fractal(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter, int octave, float lacunarity = 2.f, float persistence = 0.5f);
    // Fractal/Fractional Brownian Motion (fBm) Ridged noise summation
    float FractalRidge(FVector position, int octave, float lacunarity = 2.f, float persistence = 0.5f) {
        return FractalRidge(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance,1, octave,  lacunarity, persistence);
    }
    float FractalRidge(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter, int octave, float lacunarity = 2.f, float persistence = 0.5f);



    double Noise(DVector position) {
        return Noise(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance, 1);
    }
    double Noise(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, double cellularJitter = 1);

    double Noise_01(DVector position) {
        return Noise_01(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance, 1);
    }
    double Noise_01(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, double cellularJitter = 1);

    // 3D Perlin simplex Ridged noise
    double Ridge(DVector position) {
        return Ridge(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance, 1);
    }
    double Ridge(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType = ECellularDistanceType::Euclidean, ECellularType CellularType = ECellularType::Distance, double cellularJitter = 1);

    // Fractal/Fractional Brownian Motion (fBm) noise summation
    double Fractal(DVector position, int octave, double lacunarity = 2.f, double persistence = 0.5f) {
        return Fractal(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance, 1, octave, lacunarity, persistence);
    }
    double Fractal(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter, int octave, double lacunarity = 2.f, double persistence = 0.5f);
    
    // Fractal/Fractional Brownian Motion (fBm) Ridged noise summation
    double FractalRidge(DVector position, int octave, double lacunarity = 2.f, double persistence = 0.5f) {
        return FractalRidge(position, ENoiseType::Simplex, ECellularDistanceType::Euclidean, ECellularType::Distance, 1, octave, lacunarity, persistence);
    }
    double FractalRidge(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter, int octave, double lacunarity = 2.f, double persistence = 0.5f);




    //SetSeed
    void SetSeed(int seed);

    static float grad(int hash, float x, float y, float z);
    static double grad(int hash, double x, double y, double z);
    FVector RandomFVector(int hash);
    DVector RandomDVector(int hash);
    CustomNoise(int seed = 0);

private:
    int Seed;
    uint8 perm[256];
    uint8 PermutationHash(int i);
};