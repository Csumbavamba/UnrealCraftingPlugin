// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CraftingTreeCommands.h"

#define LOCTEXT_NAMESPACE "FCraftingTreeModule"

void FCraftingTreeCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "CraftingTree", "Bring up CraftingTree window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
