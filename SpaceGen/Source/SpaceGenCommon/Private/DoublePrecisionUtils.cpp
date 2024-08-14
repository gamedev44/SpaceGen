// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "DoublePrecisionUtils.h"
#include "NoiseMathUtils.h"




DMatrix::DMatrix(DVector InX, DVector InY, DVector InZ, DVector InW)
{
    M[0][0] = InX.X; M[0][1] = InX.Y;  M[0][2] = InX.Z;  M[0][3] = 0.0f;
    M[1][0] = InY.X; M[1][1] = InY.Y;  M[1][2] = InY.Z;  M[1][3] = 0.0f;
    M[2][0] = InZ.X; M[2][1] = InZ.Y;  M[2][2] = InZ.Z;  M[2][3] = 0.0f;
    M[3][0] = InW.X; M[3][1] = InW.Y;  M[3][2] = InW.Z;  M[3][3] = 1.0f;
}


FString DMatrix::ToString()
{
    FString Output;

    Output += FString::Printf(TEXT("[%g %g %g %g] "), M[0][0], M[0][1], M[0][2], M[0][3]);
    Output += FString::Printf(TEXT("[%g %g %g %g] "), M[1][0], M[1][1], M[1][2], M[1][3]);
    Output += FString::Printf(TEXT("[%g %g %g %g] "), M[2][0], M[2][1], M[2][2], M[2][3]);
    Output += FString::Printf(TEXT("[%g %g %g %g] "), M[3][0], M[3][1], M[3][2], M[3][3]);

    return Output;
}

DVector DMatrix::GetScaledAxis(EAxis::Type InAxis)
{
    switch (InAxis)
    {
    case EAxis::X:
        return DVector(M[0][0], M[0][1], M[0][2]);

    case EAxis::Y:
        return DVector(M[1][0], M[1][1], M[1][2]);

    case EAxis::Z:
        return DVector(M[2][0], M[2][1], M[2][2]);

    default:
        ensure(0);
        return DVector(0,0,0);
    }
}

inline void DMatrix::SetAxis(int32 i, const DVector& Axis)
{
    checkSlow(i >= 0 && i <= 2);
    M[i][0] = Axis.X;
    M[i][1] = Axis.Y;
    M[i][2] = Axis.Z;
}

/** Remove any scaling from this matrix (ie magnitude of each row is 1) and return the 3D scale vector that was initially present. */
inline DVector DMatrix::ExtractScaling(double Tolerance/*=SMALL_NUMBER*/)
{
    DVector Scale3D(0, 0, 0);

    // For each row, find magnitude, and if its non-zero re-scale so its unit length.
    const double SquareSum0 = (M[0][0] * M[0][0]) + (M[0][1] * M[0][1]) + (M[0][2] * M[0][2]);
    const double SquareSum1 = (M[1][0] * M[1][0]) + (M[1][1] * M[1][1]) + (M[1][2] * M[1][2]);
    const double SquareSum2 = (M[2][0] * M[2][0]) + (M[2][1] * M[2][1]) + (M[2][2] * M[2][2]);

    if (SquareSum0 > Tolerance)
    {
        double Scale0 = sqrt(SquareSum0);
        Scale3D.X = Scale0;
        double InvScale0 = 1. / Scale0;
        M[0][0] *= InvScale0;
        M[0][1] *= InvScale0;
        M[0][2] *= InvScale0;
    }
    else
    {
        Scale3D.X = 0;
    }

    if (SquareSum1 > Tolerance)
    {
        double Scale1 = sqrt(SquareSum1);
        Scale3D.Y = Scale1;
        double InvScale1 = 1. / Scale1;
        M[1][0] *= InvScale1;
        M[1][1] *= InvScale1;
        M[1][2] *= InvScale1;
    }
    else
    {
        Scale3D.Y = 0;
    }

    if (SquareSum2 > Tolerance)
    {
        double Scale2 = sqrt(SquareSum2);
        Scale3D.Z = Scale2;
        double InvScale2 = 1. / Scale2;
        M[2][0] *= InvScale2;
        M[2][1] *= InvScale2;
        M[2][2] *= InvScale2;
    }
    else
    {
        Scale3D.Z = 0;
    }

    return Scale3D;
}


inline double DMatrix::Determinant() const
{
    return	M[0][0] * (
        M[1][1] * (M[2][2] * M[3][3] - M[2][3] * M[3][2]) -
        M[2][1] * (M[1][2] * M[3][3] - M[1][3] * M[3][2]) +
        M[3][1] * (M[1][2] * M[2][3] - M[1][3] * M[2][2])
        ) -
        M[1][0] * (
            M[0][1] * (M[2][2] * M[3][3] - M[2][3] * M[3][2]) -
            M[2][1] * (M[0][2] * M[3][3] - M[0][3] * M[3][2]) +
            M[3][1] * (M[0][2] * M[2][3] - M[0][3] * M[2][2])
            ) +
        M[2][0] * (
            M[0][1] * (M[1][2] * M[3][3] - M[1][3] * M[3][2]) -
            M[1][1] * (M[0][2] * M[3][3] - M[0][3] * M[3][2]) +
            M[3][1] * (M[0][2] * M[1][3] - M[0][3] * M[1][2])
            ) -
        M[3][0] * (
            M[0][1] * (M[1][2] * M[2][3] - M[1][3] * M[2][2]) -
            M[1][1] * (M[0][2] * M[2][3] - M[0][3] * M[2][2]) +
            M[2][1] * (M[0][2] * M[1][3] - M[0][3] * M[1][2])
            );
}

const DVector4 DVector4::Identity(0, 0, 0, 1);

void DVector4::Normalize() {
    DVector4 SelfValue = DVector4(X, Y, Z, W);

    //VectorDot4 : 
    DVector4 Temp1 = SelfValue * SelfValue;
    DVector4 Temp2 = DVector4(Temp1.Z, Temp1.W, Temp1.X, Temp1.Y);
    Temp1 = Temp1 + Temp2;
    Temp2 = DVector4(Temp1.Y, Temp1.Z, Temp1.W, Temp1.X);
    DVector4 SquareSum = Temp1 + Temp2;

    //
    //double Smalllenght = 1.e-8;
    //const DVector4 NonZeroMask = DVector4(SquareSum.X > Smalllenght ? 1 : 0, SquareSum.Y > Smalllenght ? 1 : 0, SquareSum.Z > Smalllenght ? 1 : 0, SquareSum.W > Smalllenght ? 1 : 0);



    // Get Inverse Lenght : 
    const DVector4 VecDivBy2 = SquareSum * 0.5;
    // Initial estimate
    const DVector4 x0 = DVector4(1 / sqrt(SquareSum.X), 1 / sqrt(SquareSum.Y), 1 / sqrt(SquareSum.Z), 1 / sqrt(SquareSum.W));
    // First iteration
    DVector4 x1 = x0 * x0;
    x1 = DVector4(0.5, 0.5, 0.5, 0.5) - (VecDivBy2 * x1);
    x1 = x0 * x1 + x0;
    // Second iteration
    DVector4 x2 = x1 * x1;
    x2 = DVector4(0.5, 0.5, 0.5, 0.5) - (VecDivBy2 * x2);
    const DVector4 InvLength = x1 * x2 + x1;



    const DVector4 NormalizedVector = InvLength * SelfValue;
    //const DVector4 NewNormalized = DVector4(NonZeroMask.X > 0 ? NormalizedVector.X : SelfValue.X, NonZeroMask.Y > 0 ? NormalizedVector.Y : SelfValue.Y, NonZeroMask.Z > 0 ? NormalizedVector.Z : SelfValue.Z, NonZeroMask.W > 0 ? NormalizedVector.W : SelfValue.W);

    X = NormalizedVector.X;
    Y = NormalizedVector.Y;
    Z = NormalizedVector.Z;
    W = NormalizedVector.W;
}

DVector4::DVector4(DVector InX, DVector InY, DVector InZ, DVector InTranslation) {

    DMatrix M = DMatrix(InX, InY, InZ, InTranslation);

    M.ExtractScaling();

    if (M.Determinant() < 0.f)
    {
        DVector ScaledX = M.GetScaledAxis(EAxis::X);
        M.SetAxis(0,DVector(-ScaledX.X, -ScaledX.Y, -ScaledX.Z));
    }

    SetFromDMatrix(M);

    Normalize();

};

void DVector4::SetFromDMatrix(DMatrix InMatrix)
{
    DMatrix M = InMatrix;

    // If Matrix is NULL, return Identity quaternion. If any of them is 0, you won't be able to construct rotation
    // if you have two plane at least, we can reconstruct the frame using cross product, but that's a bit expensive op to do here
    // for now, if you convert to matrix from 0 scale and convert back, you'll lose rotation. Don't do that. 
    if (M.GetScaledAxis(EAxis::X).IsNearlyZero() || M.GetScaledAxis(EAxis::Y).IsNearlyZero() || M.GetScaledAxis(EAxis::Z).IsNearlyZero())
    {
        *this = DVector4::Identity;
        return;
    }

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
    // Make sure the Rotation part of the Matrix is unit length.
    // Changed to this (same as RemoveScaling) from RotDeterminant as using two different ways of checking unit length matrix caused inconsistency. 
    if (!ensure((abs(1.- M.GetScaledAxis(EAxis::X).SizeSquared()) <= KINDA_SMALL_NUMBER) && (abs(1. - M.GetScaledAxis(EAxis::Y).SizeSquared()) <= KINDA_SMALL_NUMBER) && (FMath::Abs(1.f - M.GetScaledAxis(EAxis::Z).SizeSquared()) <= KINDA_SMALL_NUMBER)))
    {
        *this = DVector4::Identity;
        return;
    }
#endif

    //const MeReal *const t = (MeReal *) tm;
    double	s;

    // Check diagonal (trace)
    const double tr = M.M[0][0] + M.M[1][1] + M.M[2][2];

    if (tr > 0.0)
    {
        double InvS = 1/sqrt(tr + 1.);
        this->W = 0.5 * (1. / InvS);
        s = 0.5 * InvS;

        this->X = (M.M[1][2] - M.M[2][1]) * s;
        this->Y = (M.M[2][0] - M.M[0][2]) * s;
        this->Z = (M.M[0][1] - M.M[1][0]) * s;
    }
    else
    {
        // diagonal is negative
        int32 i = 0;

        if (M.M[1][1] > M.M[0][0])
            i = 1;

        if (M.M[2][2] > M.M[i][i])
            i = 2;

        static const int32 nxt[3] = { 1, 2, 0 };
        const int32 j = nxt[i];
        const int32 k = nxt[j];

        s = M.M[i][i] - M.M[j][j] - M.M[k][k] + 1.0;

        double InvS = 1.0 / sqrt(s);

        double qt[4];
        qt[i] = 0.5 * (1. / InvS);

        s = 0.5 * InvS;

        qt[3] = (M.M[j][k] - M.M[k][j]) * s;
        qt[j] = (M.M[i][j] + M.M[j][i]) * s;
        qt[k] = (M.M[i][k] + M.M[k][i]) * s;

        this->X = qt[0];
        this->Y = qt[1];
        this->Z = qt[2];
        this->W = qt[3];
    }
}

FString DVector4::ToString() const
{
    FString outString;

    outString.Append(TEXT("X:"));
    outString.Append(FString::SanitizeFloat(this->X,4));
    outString.Append(TEXT(", "));
    outString.Append(TEXT("Y:"));
    outString.Append(FString::SanitizeFloat(this->Y, 4));
    outString.Append(TEXT(", "));
    outString.Append(TEXT("Z:"));
    outString.Append(FString::SanitizeFloat(this->Z, 4));
    outString.Append(TEXT(", "));
    outString.Append(TEXT("W:"));
    outString.Append(FString::SanitizeFloat(this->W, 4));

    return outString;

}





FDVector::FDVector(const FVector& vec) : X(vec.X), Y(vec.Y), Z(vec.Z) {}

FDVector::FDVector(const FDVector& vec) : X(vec.X), Y(vec.Y), Z(vec.Z) {}

FDVector::FDVector(const double& x, const double& y, const double& z) : X(x), Y(y), Z(z) {}

FVector FDVector::ToFVector()
{
    return FVector(this->X, this->Y, this->Z);
}

FDVector FDVector::operator-(const FDVector& vector) const
{
    FDVector copy(*this);
    copy.X -= vector.X;
    copy.Y -= vector.Y;
    copy.Z -= vector.Z;
    return copy;
}



bool FDVector::AreClose(FDVector A, FDVector B, double Tolerance) {
    return (A - B).ToFVector().Size() < Tolerance;
}

DVector::DVector(const FVector &vec) : X(vec.X), Y(vec.Y), Z(vec.Z) {}

DVector::DVector(const DVector &vec) : X(vec.X), Y(vec.Y), Z(vec.Z) {}

DVector::DVector(const FDVector& vec) : X(vec.X), Y(vec.Y), Z(vec.Z) {}

DVector::DVector(const double &x, const double &y, const double &z) : X(x), Y(y), Z(z) {}

DVector::DVector(const double& value) : X(value), Y(value), Z(value) {}

bool DVector::IsNearlyZero(double Tolerance)
{
    return
       abs(X) <= Tolerance
        && abs(Y) <= Tolerance
        && abs(Z) <= Tolerance;
}

double DVector::SizeSquared()
{
    return X * X + Y * Y + Z * Z;
}

double DVector::Lenght() {
    return sqrt(X * X + Y * Y + Z * Z);
}

DVector DVector::Lerp(DVector& A, DVector& B, double alpha) {
    return A + ((B - A) * alpha);
}

DVector DVector::CrossProduct(DVector A, DVector B) {
    return A ^ B;
}




DVector4 DVector4::ReplicateVector(int ID) {
    switch (ID)
    {
    case 0:
        return DVector4(X, X, X, X);
    case 1:
        return DVector4(Y, Y, Y, Y);
    case 2:
        return DVector4(Z, Z, Z, Z);
    case 3:
        return DVector4(W, W, W, W);
    default:
        // ID not valid
        return DVector4(0, 0, 0, 0);
        break;
    }
}

double DVector4::GetValueAt(int ID){

    switch (ID)
    {
    case 0:
        return X;
    case 1:
        return Y;
    case 2:
        return Z;
    case 3:
        return W;
    default:
        // ID not valid
        return 0;
        break;
    }

}


DVector4 DVector4::SwizzleVector(int pX, int pY, int pZ, int pW) {

    return DVector4(GetValueAt(pX), GetValueAt(pY), GetValueAt(pZ), GetValueAt(pW));

}


DVector4 DVector4::DVectorQuaternionMultiply2(DVector4 Quat1,DVector4 Quat2) {

    DVector4 Result = (Quat1.ReplicateVector(3) * Quat2);

    Result = ((Quat1.ReplicateVector(0) * Quat2.SwizzleVector(3, 2, 1, 0)) * DVector4(1., -1., 1., -1.) + Result);
    Result = ((Quat1.ReplicateVector(1) * Quat2.SwizzleVector(2, 3, 0, 1)) * DVector4(1., 1., -1., -1.) + Result);
    return ((Quat1.ReplicateVector(2) * Quat2.SwizzleVector(1, 0, 3, 2)) * DVector4(-1., 1., 1., -1.) + Result);

}

//Black magic ?
DVector4 DVector4::BlackMagicShuffle(DVector4 V1, DVector4 V2, int R_1__V1_ID, int R_2__V1_ID, int R_3__V2_ID, int R_4__V2_ID) {

    return DVector4(V1.GetValueAt(R_1__V1_ID), V1.GetValueAt(R_2__V1_ID), V2.GetValueAt(R_3__V2_ID), V2.GetValueAt(R_4__V2_ID));
}
//Black magic ???
DVector4 DVector4::BlackMagicVectorCross(DVector4 Vec1, DVector4 Vec2)
{
    DVector4 A_YZXW = BlackMagicShuffle(Vec1, Vec1, 1, 2, 0, 3);
    DVector4 B_ZXYW = BlackMagicShuffle(Vec2, Vec2, 2, 0, 1, 3);
    DVector4 A_ZXYW = BlackMagicShuffle(Vec1, Vec1, 2, 0, 1, 3);
    DVector4 B_YZXW = BlackMagicShuffle(Vec2, Vec2, 1, 2, 0, 3);
    return (A_YZXW * B_ZXYW) - (A_ZXYW * B_YZXW);
}

DVector4 DVector4::QuaternionRotateVector(DVector4 Quat, DVector4 VectorW0) {


    /*
    // Q.Inverse * V * Q

    DVector4 Temps = DVector4::DVectorQuaternionMultiply2(QInv, SelfFour);
    const DVector4 Rotated = DVector4::DVectorQuaternionMultiply2(Temps, Quaternion);

    return DVector(Rotated.X, Rotated.Y, Rotated.Z);
    */

    /*
    const VectorRegister QW = VectorReplicate(Quat, 3);
    VectorRegister T = VectorCross(Quat, VectorW0);
    T = VectorAdd(T, T);
    const VectorRegister VTemp0 = VectorMultiplyAdd(QW, T, VectorW0);
    const VectorRegister VTemp1 = VectorCross(Quat, T);
    const VectorRegister Rotated = VectorAdd(VTemp0, VTemp1);
    return Rotated;
    */

    DVector4 QW = Quat.ReplicateVector(3);

    DVector4 T = DVector4::BlackMagicVectorCross(Quat, VectorW0);
    T = T + T;
    DVector4 VTemp0 = (QW* T+ VectorW0);
    DVector4 VTemp1 = DVector4::BlackMagicVectorCross(Quat, T);
    DVector4 Rotated = VTemp0+ VTemp1;
    return Rotated;

}

DVector4 DVector::ToDVector4()
{
    return DVector4(X, Y, Z, 0);
}






//Please help me :(
DVector DVector::InverseTransformNoScale(DVector4 Quaternion) {
    DVector4 SelfFour = DVector4(X, Y, Z, 0);





    DVector4 QInv = DVector4(-Quaternion.X, -Quaternion.Y, -Quaternion.Z, Quaternion.W);
    return DVector4::QuaternionRotateVector(QInv, SelfFour).ToDVector();
}




DVector DVector::TransformNoScale(DVector4 Quaternion) {
    DVector4 SelfFour = DVector4(X, Y, Z, 0);

    return DVector4::QuaternionRotateVector(Quaternion, SelfFour).ToDVector();

}




void dSinCos(double* ScalarSin, double* ScalarCos, double  Value)
{
    double dPI = 3.1415926535897932384626433832795;
    double dInv_Pi = 1. / dPI;
    double dHalfPi = dPI / 2.;
    // Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
    double quotient = (dInv_Pi * 0.5) * Value;
    if (Value >= 0.0f)
    {
        quotient = (double)((int)(quotient + 0.5));
    }
    else
    {
        quotient = (double)((int)(quotient - 0.5));
    }
    float y = Value - (2.0 * PI) * quotient;

    // Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
    float sign;
    if (y > dHalfPi)
    {
        y = dPI - y;
        sign = -1.0;
    }
    else if (y < -dHalfPi)
    {
        y = -dPI - y;
        sign = -1.0;
    }
    else
    {
        sign = +1.0;
    }

    float y2 = y * y;

    // 11-degree minimax approximation
    *ScalarSin = (((((-2.3889859e-08 * y2 + 2.7525562e-06) * y2 - 0.00019840874) * y2 + 0.0083333310) * y2 - 0.16666667) * y2 + 1.0) * y;

    // 10-degree minimax approximation
    float p = ((((-2.6051615e-07 * y2 + 2.4760495e-05) * y2 - 0.0013888378) * y2 + 0.041666638) * y2 - 0.5) * y2 + 1.0;
    *ScalarCos = sign * p;
}

double dDegreesToRadians(double& DegVal)
{
    double dPI = 3.1415926535897932384626433832795;
    return DegVal * (dPI / 180.);
}

void DVector::SnapNormal(double Angle) {

    if (Angle < 0.0001)
        Angle = 0.0001;
    Normalize();

    double dPI = 3.1415926535897932384626433832795;

    double Yaw = round((atan2(Y, X) * (180. / dPI)) / Angle) * Angle;

    // Find pitch.
    double Pitch = round((  atan2(Z, sqrt(X * X + Y * Y) ) * (180. / dPI)) / Angle )* Angle;

    double CP, SP, CY, SY;

    dSinCos(&SP, &CP, dDegreesToRadians(Pitch));
    dSinCos(&SY, &CY, dDegreesToRadians(Yaw));
    X = CP * CY;
    Y = CP * SY;
    Z = SP;
    Normalize();

}


bool DVector::Normalize(double Tolerance)
{
    double SquareSum = this->X * this->X + this->Y * this->Y + this->Z * this->Z;
    if (SquareSum > Tolerance)
    {

        double Scale;

        Scale = 1.0 / sqrt(SquareSum);

        X = this->X * Scale;
        Y = this->Y * Scale;
        Z = this->Z * Scale;
        return true;
    }
    return false;
}

FString DVector::ToString() const
{
    FString outString;

    outString.Append(TEXT("X:"));
    outString.Append(FString::SanitizeFloat(this->X, 4));
    outString.Append(TEXT(", "));
    outString.Append(TEXT("Y:"));
    outString.Append(FString::SanitizeFloat(this->Y, 4));
    outString.Append(TEXT(", "));
    outString.Append(TEXT("Z:"));
    outString.Append(FString::SanitizeFloat(this->Z, 4));

    return outString;
}




FVector DVector::ToFVector() const
{
    return FVector(this->X, this->Y, this->Z);
}

FDVector DVector::ToFDVector() const
{
    return FDVector(this->X, this->Y, this->Z);
}

bool DVector::operator==(const DVector &vector) const
{
    return (vector.X == this->X && vector.Y == this->Y && vector.Z == this->Z);
}

bool DVector::operator!=(const DVector& vector) const
{
    return (vector.X != this->X && vector.Y != this->Y && vector.Z != this->Z);
}

DVector DVector::operator=(const DVector &vector)
{
    this->X = vector.X;
    this->Y = vector.Y;
    this->Z = vector.Z;
    return *this;
}

DVector DVector::operator*(const double &value) const
{
    DVector copy(*this);
    copy.X *= value;
    copy.Y *= value;
    copy.Z *= value;
    return copy;
}

DVector DVector::operator*(const DVector &vector) const
{
    DVector copy(*this);
    copy.X *= vector.X;
    copy.Y *= vector.Y;
    copy.Z *= vector.Z;
    return copy;
}

DVector DVector::operator/(const double &value) const
{
    DVector copy(*this);
    copy.X /= value;
    copy.Y /= value;
    copy.Z /= value;
    return copy;
}

DVector DVector::operator/(const DVector& vector) const
{
    DVector copy(*this);
    copy.X /= vector.X;
    copy.Y /= vector.Y;
    copy.Z /= vector.Z;
    return copy;
}

DVector DVector::operator+(const double &value) const
{
    DVector copy(*this);
    copy.X += value;
    copy.Y += value;
    copy.Z += value;
    return copy;
}

DVector DVector::operator-(const double &value) const
{
    DVector copy(*this);
    copy.X -= value;
    copy.Y -= value;
    copy.Z -= value;
    return copy;
}

DVector DVector::operator+(const DVector& vector) const
{
    DVector copy(*this);
    copy.X += vector.X;
    copy.Y += vector.Y;
    copy.Z += vector.Z;
    return copy;
}

DVector DVector::operator-(const DVector& vector) const
{
    DVector copy(*this);
    copy.X -= vector.X;
    copy.Y -= vector.Y;
    copy.Z -= vector.Z;
    return copy;
}








FDVector2D::FDVector2D(const FVector2D& vec) : X(vec.X), Y(vec.Y){}

FDVector2D::FDVector2D(const FDVector2D& vec) : X(vec.X), Y(vec.Y){}

FDVector2D::FDVector2D(const double& x, const double& y) : X(x), Y(y) {}


FString FDVector2D::ToString() const
{
    FString outString;

    outString.Append(TEXT("X:"));
    outString.Append(FString::SanitizeFloat(this->X, 4));
    outString.Append(TEXT(", "));
    outString.Append(TEXT("Y:"));
    outString.Append(FString::SanitizeFloat(this->Y, 4));

    return outString;

}

void FDVector2D::Clamp(const double Min, const double Max)
{
    this->X = NoiseMathUtils::Clamp(this->X,Min,Max);
    this->Y = NoiseMathUtils::Clamp(this->Y,Min,Max);
}


bool FDVector2D::operator==(const FDVector2D& vector) const
{
    return (vector.X == this->X && vector.Y == this->Y );
}

bool FDVector2D::operator!=(const FDVector2D& vector) const
{
    return (vector.X != this->X || vector.Y != this->Y);
}

FDVector2D FDVector2D::operator=(const FDVector2D& vector)
{
    this->X = vector.X;
    this->Y = vector.Y;
    return *this;
}

FDVector2D FDVector2D::operator*(const double& value) const
{
    FDVector2D copy(*this);
    copy.X *= value;
    copy.Y *= value;
    return copy;
}

FDVector2D FDVector2D::operator*(const FDVector2D& vector) const
{
    FDVector2D copy(*this);
    copy.X *= vector.X;
    copy.Y *= vector.Y;
    return copy;
}

FDVector2D FDVector2D::operator/(const double& value) const
{
    FDVector2D copy(*this);
    copy.X /= value;
    copy.Y /= value;
    return copy;
}

FDVector2D FDVector2D::operator/(const FDVector2D& value) const
{
    FDVector2D copy(*this);
    copy.X /= value.X;
    copy.Y /= value.Y;
    return copy;
}

FDVector2D FDVector2D::operator+(const double& value) const
{
    FDVector2D copy(*this);
    copy.X += value;
    copy.Y += value;
    return copy;
}

FDVector2D FDVector2D::operator-(const double& value) const
{
    FDVector2D copy(*this);
    copy.X -= value;
    copy.Y -= value;
    return copy;
}

FDVector2D FDVector2D::operator+(const FDVector2D& vector) const
{
    FDVector2D copy(*this);
    copy.X += vector.X;
    copy.Y += vector.Y;
    return copy;
}

FDVector2D FDVector2D::operator-(const FDVector2D& vector) const
{
    FDVector2D copy(*this);
    copy.X -= vector.X;
    copy.Y -= vector.Y;
    return copy;
}


FDVector2D FDVector2D::Min(const FDVector2D& vectorA, const FDVector2D& vectorB)
{
    FDVector2D copy(vectorA);
    if (copy.X > vectorB.X) copy.X = vectorB.X;
    if (copy.Y > vectorB.Y) copy.Y = vectorB.Y;
    return copy;
}
FDVector2D FDVector2D::Max(const FDVector2D& vectorA, const FDVector2D& vectorB)
{
    FDVector2D copy(vectorA);
    if (copy.X < vectorB.X) copy.X = vectorB.X;
    if (copy.Y < vectorB.Y) copy.Y = vectorB.Y;
    return copy;
}