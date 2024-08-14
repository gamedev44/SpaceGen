// Copyright 2021 IOLACORP STUDIO. All Rights Reserved


#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"




class FWorldScapeCommonModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
