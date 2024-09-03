// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeMulti/EscapeMultiGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMultiGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ESCAPEMULTI_API UClass* Z_Construct_UClass_AEscapeMultiGameMode();
	ESCAPEMULTI_API UClass* Z_Construct_UClass_AEscapeMultiGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EscapeMulti();
// End Cross Module References
	void AEscapeMultiGameMode::StaticRegisterNativesAEscapeMultiGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscapeMultiGameMode);
	UClass* Z_Construct_UClass_AEscapeMultiGameMode_NoRegister()
	{
		return AEscapeMultiGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeMultiGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeMultiGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeMulti,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeMultiGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EscapeMultiGameMode.h" },
		{ "ModuleRelativePath", "EscapeMultiGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeMultiGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeMultiGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscapeMultiGameMode_Statics::ClassParams = {
		&AEscapeMultiGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeMultiGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEscapeMultiGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEscapeMultiGameMode()
	{
		if (!Z_Registration_Info_UClass_AEscapeMultiGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscapeMultiGameMode.OuterSingleton, Z_Construct_UClass_AEscapeMultiGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscapeMultiGameMode.OuterSingleton;
	}
	template<> ESCAPEMULTI_API UClass* StaticClass<AEscapeMultiGameMode>()
	{
		return AEscapeMultiGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeMultiGameMode);
	AEscapeMultiGameMode::~AEscapeMultiGameMode() {}
	struct Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscapeMultiGameMode, AEscapeMultiGameMode::StaticClass, TEXT("AEscapeMultiGameMode"), &Z_Registration_Info_UClass_AEscapeMultiGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscapeMultiGameMode), 4182824315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiGameMode_h_3077242585(TEXT("/Script/EscapeMulti"),
		Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Jeux_Programmation_EscapeMulti_MathisDenamur_Source_EscapeMulti_EscapeMultiGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
