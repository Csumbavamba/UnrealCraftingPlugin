// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingTreeRuntime/Public/CraftRecipeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftRecipeManager() {}
// Cross Module References
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftRecipeManager_NoRegister();
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftRecipeManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CraftingTreeRuntime();
	CRAFTINGTREERUNTIME_API UFunction* Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftRecipe_NoRegister();
// End Cross Module References
	void UCraftRecipeManager::StaticRegisterNativesUCraftRecipeManager()
	{
		UClass* Class = UCraftRecipeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCraftResult", &UCraftRecipeManager::execGetCraftResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics
	{
		struct CraftRecipeManager_eventGetCraftResult_Parms
		{
			TArray<TSubclassOf<AActor> > Components;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Components_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftRecipeManager_eventGetCraftResult_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftRecipeManager_eventGetCraftResult_Parms, Components), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::NewProp_Components_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Craft Recipe Manager" },
		{ "Comment", "/**\n\x09\x09* Checks whether there is a crafting recipe that uses the exact two recipes provided - if so it returns the class of the outcome\n\x09\x09* @return The Class of the Result - NULL if the recipe doesn't exist\n\x09\x09* @param Components The components that the player is trying to use for crafting\n\x09\x09*\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CraftRecipeManager.h" },
		{ "ToolTip", "Checks whether there is a crafting recipe that uses the exact two recipes provided - if so it returns the class of the outcome\n@return The Class of the Result - NULL if the recipe doesn't exist\n@param Components The components that the player is trying to use for crafting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftRecipeManager, nullptr, "GetCraftResult", nullptr, nullptr, sizeof(CraftRecipeManager_eventGetCraftResult_Parms), Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCraftRecipeManager_NoRegister()
	{
		return UCraftRecipeManager::StaticClass();
	}
	struct Z_Construct_UClass_UCraftRecipeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedRecipes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdvancedRecipes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdvancedRecipes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicRecipes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BasicRecipes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BasicRecipes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftRecipeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingTreeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCraftRecipeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCraftRecipeManager_GetCraftResult, "GetCraftResult" }, // 31264666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Crafting" },
		{ "ClassGroupNames", "Crafting" },
		{ "Comment", "/**\n * The Primary Singleton Class that is responsible for managing all the Crafting Recipes\n */" },
		{ "IncludePath", "CraftRecipeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CraftRecipeManager.h" },
		{ "ToolTip", "The Primary Singleton Class that is responsible for managing all the Crafting Recipes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes_MetaData[] = {
		{ "Category", "Craft Recipe Manager" },
		{ "Comment", "/** All The Basic Recipes that can be used for Crafting basic items and buildings */" },
		{ "ModuleRelativePath", "Public/CraftRecipeManager.h" },
		{ "ToolTip", "All The Basic Recipes that can be used for Crafting basic items and buildings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes = { "AdvancedRecipes", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftRecipeManager, AdvancedRecipes), METADATA_PARAMS(Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes_Inner = { "AdvancedRecipes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCraftRecipe_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes_MetaData[] = {
		{ "Category", "Craft Recipe Manager" },
		{ "Comment", "/** All The Basic Recipes that can be used for Crafting basic items and buildings */" },
		{ "ModuleRelativePath", "Public/CraftRecipeManager.h" },
		{ "ToolTip", "All The Basic Recipes that can be used for Crafting basic items and buildings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes = { "BasicRecipes", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftRecipeManager, BasicRecipes), METADATA_PARAMS(Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes_Inner = { "BasicRecipes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCraftRecipe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCraftRecipeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_AdvancedRecipes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftRecipeManager_Statics::NewProp_BasicRecipes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftRecipeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftRecipeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCraftRecipeManager_Statics::ClassParams = {
		&UCraftRecipeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCraftRecipeManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCraftRecipeManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftRecipeManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftRecipeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCraftRecipeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCraftRecipeManager, 4228899696);
	template<> CRAFTINGTREERUNTIME_API UClass* StaticClass<UCraftRecipeManager>()
	{
		return UCraftRecipeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCraftRecipeManager(Z_Construct_UClass_UCraftRecipeManager, &UCraftRecipeManager::StaticClass, TEXT("/Script/CraftingTreeRuntime"), TEXT("UCraftRecipeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftRecipeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
