// Copyright 2022 WyvernLang. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FUnicodeHandlerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
