// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CraftingGameInstance.generated.h"

class UCraftRecipeManager;

/**
 * An example Game Instance that shows how to include the CraftRecipeManager so that the player can access it during gameplay.
 */
UCLASS()
class CRAFTINGTREERUNTIME_API UCraftingGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "Crafint Manager")
		/** @return The Crafting Manager Class that is responsible for storing all the recipes */
		UCraftRecipeManager* GetCraftRecipeManager();


	/** Clears the stored Recipes from the Recipe Manager and Shuts down the Game Instance*/
	virtual void Shutdown() override;

private:

	/** Singleton recipe manager that is accessed by the Player when Crafting */
	UCraftRecipeManager* CraftRecipeManager = nullptr;
	
};
