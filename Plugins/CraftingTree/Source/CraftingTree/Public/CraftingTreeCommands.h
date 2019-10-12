// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "CraftingTreeStyle.h"

class FCraftingTreeCommands : public TCommands<FCraftingTreeCommands>
{
public:

	FCraftingTreeCommands()
		: TCommands<FCraftingTreeCommands>(TEXT("CraftingTree"), NSLOCTEXT("Contexts", "CraftingTree", "CraftingTree Plugin"), NAME_None, FCraftingTreeStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};