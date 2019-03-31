// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVehicleBase;
#ifdef TWISTEDMARIO_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define TWISTEDMARIO_Checkpoint_generated_h

#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->getIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonCrossLine) \
	{ \
		P_GET_OBJECT(AVehicleBase,Z_Param_vehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onCrossLine(Z_Param_vehicle); \
		P_NATIVE_END; \
	}


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->getIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonCrossLine) \
	{ \
		P_GET_OBJECT(AVehicleBase,Z_Param_vehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onCrossLine(Z_Param_vehicle); \
		P_NATIVE_END; \
	}


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwistedMario"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckpoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public:


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint)


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_PRIVATE_PROPERTY_OFFSET
#define TwistedMario_Source_TwistedMario_Checkpoint_h_13_PROLOG
#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_RPC_WRAPPERS \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_INCLASS \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwistedMario_Source_TwistedMario_Checkpoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_INCLASS_NO_PURE_DECLS \
	TwistedMario_Source_TwistedMario_Checkpoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwistedMario_Source_TwistedMario_Checkpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
