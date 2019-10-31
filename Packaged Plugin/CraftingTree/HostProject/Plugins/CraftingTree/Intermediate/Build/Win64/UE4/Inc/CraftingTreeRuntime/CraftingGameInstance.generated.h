// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCraftRecipeManager;
#ifdef CRAFTINGTREERUNTIME_CraftingGameInstance_generated_h
#error "CraftingGameInstance.generated.h already included, missing '#pragma once' in CraftingGameInstance.h"
#endif
#define CRAFTINGTREERUNTIME_CraftingGameInstance_generated_h

#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCraftRecipeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCraftRecipeManager**)Z_Param__Result=P_THIS->GetCraftRecipeManager(); \
		P_NATIVE_END; \
	}


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCraftRecipeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCraftRecipeManager**)Z_Param__Result=P_THIS->GetCraftRecipeManager(); \
		P_NATIVE_END; \
	}


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCraftingGameInstance(); \
	friend struct Z_Construct_UClass_UCraftingGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCraftingGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CraftingTreeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCraftingGameInstance)


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCraftingGameInstance(); \
	friend struct Z_Construct_UClass_UCraftingGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCraftingGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CraftingTreeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCraftingGameInstance)


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCraftingGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCraftingGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCraftingGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCraftingGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCraftingGameInstance(UCraftingGameInstance&&); \
	NO_API UCraftingGameInstance(const UCraftingGameInstance&); \
public:


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCraftingGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCraftingGameInstance(UCraftingGameInstance&&); \
	NO_API UCraftingGameInstance(const UCraftingGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCraftingGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCraftingGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCraftingGameInstance)


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_14_PROLOG
#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_RPC_WRAPPERS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_INCLASS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAFTINGTREERUNTIME_API UClass* StaticClass<class UCraftingGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftingGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
