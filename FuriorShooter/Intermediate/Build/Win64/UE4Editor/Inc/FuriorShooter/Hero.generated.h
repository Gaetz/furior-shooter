// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FURIORSHOOTER_Hero_generated_h
#error "Hero.generated.h already included, missing '#pragma once' in Hero.h"
#endif
#define FURIORSHOOTER_Hero_generated_h

#define FuriorShooter_Source_FuriorShooter_Hero_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNiceMove) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DesiredMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NiceMove(Z_Param_DesiredMovement); \
		P_NATIVE_END; \
	}


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNiceMove) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DesiredMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NiceMove(Z_Param_DesiredMovement); \
		P_NATIVE_END; \
	}


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuriorShooter"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuriorShooter"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public:


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHero)


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_PRIVATE_PROPERTY_OFFSET
#define FuriorShooter_Source_FuriorShooter_Hero_h_12_PROLOG
#define FuriorShooter_Source_FuriorShooter_Hero_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_PRIVATE_PROPERTY_OFFSET \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_RPC_WRAPPERS \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_INCLASS \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FuriorShooter_Source_FuriorShooter_Hero_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_PRIVATE_PROPERTY_OFFSET \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_INCLASS_NO_PURE_DECLS \
	FuriorShooter_Source_FuriorShooter_Hero_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FURIORSHOOTER_API UClass* StaticClass<class AHero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FuriorShooter_Source_FuriorShooter_Hero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
