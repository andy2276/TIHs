// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHStationCoreDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHStationCoreDefines() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	DEFINE_FUNCTION(ATIHPakBase::execDropThisPak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropThisPak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATIHPakBase::execInsertThisPak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertThisPak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATIHPakBase::execConnectingStation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectingStation();
		P_NATIVE_END;
	}
	void ATIHPakBase::StaticRegisterNativesATIHPakBase()
	{
		UClass* Class = ATIHPakBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectingStation", &ATIHPakBase::execConnectingStation },
			{ "DropThisPak", &ATIHPakBase::execDropThisPak },
			{ "InsertThisPak", &ATIHPakBase::execInsertThisPak },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATIHPakBase_ConnectingStation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATIHPakBase_ConnectingStation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCoreDefines.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATIHPakBase_ConnectingStation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATIHPakBase, nullptr, "ConnectingStation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATIHPakBase_ConnectingStation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATIHPakBase_ConnectingStation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATIHPakBase_ConnectingStation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATIHPakBase_ConnectingStation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATIHPakBase_DropThisPak_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATIHPakBase_DropThisPak_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09\xed\x8c\xa9\xec\x9d\x84 \xeb\x82\x84\xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9. \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\xa9\xb4 station\xec\x9d\x84 \xec\xbd\x9c\xed\x95\x98\xea\xb3\xa0 \n" },
#endif
		{ "ModuleRelativePath", "Public/TIHStationCoreDefines.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8c\xa9\xec\x9d\x84 \xeb\x82\x84\xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9. \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\xa9\xb4 station\xec\x9d\x84 \xec\xbd\x9c\xed\x95\x98\xea\xb3\xa0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATIHPakBase_DropThisPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATIHPakBase, nullptr, "DropThisPak", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATIHPakBase_DropThisPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATIHPakBase_DropThisPak_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATIHPakBase_DropThisPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATIHPakBase_DropThisPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATIHPakBase_InsertThisPak_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATIHPakBase_InsertThisPak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCoreDefines.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATIHPakBase_InsertThisPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATIHPakBase, nullptr, "InsertThisPak", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATIHPakBase_InsertThisPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATIHPakBase_InsertThisPak_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATIHPakBase_InsertThisPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATIHPakBase_InsertThisPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHPakBase);
	UClass* Z_Construct_UClass_ATIHPakBase_NoRegister()
	{
		return ATIHPakBase::StaticClass();
	}
	struct Z_Construct_UClass_ATIHPakBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHPakBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHPakBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATIHPakBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATIHPakBase_ConnectingStation, "ConnectingStation" }, // 1467466625
		{ &Z_Construct_UFunction_ATIHPakBase_DropThisPak, "DropThisPak" }, // 3494213824
		{ &Z_Construct_UFunction_ATIHPakBase_InsertThisPak, "InsertThisPak" }, // 2432400842
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHPakBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TIHStationCoreDefines.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TIHStationCoreDefines.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHPakBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHPakBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHPakBase_Statics::ClassParams = {
		&ATIHPakBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATIHPakBase()
	{
		if (!Z_Registration_Info_UClass_ATIHPakBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHPakBase.OuterSingleton, Z_Construct_UClass_ATIHPakBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHPakBase.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<ATIHPakBase>()
	{
		return ATIHPakBase::StaticClass();
	}
	ATIHPakBase::ATIHPakBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHPakBase);
	ATIHPakBase::~ATIHPakBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCoreDefines_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCoreDefines_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHPakBase, ATIHPakBase::StaticClass, TEXT("ATIHPakBase"), &Z_Registration_Info_UClass_ATIHPakBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHPakBase), 3839883263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCoreDefines_h_2691974357(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCoreDefines_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCoreDefines_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
