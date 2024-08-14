// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#pragma once

#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "Editor/PropertyEditor/Public/PropertyEditorDelegates.h"
#include <HeightMapVolumeData.h>
#include "IHIDEditor.h"

class IDetailsView;
class SDockableTab;

/**
 *
 */
class WORLDSCAPEFACTORY_API FHIDEditor : public IHIDEditor
{
public:

	virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
	virtual void UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;

	/**
	 * Edits the specified asset object
	 *
	 * @param	Mode					Asset editing mode for this editor (standalone or world-centric)
	 * @param	InitToolkitHost			When Mode is WorldCentric, this is the level editor instance to spawn this editor within
	 * @param	InCustomAsset			The Custom Asset to Edit
	 */
	void InitHIDEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost, UHeightMapVolumeData* InHID);

	/** Destructor */
	virtual ~FHIDEditor();

	/** Begin IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FText GetToolkitToolTipText() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual bool IsPrimaryEditor() const override { return true; }
	/** End IToolkit interface */

	/** Begin ICustomAssetEditor initerface */
	virtual UHeightMapVolumeData* GetCustomAsset();
	virtual void SetHID(UHeightMapVolumeData* InHID);
	/** End ICustomAssetEditor initerface */

	/** Toolbar Builder */
	TSharedPtr<class FHIDEditorToolbar> GetToolbarBuilder() { return ToolbarBuilder; }
private:

	void ExtendToolbar();

	void BindCommands();

	void Generate_Internal();
	void CleanData_Internal();


public:
	/** Fname for toolkit*/
	static const FName ToolkitFName;

protected:
	TSharedPtr<class FHIDEditorToolbar> ToolbarBuilder;

private:
	/** Create the properties tab and its content */
	TSharedRef<SDockTab> SpawnPropertiesTab(const FSpawnTabArgs& Args);

	/** Dockable tab for properties */
	TSharedPtr< SDockableTab > PropertiesTab;

	/** Toolbar extender */
	TSharedPtr<FExtender> ToolbarExtender;

	/** Details view */
	TSharedPtr<class IDetailsView> DetailsView;

	/**	The tab ids for all the tabs used */
	static const FName PropertiesTabId;
	
	/** The Custom Asset open within this editor */
	UHeightMapVolumeData* HID;
};