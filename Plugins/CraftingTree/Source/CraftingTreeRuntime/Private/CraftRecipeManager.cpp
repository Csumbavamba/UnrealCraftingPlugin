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

		// Log Message - TODO Remove after done
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
			// If there are more than 2 components, add the Recipe to the Advanced Recipes
			if (CraftRecipe->Components.Num() > 2)
			{
				AdvancedRecipes.Add(CraftRecipe);
			}
			// Otherwis add the Recipe to the Basic Recipes
			else
			{
				BasicRecipes.Add(CraftRecipe);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Asset could not be cast to Craft Recipe - was not added to the list"));
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("All Craft Recipes have Finished loading"));
}


void UCraftRecipeManager::ClearRecipes()
{
	// Destroy all the elements stored inside the array
	BasicRecipes.Empty();
	AdvancedRecipes.Empty();
}


TSubclassOf<AActor> UCraftRecipeManager::GetCraftResult(TArray<TSubclassOf<AActor>> Components)
{
	// Class to Return
	TSubclassOf<AActor> OutcomeClass = NULL;

	UE_LOG(LogTemp, Warning, TEXT("Figuring out what type of recipe is needed... %s "));


	// Check for the Number of Recipes that are stored
	if (Components.Num() <= 2)
	{
		// Load Basic Recipe
		UE_LOG(LogTemp, Warning, TEXT("Searching in Basic recipes..."));
		OutcomeClass = TryFindBasicRecipe(Components);
	}
	else
	{
		// Load Advanced Recipe
		UE_LOG(LogTemp, Warning, TEXT("Searching in Advanced recipes..."));
		OutcomeClass = TryFindAdvancedRecipe(Components);
	}

	return OutcomeClass;
}

TSubclassOf<AActor> UCraftRecipeManager::TryFindBasicRecipe(TArray<TSubclassOf<AActor>> Components)
{
	// Class to Return
	TSubclassOf<AActor> OutcomeClass = NULL;


	// Go through each of the recipes
	for (UCraftRecipe* CraftRecipe : BasicRecipes)
	{
		// Make sure that the Craft Recipe is valid
		if (!CraftRecipe)
		{
			UE_LOG(LogTemp, Error, TEXT("A Craft recipe that is stored is Invalid!!"));
			continue;
		}


		// If the first components is contained in the recipe
		if (CraftRecipe->Components.Contains(Components[0]))
		{
			// Check for the second one
			if (CraftRecipe->Components.Contains(Components[1]))
			{
				// The Recipe has been found - as both are contained in this recipe
				OutcomeClass = CraftRecipe->Outcome;

				// TODO Remove after log is done
				UClass* Class = OutcomeClass;
				FString ClassName = Class->GetFName().ToString();
				UE_LOG(LogTemp, Warning, TEXT("Basic Craft Recipe found - outcome class is: %s"), *ClassName);

				// Return the result
				return OutcomeClass;
			}
		}
	}

	return OutcomeClass;
}

TSubclassOf<AActor> UCraftRecipeManager::TryFindAdvancedRecipe(TArray<TSubclassOf<AActor>> Components)
{
	// Class to Return
	TSubclassOf<AActor> OutcomeClass = NULL;

	int ComponentAmount = Components.Num();

	// A bool that becomes false every time there is a component missmatch
	bool bIsComponentMatching;

	// Go through each of the recipes
	for (UCraftRecipe* CraftRecipe : AdvancedRecipes)
	{
		bIsComponentMatching = true;

		// Make sure that the Craft Recipe is valid
		if (!CraftRecipe)
		{
			UE_LOG(LogTemp, Error, TEXT("A Craft recipe that is stored is Invalid!!"));
			continue;
		}

		// Only Check the Recipe if they have the exact same amount of components
		if (CraftRecipe->Components.Num() == ComponentAmount)
		{
			// Check for all the components (might be more than 3)
			for (int i = 0; i < ComponentAmount; ++i)
			{
				// If any of the components are not contained, 
				if (!CraftRecipe->Components.Contains(Components[i]))
				{
					bIsComponentMatching = false;
					break;
				}
			}

			// If there were no mismatches found
			if (bIsComponentMatching)
			{
				OutcomeClass = CraftRecipe->Outcome;

				// TODO Remove after log is done
				UClass* Class = OutcomeClass;
				FString ClassName = Class->GetFName().ToString();
				UE_LOG(LogTemp, Warning, TEXT("Advanced Craft Recipe found - outcome class is: %s"), *ClassName);

				// Return the result
				return OutcomeClass;
			}
		}	
	}

	return OutcomeClass;
}
