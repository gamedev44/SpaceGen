// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "WorldScapeRoot.h"
#include "DSP/Osc.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>


DEFINE_LOG_CATEGORY(LogWorldScapeCore);




AWorldScapeRoot::AWorldScapeRoot() {


	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;

	PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;

	//PrimaryActorTick.bTickEvenWhenPaused = true;


	DistanceToFreezeGeneration = PlanetScale * 10;
	NoiseScale = 800;
	Seed = 10;

	

	//RootComponent->Bounds = FBoxSphereBounds(FVector(0), FVector(637817792 * 0.5f), 637817792 * 0.5f);

	MaxLod = 8;
	OceanMaxLod = 8;

	HeightAnchor = 10000;

	bGenerateFoliages = true;

	bFreezeGeneration = false;

	

	bEnableVolumes = true;

	LodResolution = 128;
	TriangleSize = 100;

	OceanLodResolution = 32;
	OceanTriangleSize = 400;

	bGenerateCollision = true;
	CollisionResolution = 16;
	CollisionTriangleSize = 200;

	TickPerSecond = 60;

	GridAngleMin = 5;
	GridAngleMax = 5;

	FCoreDelegates::PreWorldOriginOffset.AddUFunction(this, "OnBeginRebase");
	FCoreDelegates::PostWorldOriginOffset.AddUFunction(this, "OnFinishedRebase");

	
	PlanetNoise = CustomNoise(Seed);
	WorldScapeNoise = CreateDefaultSubobject<UWorldScapeCustomNoise>(TEXT("Default Noise Generator"));
	TransformKeeper = CreateDefaultSubobject<UWorldScapeLod>(TEXT("Transform_Keeper"));
	RootComponent = TransformKeeper;
	RootComponent->SetIsReplicated(true);
	//RootComponent->SetNetAddressable();
	//TransformKeeper->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	TransformKeeper->SetMobility(EComponentMobility::Movable);
	TransformKeeper->Mesh->SetMobility(EComponentMobility::Movable);
	PlayerWorldPos = DVector(0, 0, 0);
	PlayerPos = FVector(0, 0, 0);
	init = false;
	SetActorTickInterval(1.0f / TickPerSecond);
	//TransformKeeper->Mesh->DestroyComponent();
}

bool AWorldScapeRoot::ShouldTickIfViewportsOnly() const
{
	return true;
}

void AWorldScapeRoot::OnBeginRebase() 
{
	RebaseInProgress = true;

	UE_LOG(LogWorldScapeCore, Log, TEXT("Begin Rebase"));
}

void AWorldScapeRoot::OnFinishedRebase() 
{
	RebaseInProgress = false;

	UE_LOG(LogWorldScapeCore, Log, TEXT("Rebase Fininished"));
}

void AWorldScapeRoot::PostLoad() 
{
	Super::PostLoad();
	CleanComponents();
}

//Called on PreSave
void AWorldScapeRoot::ClearCrossLevelReferences() 
{
	Super::PostLoad();
	CleanComponents();
}

void AWorldScapeRoot::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (int i = 0; i < LodGenerationThreadPool.Num();i++)
	{
		if (LodGenerationThreadPool.IsValidIndex(i) && LodGenerationThreadPool[i] != nullptr)
		{
			if(LodGenerationThreadPool[i]->Cancel() || LodGenerationThreadPool[i]->IsDone())
			{
				delete LodGenerationThreadPool[i];
			}
			else
			{
				LodGenerationThreadPool[i]->EnsureCompletion();
				delete LodGenerationThreadPool[i];
			}
		}
	}
	LodGenerationThreadPool.Empty();
	if ( FoliageGenerationThreadPool != nullptr)
	{
		if(FoliageGenerationThreadPool->Cancel() || FoliageGenerationThreadPool->IsDone())
		{
			delete FoliageGenerationThreadPool;
			FoliageGenerationThreadPool = nullptr;
		}
		else
		{
			FoliageGenerationThreadPool->EnsureCompletion();
			delete FoliageGenerationThreadPool;
			FoliageGenerationThreadPool = nullptr;
		}
	}
	
	Super::EndPlay(EndPlayReason);

	
}

void AWorldScapeRoot::InitializeValues()
{
	if (!WorldScapeNoise)
		WorldScapeNoise = NewObject<UWorldScapeCustomNoise>(this);

	if (GenerationType == EWorldScapeType::Planet)
	{
		PlanetScaleCode = PlanetScale;
		bFlatWorld = false;
	}
	else
	{
		PlanetScaleCode = 637817792 * 0.5f;
		bFlatWorld = true;
	}

	PlanetaryMaxHeight = PlanetaryMapHeight + PlanetaryAltitude;
	PlanetaryMinHeight = PlanetaryAltitude;


	
	//UE_LOG(LogWorldScapeCore, Log, TEXT("Construction Script"));
	TransformKeeper->SetMobility(EComponentMobility::Movable);
#if WITH_EDITOR
	if (WorldScapeEditorUtils::IsInViewPort() && bStaticCollisionInEditor) 
	{
		TransformKeeper->SetMobility(EComponentMobility::Static);
	}
#endif
	
	if (!TransformKeeper) 
	{
		TransformKeeper = NewObject<UWorldScapeLod>(this);
		RootComponent = TransformKeeper;
		RootComponent->SetIsReplicated(true);
		//RootComponent->SetNetAddressable();
		//TransformKeeper->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		TransformKeeper->SetMobility(EComponentMobility::Movable);
	}
	RootComponent = TransformKeeper;
	if (TickPerSecond <= 0) TickPerSecond = 1;

	if (TriangleSize < 0.1) TriangleSize = 0.1f;

	if (HeightAnchor < 1) HeightAnchor = 1;

	if (LodResolution < 8) LodResolution = 8;

	if (GridAngleMin <= 0) GridAngleMin = 0.0001;
	if (GridAngleMax < GridAngleMin) GridAngleMax = GridAngleMin;
	if (GridAngleMax > 90) GridAngleMax = 90;



	if (OceanTriangleSize < 0.1) OceanTriangleSize = 0.1f;


	if (OceanLodResolution < 8) OceanLodResolution = 8;

	if (CollisionResolution < 8) CollisionResolution = 8;



	LodResolution = FMath::RoundToInt(((float)LodResolution / 4.f)) * 4;
	OceanLodResolution = FMath::RoundToInt(((float)OceanLodResolution / 4.f)) * 4;


	//Add Parameter for this
	SetActorTickInterval(1.0f/TickPerSecond);

	if (MaxLod < 1)
		MaxLod = 1;

	if (OceanMaxLod < 1)
		OceanMaxLod = 1;
	
}

void AWorldScapeRoot::BeginPlay()
{
	//Clean the Thread pool
	for (int i = 0; i < LodGenerationThreadPool.Num();i++)
	{
		if (LodGenerationThreadPool.IsValidIndex(i) && LodGenerationThreadPool[i] != nullptr)
		{
			if(LodGenerationThreadPool[i]->Cancel() || LodGenerationThreadPool[i]->IsDone())
			{
				delete LodGenerationThreadPool[i];
			}
			else
			{
				LodGenerationThreadPool[i]->EnsureCompletion();
				delete LodGenerationThreadPool[i];
			}
		}
	}
	LodGenerationThreadPool.Empty();
	if ( FoliageGenerationThreadPool != nullptr)
	{
		if(FoliageGenerationThreadPool->Cancel() || FoliageGenerationThreadPool->IsDone())
		{
			delete FoliageGenerationThreadPool;
			FoliageGenerationThreadPool = nullptr;
		}
		else
		{
			FoliageGenerationThreadPool->EnsureCompletion();
			delete FoliageGenerationThreadPool;
			FoliageGenerationThreadPool = nullptr;
		}
	}

	CleanComponents();

	Super::BeginPlay();

	InitializeValues();

	
}

void AWorldScapeRoot::OnConstruction(const FTransform& Transform)
{
	if (HasAnyFlags(RF_ClassDefaultObject))
		return;
	
	InitializeValues();
	
	
	if (GenerationType_Previous != GenerationType) 
	{
		GenerationType_Previous = GenerationType;
		CleanComponents();
	}
		
	
	if (bGenerateWorldScape)
	{
		if (WorldScapeLod.Num() == 0 || CheckForRegenerate())
		{
			GenerateBaseMesh();
		}

	}
	else 
	{
		CleanComponents();
	}
	
	if (MaterialTerrainInstances.Num() > 0) {
		for (int i = 0; i < MaterialTerrainInstances.Num(); i++)
		{
			if (MaterialTerrainInstances.IsValidIndex(i) && IsValid(MaterialTerrainInstances[i]))
			{
				MaterialTerrainInstances[i]->SetVectorParameterValue("PlanetLocation", GetActorLocation());
			}
		}
	}

	if (MaterialOceanInstances.Num() > 0) {
		for (int i = 0; i < MaterialOceanInstances.Num(); i++)
		{
			if (MaterialOceanInstances.IsValidIndex(i) && IsValid(MaterialOceanInstances[i]))
			{
				MaterialOceanInstances[i]->SetVectorParameterValue("PlanetLocation", GetActorLocation());
			}
		}
	}
}

void AWorldScapeRoot::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);

	

	if (MaterialTerrainInstances.Num() > 0) 
	{
		for (int i = 0; i < MaterialTerrainInstances.Num(); i++)
		{
			if (MaterialTerrainInstances.IsValidIndex(i) && IsValid(MaterialTerrainInstances[i]))
			{
				MaterialTerrainInstances[i]->SetVectorParameterValue("PlanetLocation", GetActorLocation());
			}
		}
	}

	if (MaterialOceanInstances.Num() > 0) 
	{
		for (int i = 0; i < MaterialOceanInstances.Num(); i++)
		{
			if (MaterialOceanInstances.IsValidIndex(i) && IsValid(MaterialOceanInstances[i]))
			{
				MaterialOceanInstances[i]->SetVectorParameterValue("PlanetLocation", GetActorLocation());
			}
		}
	}
	
	
	if (Prev_bDisplayCollision != bDisplayCollision) 
	{
		Prev_bDisplayCollision = bDisplayCollision;
		for (int32 i = 0; i < CollisionLods.Num(); i++) 
		{
			CollisionLods[i]->Mesh->SetVisibility(bDisplayCollision);
		}

		for (int32 i = 0; i < WorldScapeLod.Num(); i++) 
		{
			WorldScapeLod[i]->Mesh->SetVisibility(!bDisplayCollision);
		}

		if (bOcean) {
			for (int32 i = 0; i < WorldScapeLodOcean.Num(); i++) 
			{
				WorldScapeLodOcean[i]->Mesh->SetVisibility(!bDisplayCollision);
			}
		}

		
	}


	if (GenerationType == EWorldScapeType::Planet)
	{
		PlanetScaleCode = PlanetScale;
		bFlatWorld = false;
	}
	else
	{
		PlanetScaleCode = 637817792 * 0.5f;
		bFlatWorld = true;
	}


	PlanetLocation = GetActorLocation();

	

	bool InnerFreeze = false;
	FVector Normal = FVector(0, 0, 1);
	if (GenerationType == EWorldScapeType::Planet)
	{
		double Distance = 0;

		UWorld* world = GEngine->GetCurrentPlayWorld();
		
		APawn* PawnRef = nullptr;
		if (IsValid(world)) {
			PawnRef = UGameplayStatics::GetPlayerPawn(world, 0);
		}		

		if (IsValid(PawnRef))
		{
			Normal = PawnRef->GetActorLocation() - GetActorLocation();
			Normal.Normalize();
			Distance = DVector::Dist(PawnRef->GetActorLocation(), GetActorLocation());
		}
		
#if WITH_EDITOR
		if (WorldScapeEditorUtils::IsInViewPort()) 
		{
			Normal = WorldScapeEditorUtils::GetViewPortCameraPosition() - GetActorLocation();
			Normal.Normalize();
			Distance = DVector::Dist(WorldScapeEditorUtils::GetViewPortCameraPosition(), GetActorLocation());
		}
#endif

	
		Distance -= PlanetScale;
		
		

		if (WorldScapeLod.Num() > 0 && WorldScapeLodInGeneration.Num() == 0&&  DistanceToFreezeGeneration > 0 && Distance > DistanceToFreezeGeneration) 
		{
			InnerFreeze = true;

			if ( FVector::DotProduct(Normal, LastGenerationNormal) < 0.95f) InnerFreeze = false;
		}
	}
	

	if (bGenerateWorldScape)
	{
		if (!(bFreezeGeneration|| InnerFreeze)) 
		{
			if (WorldScapeLodInGeneration.Num() == 0)LastGenerationNormal = Normal;

			if (!init){
				GenerateBaseMesh();
				init = true;
			}

			if (WorldScapeLod.Num() == 0 || CheckForRegenerate()) 
			{
				GenerateBaseMesh();
			}else if (bRegenFoliages)
			{
				UpdateFoliageData();
				bRegenFoliages = false;
			}

			UpdatePosition();

			if (bGenerateFoliages)
			{
				if (!RebaseInProgress) {
					FoliageHandleTick();

				}
			}
			else 
			{
				for (int32 i = 0; i < FoliageDataList.Num(); i++) 
				{
					FoliageDataList[i].ActiveFoliageSector.Empty();
					FoliageDataToSpawn[i].ActiveFoliageSector.Empty();
				}
			}

			CheckForLodGeneration();
		}
	}
	else if (WorldScapeLod.Num() > 0)
	{
		CleanComponents();
	}

	CheckForHeightmapModifier();

	if (MaterialTerrainInstances.Num() > 0) {
		for (int i = 0; i < MaterialTerrainInstances.Num(); i++)
		{
			if (MaterialTerrainInstances.IsValidIndex(i) && IsValid(MaterialTerrainInstances[i]))
			{
				MaterialTerrainInstances[i]->SetVectorParameterValue("PlanetLocation", GetActorLocation());
			}
		}
	}

	if (MaterialOceanInstances.Num() > 0) {
		for (int i = 0; i < MaterialOceanInstances.Num(); i++)
		{
			if (MaterialOceanInstances.IsValidIndex(i) && IsValid(MaterialOceanInstances[i]))
			{
				MaterialOceanInstances[i]->SetVectorParameterValue("PlanetLocation", GetActorLocation());
			}
		}
	}
}


void AWorldScapeRoot::CleanFoliage()
{
	FoliageGenerationDone = false;
	FoliageGenerationInProgress = false;
	
	for (int i = 0; i < FoliageDataList.Num(); i++)
	{
		if (FoliageDataList.IsValidIndex(i))
		{
			for (int j =0; j< FoliageDataList[i].ActiveFoliageSector.Num(); j++)
			{
				if (FoliageDataList[i].ActiveFoliageSector.IsValidIndex(j))
				{
					if (FoliageDataList[i].ActiveFoliageSector[j].ActorsSpawned.Num() > 0)
					{
						for (int k = FoliageDataList[i].ActiveFoliageSector[j].ActorsSpawned.Num() - 1; k >= 0 ;k--)
						{
							FoliageDataList[i].ActiveFoliageSector[j].ActorsSpawned[k]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
							FoliageDataList[i].ActiveFoliageSector[j].ActorsSpawned[k]->UnregisterAllComponents();
							FoliageDataList[i].ActiveFoliageSector[j].ActorsSpawned[k]->Destroy();
						}
					}
					else 
					{
						for (int k = FoliageDataList[i].ActiveFoliageSector[j].HimcMesh.Num() - 1; k >= 0; k--)
						{
							if (IsValid(FoliageDataList[i].ActiveFoliageSector[j].HimcMesh[k]))
							{
								FoliageDataList[i].ActiveFoliageSector[j].HimcMesh[k]->DestroyComponent();
							}
						}
						FoliageDataList[i].ActiveFoliageSector[j].HimcMesh.Empty();
					}

				}
				
			}
			FoliageDataList[i].ActiveFoliageSector.Empty();
		}
	}
	FoliageDataList.Empty();
	FoliageDataToSpawn.Empty();
	
	for (int32 i = 0; i < InstancedMeshs.Num(); i++) 
	{
		if (InstancedMeshs[i]) 
		{
			this->RemoveInstanceComponent(InstancedMeshs[i]);
			InstancedMeshs[i]->UnregisterComponent();
			InstancedMeshs[i]->DestroyComponent();
		}
	}
	
	TArray<UActorComponent*> Components;
	GetComponents(UHierarchicalInstancedStaticMeshComponent::StaticClass(), Components,true);

	for (UActorComponent* HISMC : Components)
	{
		HISMC->DestroyComponent();
	}
}

void AWorldScapeRoot::UpdateFoliageData()
{
	
	CleanFoliage();
	if (IsValid(GetWorld()) && bGenerateFoliages)
	{
		auto Timer = stopwatch();

		int id = 0;
		while (Timer.GetMiliSeconds() < 0.5 && id < FoliageDataList.Num())
		{
			FoliageDataList[id].ActiveFoliageSector.Empty();
			FoliageDataToSpawn[id].ActiveFoliageSector.Empty();
			id++;
		}


		Timer = stopwatch();

		id = 0;
		while (Timer.GetMiliSeconds() < 0.5 && id < InstancedMeshs.Num())
		{
			if (IsValid(InstancedMeshs[id]))
			{
				this->RemoveInstanceComponent(InstancedMeshs[id]);
				InstancedMeshs[id]->UnregisterComponent();
				InstancedMeshs[id]->DestroyComponent();
			}
			id++;
		};
		for (int32 c = 0; c < Foliages.Num(); c++) 
		{
			if (IsValid(Foliages[c]))
			{
				for (int32 i = 0; i < Foliages[c]->FoliageList.Num(); i++) 
				{
					if (Foliages[c]->FoliageList.IsValidIndex(i) && IsValid(Foliages[c]->FoliageList[i]) )
					{
						FVegetation VegData = FVegetation();
						FQueueVegetation VegQData;
						VegData.FoliageCollectionIndex = c;
						VegData.FoliageIndex = i;
						VegData.SectorSize = Foliages[c]->FoliageList[i]->FoliageSectorSize;

						if (Foliages[c]->FoliageList[i]->GetClass() == UWorldScapeFoliagesCluster::StaticClass())
						{
							VegData.IsCluster = true;
						}
						if (Foliages[c]->FoliageList[i]->GetClass() == UWorldScapeFoliagesAsset::StaticClass()) 
						{
							UWorldScapeFoliagesAsset* foliagesAsset = (UWorldScapeFoliagesAsset*)Foliages[c]->FoliageList[i];

							VegData.IsActor = foliagesAsset->bSpawnActorInstead;
							UStaticMesh* FoliageMesh = foliagesAsset->StaticMesh;

#if ENGINE_MAJOR_VERSION == 4
							for (int matID = 0; matID < FoliageMesh->StaticMaterials.Num(); matID++)
#else 
							for (int matID = 0; matID < FoliageMesh->GetStaticMaterials().Num(); matID++)
#endif
							{
								UMaterialInterface* MaterialInstance = FoliageMesh->GetMaterial(matID);
								UMaterialInstanceDynamic* MID = Cast<UMaterialInstanceDynamic>(MaterialInstance);

								if (MaterialInstance && !MID)
								{
									VegData.MaterialInstances.Add(UMaterialInstanceDynamic::Create(MaterialInstance, this));
								}

							}
						}
						else if (Foliages[c]->FoliageList[i]->GetClass() == UWorldScapeFoliagesBlueprint::StaticClass())
						{
							VegData.IsActor = true;
						}
					
						FoliagesList.Add(Foliages[c]->FoliageList[i]);
						FoliageDataList.Add(VegData);
						const int Index = FoliageDataToSpawn.Add(VegQData);
						FoliageDataToSpawn[Index].FoliageCollectionIndex = c;
						FoliageDataToSpawn[Index].FoliageIndex = i;
						FoliageDataToSpawn[Index].FoliageListIndex = Index;
						FoliageDataList[Index].FoliageListIndex = Index;
					}
				}
			}
		}
	}
}


void AWorldScapeRoot::CleanComponents() {

	
	if (GenerationType == EWorldScapeType::Planet)
	{
		PlanetScaleCode = PlanetScale;
		bFlatWorld = false;
	}
	else
	{
		PlanetScaleCode = 637817792 * 0.5f;
		bFlatWorld = true;
	}
	
	if (WorldScapeLod.Num() > 0)
	{

		for (int32 i = 0; i < WorldScapeLod.Num(); i++) 
		{
			if (IsValid(WorldScapeLod[i])) 
			{
				if (IsValid(WorldScapeLod[i]->Mesh))
				{
					WorldScapeLod[i]->Mesh->DestroyComponent();
				}
				WorldScapeLod[i]->DestroyComponent();
			}
		}
	}

	if (WorldScapeLodOcean.Num() > 0) 
	{

		for (int32 i = 0; i < WorldScapeLodOcean.Num(); i++) 
		{
			if (IsValid(WorldScapeLodOcean[i])) 
			{
				if (IsValid(WorldScapeLodOcean[i]->Mesh))
				{ 
					WorldScapeLodOcean[i]->Mesh->DestroyComponent();
				}
				WorldScapeLodOcean[i]->DestroyComponent();
			}
		}
	}

	if (CollisionLods.Num() > 0) 
	{
		for (int32 i = 0; i < CollisionLods.Num(); i++) {
			if (IsValid(CollisionLods[i])) 
			{
				if (IsValid(CollisionLods[i]->Mesh))
				{
					CollisionLods[i]->Mesh->DestroyComponent();
				}
				CollisionLods[i]->DestroyComponent();
			}
		}
	}

	CleanFoliage();
	

	
	TArray<UActorComponent*> Components;
	GetComponents(UWorldScapeLod::StaticClass(), Components, true);
	for (UActorComponent* PC : Components)
	{
		if (PC != TransformKeeper)
		{	
			PC->DestroyComponent();
		}
	}

	GetComponents(UWorldScapeMeshComponent::StaticClass(), Components, true);
	for (UActorComponent* Wsmc : Components)
	{
		if (IsValid(Wsmc))
		{
			Wsmc->DestroyComponent();
		}
	}




	



	HeightMapVolumeDataList.Empty();
	NoiseVolumeDataList.Empty();
	FoliageMaskDataList.Empty();

	WorldScapeLodOcean.Empty();
	WorldScapeLod.Empty();
	WorldScapeLodInGeneration.Empty();
	CollisionLods.Empty();
	
}

void AWorldScapeRoot::GenerateBaseMesh() 
{
	Prev_HeightMult = -1;
	if (MaxLod < 1)
		MaxLod = 1;

	PlanetNoise.SetSeed(Seed);
	
	CleanComponents();
	

	//UE_LOG(LogWorldScapeCore, Log, TEXT("Generate Base Mesh"));

	FoliagesList.Empty();
	DVector PPos = FVector(0,0,0);


	UWorld* world = GEngine->GetCurrentPlayWorld();

	APawn* PawnRef = nullptr;
	if (IsValid(world)) {
		PawnRef =UGameplayStatics::GetPlayerPawn(world, 0);
	}

	if (IsValid(PawnRef))
	{
		PPos = PawnRef->GetActorLocation();
	}

	bIsInPlay = true;
#if WITH_EDITOR
	if (WorldScapeEditorUtils::IsInViewPort()) 
	{
		bIsInPlay = false;
		PPos = WorldScapeEditorUtils::GetViewPortCameraPosition();
	}
#endif
	/*
	UE_LOG(LogWorldScapeCore, Log, TEXT("Altitude : %f Lods"), (float)PlayerDistanceToGround);
	UE_LOG(LogWorldScapeCore, Log, TEXT("log 2 altitude : %f Lods"), (float)log2(PlayerDistanceToGround));
	UE_LOG(LogWorldScapeCore, Log, TEXT("rounded log 2 altitude : %f Lods"), (float)round(log2(PlayerDistanceToGround)));
	UE_LOG(LogWorldScapeCore, Log, TEXT("Altitude Multiplier : %f Lods"), (float)AltitudeMultiplier);
	*/

	PPos = PPos + PlanetLocation;
	PPos.Normalize();

	for (int32 i = 0; i < HeightMapVolumeList.Num(); i++)
	{
		if (HeightMapVolumeList.IsValidIndex(i) && IsValid(HeightMapVolumeList[i]))
		{
			HeightMapVolumeDataList.Add(HeightMapVolumeList[i]->GetHeightMapVolumeData());
		}
	}
	
	for (int32 i = 0; i < NoiseVolumeList.Num(); i++)
	{
		if (NoiseVolumeList.IsValidIndex(i) && IsValid(NoiseVolumeList[i]))
		{
			NoiseVolumeDataList.Add(NoiseVolumeList[i]->GetNoiseVolumeData());
		}
	}
	
	for (int32 i = 0; i < FoliageMaskList.Num(); i++)
	{
		if (FoliageMaskList.IsValidIndex(i) && IsValid(FoliageMaskList[i]))
		{
			FoliageMaskDataList.Add(FoliageMaskList[i]->GetFoliageMaskVolumeData());
		}
	}
	UpdateFoliageData();
	if (IsValid(GetWorld()) )
	{
		MaterialTerrainInstances.Empty();
		for (int32 i = 0; i < MaxLod; i++) 
		{
			WorldScapeLod.Add(NewObject <UWorldScapeLod>(this));
			WorldScapeLod[i]->SetIsReplicated(true);
			WorldScapeLod[i]->AttachToComponent(TransformKeeper,FAttachmentTransformRules::KeepRelativeTransform);
			WorldScapeLod[i]->SetMobility(EComponentMobility::Movable);
			WorldScapeLod[i]->Mesh->SetMobility(EComponentMobility::Movable);
			WorldScapeLod[i]->Mesh->SetVisibility(!bDisplayCollision);
			WorldScapeLod[i]->Mesh->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
			WorldScapeLod[i]->Mesh->bCastContactShadow = bContactShadow;
			WorldScapeLod[i]->SetRelativeLocation(FVector(0, 0, 0));
			WorldScapeLod[i]->RegisterComponentWithWorld(GetWorld());
			WorldScapeLod[i]->Init(i, LodResolution, TriangleSize * (2 ^ i), (PPos*PlanetScaleCode - PlanetLocation), TerrainMaterial, PlanetScaleCode, PlanetLocation, false, false);
			
			if (WorldScapeLod[i]->Mesh->GetMaterial(0) != nullptr)
			{
				UMaterialInstanceDynamic* MID = WorldScapeLod[i]->Mesh->CreateDynamicMaterialInstance(0, WorldScapeLod[i]->Mesh->GetMaterial(0));
				WorldScapeLod[i]->Mesh->SetMaterial(1, MID);
				WorldScapeLod[i]->Mesh->SetMaterial(2, MID);
				MaterialTerrainInstances.Add(MID);
				MID->SetVectorParameterValue("PlanetLocation", PlanetLocation.ToFVector());
			}
			
			
		}
		MaterialOceanInstances.Empty();
		for (int32 i = 0; i < OceanMaxLod; i++) 
		{
			if (bOcean)
			{
				WorldScapeLodOcean.Add(NewObject <UWorldScapeLod>(this));
				WorldScapeLodOcean[i]->SetIsReplicated(true);
				WorldScapeLodOcean[i]->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
				WorldScapeLodOcean[i]->SetMobility(EComponentMobility::Movable);
				WorldScapeLodOcean[i]->Mesh->SetMobility(EComponentMobility::Movable);
				WorldScapeLodOcean[i]->Mesh->SetVisibility(!bDisplayCollision);
				WorldScapeLodOcean[i]->Mesh->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
				WorldScapeLodOcean[i]->SetRelativeLocation(FVector(0, 0, 0));
				WorldScapeLodOcean[i]->RegisterComponentWithWorld(GetWorld());
				WorldScapeLodOcean[i]->Init(i, OceanLodResolution, OceanTriangleSize * (2 ^ i), (PPos * PlanetScaleCode - PlanetLocation), OceanMaterial, PlanetScaleCode, PlanetLocation, true, false);
				if (WorldScapeLodOcean[i]->Mesh->GetMaterial(0) != nullptr)
				{
					UMaterialInstanceDynamic* MID = WorldScapeLodOcean[i]->Mesh->CreateDynamicMaterialInstance(0, WorldScapeLodOcean[i]->Mesh->GetMaterial(0));
					WorldScapeLodOcean[i]->Mesh->SetMaterial(1, MID);
					WorldScapeLodOcean[i]->Mesh->SetMaterial(2, MID);
					MaterialOceanInstances.Add(MID);
					MID->SetVectorParameterValue("PlanetLocation", PlanetLocation.ToFVector());
				}
			}
		}

	}
}

void AWorldScapeRoot::CreateInstancedMesh(FFoliagesSector* Sector, const UWorldScapeFoliagesInterface* Foliage) {

	if (Foliage == nullptr && Sector == nullptr)
	{
		return;
	}

	Sector->HimcMesh.Empty();

	if (Foliage->GetClass() == UWorldScapeFoliagesCluster::StaticClass())
	{
		UWorldScapeFoliagesCluster* FoliagesCluster = (UWorldScapeFoliagesCluster*)Foliage;
		if (FoliagesCluster == nullptr)
			return;

		//UE_LOG(LogWorldScapeCore, Log, TEXT("Add Foliage"))
		for (int i = 0; i < FoliagesCluster->FoliagesClusterUnitList.Num(); i++)
		{

			FWorldScapeFoliagesClusterUnit FoliagesClusterUnit = FoliagesCluster->FoliagesClusterUnitList[i];
			Sector->HimcMesh.Add(NewObject<UHierarchicalInstancedStaticMeshComponent>(this));
			Sector->HimcMesh[i]->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
			Sector->HimcMesh[i]->SetWorldLocation(ECEFToWorld(Sector->Position).ToFVector());
			Sector->HimcMesh[i]->SetWorldRotation(GetActorTransform().Rotator());

			if (!IsValid(Sector->HimcMesh[i]))
			{
				return;
			}
			Sector->HimcMesh[i]->RegisterComponentWithWorld(GetWorld());
			Sector->HimcMesh[i]->SetStaticMesh(FoliagesClusterUnit.StaticMesh);
			Sector->HimcMesh[i]->SetFlags(RF_Transactional | RF_Transient);
			Sector->HimcMesh[i]->SetMobility(EComponentMobility::Movable);
#if WITH_EDITOR
			if (WorldScapeEditorUtils::IsInViewPort() && bStaticCollisionInEditor)
			{
				Sector->HimcMesh[i]->SetMobility(EComponentMobility::Static);
			}
#endif
			Sector->HimcMesh[i]->SetReceivesDecals(FoliagesClusterUnit.bReceiveDecal);
			Sector->HimcMesh[i]->SetCastShadow(FoliagesClusterUnit.bCastShadows);
			Sector->HimcMesh[i]->bCastStaticShadow = FoliagesClusterUnit.bCastShadows;
			Sector->HimcMesh[i]->bDisableCollision = !FoliagesClusterUnit.bCollision;
			Sector->HimcMesh[i]->bCastFarShadow = FoliagesClusterUnit.bCastFarShadow;
			Sector->HimcMesh[i]->bNeverDistanceCull = FoliagesClusterUnit.bNeverDistanceCull;
			Sector->HimcMesh[i]->bCastDistanceFieldIndirectShadow = FoliagesClusterUnit.bCastDistanceFieldIndirectShadow;
			Sector->HimcMesh[i]->bSelfShadowOnly = FoliagesClusterUnit.bSelfShadowOnly;
			Sector->HimcMesh[i]->bAffectDynamicIndirectLighting = FoliagesClusterUnit.bAffectDynamicIndirectLighting;
			if (FoliagesClusterUnit.OverrideMaterial.Num() > 0) 
			{
				for (int j = 0; j < FoliagesClusterUnit.OverrideMaterial.Num(); j++) 
				{
					Sector->HimcMesh[i]->SetMaterial(j,FoliagesClusterUnit.OverrideMaterial[j]);
				}
			}
			
			Sector->HimcMesh[i]->InstanceEndCullDistance = FoliagesCluster->FoliageSectorSize * FoliagesClusterUnit.FoliageCullDistanceMultiplier;

			if (FoliagesClusterUnit.bCollision)
			{
				Sector->HimcMesh[i]->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
				Sector->HimcMesh[i]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
			else
			{
				Sector->HimcMesh[i]->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
				Sector->HimcMesh[i]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
			Sector->HimcMesh[i]->SetGenerateOverlapEvents(false);
			
			Sector->HimcMesh[i]->bEnableDensityScaling = FoliagesClusterUnit.bCollision ? 0 : 1;
			//Sector->InstancedMesh->OverrideMaterials
			this->AddInstanceComponent(Sector->HimcMesh[i]);
		}

	}
	if (Foliage->GetClass() == UWorldScapeFoliagesAsset::StaticClass())
	{
		UWorldScapeFoliagesAsset* FoliagesAsset = (UWorldScapeFoliagesAsset*)Foliage;
		if (FoliagesAsset->StaticMesh == nullptr)
			return;

		int id = Sector->HimcMesh.Add(NewObject<UHierarchicalInstancedStaticMeshComponent>(this));
		Sector->HimcMesh[id]->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
		Sector->HimcMesh[id]->SetWorldLocation(ECEFToWorld(Sector->Position).ToFVector());
		Sector->HimcMesh[id]->SetWorldRotation(GetActorTransform().Rotator());

		if (!IsValid(Sector->HimcMesh[id]))
		{
			return;
		}
		Sector->HimcMesh[id]->RegisterComponentWithWorld(GetWorld());
		Sector->HimcMesh[id]->SetStaticMesh(FoliagesAsset->StaticMesh);
		Sector->HimcMesh[id]->SetFlags(RF_Transactional | RF_Transient);
		Sector->HimcMesh[id]->SetMobility(EComponentMobility::Movable);
#if WITH_EDITOR
		if (WorldScapeEditorUtils::IsInViewPort() && bStaticCollisionInEditor)
		{
			Sector->HimcMesh[id]->SetMobility(EComponentMobility::Static);
		}
#endif
		Sector->HimcMesh[id]->SetReceivesDecals(FoliagesAsset->bReceiveDecal);
		Sector->HimcMesh[id]->SetCastShadow(FoliagesAsset->bCastShadows);
		Sector->HimcMesh[id]->bCastStaticShadow = FoliagesAsset->bCastShadows;
		Sector->HimcMesh[id]->bDisableCollision = !FoliagesAsset->bCollision;
		Sector->HimcMesh[id]->bAffectDistanceFieldLighting = FoliagesAsset->bCastShadows;
		Sector->HimcMesh[id]->bCastFarShadow = FoliagesAsset->bCastFarShadow;
		Sector->HimcMesh[id]->bNeverDistanceCull = FoliagesAsset->bNeverDistanceCull;
		Sector->HimcMesh[id]->bCastDistanceFieldIndirectShadow = FoliagesAsset->bCastDistanceFieldIndirectShadow;
		Sector->HimcMesh[id]->bSelfShadowOnly = FoliagesAsset->bSelfShadowOnly;
		if (FoliagesAsset->OverrideMaterial.Num() > 0)
		{
			for (int i = 0; i < FoliagesAsset->OverrideMaterial.Num(); i++)
			{
				Sector->HimcMesh[id]->SetMaterial(i, FoliagesAsset->OverrideMaterial[i]);
			}
		}
		Sector->HimcMesh[id]->bAffectDynamicIndirectLighting = FoliagesAsset->bAffectDynamicIndirectLighting;
		Sector->HimcMesh[id]->InstanceEndCullDistance = FoliagesAsset->FoliageSectorSize * FoliagesAsset->FoliageCullDistanceMultiplier;


		if (FoliagesAsset->bCollision)
		{
			Sector->HimcMesh[id]->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
			Sector->HimcMesh[id]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		else
		{
			Sector->HimcMesh[id]->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
			Sector->HimcMesh[id]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
		Sector->HimcMesh[id]->SetGenerateOverlapEvents(false);
		Sector->HimcMesh[id]->bEnableDensityScaling = FoliagesAsset->bCollision ? 0 : 1;
		//Sector->InstancedMesh->OverrideMaterials
		this->AddInstanceComponent(Sector->HimcMesh[id]);
	}
}



bool AWorldScapeRoot::CheckForRegenerate(const bool bUpdate)
{
	bool Regenerate = false;
	

	if (Prev_PlanetScale != PlanetScale)		 { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetScale"));}
	if (Prev_WorldScapeNoise != WorldScapeNoise) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by WorldScapeNoise"));}
	if (Prev_NoiseOffset != NoiseOffset)		 { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by NoiseOffset")); }
	if (Prev_MaxLoD != MaxLod) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by MaxLod")); }
	if (Prev_LodResolution != LodResolution) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by LodResolution")); }
	if (Prev_TriangleSize != TriangleSize) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by TriangleSize")); }
	if (Prev_HeightAnchor != HeightAnchor) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by HeightAnchor")); }
	if (Prev_Ocean != bOcean) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bOcean")); }
	if (Prev_OceanMaxLoD != OceanMaxLod) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by OceanMaxLod")); }
	if (Prev_OceanLodResolution != OceanLodResolution) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by OceanLodResolution")); }
	if (Prev_OceanTriangleSize != OceanTriangleSize) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by OceanTriangleSize")); }
	if (Prev_NoiseIntensity != NoiseIntensity) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by NoiseIntensity")); }
	if (Prev_NoiseScale != NoiseScale) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by NoiseScale")); }
	if (Prev_Seed != Seed) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by Seed")); }
	if (Prev_LattitudeRotation != LattitudeRotation) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by LattitudeRotation")); }
	if (Prev_OceanHeight != OceanHeight) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by OceanHeight")); }
	if (Prev_bContactShadow != bContactShadow) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bContactShadow")); }


	if (Prev_bUsePlanetaryHeightMap != bUsePlanetaryHeightMap) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bUsePlanetaryHeightMap")); }
	if (Prev_PlanetaryBlendAlpha != PlanetaryBlendAlpha) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryBlendAlpha")); }
	if (Prev_bPlanetaryInvertMapBlend != bPlanetaryInvertMapBlend) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryInvertMapBlend")); }
	if (Prev_bPlanetaryHeight != bPlanetaryHeight) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryHeight")); }
	if (Prev_PlanetaryMapHeight != PlanetaryMapHeight) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMapHeight")); }
	if (Prev_PlanetaryAltitude != PlanetaryAltitude) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryAltitude")); }
	if (Prev_bPlanetaryTemperature != bPlanetaryTemperature) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryTemperature")); }
	if (Prev_PlanetaryMaxTemperature != PlanetaryMaxTemperature) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMaxTemperature")); }
	if (Prev_PlanetaryMinTemperature != PlanetaryMinTemperature) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMinTemperature")); }
	if (Prev_bPlanetaryHumidity != bPlanetaryHumidity) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryHumidity")); }
	if (Prev_PlanetaryMaxHumidity != PlanetaryMaxHumidity) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMaxHumidity")); }
	if (Prev_PlanetaryMinHumidity != PlanetaryMinHumidity) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMinHumidity")); }
	if (Prev_bPlanetaryHeightAlpha != bPlanetaryHeightAlpha) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryHeightAlpha")); }
	if (Prev_bPlanetaryOceanHeight != bPlanetaryOceanHeight) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryOceanHeight")); }
	if (Prev_PlanetaryMaxOceanHeight != PlanetaryMaxOceanHeight) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMaxOceanHeight")); }
	if (Prev_PlanetaryMinOceanHeight != PlanetaryMinOceanHeight) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryMinOceanHeight")); }
	if (Prev_bPlanetaryOceanHeightAlpha != bPlanetaryOceanHeightAlpha) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by bPlanetaryOceanHeightAlpha ")); }
	if (Prev_PlanetaryHeightMapBlend != PlanetaryHeightMapBlend) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by PlanetaryHeightMapBlend")); }
	if (Prev_SamplingMethod != SamplingMethod) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by SamplingMethod ")); }

	if (Prev_HeightBlendAlpha != HeightBlendAlpha) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by HeightBlendAlpha")); }
	if (Prev_TemperatureBlendAlpha != TemperatureBlendAlpha) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by TemperatureBlendAlpha")); }
	if (Prev_HumidityBlendAlpha != HumidityBlendAlpha) { Regenerate = true; UE_LOG(LogWorldScapeCore, Log, TEXT("Regen Request by HumidityBlendAlpha")); }
		
	if (bUpdate)
	{
		Prev_NoiseOffset = NoiseOffset;
		Prev_LodResolution = LodResolution;
		Prev_MaxLoD = MaxLod;
		Prev_PlanetScale = PlanetScale;
		Prev_NoiseIntensity = NoiseIntensity;
		Prev_NoiseScale = NoiseScale;
		Prev_Seed = Seed;
		Prev_PlanetTransform = GetTransform();
		Prev_LattitudeRotation = LattitudeRotation;
		Prev_TriangleSize = TriangleSize;
		Prev_Ocean = bOcean;
		Prev_HeightAnchor = HeightAnchor;
		Prev_OceanMaxLoD = OceanMaxLod;
		Prev_OceanLodResolution = OceanLodResolution;
		Prev_OceanTriangleSize = OceanTriangleSize;
		Prev_OceanHeight = OceanHeight;
		Prev_WorldScapeNoise = WorldScapeNoise;




		Prev_bUsePlanetaryHeightMap = bUsePlanetaryHeightMap;
		Prev_PlanetaryBlendAlpha = PlanetaryBlendAlpha;
		Prev_bPlanetaryInvertMapBlend = bPlanetaryInvertMapBlend;
		Prev_bPlanetaryHeight = bPlanetaryHeight;
		Prev_PlanetaryMapHeight = PlanetaryMapHeight;
		Prev_PlanetaryAltitude = PlanetaryAltitude;
		Prev_bPlanetaryTemperature = bPlanetaryTemperature;
		Prev_PlanetaryMaxTemperature = PlanetaryMaxTemperature;
		Prev_PlanetaryMinTemperature = PlanetaryMinTemperature;
		Prev_bPlanetaryHumidity = bPlanetaryHumidity;
		Prev_PlanetaryMaxHumidity = PlanetaryMaxHumidity;
		Prev_PlanetaryMinHumidity = PlanetaryMinHumidity;
		Prev_bPlanetaryHeightAlpha = bPlanetaryHeightAlpha;
		Prev_bPlanetaryOceanHeight = bPlanetaryOceanHeight;
		Prev_PlanetaryMaxOceanHeight = PlanetaryMaxOceanHeight;
		Prev_PlanetaryMinOceanHeight = PlanetaryMinOceanHeight;
		Prev_bPlanetaryOceanHeightAlpha = bPlanetaryOceanHeightAlpha;
		Prev_PlanetaryHeightMapBlend = PlanetaryHeightMapBlend;
		Prev_SamplingMethod = SamplingMethod;

		Prev_HeightBlendAlpha = HeightBlendAlpha;			
		Prev_TemperatureBlendAlpha = TemperatureBlendAlpha;					
		Prev_HumidityBlendAlpha = HumidityBlendAlpha;					



		if (TerrainMaterial != Prev_TerrainMaterial)
		{
			UpdateTerrainMaterial(TerrainMaterial);
			Prev_TerrainMaterial = TerrainMaterial;
		}
		if (OceanMaterial != Prev_OceanMaterial)
		{
			UpdateOceanMaterial(OceanMaterial);
			Prev_OceanMaterial = OceanMaterial;
		}

		//stopwatch<> sw;

		bool hasInvalidFoliage = false;
		for (int32 i = 0; i < Foliages.Num(); i++)
		{
			if (!IsValid(Foliages[i]))
			{
				hasInvalidFoliage = true;
			}
		}
		if (!hasInvalidFoliage && Foliages.Num() !=Prev_Foliages.Num())
		{
			bRegenFoliages = true;
			Prev_Foliages.Empty();
		}
		else
		{
			for (int32 i = 0; i < Foliages.Num(); i++)
			{
			
				if (Foliages.IsValidIndex(i) && Prev_Foliages.IsValidIndex(i) && Foliages[i]->IsInequal(Prev_Foliages[i]) )
				{

					bRegenFoliages = true;
					Prev_Foliages.Empty();
					break;
				}
			}
		}
		
		//float Duration = duration_cast<float>(sw.elapsed());
		//UE_LOG(LogWorldScapeCore, Log, TEXT("Foliage Update Check TimeCost : : %f µs"), Duration);
		
		if (bRegenFoliages)
		{
			//sw.reset();
			for (int32 i = 0; i < Foliages.Num(); i++)
			{
				if (Foliages.IsValidIndex(i) && IsValid(Foliages[i])){
					Prev_Foliages.Add(Foliages[i]->CreateFoliagesCollectionDataData());
				}
			}
			
			//Duration = duration_cast<float>(sw.elapsed());
			//UE_LOG(LogWorldScapeCore, Log, TEXT("Foliage Gen TimeCost : : %f µs"), Duration);
		}
		
		
		
	}


	
	return Regenerate;
}

void AWorldScapeRoot::CheckForHeightmapModifier()
{
	if (!bEnableVolumes)
		return;

	bool Regen = false;
	bool bDataCopyRegen = false;
	for (int32 i = 0; i < HeightMapVolumeList.Num(); i++)
	{
		if (HeightMapVolumeList.IsValidIndex(i) && IsValid(HeightMapVolumeList[i]))
		{
			if (HeightMapVolumeList[i]->NeedRefresh)
			{
				bDataCopyRegen = true;
				HeightMapVolumeList[i]->NeedRefresh = false;
				Regen = true;
			}
			if (HeightMapVolumeList[i]->AlignToPlanetSurface && !bFlatWorld)
			{
				FVector SurfaceNormal = GetPawnNormal(HeightMapVolumeList[i]->GetActorLocation());
				HeightMapVolumeList[i]->SetActorRotation(UKismetMathLibrary::MakeRotFromZ(SurfaceNormal).Quaternion() * HeightMapVolumeList[i]->SurfaceAlignmentRotationOffset.Quaternion());
				HeightMapVolumeList[i]->SetActorLocation((DVector((GetGroundHeight(HeightMapVolumeList[i]->GetActorLocation()) + PlanetScaleCode) * SurfaceNormal) + PlanetLocation).ToFVector());
			}
		}
	}
	if (bDataCopyRegen)
	{
		HeightMapVolumeDataList.Empty();
		for (int32 i = 0; i < HeightMapVolumeList.Num(); i++)
		{
			if (HeightMapVolumeList.IsValidIndex(i) && IsValid(HeightMapVolumeList[i]))
			{
				HeightMapVolumeDataList.Add(HeightMapVolumeList[i]->GetHeightMapVolumeData());
			}
		}
	}

	bDataCopyRegen = false;
	for (int32 i = 0; i < NoiseVolumeList.Num(); i++)
	{
		if (NoiseVolumeList.IsValidIndex(i) && IsValid(NoiseVolumeList[i]))
		{
			if (NoiseVolumeList[i]->NeedRefresh) {
				NoiseVolumeList[i]->NeedRefresh = false;
				Regen = true;
				bDataCopyRegen = true;
			}
			if (NoiseVolumeList[i]->AlignToPlanetSurface && !bFlatWorld) {
				FVector SurfaceNormal = GetPawnNormal(NoiseVolumeList[i]->GetActorLocation());
				NoiseVolumeList[i]->SetActorRotation(UKismetMathLibrary::MakeRotFromZ(SurfaceNormal).Quaternion() * NoiseVolumeList[i]->SurfaceAlignmentRotationOffset.Quaternion());
				NoiseVolumeList[i]->SetActorLocation((DVector((GetGroundHeight(NoiseVolumeList[i]->GetActorLocation()) + PlanetScaleCode) * SurfaceNormal) + PlanetLocation).ToFVector());
			}
		}
	}
	if (bDataCopyRegen)
	{
		NoiseVolumeDataList.Empty();
		for (int32 i = 0; i < NoiseVolumeList.Num(); i++)
		{
			if (NoiseVolumeList.IsValidIndex(i) && IsValid(NoiseVolumeList[i]))
			{
				NoiseVolumeDataList.Add(NoiseVolumeList[i]->GetNoiseVolumeData());
			}
		}
	}


	bDataCopyRegen = false;
	for (int32 i = 0; i < FoliageMaskList.Num(); i++)
	{
		if (FoliageMaskList.IsValidIndex(i) && IsValid(FoliageMaskList[i]))
		{
			if (FoliageMaskList[i]->AlignToPlanetSurface && !bFlatWorld) {
				FVector SurfaceNormal = GetPawnNormal(FoliageMaskList[i]->GetActorLocation());
				FoliageMaskList[i]->SetActorRotation(UKismetMathLibrary::MakeRotFromZ(SurfaceNormal).Quaternion() * FoliageMaskList[i]->SurfaceAlignmentRotationOffset.Quaternion());
				FoliageMaskList[i]->SetActorLocation((DVector((GetGroundHeight(FoliageMaskList[i]->GetActorLocation()) + PlanetScaleCode) * SurfaceNormal) + PlanetLocation).ToFVector());
			}
		}
	}
	if (bDataCopyRegen)
	{
		FoliageMaskDataList.Empty();
		for (int32 i = 0; i < FoliageMaskList.Num(); i++)
		{
			if (FoliageMaskList.IsValidIndex(i) && IsValid(FoliageMaskList[i]))
			{
				FoliageMaskDataList.Add(FoliageMaskList[i]->GetFoliageMaskVolumeData());
			}
		}
	}

	bDataCopyRegen = false;
	for (int32 i = 0; i < TerrainHoleList.Num(); i++)
	{
		if (TerrainHoleList.IsValidIndex(i) && IsValid(TerrainHoleList[i]))
		{
			if (TerrainHoleList[i]->AlignToPlanetSurface && !bFlatWorld) {
				FVector SurfaceNormal = GetPawnNormal(TerrainHoleList[i]->GetActorLocation());
				TerrainHoleList[i]->SetActorRotation(UKismetMathLibrary::MakeRotFromZ(SurfaceNormal).Quaternion() * TerrainHoleList[i]->SurfaceAlignmentRotationOffset.Quaternion());
				TerrainHoleList[i]->SetActorLocation((DVector((GetGroundHeight(TerrainHoleList[i]->GetActorLocation()) + PlanetScaleCode) * SurfaceNormal) + PlanetLocation).ToFVector());
			}
		}
	}
	if (bDataCopyRegen)
	{
		TerrainHoleDataList.Empty();
		for (int32 i = 0; i < TerrainHoleList.Num(); i++)
		{
			if (TerrainHoleList.IsValidIndex(i) && IsValid(TerrainHoleList[i]))
			{
				TerrainHoleDataList.Add(TerrainHoleList[i]->GetTerrainHoleVolumeData());
			}
		}
	}

	if (IsValid(WorldScapeNoise) && WorldScapeNoise->bNeedPlanetRefresh)
	{
		WorldScapeNoise->bNeedPlanetRefresh = false;
		Regen = true;
	}


	if (Regen) HMIForceUpdate = true;
}

void AWorldScapeRoot::UpdatePosition()
{
	FVector PlayerPositionNormal;

	bool DoCollision = bGenerateCollision;

	UWorld* world = GEngine->GetCurrentPlayWorld();

	APawn* PawnRef = nullptr;
	if (IsValid(world)) {
		PawnRef = UGameplayStatics::GetPlayerPawn(world, 0);
	}

	if (IsValid(PawnRef))
	{
		PlayerPos = PawnRef->GetActorLocation();
	}
#if WITH_EDITOR
	if (WorldScapeEditorUtils::IsInViewPort())
	{
		PlayerPos = WorldScapeEditorUtils::GetViewPortCameraPosition();
		DoCollision = bGenerateCollisionInEditor;
	}
#endif
	PlayerWorldPos = PlayerPos;
	PlayerPos = WorldToECEF(PlayerPos).ToFVector();

	const FNoiseData Data;
	FNoiseData NoiseData;
	bool NormalChanged = false;


	PlayerDistanceToGround = GetPawnDistanceFromGround(PlayerWorldPos.ToFVector());
	PlayerAltitude = GetPawnAltitude(PlayerWorldPos.ToFVector());
	NoiseData = GetGroundNoise(WorldToECEF(PlayerWorldPos));
	TemperatureAtPlayerPosition = NoiseData.Temperature;
	HumidityAtPlayerPosition = NoiseData.Humidity;

	PlayerPositionNormal = WorldScapeWorld::GetUpVectorSnapped(PlayerPos, GridAngle,bFlatWorld).ToFVector();

	if (PlayerPositionNormal.ContainsNaN())
	{
		UE_LOG(LogTemp,Warning,TEXT("PlayerPositionNormal Is NAN"));
		PlayerPositionNormal = FVector(0,0,1);
	} //Prevent issues;
	int32 AltitudeMultiplier = pow(2, round(NoiseMathUtils::Max(0.f, log2(PlayerDistanceToGround / HeightAnchor))));
	


	

#if WITH_EDITOR
	if (bProjectPosition)
	{
		if (WorldScapeEditorUtils::IsInViewPort() && AltitudeMultiplier >= 8)
		{
			double ViewOffset = PlayerDistanceToGround * 1.732;
			//prevent position to go to the other side of the planet
			if (ViewOffset >= PlanetScale * 0.5)
				ViewOffset = PlanetScale * 0.5;
			PlayerWorldPos = WorldScapeEditorUtils::GetViewPortCameraLookAt(ViewOffset);
			PlayerPos = WorldToECEF(PlayerWorldPos).ToFVector();
			PlayerPositionNormal = WorldScapeWorld::GetUpVectorSnapped(PlayerPos, GridAngle,bFlatWorld).ToFVector();
		}
	}
#endif

	if (bOverridePlayerPosition)
	{
		PlayerWorldPos = OverridedPlayerPosition;
		PlayerPos = WorldToECEF(OverridedPlayerPosition).ToFVector();
		PlayerDistanceToGround = GetPawnDistanceFromGround(PlayerWorldPos.ToFVector());
		PlayerAltitude = GetPawnAltitude(PlayerWorldPos.ToFVector());
		NoiseData = GetGroundNoise(WorldToECEF(PlayerWorldPos));
		TemperatureAtPlayerPosition = NoiseData.Temperature;
		HumidityAtPlayerPosition = NoiseData.Humidity;
		PlayerPositionNormal = WorldScapeWorld::GetUpVectorSnapped(PlayerPos, GridAngle,bFlatWorld).ToFVector();
		AltitudeMultiplier = pow(2, round(NoiseMathUtils::Max(0.f, log2(PlayerDistanceToGround / HeightAnchor))));
	}
	else 
	{ 
		if (bFlatWorld && bLimitFlatWorldSize)
		{
			DVector LimitedPlayerPos = PlayerPos;

			if (abs(LimitedPlayerPos.X) >= FlatWorldLimit.X) LimitedPlayerPos.X = FlatWorldLimit.X * FMath::Sign(LimitedPlayerPos.X) - 1 * FMath::Sign(LimitedPlayerPos.X);
			if (abs(LimitedPlayerPos.Y) >= FlatWorldLimit.Y) LimitedPlayerPos.Y = FlatWorldLimit.Y * FMath::Sign(LimitedPlayerPos.Y) - 1 * FMath::Sign(LimitedPlayerPos.Y);

			PlayerDistanceToGround = GetPawnDistanceFromGround(ECEFToWorld(LimitedPlayerPos).ToFVector());

			

			PlayerAltitude = GetPawnAltitude(ECEFToWorld(LimitedPlayerPos).ToFVector());
			NoiseData = GetGroundNoise(LimitedPlayerPos);
			TemperatureAtPlayerPosition = NoiseData.Temperature;
			HumidityAtPlayerPosition = NoiseData.Humidity;

		}
	}

	if (!bFlatWorld && PlayerDistanceToGround<0)
	{
		DVector NewPlayerPos = PlayerPos;
		NewPlayerPos.Normalize();
		PlayerPos = (NewPlayerPos*(PlanetScaleCode + GetGroundNoise(NewPlayerPos.ToFVector(),false,true).Height)).ToFVector();
		AltitudeMultiplier = 1;
	}


	GridAngle = GridAngleMin * AltitudeMultiplier;

	if (GridAngle > GridAngleMax) GridAngle = GridAngleMax;

	//TODO : snap Grid Angle to a divisor of 360

	const DVector PPos = ECEFToProjectedPos(PlayerPos);

	
		
	if (!bFlatWorld && WorldScapeLodInGeneration.Num() == 0)
	{

		if (!PlayerPositionNormal.Equals(Prev_Normal,0.1f))
		{
			NormalChanged = true;
			Prev_Normal = PlayerPositionNormal;
		}
	}



	if (DoCollision)
		CollisionLodHandler(PlayerPositionNormal, AltitudeMultiplier, NormalChanged, Data.Height);
	else if (CollisionLods.Num() > 0)
	{
		for (int32 i = 0; i < CollisionLods.Num(); i++)
		{
			CollisionLods[i]->Mesh->DestroyComponent();
			CollisionLods[i]->DestroyComponent();
		}
		CollisionLods.Empty();
	}

	if (GetNetMode() != ENetMode::NM_DedicatedServer && WorldScapeLodInGeneration.Num() == 0)
	{

		bool IsInViewPort = false;
#if WITH_EDITOR
		if (WorldScapeEditorUtils::IsInViewPort())
		{
			IsInViewPort = true;
		}
#endif


		DVector SnappedPosition;
		FVector2D SubPosition;

		if (DebugObject) DebugObject->SetActorLocation(ECEFToWorld(PPos).ToFVector());


		const int LandAltitudeMultiplier = FMath::Clamp(FMath::Min(AltitudeMultiplier,FMath::CeilToInt((128*PlanetScaleCode)/(TriangleSize*LodResolution*pow(2,MaxLod)))),1,999);
		const int WaterAltitudeMultiplier = FMath::Clamp(FMath::Min(AltitudeMultiplier,FMath::CeilToInt((128*PlanetScaleCode)/(OceanTriangleSize*OceanLodResolution*pow(2,OceanMaxLod)))),1,999);
			
		
		double StepSize;
		bool ForceUpdate = false;
		bool ForceUpdateWater = false;
		if (Prev_HeightMult != LandAltitudeMultiplier)
		{
			Prev_HeightMult = LandAltitudeMultiplier;
			ForceUpdate = true;
		}

		if (Prev_WaterHeightMult != WaterAltitudeMultiplier)
		{
			Prev_WaterHeightMult = WaterAltitudeMultiplier;
			ForceUpdateWater = true;
		}

		if (!ForceUpdate && HMIForceUpdate)
		{
			ForceUpdate = true;
		}

		if (!ForceUpdateWater && HMIForceUpdate)
		{
			ForceUpdateWater = true;
		}
		
		
		
		for (int32 i = 0; i < WorldScapeLod.Num(); i++)
		{
			
			StepSize = static_cast<double>(TriangleSize) * pow(2, i) * LandAltitudeMultiplier;
			WorldScapeWorld::GetSnappedPosition(SnappedPosition, PlayerPositionNormal, SubPosition, NormalChanged, StepSize, ForceUpdate, PPos,
				PlanetLocation, i, LandAltitudeMultiplier, TriangleSize, LodResolution, PlanetScaleCode, GridAngle, bFlatWorld, false, FlatWorldLimit, bLimitFlatWorldSize);

			DVector PrecisionCorrectedRelativePosition = SnappedPosition;
            
			if (!bFlatWorld)
			{
				PrecisionCorrectedRelativePosition.Normalize();
				PrecisionCorrectedRelativePosition = DVector((PrecisionCorrectedRelativePosition * PlanetScaleCode).ToFVector());
			}
			else 
			{
				PrecisionCorrectedRelativePosition = PrecisionCorrectedRelativePosition.ToFVector();
			}
			
			if (DVector::Dist(WorldScapeLod[i]->RelativePosition, PrecisionCorrectedRelativePosition) > StepSize * 0.5 || ForceUpdate ||(WorldScapeLod.IsValidIndex(i) &&  PlayerPositionNormal!=  WorldScapeLod[i]->SnappedAngle))
			{

				
				WorldScapeLodInGeneration.Add(WorldScapeLod[i], false);

				
				LodGenerationThreadPool.Add(new FAsyncTask<LodGenerationThread>(
					WorldScapeLod[i], this, SnappedPosition, PlanetLocation, SubPosition, PlanetScaleCode, i,
					TriangleSize * LandAltitudeMultiplier, LodResolution, PlayerDistanceToGround, PlayerPositionNormal,
					bFlatWorld, IsInViewPort));
				LodGenerationThreadPool.Last()->StartBackgroundTask();
			}
		}
		if (bOcean)
		{
			
			for (int32 i = 0; i < WorldScapeLodOcean.Num(); i++)
			{
			
				StepSize = static_cast<double>(OceanTriangleSize) * pow(2, i) * WaterAltitudeMultiplier;
				WorldScapeWorld::GetSnappedPosition(SnappedPosition, PlayerPositionNormal, SubPosition, NormalChanged, StepSize, ForceUpdate, PPos,
					PlanetLocation, i, WaterAltitudeMultiplier, OceanTriangleSize, OceanLodResolution, PlanetScaleCode, GridAngle, bFlatWorld, false, FlatWorldLimit, bLimitFlatWorldSize);

				DVector PrecisionCorrectedRelativePosition = SnappedPosition;
            
				if (!bFlatWorld)
				{
					PrecisionCorrectedRelativePosition.Normalize();
					PrecisionCorrectedRelativePosition = DVector((PrecisionCorrectedRelativePosition * PlanetScaleCode).ToFVector());
				}
				else 
				{
					PrecisionCorrectedRelativePosition = PrecisionCorrectedRelativePosition.ToFVector();
				}

                if (DVector::Dist(WorldScapeLodOcean[i]->RelativePosition, PrecisionCorrectedRelativePosition) > StepSize * 0.5 || ForceUpdateWater ||(WorldScapeLodOcean.IsValidIndex(i) && PlayerPositionNormal!=  WorldScapeLodOcean[i]->SnappedAngle))
	                {
					WorldScapeLodInGeneration.Add(WorldScapeLodOcean[i], false);
					LodGenerationThreadPool.Add(new FAsyncTask <LodGenerationThread>(WorldScapeLodOcean[i], this, SnappedPosition, PlanetLocation, SubPosition, PlanetScaleCode, i,
						OceanTriangleSize * WaterAltitudeMultiplier, OceanLodResolution, PlayerDistanceToGround, PlayerPositionNormal, bFlatWorld, IsInViewPort));
                	LodGenerationThreadPool.Last()->StartBackgroundTask();
	                }
			}
		}

		if (HMIForceUpdate) 
		{
			HMIForceUpdate = false;
		}
		
	}

}

void AWorldScapeRoot::CheckForLodGeneration()
{

	bool DoneGenerating = true;


	for (const TPair<UWorldScapeLod*, bool>& Pair : WorldScapeLodInGeneration)
	{
		if (!Pair.Value) 
		{
			DoneGenerating = false;
			break;
		}
	}
	if (DoneGenerating)
	{
		for (const TPair<UWorldScapeLod*, bool>& Pair : WorldScapeLodInGeneration)
		{
			if (IsValid(Pair.Key)) 
			{
				Pair.Key->UpdateMesh();
			}
		}
		LodGenerationThreadPool.Empty();

		TransformKeeper->UpdateBounds();
		WorldScapeLodInGeneration.Empty();
		
	}
}

void AWorldScapeRoot::FoliageHandleTick() 
{
	

	FVector PlayerPosSurface = PlayerPos;
	if (bFlatWorld) PlayerPosSurface.Z = 0;

	auto Timer = stopwatch();
	//Spawn Foliage Sector added to the spawn queue.
	if (FoliageDataToSpawn.Num() > 0 ) 
	{
		for (int32 i = 0; i < FoliageDataToSpawn.Num(); i++)
		{
			if (!FoliageDataToSpawn.IsValidIndex(i)) 
			{
				continue;
			}
			int j = 0;
			if (!FoliageDataToSpawn[i].ActiveFoliageSector.IsEmpty())
			{
			while (!FoliageDataToSpawn[i].ActiveFoliageSector.IsEmpty() && Timer.GetMiliSeconds() < 1)
			{
				j++;
				FFoliagesSector ActualSector;
				FoliageDataToSpawn[i].ActiveFoliageSector.Dequeue(ActualSector);
					
				const DVector SectorPosition = ActualSector.Position;
				const double SectorScale = ActualSector.Size * 4;
					
				if (!WorldScapeHelper::IsPointInCube(PlayerPosSurface, SectorPosition, SectorScale))
				{
					continue;
				}
#if ENGINE_MAJOR_VERSION == 4
				for (int32 f = ActualSector.VegetationTransformArray.Num()-1; f >= 0; f--)
				{
					if (!ActualSector.VegetationTransformArray.IsValidIndex(f))
					{
						continue;
					}

					for (int32 t = ActualSector.VegetationTransformArray[f].VegetationTransform.Num() - 1; t >= 0; t--)
					{
						
						if (!ActualSector.VegetationTransformArray[f].VegetationPosition.IsValidIndex(t))
						{
							ActualSector.VegetationTransformArray[f].VegetationTransform.RemoveAt(t);
							continue;
						}

						DVector NewPos = ActualSector.VegetationTransformArray[f].VegetationPosition[t];
						NewPos = NewPos - DVector(ActualSector.Position);
						ActualSector.VegetationTransformArray[f].VegetationPosition[t] = NewPos;
						ActualSector.VegetationTransformArray[f].VegetationTransform[t].SetTranslation(ActualSector.VegetationTransformArray[f].VegetationPosition[t].ToFVector());

						if (!ActualSector.VegetationTransformArray[f].VegetationTransform[t].IsRotationNormalized())
						{
							UE_LOG(LogWorldScapeCore, Log, TEXT("B : Rotation is not normalized and would crash\nRotation Value : %s\nTransform removed from the spawning pool"), *ActualSector.VegetationTransformArray[f].VegetationTransform[t].GetRotation().ToString());
							ActualSector.VegetationTransformArray[f].VegetationTransform.RemoveAt(t);
						}
					}
				}
#endif
					
				bool ValidFoliage = false;




				bool spawnActor= false;

				if (Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]->GetClass() == UWorldScapeFoliagesAsset::StaticClass())
				{
					UWorldScapeFoliagesAsset* FoliagesAsset = (UWorldScapeFoliagesAsset*)Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex];

					if (FoliagesAsset->bSpawnActorInstead)
					{
						if (FoliagesAsset->ObjectToSpawn && GetWorld())
						{
							ValidFoliage = true;
							for (int f = 0; f < ActualSector.VegetationTransformArray[0].VegetationTransform.Num(); f++)
							{
								const TSubclassOf<AActor>* ActorToSpawnRef = &FoliagesAsset->ObjectToSpawn;

								FActorSpawnParameters SpawnParam;
								SpawnParam.ObjectFlags = RF_Transient;
								FVector Location = ActualSector.Position.ToFVector() + ActualSector.VegetationTransformArray[0].VegetationTransform[f].GetLocation();
								FRotator Rotation = ActualSector.VegetationTransformArray[0].VegetationTransform[f].Rotator();
								if (GetWorld() == nullptr)
								{
									continue;
								}
								AActor* ActorSpawned = GetWorld()->SpawnActor(ActorToSpawnRef->Get(), &Location, &Rotation, SpawnParam);
								if (ActorSpawned == nullptr || TransformKeeper == nullptr)
									continue;
								ActorSpawned->SetActorScale3D(ActualSector.VegetationTransformArray[0].VegetationTransform[f].GetScale3D());
								ActorSpawned->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
								ActorSpawned->RegisterAllComponents();

								ActualSector.ActorsSpawned.Add(ActorSpawned);
							}
						}
					}
					else
					{
						if (FoliagesAsset->StaticMesh)
						{
							ValidFoliage = true;
							CreateInstancedMesh(&ActualSector, Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]);
							if (IsValid(ActualSector.HimcMesh[0]))
							{
								for (int matID = 0; matID < FoliageDataList[i].MaterialInstances.Num(); matID++)
								{
									ActualSector.HimcMesh[0]->SetMaterial(matID, FoliageDataList[i].MaterialInstances[matID]);
								}
								ActualSector.HimcMesh[0]->AddInstances(ActualSector.VegetationTransformArray[0].VegetationTransform, false);
							}
						}
					}
				}
				else if (Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]->GetClass() == UWorldScapeFoliagesBlueprint::StaticClass())
				{
					UWorldScapeFoliagesBlueprint* FoliageBlueprint = (UWorldScapeFoliagesBlueprint*)Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex];

					if (FoliageBlueprint->ObjectToSpawn && GetWorld())
					{
						ValidFoliage = true;
						for (int f = 0; f < ActualSector.VegetationTransformArray[0].VegetationTransform.Num(); f++)
						{
							const TSubclassOf<AActor>* ActorToSpawnRef = &FoliageBlueprint->ObjectToSpawn;

							FActorSpawnParameters SpawnParam;
							SpawnParam.ObjectFlags = RF_Transient;
							FVector Location = ActualSector.Position.ToFVector() + ActualSector.VegetationTransformArray[0].VegetationTransform[f].GetLocation();
							FRotator Rotation = ActualSector.VegetationTransformArray[0].VegetationTransform[f].Rotator();
							if (GetWorld() == nullptr)
							{
								continue;
							}
							AActor* ActorSpawned = GetWorld()->SpawnActor(ActorToSpawnRef->Get(), &Location, &Rotation, SpawnParam);
							if (ActorSpawned == nullptr || TransformKeeper == nullptr)
								continue;
							ActorSpawned->SetActorScale3D(ActualSector.VegetationTransformArray[0].VegetationTransform[f].GetScale3D());
							ActorSpawned->AttachToComponent(TransformKeeper, FAttachmentTransformRules::KeepRelativeTransform);
							ActorSpawned->RegisterAllComponents();

							ActualSector.ActorsSpawned.Add(ActorSpawned);
						}
					}
				}
				else if (Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]->GetClass() == UWorldScapeFoliagesCluster::StaticClass())
				{
					UWorldScapeFoliagesCluster* FoliageCluster = (UWorldScapeFoliagesCluster*)Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex];
					CreateInstancedMesh(&ActualSector, Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]);
					for (int clusterID = 0; clusterID < FoliageCluster->FoliagesClusterUnitList.Num(); clusterID++)
					{

						FWorldScapeFoliagesClusterUnit ClusterUnit = FoliageCluster->FoliagesClusterUnitList[clusterID];
						if (ClusterUnit.StaticMesh)
						{
							ValidFoliage = true;
								
							if (ActualSector.HimcMesh.IsValidIndex(clusterID) && IsValid(ActualSector.HimcMesh[clusterID]))
							{
								for (int matID = 0; matID < FoliageDataList[i].MaterialInstances.Num(); matID++)
								{
									ActualSector.HimcMesh[clusterID]->SetMaterial(matID, FoliageDataList[i].MaterialInstances[matID]);
								}
								ActualSector.HimcMesh[clusterID]->AddInstances(ActualSector.VegetationTransformArray[clusterID].VegetationTransform, false);
							}
							else 
							{
								UE_LOG(LogWorldScapeCore, Log, TEXT(" HIMC ID %i Not valid :("), clusterID);
							}
						}
					}
							
				}

				if (ValidFoliage)
				{
					ActualSector.FoliageSpawned = true;
					FoliageDataList[i].ActiveFoliageSector.Add(ActualSector);
				}
					
			}
			}
		}
	}


	if (FoliageDataList.Num() > 0)
	{
		for (int32 i = 0; i < FoliageDataList.Num(); i++)
		{
			if (!FoliageDataList.IsValidIndex(i))
			{
				continue;
			}
				
			FVegetation* ActualFoliageData = &FoliageDataList[i];
			for (int32 j = FoliageDataList[i].ActiveFoliageSector.Num() - 1; j >= 0 ; j--) {

				if (!ActualFoliageData->ActiveFoliageSector.IsValidIndex(j))
				{
					continue;
				}
				FFoliagesSector* ActualFoliageSector = &ActualFoliageData->ActiveFoliageSector[j];

				if (!WorldScapeHelper::IsPointInCube(PlayerPosSurface, ActualFoliageSector->Position, ActualFoliageSector->Size * 4))
				{

					if (Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]->GetClass() == UWorldScapeFoliagesAsset::StaticClass())
					{
						UWorldScapeFoliagesAsset* FoliagesAsset = (UWorldScapeFoliagesAsset*)Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex];
						if (FoliagesAsset->bSpawnActorInstead)
						{
							for (int k = ActualFoliageSector->ActorsSpawned.Num() - 1; k >= 0; k--)
							{
								if (ActualFoliageSector->ActorsSpawned.IsValidIndex(k) && IsValid(ActualFoliageSector->ActorsSpawned[k]))
								{
									ActualFoliageSector->ActorsSpawned[k]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
									ActualFoliageSector->ActorsSpawned[k]->UnregisterAllComponents();
									ActualFoliageSector->ActorsSpawned[k]->Destroy();
								}
							}
							ActualFoliageSector->ActorsSpawned.Empty();
						}
						else
						{
							ActualFoliageSector->HimcMesh[0]->ClearInstances();
							ActualFoliageSector->HimcMesh[0]->UnregisterComponent();
							ActualFoliageSector->HimcMesh[0]->DestroyComponent();
						}
					}
					else if (Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]->GetClass() == UWorldScapeFoliagesBlueprint::StaticClass())
					{
						UWorldScapeFoliagesBlueprint* FoliageBlueprint = (UWorldScapeFoliagesBlueprint*)Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex];
							
						for (int k = ActualFoliageSector->ActorsSpawned.Num() - 1; k >= 0; k--)
						{
							if (ActualFoliageSector->ActorsSpawned.IsValidIndex(k) && IsValid(ActualFoliageSector->ActorsSpawned[k]))
							{
								ActualFoliageSector->ActorsSpawned[k]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
								ActualFoliageSector->ActorsSpawned[k]->UnregisterAllComponents();
								ActualFoliageSector->ActorsSpawned[k]->Destroy();
							}
						}
						ActualFoliageSector->ActorsSpawned.Empty();
					}
					else if (Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex]->GetClass() == UWorldScapeFoliagesCluster::StaticClass())
					{

						UWorldScapeFoliagesCluster* FoliageCluster = (UWorldScapeFoliagesCluster*)Foliages[FoliageDataToSpawn[i].FoliageCollectionIndex]->FoliageList[FoliageDataToSpawn[i].FoliageIndex];

						for (int HimcId = 0; HimcId < ActualFoliageSector->HimcMesh.Num(); HimcId++) 
						{
							ActualFoliageSector->HimcMesh[HimcId]->ClearInstances();
							ActualFoliageSector->HimcMesh[HimcId]->UnregisterComponent();
							ActualFoliageSector->HimcMesh[HimcId]->DestroyComponent();
						}
					}


						
					ActualFoliageData->ActiveFoliageSector.RemoveAt(j);
				}
			}
		}
	}

	if (!FoliageGenerationInProgress)
	{

		if (FoliageDataList.Num() > 0)
		{
			FoliageGenerationInProgress = true;
			
			
			for (int i = 0; i < FoliageDataToSpawn.Num(); i++) {
				if (FoliageDataToSpawn.IsValidIndex(i)) FoliageDataToSpawn[i].ActiveFoliageSector.Empty();
			}
			
			FoliageGenerationThreadPool = new FAsyncTask <FoliageGenerationThread>(this,PlanetScaleCode, bFlatWorld,PlayerPos,FoliageDataList, PlayerDistanceToGround);
			FoliageGenerationThreadPool->StartBackgroundTask();
		}
	}

}
