// Copyright 2021 IOLACORP STUDIO. All Rights Reserved

#pragma once

#include "Runtime/Slate/Public/Framework/Commands/Commands.h"

class FHIDEditorCommands : public TCommands<FHIDEditorCommands>
{
public:
	FHIDEditorCommands();

	TSharedPtr<FUICommandInfo> Generate;
	TSharedPtr<FUICommandInfo> CleanData;
	/** Initialize commands */
	virtual void RegisterCommands() override;
};