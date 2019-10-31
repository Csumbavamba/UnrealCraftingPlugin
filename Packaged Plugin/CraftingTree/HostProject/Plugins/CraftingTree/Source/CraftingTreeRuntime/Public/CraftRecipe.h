// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CraftRecipe.generated.h"

/**
 * A very simple crafting recipe that can be used to create basic and advanced recipes
 * Basic recipes include 2 components and it produces a single outcome
 * Advanced recipes can include more than 2 components to produce the single outcome
 */
UCLASS(ClassGroup = "Crafting", Category = "Crafting", BlueprintType, Blueprintable)
class CRAFTINGTREERUNTIME_API UCraftRecipe : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crafting Recipe")
		/** The object that is the result of combining the Components */
		TSubclassOf<AActor> Outcome = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crafting Recipe")
		/** The Components that are required for producing the Crafting Outcome */
		TArray<TSubclassOf<AActor>> Components;
	
};
