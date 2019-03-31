// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwistedMario/AVehicleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAVehicleBase() {}
// Cross Module References
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicleBase_NoRegister();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_AVehicleBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TwistedMario();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_Accelerate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_DoDamage();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_DoHeal();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetAccelerationRate();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetAttack();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetCarMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetDefense();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetHandling();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetHealth();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetItemHeld();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetMass();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetMaxHealth();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetPosition();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetRotation();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetSpeed();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_GetTraction();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_HandBrake();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_HandleEvents();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_Jump();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_respawn();
	TWISTEDMARIO_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetAccelerationRate();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetAttack();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetDefense();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetHandling();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetMass();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetMaxHealth();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetPosition();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetRotation();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_SetTraction();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_Turn();
	TWISTEDMARIO_API UFunction* Z_Construct_UFunction_AVehicleBase_UseItem();
// End Cross Module References
	void AVehicleBase::StaticRegisterNativesAVehicleBase()
	{
		UClass* Class = AVehicleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Accelerate", &AVehicleBase::execAccelerate },
			{ "DoDamage", &AVehicleBase::execDoDamage },
			{ "DoHeal", &AVehicleBase::execDoHeal },
			{ "GetAccelerationDecay", &AVehicleBase::execGetAccelerationDecay },
			{ "GetAccelerationRate", &AVehicleBase::execGetAccelerationRate },
			{ "GetAttack", &AVehicleBase::execGetAttack },
			{ "GetCarMesh", &AVehicleBase::execGetCarMesh },
			{ "GetDefense", &AVehicleBase::execGetDefense },
			{ "GetHandling", &AVehicleBase::execGetHandling },
			{ "GetHealth", &AVehicleBase::execGetHealth },
			{ "GetItemHeld", &AVehicleBase::execGetItemHeld },
			{ "GetMass", &AVehicleBase::execGetMass },
			{ "GetMaxHealth", &AVehicleBase::execGetMaxHealth },
			{ "GetPosition", &AVehicleBase::execGetPosition },
			{ "GetRotation", &AVehicleBase::execGetRotation },
			{ "GetSpeed", &AVehicleBase::execGetSpeed },
			{ "GetTraction", &AVehicleBase::execGetTraction },
			{ "HandBrake", &AVehicleBase::execHandBrake },
			{ "HandleEvents", &AVehicleBase::execHandleEvents },
			{ "Jump", &AVehicleBase::execJump },
			{ "ReleaseHandBrake", &AVehicleBase::execReleaseHandBrake },
			{ "respawn", &AVehicleBase::execrespawn },
			{ "SetAccelerationDecay", &AVehicleBase::execSetAccelerationDecay },
			{ "SetAccelerationRate", &AVehicleBase::execSetAccelerationRate },
			{ "SetAttack", &AVehicleBase::execSetAttack },
			{ "SetDefense", &AVehicleBase::execSetDefense },
			{ "SetHandling", &AVehicleBase::execSetHandling },
			{ "SetMass", &AVehicleBase::execSetMass },
			{ "SetMaxHealth", &AVehicleBase::execSetMaxHealth },
			{ "SetPosition", &AVehicleBase::execSetPosition },
			{ "SetRotation", &AVehicleBase::execSetRotation },
			{ "SetTraction", &AVehicleBase::execSetTraction },
			{ "Turn", &AVehicleBase::execTurn },
			{ "UseItem", &AVehicleBase::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehicleBase_Accelerate_Statics
	{
		struct VehicleBase_eventAccelerate_Parms
		{
			float value_;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventAccelerate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventAccelerate_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Moves vehicle forward/backward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "Accelerate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventAccelerate_Parms), Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_Accelerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_Accelerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_DoDamage_Statics
	{
		struct VehicleBase_eventDoDamage_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Int, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventDoDamage_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Heal and damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "DoDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventDoDamage_Parms), Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_DoDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_DoDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_DoHeal_Statics
	{
		struct VehicleBase_eventDoHeal_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Int, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventDoHeal_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "DoHeal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventDoHeal_Parms), Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_DoHeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_DoHeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics
	{
		struct VehicleBase_eventGetAccelerationDecay_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetAccelerationDecay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetAccelerationDecay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetAccelerationDecay_Parms), Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics
	{
		struct VehicleBase_eventGetAccelerationRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetAccelerationRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetAccelerationRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetAccelerationRate_Parms), Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetAccelerationRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetAccelerationRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetAttack_Statics
	{
		struct VehicleBase_eventGetAttack_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetAttack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetAttack_Parms), Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics
	{
		struct VehicleBase_eventGetCarMesh_Parms
		{
			UStaticMeshComponent* CarMesh_;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarMesh__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarMesh_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::NewProp_CarMesh__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::NewProp_CarMesh_ = { UE4CodeGen_Private::EPropertyClass::Object, "CarMesh_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetCarMesh_Parms, CarMesh_), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::NewProp_CarMesh__MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::NewProp_CarMesh__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::NewProp_CarMesh_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Assign the mesh in the Blueprint by calling this function\nWithout assigning a Car/Body mesh it can't use the physics from this C++" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetCarMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventGetCarMesh_Parms), Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetCarMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetCarMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetDefense_Statics
	{
		struct VehicleBase_eventGetDefense_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetDefense_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetDefense", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetDefense_Parms), Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetDefense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetDefense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetHandling_Statics
	{
		struct VehicleBase_eventGetHandling_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetHandling_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetHandling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetHandling_Parms), Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetHandling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetHandling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetHealth_Statics
	{
		struct VehicleBase_eventGetHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetHealth_Parms), Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics
	{
		struct VehicleBase_eventGetItemHeld_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetItemHeld_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetItemHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventGetItemHeld_Parms), Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetItemHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetItemHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetMass_Statics
	{
		struct VehicleBase_eventGetMass_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_GetMass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetMass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetMass_Parms), Z_Construct_UFunction_AVehicleBase_GetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics
	{
		struct VehicleBase_eventGetMaxHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetMaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetMaxHealth_Parms), Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetPosition_Statics
	{
		struct VehicleBase_eventGetPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventGetPosition_Parms), Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetRotation_Statics
	{
		struct VehicleBase_eventGetRotation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventGetRotation_Parms), Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics
	{
		struct VehicleBase_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "This method is used to get Scalar value of velocity (e.g. for Speedometer)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetSpeed_Parms), Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_GetTraction_Statics
	{
		struct VehicleBase_eventGetTraction_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventGetTraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "GetTraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VehicleBase_eventGetTraction_Parms), Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_GetTraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_GetTraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_HandBrake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_HandBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_HandBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "HandBrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_HandBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_HandBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_HandBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_HandBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_HandleEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_HandleEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_HandleEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "HandleEvents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_HandleEvents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_HandleEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_HandleEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_HandleEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_Jump_Statics
	{
		struct VehicleBase_eventJump_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_Jump_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventJump_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_Jump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_Jump_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "Jump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventJump_Parms), Z_Construct_UFunction_AVehicleBase_Jump_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_Jump_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_Jump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "ReleaseHandBrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_respawn_Statics
	{
		struct VehicleBase_eventrespawn_Parms
		{
			ACheckpoint* checkpoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_checkpoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicleBase_respawn_Statics::NewProp_checkpoint = { UE4CodeGen_Private::EPropertyClass::Object, "checkpoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventrespawn_Parms, checkpoint), Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_respawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_respawn_Statics::NewProp_checkpoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_respawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "respawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventrespawn_Parms), Z_Construct_UFunction_AVehicleBase_respawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_respawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_respawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_respawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_respawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_respawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics
	{
		struct VehicleBase_eventSetAccelerationDecay_Parms
		{
			float value_;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetAccelerationDecay_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetAccelerationDecay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetAccelerationDecay_Parms), Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics
	{
		struct VehicleBase_eventSetAccelerationRate_Parms
		{
			float value_;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetAccelerationRate_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetAccelerationRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetAccelerationRate_Parms), Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetAccelerationRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetAccelerationRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetAttack_Statics
	{
		struct VehicleBase_eventSetAttack_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Int, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetAttack_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetAttack_Parms), Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetDefense_Statics
	{
		struct VehicleBase_eventSetDefense_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Int, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetDefense_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetDefense", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetDefense_Parms), Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetDefense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetDefense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetHandling_Statics
	{
		struct VehicleBase_eventSetHandling_Parms
		{
			float value_;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetHandling_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetHandling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetHandling_Parms), Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetHandling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetHandling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetMass_Statics
	{
		struct VehicleBase_eventSetMass_Parms
		{
			float value_;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_SetMass_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetMass_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetMass_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetMass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetMass_Parms), Z_Construct_UFunction_AVehicleBase_SetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics
	{
		struct VehicleBase_eventSetMaxHealth_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Int, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetMaxHealth_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetMaxHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetMaxHealth_Parms), Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetPosition_Statics
	{
		struct VehicleBase_eventSetPosition_Parms
		{
			FVector vec_;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::NewProp_vec_ = { UE4CodeGen_Private::EPropertyClass::Struct, "vec_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetPosition_Parms, vec_), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::NewProp_vec_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Getters and Setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventSetPosition_Parms), Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetRotation_Statics
	{
		struct VehicleBase_eventSetRotation_Parms
		{
			FVector vec_;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::NewProp_vec_ = { UE4CodeGen_Private::EPropertyClass::Struct, "vec_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetRotation_Parms, vec_), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::NewProp_vec_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventSetRotation_Parms), Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_SetTraction_Statics
	{
		struct VehicleBase_eventSetTraction_Parms
		{
			float value_;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventSetTraction_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "SetTraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehicleBase_eventSetTraction_Parms), Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_SetTraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_SetTraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_Turn_Statics
	{
		struct VehicleBase_eventTurn_Parms
		{
			float value_;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleBase_Turn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventTurn_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleBase_Turn_Statics::NewProp_value_ = { UE4CodeGen_Private::EPropertyClass::Float, "value_", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehicleBase_eventTurn_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleBase_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_Turn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleBase_Turn_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Turn vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "Turn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VehicleBase_eventTurn_Parms), Z_Construct_UFunction_AVehicleBase_Turn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_Turn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_Turn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleBase_UseItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleBase_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleBase_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleBase, "UseItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleBase_UseItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVehicleBase_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleBase_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleBase_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVehicleBase_NoRegister()
	{
		return AVehicleBase::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGrounded_MetaData[];
#endif
		static void NewProp_isGrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lapCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lapCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_driftGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_driftGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_handling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_traction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_accelerationDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_accelerationDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_accelerationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_accelerationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_torque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_torque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_force;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_healthMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TwistedMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicleBase_Accelerate, "Accelerate" }, // 522267048
		{ &Z_Construct_UFunction_AVehicleBase_DoDamage, "DoDamage" }, // 3258643678
		{ &Z_Construct_UFunction_AVehicleBase_DoHeal, "DoHeal" }, // 2563433992
		{ &Z_Construct_UFunction_AVehicleBase_GetAccelerationDecay, "GetAccelerationDecay" }, // 1254771246
		{ &Z_Construct_UFunction_AVehicleBase_GetAccelerationRate, "GetAccelerationRate" }, // 2253593704
		{ &Z_Construct_UFunction_AVehicleBase_GetAttack, "GetAttack" }, // 3308691416
		{ &Z_Construct_UFunction_AVehicleBase_GetCarMesh, "GetCarMesh" }, // 520084488
		{ &Z_Construct_UFunction_AVehicleBase_GetDefense, "GetDefense" }, // 794970934
		{ &Z_Construct_UFunction_AVehicleBase_GetHandling, "GetHandling" }, // 4153585083
		{ &Z_Construct_UFunction_AVehicleBase_GetHealth, "GetHealth" }, // 3433947150
		{ &Z_Construct_UFunction_AVehicleBase_GetItemHeld, "GetItemHeld" }, // 1430739692
		{ &Z_Construct_UFunction_AVehicleBase_GetMass, "GetMass" }, // 2842545529
		{ &Z_Construct_UFunction_AVehicleBase_GetMaxHealth, "GetMaxHealth" }, // 1279894226
		{ &Z_Construct_UFunction_AVehicleBase_GetPosition, "GetPosition" }, // 112350851
		{ &Z_Construct_UFunction_AVehicleBase_GetRotation, "GetRotation" }, // 260381174
		{ &Z_Construct_UFunction_AVehicleBase_GetSpeed, "GetSpeed" }, // 3191565560
		{ &Z_Construct_UFunction_AVehicleBase_GetTraction, "GetTraction" }, // 3136499535
		{ &Z_Construct_UFunction_AVehicleBase_HandBrake, "HandBrake" }, // 1429596841
		{ &Z_Construct_UFunction_AVehicleBase_HandleEvents, "HandleEvents" }, // 2499843426
		{ &Z_Construct_UFunction_AVehicleBase_Jump, "Jump" }, // 3570684541
		{ &Z_Construct_UFunction_AVehicleBase_ReleaseHandBrake, "ReleaseHandBrake" }, // 1117638048
		{ &Z_Construct_UFunction_AVehicleBase_respawn, "respawn" }, // 959447903
		{ &Z_Construct_UFunction_AVehicleBase_SetAccelerationDecay, "SetAccelerationDecay" }, // 3383388015
		{ &Z_Construct_UFunction_AVehicleBase_SetAccelerationRate, "SetAccelerationRate" }, // 3774980531
		{ &Z_Construct_UFunction_AVehicleBase_SetAttack, "SetAttack" }, // 762328760
		{ &Z_Construct_UFunction_AVehicleBase_SetDefense, "SetDefense" }, // 4228557014
		{ &Z_Construct_UFunction_AVehicleBase_SetHandling, "SetHandling" }, // 2386194645
		{ &Z_Construct_UFunction_AVehicleBase_SetMass, "SetMass" }, // 1416975010
		{ &Z_Construct_UFunction_AVehicleBase_SetMaxHealth, "SetMaxHealth" }, // 1603312386
		{ &Z_Construct_UFunction_AVehicleBase_SetPosition, "SetPosition" }, // 1475906942
		{ &Z_Construct_UFunction_AVehicleBase_SetRotation, "SetRotation" }, // 3649127222
		{ &Z_Construct_UFunction_AVehicleBase_SetTraction, "SetTraction" }, // 2388038965
		{ &Z_Construct_UFunction_AVehicleBase_Turn, "Turn" }, // 3611723637
		{ &Z_Construct_UFunction_AVehicleBase_UseItem, "UseItem" }, // 1727927806
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AVehicleBase.h" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_location_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Current checkpoint" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Byte, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, location), nullptr, METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded_MetaData[] = {
		{ "Category", "VehicleBase" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Ground check derive from thrusters" },
	};
#endif
	void Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded_SetBit(void* Obj)
	{
		((AVehicleBase*)Obj)->isGrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded = { UE4CodeGen_Private::EPropertyClass::Bool, "isGrounded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AVehicleBase), &Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_lapCounter_MetaData[] = {
		{ "Category", "VehicleBase" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Keep track of laps completed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_lapCounter = { UE4CodeGen_Private::EPropertyClass::Byte, "lapCounter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVehicleBase, lapCounter), nullptr, METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_lapCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_lapCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_driftGrip_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Affects drifting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_driftGrip = { UE4CodeGen_Private::EPropertyClass::Float, "driftGrip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, driftGrip), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_driftGrip_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_driftGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_handling_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "The lower the handling the less grip the vehicle has when turning\nShouldn't be less than 1.0f [Default 50.0f (max: 50.0f)]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_handling = { UE4CodeGen_Private::EPropertyClass::Float, "handling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, handling), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_handling_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_handling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_traction_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "The lower the traction the more 'slippery' the movement becomes\nShouldn't be less than 1.0f [Default 50.0f (max: 1000.0f)]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_traction = { UE4CodeGen_Private::EPropertyClass::Float, "traction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, traction), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_traction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_traction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationDecay_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Controls how soon the car stops when no movement input is active\nHigh value = quicker stops [Default 50.0f (max: 100.0f)]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationDecay = { UE4CodeGen_Private::EPropertyClass::Float, "accelerationDecay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, accelerationDecay), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationDecay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationRate_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Value should be between 0 and 1, where 1 means that it gains its max speed in almost one second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationRate = { UE4CodeGen_Private::EPropertyClass::Float, "accelerationRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, accelerationRate), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_speedMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Set maximum speed limit [Default is 300.0f]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_speedMax = { UE4CodeGen_Private::EPropertyClass::Float, "speedMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, speedMax), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_speedMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_speedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_torque_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Drive angular motion\nNeed about 200 torque to rotate easily" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_torque = { UE4CodeGen_Private::EPropertyClass::Float, "torque", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, torque), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_torque_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_torque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_force_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Drive linear motion\n100 kg mass would probably require 10000 force to move" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_force = { UE4CodeGen_Private::EPropertyClass::Float, "force", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, force), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_force_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_force_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_defense_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Not used yet" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_defense = { UE4CodeGen_Private::EPropertyClass::Int, "defense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, defense), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_defense_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Not used yet" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack = { UE4CodeGen_Private::EPropertyClass::Int, "attack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, attack), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_healthMax_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_healthMax = { UE4CodeGen_Private::EPropertyClass::Int, "healthMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, healthMax), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_healthMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_healthMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "The heavier the vehicle the slower it moves and less jumping height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_mass = { UE4CodeGen_Private::EPropertyClass::Float, "mass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehicleBase, mass), METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_mass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleBase_Statics::NewProp_CarMesh_MetaData[] = {
		{ "Category", "VehicleBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVehicleBase.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleBase_Statics::NewProp_CarMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CarMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AVehicleBase, CarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::NewProp_CarMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::NewProp_CarMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_isGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_lapCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_driftGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_handling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_traction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_accelerationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_speedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_torque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_healthMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleBase_Statics::NewProp_CarMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleBase_Statics::ClassParams = {
		&AVehicleBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AVehicleBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVehicleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleBase, 3693297814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleBase(Z_Construct_UClass_AVehicleBase, &AVehicleBase::StaticClass, TEXT("/Script/TwistedMario"), TEXT("AVehicleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
