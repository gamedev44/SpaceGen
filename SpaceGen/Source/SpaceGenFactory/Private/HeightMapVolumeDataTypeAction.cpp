// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include <HeightMapVolumeDataTypeAction.h>
#include "WorldScapeFactory.h"

FHeightMapVolumeDataTypeAction::FHeightMapVolumeDataTypeAction(EAssetTypeCategories::Type InAssetCategory)
	: WorldScapeAssetCategory(InAssetCategory)
{
}

FText FHeightMapVolumeDataTypeAction::GetName() const
{
	return FText::FromString("HeightMap Volume Data");
}

FColor FHeightMapVolumeDataTypeAction::GetTypeColor() const
{
	return FColor(250, 150, 20);
}

void FHeightMapVolumeDataTypeAction::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor /*= TSharedPtr<IToolkitHost>()*/)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto HIDAsset = Cast<UHeightMapVolumeData>(*ObjIt);
		if (HIDAsset != NULL)
		{
			IWorldScapeFactoryModule* WorldScapeFactoryModule = &FModuleManager::LoadModuleChecked<IWorldScapeFactoryModule>("WorldScapeFactory");
			WorldScapeFactoryModule->CreateHIDEditor(Mode, EditWithinLevelEditor, HIDAsset);
		}
	}
}

UClass* FHeightMapVolumeDataTypeAction::GetSupportedClass() const
{
	return UHeightMapVolumeData::StaticClass();
}

uint32 FHeightMapVolumeDataTypeAction::GetCategories()
{
	return WorldScapeAssetCategory;
}
