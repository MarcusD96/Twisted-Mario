// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/HealthPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPack() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AHealthPack_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AHealthPack();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
// End Cross Module References
	void AHealthPack::StaticRegisterNativesAHealthPack()
	{
	}
	UClass* Z_Construct_UClass_AHealthPack_NoRegister()
	{
		return AHealthPack::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthPack.h" },
		{ "ModuleRelativePath", "HealthPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPack_Statics::NewProp_healthToAdd_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HealthPack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPack_Statics::NewProp_healthToAdd = { UE4CodeGen_Private::EPropertyClass::Float, "healthToAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AHealthPack, healthToAdd), METADATA_PARAMS(Z_Construct_UClass_AHealthPack_Statics::NewProp_healthToAdd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::NewProp_healthToAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPack_Statics::NewProp_healthToAdd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthPack_Statics::ClassParams = {
		&AHealthPack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AHealthPack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealthPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthPack, 315907909);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthPack(Z_Construct_UClass_AHealthPack, &AHealthPack::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AHealthPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
