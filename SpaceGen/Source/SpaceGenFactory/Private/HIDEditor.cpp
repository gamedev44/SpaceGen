// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "HIDEditor.h"
#include "Modules/ModuleManager.h"
#include "EditorStyleSet.h"
#include "Widgets/Docking/SDockTab.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "Editor.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "WorldScapeFactory.h"
#include "HIDEditorCommands.h"
#include "HIDEditorToolbar.h"

#define LOCTEXT_NAMESPACE "HIDEditor"

const FName FHIDEditor::ToolkitFName(TEXT("HeightMapVolumeDataEditor"));
const FName FHIDEditor::PropertiesTabId(TEXT("HeightMapVolumeDataEditor_Properties"));


void FHIDEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(LOCTEXT("WorkspaceMenu_HIDEditor", "HeightMap Volume Data Editor"));

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

#if  ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
	InTabManager->RegisterTabSpawner(PropertiesTabId, FOnSpawnTab::CreateSP(this, &FHIDEditor::SpawnPropertiesTab))
		.SetDisplayName(LOCTEXT("PropertiesTab", "Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Tabs.Details"));
#else
	InTabManager->RegisterTabSpawner(PropertiesTabId, FOnSpawnTab::CreateSP(this, &FHIDEditor::SpawnPropertiesTab))
		.SetDisplayName(LOCTEXT("PropertiesTab", "Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));
#endif	


	
}

void FHIDEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

	InTabManager->UnregisterTabSpawner(PropertiesTabId);
}

void FHIDEditor::InitHIDEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost, UHeightMapVolumeData* InHID)
{
	// Cache some values that will be used for our details view arguments
	const bool bIsUpdatable = false;
	const bool bAllowFavorites = true;
	const bool bIsLockable = false;

	// Set this InCustomAsset as our editing asset
	SetHID(InHID);

	// Retrieve the property editor module and assign properties to DetailsView
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
#if ENGINE_MAJOR_VERSION == 5
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bUpdatesFromSelection = bIsUpdatable;
	DetailsViewArgs.bLockable = bIsLockable;
	DetailsViewArgs.bAllowSearch = true;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::ObjectsUseNameArea;
	DetailsViewArgs.bHideSelectionTip = false;
#else
	const FDetailsViewArgs DetailsViewArgs(bIsUpdatable, bIsLockable, true, FDetailsViewArgs::ObjectsUseNameArea, false);
#endif
	DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);

	// Create the layout of our custom asset editor
	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("Standalone_HIDEditor_Layout_v1")
		->AddArea
		(
			// Create a vertical area and spawn the toolbar
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.1f)
				->SetHideTabWell(true)
#if ENGINE_MAJOR_VERSION == 5
				//->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
#else
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
#endif
			)
			->Split
			(
				// Split the tab and pass the tab id to the tab spawner
				FTabManager::NewSplitter()
				->Split
				(
					FTabManager::NewStack()
					->AddTab(PropertiesTabId, ETabState::OpenedTab)
				)
			)
		);


	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;

	
	if (!ToolbarBuilder.IsValid())
	{
		ToolbarBuilder = MakeShareable(new FHIDEditorToolbar(SharedThis(this)));
	}

	FHIDEditorCommands::Register();

	// Initialize our custom asset editor
	FAssetEditorToolkit::InitAssetEditor(
		Mode,
		InitToolkitHost,
		WorldScapeFactoryAppIdentifier,
		StandaloneDefaultLayout,
		bCreateDefaultStandaloneMenu,
		bCreateDefaultToolbar,
		(UObject*)InHID);

	BindCommands();

	// Set the asset we are editing in the details view
	if (DetailsView.IsValid())
	{
		DetailsView->SetObject((UObject*)InHID);
	}

	ExtendToolbar();

	RegenerateMenusAndToolbars();
}


void FHIDEditor::ExtendToolbar()
{
	// If the ToolbarExtender is valid, remove it before rebuilding it
	if (ToolbarExtender.IsValid())
	{
		RemoveToolbarExtender(ToolbarExtender);
		ToolbarExtender.Reset();
	}

	ToolbarExtender = MakeShareable(new FExtender);

	AddToolbarExtender(ToolbarExtender);
	GetToolbarBuilder()->AddEditorToolbar(ToolbarExtender);

}


void FHIDEditor::BindCommands()
{

	

	ToolkitCommands->MapAction(FHIDEditorCommands::Get().Generate,
		FExecuteAction::CreateSP(this, &FHIDEditor::Generate_Internal)
	);
	ToolkitCommands->MapAction(FHIDEditorCommands::Get().CleanData,
		FExecuteAction::CreateSP(this, &FHIDEditor::CleanData_Internal)
	);
}

void FHIDEditor::Generate_Internal()
{
	HID->Generate();
}

void FHIDEditor::CleanData_Internal()
{
	HID->CleanData();
}


FHIDEditor::~FHIDEditor()
{
	// On destruction we reset our tab and details view 
	DetailsView.Reset();
	PropertiesTab.Reset();
}

FName FHIDEditor::GetToolkitFName() const
{
	return ToolkitFName;
}

FText FHIDEditor::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "HeightMap Volume Data Editor");
}

FText FHIDEditor::GetToolkitToolTipText() const
{
	return LOCTEXT("ToolTip", "HeightMap Volume Data Editor");
}

FString FHIDEditor::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "AnimationDatabase ").ToString();
}

FLinearColor FHIDEditor::GetWorldCentricTabColorScale() const
{
	return FColor::Red;
}

UHeightMapVolumeData* FHIDEditor::GetCustomAsset()
{
	return HID;
}

void FHIDEditor::SetHID(UHeightMapVolumeData* HIDAsset)
{
	HID = HIDAsset;
}

TSharedRef<SDockTab> FHIDEditor::SpawnPropertiesTab(const FSpawnTabArgs& Args)
{
	check(Args.GetTabId() == PropertiesTabId);

	return SNew(SDockTab)
#if ENGINE_MAJOR_VERSION == 5
		//.Icon(FEditorStyle::GetBrush("GenericEditor.Tabs.Properties"))
#else
		.Icon(FEditorStyle::GetBrush("GenericEditor.Tabs.Properties"))
#endif
		.Label(LOCTEXT("GenericDetailsTitle", "Details"))
		.TabColorScale(GetTabColorScale())
		[
			DetailsView.ToSharedRef()
		];
}


#undef LOCTEXT_NAMESPACE