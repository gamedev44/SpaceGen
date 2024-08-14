#pragma once
#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "PoissonDiscSampling.generated.h"


USTRUCT(BlueprintType)
struct WORLDSCAPECOMMON_API FPoissonObject
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IntVector2D")
	FVector2D Position = FVector2D::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IntVector2D")
	float Radius = 1;
	
	FPoissonObject() {};


	FPoissonObject(FVector2D position, float radius);
};

class WORLDSCAPECOMMON_API FPoissonDiscSampling {
public :
	static TArray<FPoissonObject> GeneratePoints(float minRadius, float maxRadius, FVector2D SampleRegionSize, FRandomStream stream, int numSamplesBeforeRejection = 30);
	static bool IsValid(FPoissonObject candidate, FVector2D sampleRegionSize, float RadiusVariation, float cellSize, TArray<FPoissonObject> points, int** grid);
};
