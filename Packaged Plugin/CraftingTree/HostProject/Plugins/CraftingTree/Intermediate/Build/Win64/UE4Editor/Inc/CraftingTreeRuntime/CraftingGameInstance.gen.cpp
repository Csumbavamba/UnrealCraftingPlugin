// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingTreeRuntime/Public/CraftingGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftingGameInstance() {}
// Cross Module References
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftingGameInstance_NoRegister();
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftingGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_CraftingTreeRuntime();
	CRAFTINGTREERUNTIME_API UFunction* Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager();
	CRAFTINGTREERUNTIME_API UClass* Z_Construct_UClass_UCraftRecipeManager_NoRegister();
// End Cross Module References
	void UCraftingGameInstance::StaticRegisterNativesUCraftingGameInstance()
	{
		UClass* Class = UCraftingGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCraftRecipeManager", &UCraftingGameInstance::execGetCraftRecipeManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics
	{
		struct CraftingGameInstance_eventGetCraftRecipeManager_Parms
		{
			UCraftRecipeManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingGameInstance_eventGetCraftRecipeManager_Parms, ReturnValue), Z_Construct_UClass_UCraftRecipeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crafint Manager" },
		{ "Comment", "/** @return The Crafting Manager Class that is responsible for storing all the recipes */" },
		{ "ModuleRelativePath", "Public/CraftingGameInstance.h" },
		{ "ToolTip", "@return The Crafting Manager Class that is responsible for storing all the recipes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftingGameInstance, nullptr, "GetCraftRecipeManager", nullptr, nullptr, sizeof(CraftingGameInstance_eventGetCraftRecipeManager_Parms), Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCraftingGameInstance_NoRegister()
	{
		return UCraftingGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCraftingGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftingGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingTreeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCraftingGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCraftingGameInstance_GetCraftRecipeManager, "GetCraftRecipeManager" }, // 3553395286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftingGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An example Game Instance that shows how to include the CraftRecipeManager so that the player can access it during gameplay.\n */" },
		{ "IncludePath", "CraftingGameInstance.h" },
		{ "ModuleRelativePath", "Public/CraftingGameInstance.h" },
		{ "ToolTip", "An example Game Instance that shows how to include the CraftRecipeManager so that the player can access it during gameplay." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftingGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftingGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCraftingGameInstance_Statics::ClassParams = {
		&UCraftingGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftingGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCraftingGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftingGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCraftingGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCraftingGameInstance, 263257007);
	template<> CRAFTINGTREERUNTIME_API UClass* StaticClass<UCraftingGameInstance>()
	{
		return UCraftingGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCraftingGameInstance(Z_Construct_UClass_UCraftingGameInstance, &UCraftingGameInstance::StaticClass, TEXT("/Script/CraftingTreeRuntime"), TEXT("UCraftingGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftingGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
