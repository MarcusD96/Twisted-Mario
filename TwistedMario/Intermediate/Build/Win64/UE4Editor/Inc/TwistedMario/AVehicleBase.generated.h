// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ACheckpoint;
class UStaticMeshComponent;
#ifdef TWISTEDMARIO_AVehicleBase_generated_h
#error "AVehicleBase.generated.h already included, missing '#pragma once' in AVehicleBase.h"
#endif
#define TWISTEDMARIO_AVehicleBase_generated_h

#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccelerationDecay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationDecay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAccelerationDecay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAccelerationDecay(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAccelerationRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAccelerationRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAccelerationRate(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHandling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHandling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHandling) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHandling(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTraction(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefense) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefense(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttack(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMass) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMass(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxHealth(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoHeal) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoHeal(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoDamage(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_vec_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRotation(Z_Param_vec_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_vec_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_vec_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execrespawn) \
	{ \
		P_GET_OBJECT(ACheckpoint,Z_Param_checkpoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->respawn(Z_Param_checkpoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleEvents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleEvents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemHeld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetItemHeld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseHandBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseHandBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCarMesh) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_CarMesh_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCarMesh(Z_Param_CarMesh_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Turn(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccelerate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Accelerate(Z_Param_value_); \
		P_NATIVE_END; \
	}


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccelerationDecay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationDecay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAccelerationDecay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAccelerationDecay(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAccelerationRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAccelerationRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAccelerationRate(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHandling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHandling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHandling) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHandling(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTraction(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefense) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefense(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttack(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMass) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMass(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxHealth(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoHeal) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoHeal(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoDamage(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_vec_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRotation(Z_Param_vec_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_vec_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_vec_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execrespawn) \
	{ \
		P_GET_OBJECT(ACheckpoint,Z_Param_checkpoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->respawn(Z_Param_checkpoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleEvents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleEvents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemHeld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetItemHeld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseHandBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseHandBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandBrake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandBrake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCarMesh) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_CarMesh_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCarMesh(Z_Param_CarMesh_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Turn(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccelerate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Accelerate(Z_Param_value_); \
		P_NATIVE_END; \
	}


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleBase(); \
	friend struct Z_Construct_UClass_AVehicleBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleBase, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(AVehicleBase)


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAVehicleBase(); \
	friend struct Z_Construct_UClass_AVehicleBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleBase, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(AVehicleBase)


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleBase(AVehicleBase&&); \
	NO_API AVehicleBase(const AVehicleBase&); \
public:


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleBase(AVehicleBase&&); \
	NO_API AVehicleBase(const AVehicleBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicleBase)


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_PRIVATE_PROPERTY_OFFSET
#define TwistedMario_Source_TwistedMario_AVehicleBase_h_13_PROLOG
#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_RPC_WRAPPERS \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_INCLASS \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwistedMario_Source_TwistedMario_AVehicleBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_INCLASS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_AVehicleBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwistedMario_Source_TwistedMario_AVehicleBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
