// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingTreeEditor/Public/CraftRecipeFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftRecipeFactory() {}
// Cross Module References
	CRAFTINGTREEEDITOR_API UClass* Z_Construct_UClass_UCraftRecipeFactory_NoRegister();
	CRAFTINGTREEEDITOR_API UClass* Z_Construct_UClass_UCraftRecipeFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CraftingTreeEditor();
// End Cross Module References
	void UCraftRecipeFactory::StaticRegisterNativesUCraftRecipeFactory()
	{
	}
	UClass* Z_Construct_UClass_UCraftRecipeFactory_NoRegister()
	{
		return UCraftRecipeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCraftRecipeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftRecipeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CraftingTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftRecipeFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Factory that is responsible for creating Crafting Recipes\n */" },
		{ "IncludePath", "CraftRecipeFactory.h" },
		{ "ModuleRelativePath", "Public/CraftRecipeFactory.h" },
		{ "ToolTip", "A Factory that is responsible for creating Crafting Recipes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftRecipeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftRecipeFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCraftRecipeFactory_Statics::ClassParams = {
		&UCraftRecipeFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftRecipeFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCraftRecipeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftRecipeFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCraftRecipeFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCraftRecipeFactory, 1444423698);
	template<> CRAFTINGTREEEDITOR_API UClass* StaticClass<UCraftRecipeFactory>()
	{
		return UCraftRecipeFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCraftRecipeFactory(Z_Construct_UClass_UCraftRecipeFactory, &UCraftRecipeFactory::StaticClass, TEXT("/Script/CraftingTreeEditor"), TEXT("UCraftRecipeFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftRecipeFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
