// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTools/Public/AssetTypeActions_Base.h"


static EAssetTypeCategories::Type CraftRecipe_AssetCategory;

/**
 * A Database that is used to store all the Crafting Recipes that have been created by the Engine.
 */
class CRAFTINGTREEEDITOR_API FCraftingRecipeAssetDatabase : public FAssetTypeActions_Base
{
public:

	/** @return The Display Name of the Asset */
	virtual FText GetName() const override;

	/** @return The Description of the asset */
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override;

	/** @return The Category of the Asset based on the Unreal Asset Registration */
	virtual uint32 GetCategories() override { return CraftRecipe_AssetCategory; }

	/** @return The Color of the object inside the editor */
	virtual FColor GetTypeColor() const override { return FColor(127, 255, 255); }

	/** @return The Class that the database stores */
	virtual UClass* GetSupportedClass() const override;
};