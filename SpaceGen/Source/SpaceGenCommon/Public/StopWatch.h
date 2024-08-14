// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "DoublePrecisionUtils.h"
#include "Misc/DateTime.h"

/*
DECLARE_LOG_CATEGORY_EXTERN(LogWorldScapeWatch, Log, All);
DEFINE_LOG_CATEGORY(LogWorldScapeWatch);
*/

class WORLDSCAPECOMMON_API stopwatch
{
    double last_;

public:
    stopwatch()
    {

        last_ = FPlatformTime::Seconds();
    }

    void reset()
    {
        *this = stopwatch();
    }

    double elapsed() const
    {
        return  FPlatformTime::Seconds() - last_;
    }

    double tick()
    {
        double now = FPlatformTime::Seconds();
        double elapsed = now - last_;
        last_ = now;
        return elapsed;
    }

    double GetSeconds() const;

    double GetMiliSeconds() const;

    double GetMicroSeconds() const;

    void PrintMicroSecond(const FString Text);

    void TickPrintMicroSecond(const FString Text);

    void TickPrintMiliSecond(const FString Text);
    void TickPrintDetail(const FString Text);
};