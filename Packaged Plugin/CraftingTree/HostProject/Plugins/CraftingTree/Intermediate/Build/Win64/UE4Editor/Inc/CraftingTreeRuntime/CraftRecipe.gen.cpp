// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingTreeRuntime/Public/CraftRecipe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftRecipe() {}
// Cross Module References
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftRecipe_NoRegister();
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftRecipe();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CraftingTreeRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UCraftRecipe::StaticRegisterNativesUCraftRecipe()
	{
	}
	UClass* Z_Construct_UClass_UCraftRecipe_NoRegister()
	{
		return UCraftRecipe::StaticClass();
	}
	struct Z_Construct_UClass_UCraftRecipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Outcome;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftRecipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingTreeRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Crafting" },
		{ "ClassGroupNames", "Crafting" },
		{ "Comment", "/**\n * A very simple crafting recipe that can be used to create basic and advanced recipes\n * Basic recipes include 2 components and it produces a single outcome\n * Advanced recipes can include more than 2 components to produce the single outcome\n */" },
		{ "IncludePath", "CraftRecipe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CraftRecipe.h" },
		{ "ToolTip", "A very simple crafting recipe that can be used to create basic and advanced recipes\nBasic recipes include 2 components and it produces a single outcome\nAdvanced recipes can include more than 2 components to produce the single outcome" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components_MetaData[] = {
		{ "Category", "Crafting Recipe" },
		{ "Comment", "/** The Components that are required for producing the Crafting Outcome */" },
		{ "ModuleRelativePath", "Public/CraftRecipe.h" },
		{ "ToolTip", "The Components that are required for producing the Crafting Outcome" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftRecipe, Components), METADATA_PARAMS(Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Outcome_MetaData[] = {
		{ "Category", "Crafting Recipe" },
		{ "Comment", "/** The object that is the result of combining the Components */" },
		{ "ModuleRelativePath", "Public/CraftRecipe.h" },
		{ "ToolTip", "The object that is the result of combining the Components" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftRecipe, Outcome), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Outcome_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Outcome_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCraftRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipe_Statics::NewProp_Outcome,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftRecipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftRecipe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCraftRecipe_Statics::ClassParams = {
		&UCraftRecipe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCraftRecipe_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCraftRecipe_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftRecipe_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftRecipe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCraftRecipe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCraftRecipe, 4081351103);
	template<> CRAFTINGTREERUNTIME_API UClass* StaticClass<UCraftRecipe>()
	{
		return UCraftRecipe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCraftRecipe(Z_Construct_UClass_UCraftRecipe, &UCraftRecipe::StaticClass, TEXT("/Script/CraftingTreeRuntime"), TEXT("UCraftRecipe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftRecipe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
