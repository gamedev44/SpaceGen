// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "StopWatch.h"


double stopwatch::GetSeconds() const
{
	return FMath::FloorToInt(elapsed());
}

double stopwatch::GetMiliSeconds() const
{
	return FMath::FloorToInt(elapsed()*1000);
}

double stopwatch::GetMicroSeconds() const
{
	return FMath::FloorToInt(elapsed() * 1000000);
}

void stopwatch::PrintMicroSecond(const FString Text)
{
	int Microseconds = GetMicroSeconds();
	UE_LOG(LogTemp, Log, TEXT("%s Time : %i micro seconds"),*Text, Microseconds);
}

void stopwatch::TickPrintMicroSecond(const FString Text)
{
	int Microseconds = tick()* 1000000;
	UE_LOG(LogTemp, Log, TEXT("%s Time : %i micro seconds"),*Text, Microseconds);
}

void stopwatch::TickPrintMiliSecond(const FString Text)
{
	int Miliseconds = tick() * 1000;
	UE_LOG(LogTemp, Log, TEXT("%s Time : %i ms"),*Text, Miliseconds);
}

void stopwatch::TickPrintDetail(const FString Text)
{
	double TickTime = tick();
	int Miliseconds = TickTime * 1000;
	double Microseconds = TickTime * 1000;

	Microseconds *=0.001;
	Microseconds = FMath::Frac(Microseconds);
	int IMicroSeconds = Microseconds*1000;
	UE_LOG(LogTemp, Log, TEXT("%s Time : %i.%i ms"),*Text, Miliseconds,IMicroSeconds);
}
