// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include <HeightMapVolumeData.h>


/**
 * Public interface to Custom Asset Editor
 */
class IHIDEditor : public FAssetEditorToolkit
{
public:
	/** Retrieves the current custom asset. */
	virtual UHeightMapVolumeData* GetCustomAsset() = 0;

	/** Set the current custom asset. */
	virtual void SetHID(UHeightMapVolumeData* InHID) = 0;
};