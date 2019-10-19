// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftRecipeManager.h"
#include "CraftRecipe.h"

void UCraftRecipeManager::AddRecipe(UCraftRecipe* RecipeToAdd)
{
	// Make sure it's a valid submission
	if (RecipeToAdd)
	{
		// If the Recipe is not registered yet
		if (!StoredRecipes.Contains(RecipeToAdd))
		{
			// Add the recipe
			StoredRecipes.Add(RecipeToAdd);

			FString Name = RecipeToAdd->GetName();
			UE_LOG(LogTemp, Warning, TEXT("Recipe: %s is Added!!"), *Name); // TODO Remove once Tested
		}
		// Otherwise Log the name of the recipe - TODO Remove once Tested
		else
		{
			FString Name = RecipeToAdd->GetName();
			UE_LOG(LogTemp, Warning, TEXT("Recipe: %s has already been saved."), *Name);
		}
	}
	// If Not valid
	else
	{
		// Log Error
		UE_LOG(LogTemp, Error, TEXT("Recipe is invalid!!"));
	}
}

void UCraftRecipeManager::ClearRecipes()
{
	// Clean up the stored recipes
}


AActor* UCraftRecipeManager::GetCraftResult(TSubclassOf<AActor> Component1, TSubclassOf<AActor> Component2)
{
	return nullptr;
}
