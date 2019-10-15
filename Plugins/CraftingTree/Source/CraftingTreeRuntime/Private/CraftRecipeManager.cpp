// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftRecipeManager.h"
#include "CraftRecipe.h"

void UCraftRecipeManager::AddRecipe(UCraftRecipe* RecipeToAdd)
{
	// Make sure it's a valid submission
	if (RecipeToAdd)
	{
		bool TestBool = RecipeToAdd->bIsAdvanced;

		auto BoolText = (TestBool ? TEXT("True") : TEXT("False"));

		UE_LOG(LogTemp, Warning, TEXT("First Check %s"), BoolText);

		// If the Recipe is not registered yet
		if (!StoredRecipes.Contains(RecipeToAdd))
		{
			StoredRecipes.Add(RecipeToAdd);

			// Test out Swap - TODO Remove after test
			RecipeToAdd->bIsAdvanced = !RecipeToAdd->bIsAdvanced;

			UCraftRecipe* ReturnedPointer = StoredRecipes.Top();

			if (ReturnedPointer)
			{
				// Check it again
				TestBool = ReturnedPointer->bIsAdvanced;
				BoolText = (TestBool ? TEXT("True") : TEXT("False"));
				UE_LOG(LogTemp, Warning, TEXT("Second Check %s"), BoolText);
			}
			
		}
	}
}

void UCraftRecipeManager::ClearRecipes()
{
}

UCraftRecipe* UCraftRecipeManager::FindRecipe(TSubclassOf<AActor> Component1, TSubclassOf<AActor> Component2)
{
	return nullptr;
}

AActor* UCraftRecipeManager::GetCraftResult(TSubclassOf<AActor> Component1, TSubclassOf<AActor> Component2)
{
	return nullptr;
}
