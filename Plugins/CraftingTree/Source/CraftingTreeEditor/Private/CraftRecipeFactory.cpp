// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftRecipeFactory.h"
#include "CraftingTreeRuntime/Public/CraftRecipe.h"
#include "CraftingRecipeAssetDatabase.h"

UCraftRecipeFactory::UCraftRecipeFactory()
{
	// Provide the factory with information about how to handle our asset
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCraftRecipe::StaticClass();
}

UObject* UCraftRecipeFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Create and return a new instance of our MyCustomAsset object
	UCraftRecipe* NewRecipe = NewObject<UCraftRecipe>(InParent, Class, Name, Flags);
	return NewRecipe;
}

