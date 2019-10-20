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

	UCraftRecipeManager();

	/** Empties the stored recipes */
	void ClearRecipes();

	UFUNCTION(BlueprintPure, Category = "Craft Recipe Manager")
		/**
		* Checks whether there is a crafting recipe that uses the exact two recipes provided - if so it returns the class of the outcome
		* @return The Class of the Result - NULL if the recipe doesn't exist
		* @param Components The components that the player is trying to use for crafting
		*
		*/
		TSubclassOf<AActor> GetCraftResult(TArray<TSubclassOf<AActor>> Components);

	
protected:

	/** Loads all the Craft Recipe assets from Disk */
	void LoadAllRecipes();

	/**
	* Goes through all the Basic recipes that are stored and returns the class of a crafting outcome
	* @return The Class of the Crafting Outcome - NULL if the recipe doesn't exist
	* @param Components An Array of Actor classes that were sent in as potential components
	* NOTE: The Size of the Components Array is TWO
	*/
	TSubclassOf<AActor> TryFindBasicRecipe(TArray<TSubclassOf<AActor>> Components);

	/**
	* Goes through all the Advanced recipes that are stored and returns the class of a crafting outcome
	* @return The Class of the Crafting Outcome - NULL if the recipe doesn't exist
	* @param Components An Array of Actor classes that were sent in as potential components
	* NOTE: The Size of the Components Array is MORE THAN TWO
	*/
	TSubclassOf<AActor> TryFindAdvancedRecipe(TArray<TSubclassOf<AActor>> Components);

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Craft Recipe Manager")
		/** All The Basic Recipes that can be used for Crafting basic items and buildings */
		TArray<UCraftRecipe*> BasicRecipes;

	UPROPERTY(BlueprintReadOnly, Category = "Craft Recipe Manager")
		/** All The Basic Recipes that can be used for Crafting basic items and buildings */
		TArray<UCraftRecipe*> AdvancedRecipes;
	
};
