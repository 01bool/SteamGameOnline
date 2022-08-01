// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameOnline/SteamGameOnlineGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameOnlineGameMode() {}
// Cross Module References
	STEAMGAMEONLINE_API UClass* Z_Construct_UClass_ASteamGameOnlineGameMode_NoRegister();
	STEAMGAMEONLINE_API UClass* Z_Construct_UClass_ASteamGameOnlineGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SteamGameOnline();
// End Cross Module References
	void ASteamGameOnlineGameMode::StaticRegisterNativesASteamGameOnlineGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASteamGameOnlineGameMode_NoRegister()
	{
		return ASteamGameOnlineGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASteamGameOnlineGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamGameOnline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SteamGameOnlineGameMode.h" },
		{ "ModuleRelativePath", "SteamGameOnlineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamGameOnlineGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::ClassParams = {
		&ASteamGameOnlineGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamGameOnlineGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASteamGameOnlineGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASteamGameOnlineGameMode, 3064292683);
	template<> STEAMGAMEONLINE_API UClass* StaticClass<ASteamGameOnlineGameMode>()
	{
		return ASteamGameOnlineGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASteamGameOnlineGameMode(Z_Construct_UClass_ASteamGameOnlineGameMode, &ASteamGameOnlineGameMode::StaticClass, TEXT("/Script/SteamGameOnline"), TEXT("ASteamGameOnlineGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamGameOnlineGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
