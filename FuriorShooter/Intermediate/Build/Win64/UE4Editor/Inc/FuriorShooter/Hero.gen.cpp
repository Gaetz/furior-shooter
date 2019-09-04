// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuriorShooter/Hero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHero() {}
// Cross Module References
	FURIORSHOOTER_API UClass* Z_Construct_UClass_AHero_NoRegister();
	FURIORSHOOTER_API UClass* Z_Construct_UClass_AHero();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_FuriorShooter();
	FURIORSHOOTER_API UFunction* Z_Construct_UFunction_AHero_NiceMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AHero::StaticRegisterNativesAHero()
	{
		UClass* Class = AHero::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NiceMove", &AHero::execNiceMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHero_NiceMove_Statics
	{
		struct Hero_eventNiceMove_Parms
		{
			FVector DesiredMovement;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHero_NiceMove_Statics::NewProp_DesiredMovement = { "DesiredMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hero_eventNiceMove_Parms, DesiredMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_NiceMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_NiceMove_Statics::NewProp_DesiredMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHero_NiceMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Hero.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_NiceMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "NiceMove", sizeof(Hero_eventNiceMove_Parms), Z_Construct_UFunction_AHero_NiceMove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHero_NiceMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHero_NiceMove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHero_NiceMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHero_NiceMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHero_NiceMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHero_NoRegister()
	{
		return AHero::StaticClass();
	}
	struct Z_Construct_UClass_AHero_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FuriorShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHero_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHero_NiceMove, "NiceMove" }, // 926205949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHero_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Hero.h" },
		{ "ModuleRelativePath", "Hero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHero_Statics::ClassParams = {
		&AHero::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHero, 3030087571);
	template<> FURIORSHOOTER_API UClass* StaticClass<AHero>()
	{
		return AHero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHero(Z_Construct_UClass_AHero, &AHero::StaticClass, TEXT("/Script/FuriorShooter"), TEXT("AHero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
