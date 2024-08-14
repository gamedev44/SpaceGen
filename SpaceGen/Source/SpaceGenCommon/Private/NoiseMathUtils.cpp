#include "NoiseMathUtils.h"

#include "DoublePrecisionUtils.h"

double NoiseMathUtils::Clamp(double X, double Min, double Max)
{
	return X < Min ? Min : X < Max ? X : Max;
}

double NoiseMathUtils::Clamp01(double X)
{
	return X < 0 ? 0 : X < 1 ? X : 1;
}

double NoiseMathUtils::Lerp(double A, double B, double Alpha)
{
	return (A + Alpha * (B - A));
}


double NoiseMathUtils::CubicInterpolate(const double P0, const double P1, const double P2, const double P3, const double Alpha)
{
	const double A2 = Alpha*Alpha;
	const double A3 = Alpha * A2;

	const double fp0 = (P2-P0)/2.;
	const double fp1 = (P3-P1)/2.;
	
	const double a = 2*P1 - 2*P2 + fp0 + fp1;
	const double b = -3*P1 + 3*P2  -2*fp0 - fp1;
	const double c = fp0;
	const double d = P1;
	
	return A3 * a + A2 * b + Alpha * c + d;
}


double NoiseMathUtils::GetT( const double Alpha,const double P0,const double P1 )
{
	double l = P1-P0;
	return pow( l * l + 1, 0.5f * Alpha );
}

double NoiseMathUtils::CatmullRom( const double& P0, const double& P1, const double& P2, const double& P3, double T , const double Alpha )
{
	constexpr double T0 = 0.0f;
	const double T1 = GetT(Alpha, P0, P1 );
	const double T2 = T1 + GetT(Alpha, P1, P2 );
	const double T3 = T2 + GetT(Alpha, P2, P3 );
	T = NoiseMathUtils::Lerp( T1, T2, T );
	const double A1 = ( T1-T )/( T1-T0 )*P0 + ( T-T0 )/( T1-T0 )*P1;
	const double A2 = ( T2-T )/( T2-T1 )*P1 + ( T-T1 )/( T2-T1 )*P2;
	const double A3 = ( T3-T )/( T3-T2 )*P2 + ( T-T2 )/( T3-T2 )*P3;
	const double B1 = ( T2-T )/( T2-T0 )*A1 + ( T-T0 )/( T2-T0 )*A2;
	const double B2 = ( T3-T )/( T3-T1 )*A2 + ( T-T1 )/( T3-T1 )*A3;
	return ( T2-T )/( T2-T1 )*B1 + ( T-T1 )/( T2-T1 )*B2;
}

double NoiseMathUtils::Max(double A, double B) 
{

	return A > B ? A : B;
}

double NoiseMathUtils::Min(double A, double B) 
{

	return A < B ? A : B;
}

//SmoothMin and SmoothMax https://github.com/SebLague/Solar-System/blob/0c60882be69b8e96d6660c28405b9d19caee76d5/Assets/Scripts/Celestial/Shaders/Includes/Math.cginc#L27
/*
	Smooth minimum of two values, controlled by smoothing factor k
	When k = 0, this behaves identically to min(a, b)
 */

double NoiseMathUtils::SmoothMin(double A, double B, double K) 
{
	K = Max(0, K);
	float h = Max(0, Min(1, (B - A + K) / (2 * K)));
	return A * h + B * (1 - h) - K * h * (1 - h);
}

/*
	Smooth maximum of two values, controlled by smoothing factor k
	When k = 0, this behaves identically to max(a, b)
*/

double NoiseMathUtils::SmoothMax(double A, double B, double K) 
{
	K = Min(0, -K);
	float h = Max(0, Min(1, (B - A + K) / (2 * K)));
	return A * h + B * (1 - h) - K * h * (1 - h);
}

double NoiseMathUtils::SmoothStep(double X) 
{
	// Evaluate polynomial
	return X * X * (3 - 2 * X);
}


double NoiseMathUtils::Frac(double Value)
{
	return FMath::Sign(Value) * (abs(Value) - abs(floor(Value)));
}

double NoiseMathUtils::Contrast(double ContrastIn, double X)
{
	return 0.5 + (1.0 + ContrastIn) * (X - 0.5);
}