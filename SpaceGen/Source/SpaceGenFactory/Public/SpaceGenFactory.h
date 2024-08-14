// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "Toolkits/IToolkit.h"
#include "Engine.h"
#include "IHIDEditor.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "UnrealEd.h"
#include <HeightMapVolumeData.h>
#include "Toolkits/AssetEditorToolkit.h"
#include "Runtime/Projects/Public/Interfaces/IPluginManager.h"

#include "Runtime/SlateCore/Public/Styling/SlateStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateStyleRegistry.h"


    extern const FName WorldScapeFactoryAppIdentifier;

/**
 * Custom Asset editor module interface
 */
class IWorldScapeFactoryModule : public IModuleInterface, public IHasMenuExtensibility, public IHasToolBarExtensibility
{
public:
    /**
     * Creates a new custom asset editor.
     */
    virtual TSharedRef<IHIDEditor> CreateHIDEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UHeightMapVolumeData* HIDAsset) = 0;
};


class FWorldScapeFactoryModule : public IWorldScapeFactoryModule
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    /** Constructor */
    FWorldScapeFactoryModule() { }

    /** Gets the extensibility managers for outside entities to extend custom asset editor's menus and toolbars */
    virtual TSharedPtr<FExtensibilityManager> GetMenuExtensibilityManager() override { return MenuExtensibilityManager; }
    virtual TSharedPtr<FExtensibilityManager> GetToolBarExtensibilityManager() override { return ToolBarExtensibilityManager; }
    virtual TSharedRef<IHIDEditor> CreateHIDEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UHeightMapVolumeData* HIDAsset);
    void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);

private:
    TSharedPtr<FExtensibilityManager> MenuExtensibilityManager;
    TSharedPtr<FExtensibilityManager> ToolBarExtensibilityManager;

    TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
    TSharedPtr<class FSlateStyleSet> StyleSet;

};


