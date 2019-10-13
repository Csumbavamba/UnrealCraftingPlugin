// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CraftRecipeFactory.generated.h"

/**
 * A Factory that is responsible for creating Crafting Recipes
 */
UCLASS()
class CRAFTINGTREE_API UCraftRecipeFactory : public UFactory
{
	GENERATED_BODY()

public:

	UCraftRecipeFactory();

protected:
	virtual bool IsMacroFactory() const { return false; }

public:
	// Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	
};
