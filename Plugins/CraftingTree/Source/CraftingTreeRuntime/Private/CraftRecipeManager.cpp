// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftRecipeManager.h"
#include "CraftRecipe.h"
#include "AssetRegistryModule.h"

UCraftRecipeManager::UCraftRecipeManager()
{
	// Find The Asset REgistry Module
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(FName("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	// Wait until all the Assets are discovered
	if (AssetRegistry.IsLoadingAssets())
	{
		// Once everything is loaded, Load all Recipes
		UE_LOG(LogTemp, Warning, TEXT("Assets not loaded yet, Recipes to be loaded soon."));
		AssetRegistry.OnFilesLoaded().AddUObject(this, &UCraftRecipeManager::LoadAllRecipes);
	}
	else
	{
		// If already done, start loading recipes
		UE_LOG(LogTemp, Warning, TEXT("Assets Already loaded - load all recipes."));
		LoadAllRecipes();
	}
}

void UCraftRecipeManager::LoadAllRecipes()
{
	UE_LOG(LogTemp, Warning, TEXT("Initiating Asset Loading."));
	// Find the Asset Registry Module
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	// Temporary Container for all the Assets
	TArray<FAssetData> AssetList;

	// Get the Class name of Craft Recipe
	FName RecipeClassName = UCraftRecipe::StaticClass()->GetFName();

	// Get all the assets from the Asset manager with the Class Type of UCraftRecipe
	AssetRegistryModule.Get().GetAssetsByClass(RecipeClassName, AssetList);

	// Go through all assets that were found
	for (const FAssetData& Asset : AssetList)
	{
		// Find The Object
		UObject* Object = Asset.GetAsset();

		// LOg Message
		if (Object)
		{
			FString ObjectName = Object->GetName();
			UClass* Class = Object->GetClass();
			FString ClassName = Class->GetFName().ToString();
			UE_LOG(LogTemp, Warning, TEXT("Object found: %s with class: %s ."), *ObjectName ,*ClassName);
		}

		// Try Casting to UCraftRecipe
		UCraftRecipe* CraftRecipe = Cast<UCraftRecipe>(Object);

		if (CraftRecipe)
		{
			StoredRecipes.Add(CraftRecipe);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Asset could not be cast to Craft Recipe - was not added to the list"));
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("All Craft Recipes have Finished loading"));
}

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
