// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CrraftingTreeCommands.h"

#define LOCTEXT_NAMESPACE "FCrraftingTreeModule"

void FCrraftingTreeCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "CrraftingTree", "Bring up CrraftingTree window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
