// Copyright 2021 IOLACORP STUDIO. All Rights Reserved

#include "WorldScapeFactory.h"
#include "WorldScapeFoliagesAssetTypeAction.h"
#include "WorldScapeFoliagesBlueprintTypeAction.h"
#include "WorldScapeFoliagesClusterTypeAction.h"
#include "WorldScapeNoiseTypeAction.h"
#include "WorldScapeFoliagesCollectionTypeAction.h"
#include "HeightMapVolumeDataTypeAction.h"
#include "HIDEditor.h"


const FName WorldScapeFactoryAppIdentifier = FName(TEXT("WorldScapeFactoryApp"));

#define LOCTEXT_NAMESPACE "FWorldScapeFactoryModule"





void FWorldScapeFactoryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

    // register custom types:

    MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
    ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

        IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
        // add custom category
        EAssetTypeCategories::Type WorldScapeCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("WorldScape")), FText::FromString("WorldScape"));
        // register our custom asset with example category
        TSharedPtr<IAssetTypeActions> Action = MakeShareable(new FWorldScapeFoliagesAssetTypeAction(WorldScapeCategory));
        AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());

        Action = MakeShareable(new FWorldScapeFoliagesClusterTypeAction(WorldScapeCategory));
        AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());

        Action = MakeShareable(new FWorldScapeFoliagesBlueprintTypeAction(WorldScapeCategory));
        AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());

        Action = MakeShareable(new FWorldScapeFoliagesCollectionTypeAction(WorldScapeCategory));
        AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());

        Action = MakeShareable(new FHeightMapVolumeDataTypeAction(WorldScapeCategory));
        AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());

        Action = MakeShareable(new FWorldScapeNoiseTypeAction(WorldScapeCategory));
        AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());

        // saved it here for unregister later
        //CreatedAssetTypeActions.Add(Action);


       
        FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("WorldScape"))->GetBaseDir() + "/Resources/";
        

        StyleSet = MakeShareable(new FSlateStyleSet("WorldScapeStyle"));

        StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
        StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

        StyleSet->Set("ClassThumbnail.WorldScapeRoot", new FSlateImageBrush(ContentDir + TEXT("WorldScape128.png"), FVector2D(64, 64)));
        StyleSet->Set("ClassIcon.WorldScapeRoot", new FSlateImageBrush(ContentDir + TEXT("WorldScape128.png"), FVector2D(16, 16)));
        
        FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
        /**/
}


void FWorldScapeFactoryModule::ShutdownModule()
{

    // Reset our existing extensibility managers
    MenuExtensibilityManager.Reset();
    ToolBarExtensibilityManager.Reset();

	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
    
    if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
    {
        // Unregister our custom created assets from the AssetTools
        IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
        for (int32 i = 0; i < CreatedAssetTypeActions.Num(); ++i)
        {
            AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[i].ToSharedRef());
        }
    }

    CreatedAssetTypeActions.Empty();
}


/**
* Creates a new custom asset editor for a HeightMapVolumeData
*/
TSharedRef<IHIDEditor>  FWorldScapeFactoryModule::CreateHIDEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UHeightMapVolumeData* HIDAsset)
{
    // Initialize and spawn a new custom asset editor with the provided parameters
    TSharedRef<FHIDEditor> NewCustomAssetEditor(new FHIDEditor());
    NewCustomAssetEditor->InitHIDEditor(Mode, InitToolkitHost, HIDAsset);
    return NewCustomAssetEditor;
}

void FWorldScapeFactoryModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
    AssetTools.RegisterAssetTypeActions(Action);
    CreatedAssetTypeActions.Add(Action);
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FWorldScapeFactoryModule, WorldScapeFactory)




