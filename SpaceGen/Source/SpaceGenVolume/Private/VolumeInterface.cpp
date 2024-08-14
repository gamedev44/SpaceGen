// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "VolumeInterface.h" 


void AVolumeInterface::OnConstruction(const FTransform& Transform)
{
	if (PREVIOUS_Location != GetActorLocation()) 
	{
		NeedRefresh = true;
	}

	if (PREVIOUS_Rotation != GetActorRotation()) 
	{
		NeedRefresh = true;
	}

	if (PREVIOUS_Scale != GetActorScale()) 
	{
		NeedRefresh = true;
	}

	if (NeedRefresh)
	{
		PREVIOUS_Location = GetActorLocation();
		PREVIOUS_Rotation = GetActorRotation();
		PREVIOUS_Scale = GetActorScale();
	}

}





AVolumeInterface::AVolumeInterface()
{
	PrimaryActorTick.bCanEverTick = false;
	VisualBorder = CreateDefaultSubobject<UBoxComponent>(TEXT("Visual Border"));
	VisualBorder->SetVisibility(true);
	VisualBorder->bHiddenInGame = true;
	VisualBorder->SetBoxExtent(FVector(50, 50, 50));
	VisualBorder->SetComponentTickEnabled(false);
	VisualBorder->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	VisualBorder->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	VisualBorder-> SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	VisualBorder->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	VisualBorder->SetGenerateOverlapEvents(false);
}
