// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "HIDEditor.h"
#include "Runtime/Slate/Public/Framework/MultiBox/MultiBoxBuilder.h"

class FHIDEditorToolbar : public TSharedFromThis<FHIDEditorToolbar>
{
public:
	FHIDEditorToolbar(TSharedPtr<class FHIDEditor> InHIDEditor)
		: HIDEditor(InHIDEditor) {}

	void AddEditorToolbar(TSharedPtr<FExtender> Extender);

private:
	void FillEditorToolbar(FToolBarBuilder& ToolbarBuilder);

protected:
	/** Pointer back to the Python editor tool that owns us */
	TWeakPtr<class FHIDEditor> HIDEditor;
};