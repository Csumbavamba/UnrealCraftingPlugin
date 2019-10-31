// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftingRecipeAssetDatabase.h"
#include "CraftingTreeRuntime/Public/CraftRecipe.h"

FText FCraftingRecipeAssetDatabase::GetName() const
{
	return NSLOCTEXT("CraftingAssets", "CraftingRecipe", "Crafting Recipe");
}

FText FCraftingRecipeAssetDatabase::GetAssetDescription(const FAssetData& AssetData) const
{
	return NSLOCTEXT("CraftingAssets", "CraftingRecipeDescription", "Use this data asset to create different crafting recipes that can be used for comining materials into useful items.");
}

UClass* FCraftingRecipeAssetDatabase::GetSupportedClass() const
{ 
	return UCraftRecipe::StaticClass(); 
}