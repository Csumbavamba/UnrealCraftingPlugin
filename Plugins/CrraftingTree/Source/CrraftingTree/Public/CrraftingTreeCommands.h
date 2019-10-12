// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "CrraftingTreeStyle.h"

class FCrraftingTreeCommands : public TCommands<FCrraftingTreeCommands>
{
public:

	FCrraftingTreeCommands()
		: TCommands<FCrraftingTreeCommands>(TEXT("CrraftingTree"), NSLOCTEXT("Contexts", "CrraftingTree", "CrraftingTree Plugin"), NAME_None, FCrraftingTreeStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};