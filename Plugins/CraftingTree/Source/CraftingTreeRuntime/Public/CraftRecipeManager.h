// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CraftRecipeManager.generated.h"

class  UCraftRecipe;

/**
 * The Primary Singleton Class that is responsible for managing all the Crafting Recipes
 */
UCLASS(ClassGroup = "Crafting", Category = "Crafting", BlueprintType, Blueprintable)
class CRAFTINGTREERUNTIME_API UCraftRecipeManager : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Craft Recipe Manager")
		/**
		* Adds the provided recipe to the Stored Crafting Recipes, while not adding duplicates
		* @param RecipeToAdd A CraftRecipe that is to be registered by the Recipe Manager
		*/
		void AddRecipe(UCraftRecipe* RecipeToAdd);

	UFUNCTION(BlueprintCallable, Category = "Craft Recipe Manager")
		/** Empties the stored recipes */
		void ClearRecipes();

	AActor* GetCraftResult(TSubclassOf<AActor> Component1, TSubclassOf<AActor> Component2);

protected:

	TArray<UCraftRecipe*> StoredRecipes;
	
};
