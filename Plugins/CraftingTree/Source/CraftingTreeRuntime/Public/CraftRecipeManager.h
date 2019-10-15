// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CraftRecipeManager.generated.h"

class  UCraftRecipe;

/**
 * 
 */
UCLASS()
class CRAFTINGTREERUNTIME_API UCraftRecipeManager : public UObject
{
	GENERATED_BODY()

public:

	/** 
	* Adds the provided recipe to the Stored Crafting Recipes, while not adding duplicates
	* @param RecipeToAdd A CraftRecipe that is to be registered by the Recipe Manager
	*/
	void AddRecipe(UCraftRecipe* RecipeToAdd);

	/** Empties the stored recipes */
	void ClearRecipes();

	UCraftRecipe* FindRecipe(TSubclassOf<AActor> Component1, TSubclassOf<AActor> Component2);

	AActor* GetCraftResult(TSubclassOf<AActor> Component1, TSubclassOf<AActor> Component2);

protected:

	TArray<UCraftRecipe*> StoredRecipes;
	
};
