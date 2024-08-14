#pragma once
#include "DoublePrecisionUtils.h"

class WORLDSCAPECOMMON_API NoiseMathUtils {
public :
	static double Clamp(double X, double Min, double Max);
	static double Clamp01(double X);
	static double Lerp(double A, double B, double Alpha);
	static DVector4 Cubic(const double& X);
	static double CubicInterpolate(double P0, double P1, double P2, double P3, double Alpha);
	static double InterpolateCubic(double P0, double P1, double P2, double P3, double Alpha);
	static double GetT(double Alpha, double P0, double P1);
	static double CatmullRom( const double& P0, const double& P1, const double& P2, const double& P3, double T , const double Alpha );
	static double Max(double A, double B);
	static double Min(double A, double B);
	static double SmoothMin(double A, double B, double K);
	static double SmoothMax(double A, double B, double K);
	static double SmoothStep(double X);
	static double Frac(double Value);
	static double Contrast(double ContrastIn, double X);

	
};
