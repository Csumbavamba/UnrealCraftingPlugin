// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CraftingTree.h"
#include "CraftingTreeStyle.h"
#include "CraftingTreeCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

static const FName CraftingTreeTabName("CraftingTree");

#define LOCTEXT_NAMESPACE "FCraftingTreeModule"

void FCraftingTreeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	UE_LOG(LogTemp, Warning, TEXT("Crafting Tree has been Initialized")) // TODO Remove when needed
	
	FCraftingTreeStyle::Initialize();
	FCraftingTreeStyle::ReloadTextures();

	FCraftingTreeCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FCraftingTreeCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FCraftingTreeModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FCraftingTreeModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FCraftingTreeModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(CraftingTreeTabName, FOnSpawnTab::CreateRaw(this, &FCraftingTreeModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FCraftingTreeTabTitle", "CraftingTree"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FCraftingTreeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FCraftingTreeStyle::Shutdown();

	FCraftingTreeCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(CraftingTreeTabName);
}

TSharedRef<SDockTab> FCraftingTreeModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FCraftingTreeModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("CraftingTree.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FCraftingTreeModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(CraftingTreeTabName);
}

void FCraftingTreeModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FCraftingTreeCommands::Get().OpenPluginWindow);
}

void FCraftingTreeModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FCraftingTreeCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCraftingTreeModule, CraftingTree)