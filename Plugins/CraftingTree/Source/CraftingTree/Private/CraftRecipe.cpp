// Fill out your copyright notice in the Description page of Project Settings.

#include "CraftingTree/Classes/CraftRecipe.h"

UCraftRecipe::UCraftRecipe(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NativeClass = GetClass();
}