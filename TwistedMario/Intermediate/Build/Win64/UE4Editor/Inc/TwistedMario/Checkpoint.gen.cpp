// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/Checkpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpoint() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_ACheckpoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_ACheckpoint_getIndex();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_ACheckpoint_onCrossLine();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicleBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ACheckpoint::StaticRegisterNativesACheckpoint()
	{
		UClass* Class = ACheckpoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getIndex", &ACheckpoint::execgetIndex },
			{ "onCrossLine", &ACheckpoint::execonCrossLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACheckpoint_getIndex_Statics
	{
		struct Checkpoint_eventgetIndex_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACheckpoint_getIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Checkpoint_eventgetIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_getIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_getIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpoint_getIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Checkpoints" },
		{ "ModuleRelativePath", "Checkpoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_getIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpoint, "getIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Checkpoint_eventgetIndex_Parms), Z_Construct_UFunction_ACheckpoint_getIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_getIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckpoint_getIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_getIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckpoint_getIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckpoint_getIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics
	{
		struct Checkpoint_eventonCrossLine_Parms
		{
			AVehicleBase* vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::NewProp_vehicle = { UE4CodeGen_Private::EPropertyClass::Object, "vehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Checkpoint_eventonCrossLine_Parms, vehicle), Z_Construct_UClass_AVehicleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::NewProp_vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Checkpoints" },
		{ "ModuleRelativePath", "Checkpoint.h" },
		{ "ToolTip", "The method that will be called when a player collides with the finish line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpoint, "onCrossLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Checkpoint_eventonCrossLine_Parms), Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckpoint_onCrossLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACheckpoint_onCrossLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACheckpoint_NoRegister()
	{
		return ACheckpoint::StaticClass();
	}
	struct Z_Construct_UClass_ACheckpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finishline_MetaData[];
#endif
		static void NewProp_Finishline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Finishline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACheckpoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckpoint_getIndex, "getIndex" }, // 1418653669
		{ &Z_Construct_UFunction_ACheckpoint_onCrossLine, "onCrossLine" }, // 2397016169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Checkpoint.h" },
		{ "ModuleRelativePath", "Checkpoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_box_MetaData[] = {
		{ "Category", "Checkpoints" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checkpoint.h" },
		{ "ToolTip", "allows the box to be edited in the editor, making changing the bounds possible" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_box = { UE4CodeGen_Private::EPropertyClass::Object, "box", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ACheckpoint, box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_box_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline_MetaData[] = {
		{ "Category", "Checkpoints" },
		{ "ModuleRelativePath", "Checkpoint.h" },
		{ "ToolTip", "A boolean to determine if this is a finish line" },
	};
#endif
	void Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline_SetBit(void* Obj)
	{
		((ACheckpoint*)Obj)->Finishline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline = { UE4CodeGen_Private::EPropertyClass::Bool, "Finishline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ACheckpoint), &Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_index_MetaData[] = {
		{ "Category", "Checkpoints" },
		{ "ModuleRelativePath", "Checkpoint.h" },
		{ "ToolTip", "The index of the checkpoint, so that the game can determine if\nthe player is advancing. Also editable in the editor" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int8, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACheckpoint, index), METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_index_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_Finishline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACheckpoint_Statics::ClassParams = {
		&ACheckpoint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACheckpoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckpoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACheckpoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheckpoint, 739352443);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheckpoint(Z_Construct_UClass_ACheckpoint, &ACheckpoint::StaticClass, TEXT("/Script/TwistedMario"), TEXT("ACheckpoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
