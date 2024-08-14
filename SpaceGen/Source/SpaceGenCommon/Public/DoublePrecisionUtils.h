// Copyright 2021 IOLACORP STUDIO. All Rights Reserved

#pragma once
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/UnrealMathUtility.h"
#include "DoublePrecisionUtils.generated.h"

USTRUCT()
struct WORLDSCAPECOMMON_API FDVector {

    GENERATED_BODY()

public:

    FDVector(const FVector& vec);
    FDVector(const FDVector& vec);
    FDVector(const double& x = 0.f, const double& y = 0.f, const double& z = 0.f);

    FDVector operator-(const FDVector& vector) const;

    FVector ToFVector();

    static bool AreClose(FDVector A, FDVector B, double Tolerance = 0.00001f);


    double X;
    double Y;
    double Z;
};

USTRUCT()
struct WORLDSCAPECOMMON_API FDVector2D {

    GENERATED_BODY()

public:

    FDVector2D(const FVector2D& vec);
    FDVector2D(const FDVector2D& vec);
    FDVector2D(const double& x = 0., const double& y = 0.);
    FString ToString() const;

    void Clamp(double Min, double Max);

    FDVector2D operator=(const FDVector2D& vector);
    bool operator==(const FDVector2D& vector) const;
    bool operator!=(const FDVector2D& vector) const;
    FDVector2D operator*(const double& value) const;
    FDVector2D operator*(const FDVector2D& vector) const;
    FDVector2D operator/(const double& value) const;
    FDVector2D operator/(const FDVector2D& value) const;
    FDVector2D operator+(const double& value) const;
    FDVector2D operator-(const double& value) const;
    FDVector2D operator+(const FDVector2D& vector) const;
    FDVector2D operator-(const FDVector2D& vector) const;

    
    static FDVector2D Min(const FDVector2D& vectorA, const FDVector2D& vectorB);
    static FDVector2D Max(const FDVector2D& vectorA, const FDVector2D& vectorB);


    double X;
    double Y;
};






class WORLDSCAPECOMMON_API DVector4;



class WORLDSCAPECOMMON_API DVector
{

public:
    double X;
    double Y;
    double Z;

public:
    DVector(const FVector &vec);
    DVector(const DVector &vec);
    DVector(const FDVector& vec);
    DVector(const double &x, const double &y, const double &z);
    DVector(const double& value = 0.f);
    

    ~DVector() = default;
    FString ToString() const;
    FVector ToFVector() const;
    FDVector ToFDVector() const;
    static DVector Lerp(DVector& A, DVector& B,double alpha);
    static DVector CrossProduct(DVector A, DVector B);
    void SnapNormal(double Angle);

    DVector InverseTransformNoScale(DVector4 Quaternion);
    DVector TransformNoScale(DVector4 Quaternion);
    DVector4 ToDVector4();


    bool IsNearlyZero(double Tolerance = KINDA_SMALL_NUMBER);
    double SizeSquared();
    double Lenght();
    bool Normalize(const double Tolerance = SMALL_NUMBER);
    DVector operator=(const DVector &vector);
    bool operator==(const DVector &vector) const;
    bool operator!=(const DVector& vector) const;
    DVector operator*(const double &value) const;
    DVector operator*(const DVector& vector) const;
    DVector operator/(const double &value) const;
    DVector operator/(const DVector& vector) const;
    DVector operator+(const double &value) const;
    DVector operator-(const double &value) const;
    DVector operator+(const DVector &vector) const;
    DVector operator-(const DVector &vector) const;

    static double Dist(const DVector& vectorA, const DVector& vectorB) {
        return (vectorA - vectorB).Lenght();
    }

    FORCEINLINE DVector operator^(const DVector& V) const
    {
        return DVector
        (
            Y * V.Z - Z * V.Y,
            Z * V.X - X * V.Z,
            X * V.Y - Y * V.X
        );
    }

    
};


class WORLDSCAPECOMMON_API DMatrix
{
public:

    double M[4][4];



    // Constructors.
    DMatrix(DVector InX, DVector InY, DVector InZ, DVector InW);

    //Identity matrix
    static const DMatrix Identity;

    inline DVector GetScaledAxis(EAxis::Type Axis);

    FString ToString();

    inline void SetAxis(int32 i, const DVector& Axis);
    inline double Determinant() const;
    inline DVector ExtractScaling(double Tolerance = SMALL_NUMBER);

};


class WORLDSCAPECOMMON_API DVector4 {

public:
    double X;
    double Y;
    double Z;
    double W;

    DVector4(const double X, const double Y, const double Z, const double W) {
        this->X = X;
        this->Y = Y;
        this->Z = Z;
        this->W = W;
    }

    explicit DVector4(const double Value)
    {
        this->X = Value;
        this->Y = Value;
        this->Z = Value;
        this->W = Value;
    }

    DVector4(const FDVector2D XY, const FDVector2D ZW) {
        this->X = XY.X;
        this->Y = XY.Y;
        this->Z = ZW.X;
        this->W = ZW.Y;
    };

    DVector4(const FVector2D XY, const FVector2D ZW) {
        this->X = XY.X;
        this->Y = XY.Y;
        this->Z = ZW.X;
        this->W = ZW.Y;
    };


    DVector4 ReplicateVector(int ID);

    double GetValueAt(int ID);

    FDVector2D XX() const {return FDVector2D(X,X);}
    FDVector2D XY() const {return FDVector2D(X,Y);}
    FDVector2D XZ() const {return FDVector2D(X,Z);}
    FDVector2D XW() const {return FDVector2D(X,W);}
    
    FDVector2D YX() const {return FDVector2D(Y,X);}
    FDVector2D YY() const {return FDVector2D(Y,Y);}
    FDVector2D YZ() const {return FDVector2D(Y,Z);}
    FDVector2D YW() const {return FDVector2D(Y,W);}
    
    FDVector2D ZX() const {return FDVector2D(Z,X);}
    FDVector2D ZY() const {return FDVector2D(Z,Y);}
    FDVector2D ZZ() const {return FDVector2D(Z,Z);}
    FDVector2D ZW() const {return FDVector2D(Z,W);}
    
    FDVector2D WX() const {return FDVector2D(W,X);}
    FDVector2D WY() const {return FDVector2D(W,Y);}
    FDVector2D WZ() const {return FDVector2D(W,Z);}
    FDVector2D WW() const {return FDVector2D(W,W);}
    
    


    DVector4 SwizzleVector(int pX, int pY, int pZ, int pW);

    static DVector4 BlackMagicShuffle(DVector4 V1, DVector4 V2, int R_1__V1_ID, int R_2__V1_ID, int R_3__V2_ID, int R_4__V2_ID);

    static DVector4 BlackMagicVectorCross(DVector4 Vec1, DVector4 Vec2);

    static DVector4 DVectorQuaternionMultiply2(DVector4 Quat1, DVector4 Quat2);

    static DVector4 QuaternionRotateVector(DVector4 Quat, DVector4 VectorW0);

    static DVector4 CrossProduct(DVector4 A, DVector4 B) {

        return A * B;
    };

    DVector4(DVector InX, DVector InY, DVector InZ, DVector InTranslation);
    static const DVector4 Identity;

    DVector ToDVector() const 
    {
        return DVector{ X,Y,Z };
    }


    FString ToString() const;

    void Normalize();

    void SetFromDMatrix(DMatrix InMatrix);

    FORCEINLINE DVector4 operator*(const DVector4& V) const
    {

        return DVector4{
            X * V.X,
            Y * V.Y,
            Z * V.Z,
            W * V.W
        };
    };

    FORCEINLINE DVector4 operator/(const DVector4& V) const
    {
        return DVector4{
            X / V.X,
            Y / V.Y,
            Z / V.Z,
            W / V.W
        };
    }
    
    FORCEINLINE DVector4 operator+(const DVector4& Vector) const
    {
        return DVector4{
            X + Vector.X,
            Y + Vector.Y,
            Z + Vector.Z,
            W + Vector.W
        };
    };

    FORCEINLINE DVector4 operator-(const DVector4& Vector) const
    {
        return DVector4{
            X - Vector.X,
            Y - Vector.Y,
            Z - Vector.Z,
            W - Vector.W
        };
    };



    FORCEINLINE DVector4 operator*(const double& d) const
    {

        return DVector4{
            X * d,
            Y * d,
            Z * d,
            W * d
        };
    }

};