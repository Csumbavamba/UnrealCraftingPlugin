// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftingGameInstance.h"
#include "CraftRecipeManager.h"

UCraftRecipeManager* UCraftingGameInstance::GetCraftRecipeManager()
{
	// If it already exists, return the existing instance
	if (IsValid(CraftRecipeManager))
	{
		return CraftRecipeManager;
	}

	// Otherwise create a new instance and return it
	CraftRecipeManager = NewObject<UCraftRecipeManager>(this, FName("CraftRecipeManager"));

	return CraftRecipeManager;
}

void UCraftingGameInstance::Shutdown()
{
	Super::Shutdown();

	// If the Craft Recipe Manager exists
	if (IsValid(CraftRecipeManager))
	{
		// Clean up inside the Manager class
		CraftRecipeManager->ClearRecipes();
	}
}


