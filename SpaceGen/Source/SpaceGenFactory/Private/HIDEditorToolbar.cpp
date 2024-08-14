// Copyright 2021 IOLACORP STUDIO. All Rights Reserved

#include "HIDEditorToolbar.h"
#include "LevelEditorActions.h"
#include "SourceCodeNavigation.h"
#include "EditorStyleSet.h"
#include "Runtime/Slate/Public/Framework/MultiBox/MultiBoxExtender.h"
#include "HIDEditor.h"
#include "HIDEditorCommands.h"


void FHIDEditorToolbar::AddEditorToolbar(TSharedPtr<FExtender> Extender)
{
	check(HIDEditor.IsValid());
	TSharedPtr<FHIDEditor> HIDEditorPtr = HIDEditor.Pin();

	Extender->AddToolBarExtension(
		"Asset",
		EExtensionHook::After,
		HIDEditorPtr->GetToolkitCommands(),
		FToolBarExtensionDelegate::CreateSP(this, &FHIDEditorToolbar::FillEditorToolbar));
}

void FHIDEditorToolbar::FillEditorToolbar(FToolBarBuilder& ToolbarBuilder)
{
	TSharedPtr<FHIDEditor> HIDEditorPtr = HIDEditor.Pin();

	ToolbarBuilder.BeginSection(TEXT("HeightMapInfluenceurData"));
	{
		ToolbarBuilder.AddToolBarButton(FHIDEditorCommands::Get().Generate);
		ToolbarBuilder.AddToolBarButton(FHIDEditorCommands::Get().CleanData);
		
	}
	ToolbarBuilder.EndSection();


}