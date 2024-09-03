// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeMulti/EscapeMultiCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMultiCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ESCAPEMULTI_API UClass* Z_Construct_UClass_AEscapeMultiCharacter();
	ESCAPEMULTI_API UClass* Z_Construct_UClass_AEscapeMultiCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EscapeMulti();
// End Cross Module References
	void AEscapeMultiCharacter::StaticRegisterNativesAEscapeMultiCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscapeMultiCharacter);
	UClass* Z_Construct_UClass_AEscapeMultiCharacter_NoRegister()
	{
		return AEscapeMultiCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeMultiCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeMultiCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeMulti,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeMultiCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EscapeMultiCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "EscapeMultiCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscapeMultiCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscapeMultiCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscapeMultiCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscapeMultiCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A decal that projects to the cursor location. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscapeMultiCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A decal that projects to the cursor location." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscapeMultiCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CursorToWorld_MetaData), Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CursorToWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscapeMultiCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscapeMultiCharacter_Statics::NewProp_CursorToWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeMultiCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeMultiCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscapeMultiCharacter_Statics::ClassParams = {
		&AEscapeMultiCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscapeMultiCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEscapeMultiCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEscapeMultiCharacter()
	{
		if (!Z_Registration_Info_UClass_AEscapeMultiCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscapeMultiCharacter.OuterSingleton, Z_Construct_UClass_AEscapeMultiCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscapeMultiCharacter.OuterSingleton;
	}
	template<> ESCAPEMULTI_API UClass* StaticClass<AEscapeMultiCharacter>()
	{
		return AEscapeMultiCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeMultiCharacter);
	AEscapeMultiCharacter::~AEscapeMultiCharacter() {}
	struct Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscapeMultiCharacter, AEscapeMultiCharacter::StaticClass, TEXT("AEscapeMultiCharacter"), &Z_Registration_Info_UClass_AEscapeMultiCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscapeMultiCharacter), 3985222061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiCharacter_h_3847783907(TEXT("/Script/EscapeMulti"),
		Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
