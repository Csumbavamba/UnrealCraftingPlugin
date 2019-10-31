// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ICraftingTreeEditor.h"
#include "AssetToolsModule.h"
#include "CraftingRecipeAssetDatabase.h"

DEFINE_LOG_CATEGORY(CraftingTreeEditor)

#define LOCTEXT_NAMESPACE "CraftingAssets"

class FCraftingTreeEditor : public ICraftingTreeEditor
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};

IMPLEMENT_MODULE(FCraftingTreeEditor, CraftingTreeEditor)

void FCraftingTreeEditor::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Crafting Editor Module has been setup."));
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	CraftRecipe_AssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("CraftingAssets")), LOCTEXT("CraftingRecipe", "Crafting Recipe"));
	{
		TSharedRef<IAssetTypeActions> CraftRecipeItemDataBase = MakeShareable(new FCraftingRecipeAssetDatabase);
		AssetTools.RegisterAssetTypeActions(CraftRecipeItemDataBase);
	}


}

void FCraftingTreeEditor::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Unregister all the asset types that we registered
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		{
			TSharedRef<IAssetTypeActions> CraftRecipeItemDataBase = MakeShareable(new FCraftingRecipeAssetDatabase);
			AssetTools.UnregisterAssetTypeActions(CraftRecipeItemDataBase);
		}
	}
}

#undef LOCTEXT_NAMESPACE