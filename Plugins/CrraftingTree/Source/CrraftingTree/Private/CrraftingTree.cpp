// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CrraftingTree.h"
#include "CrraftingTreeStyle.h"
#include "CrraftingTreeCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

static const FName CrraftingTreeTabName("CrraftingTree");

#define LOCTEXT_NAMESPACE "FCrraftingTreeModule"

void FCrraftingTreeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FCrraftingTreeStyle::Initialize();
	FCrraftingTreeStyle::ReloadTextures();

	FCrraftingTreeCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FCrraftingTreeCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FCrraftingTreeModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FCrraftingTreeModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FCrraftingTreeModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(CrraftingTreeTabName, FOnSpawnTab::CreateRaw(this, &FCrraftingTreeModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FCrraftingTreeTabTitle", "CrraftingTree"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FCrraftingTreeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FCrraftingTreeStyle::Shutdown();

	FCrraftingTreeCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(CrraftingTreeTabName);
}

TSharedRef<SDockTab> FCrraftingTreeModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FCrraftingTreeModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("CrraftingTree.cpp"))
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

void FCrraftingTreeModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(CrraftingTreeTabName);
}

void FCrraftingTreeModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FCrraftingTreeCommands::Get().OpenPluginWindow);
}

void FCrraftingTreeModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FCrraftingTreeCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCrraftingTreeModule, CrraftingTree)