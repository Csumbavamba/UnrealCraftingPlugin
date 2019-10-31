// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CRAFTINGTREERUNTIME_CraftRecipeManager_generated_h
#error "CraftRecipeManager.generated.h already included, missing '#pragma once' in CraftRecipeManager.h"
#endif
#define CRAFTINGTREERUNTIME_CraftRecipeManager_generated_h

#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCraftResult) \
	{ \
		P_GET_TARRAY(TSubclassOf<AActor> ,Z_Param_Components); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetCraftResult(Z_Param_Components); \
		P_NATIVE_END; \
	}


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCraftResult) \
	{ \
		P_GET_TARRAY(TSubclassOf<AActor> ,Z_Param_Components); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetCraftResult(Z_Param_Components); \
		P_NATIVE_END; \
	}


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCraftRecipeManager(); \
	friend struct Z_Construct_UClass_UCraftRecipeManager_Statics; \
public: \
	DECLARE_CLASS(UCraftRecipeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CraftingTreeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCraftRecipeManager)


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCraftRecipeManager(); \
	friend struct Z_Construct_UClass_UCraftRecipeManager_Statics; \
public: \
	DECLARE_CLASS(UCraftRecipeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CraftingTreeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCraftRecipeManager)


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCraftRecipeManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCraftRecipeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCraftRecipeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCraftRecipeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCraftRecipeManager(UCraftRecipeManager&&); \
	NO_API UCraftRecipeManager(const UCraftRecipeManager&); \
public:


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCraftRecipeManager(UCraftRecipeManager&&); \
	NO_API UCraftRecipeManager(const UCraftRecipeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCraftRecipeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCraftRecipeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCraftRecipeManager)


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BasicRecipes() { return STRUCT_OFFSET(UCraftRecipeManager, BasicRecipes); } \
	FORCEINLINE static uint32 __PPO__AdvancedRecipes() { return STRUCT_OFFSET(UCraftRecipeManager, AdvancedRecipes); }


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_14_PROLOG
#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_PRIVATE_PROPERTY_OFFSET \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_RPC_WRAPPERS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_INCLASS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_PRIVATE_PROPERTY_OFFSET \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_INCLASS_NO_PURE_DECLS \
	Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAFTINGTREERUNTIME_API UClass* StaticClass<class UCraftRecipeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Programming_GitHub_UnrealCraftingPlugin_Packaged_Plugin_CraftingTree_HostProject_Plugins_CraftingTree_Source_CraftingTreeRuntime_Public_CraftRecipeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
