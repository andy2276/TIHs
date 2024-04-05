// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Projects_Rapid/Project/TIH/20231011/TIHStation/Plugins/TIHLibrary/Source/TIHLibrary/Public/TIHPakBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHPakBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	DEFINE_FUNCTION(ATIHPakBase::execDropPak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropPak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATIHPakBase::execInsertPak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertPak();
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
			{ "DropPak", &ATIHPakBase::execDropPak },
			{ "InsertPak", &ATIHPakBase::execInsertPak },
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
		{ "ModuleRelativePath", "Public/TIHPakBase.h" },
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
	struct Z_Construct_UFunction_ATIHPakBase_DropPak_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATIHPakBase_DropPak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHPakBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATIHPakBase_DropPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATIHPakBase, nullptr, "DropPak", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATIHPakBase_DropPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATIHPakBase_DropPak_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATIHPakBase_DropPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATIHPakBase_DropPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATIHPakBase_InsertPak_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATIHPakBase_InsertPak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHPakBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATIHPakBase_InsertPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATIHPakBase, nullptr, "InsertPak", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATIHPakBase_InsertPak_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATIHPakBase_InsertPak_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATIHPakBase_InsertPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATIHPakBase_InsertPak_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_ATIHPakBase_ConnectingStation, "ConnectingStation" }, // 970694554
		{ &Z_Construct_UFunction_ATIHPakBase_DropPak, "DropPak" }, // 3973993756
		{ &Z_Construct_UFunction_ATIHPakBase_InsertPak, "InsertPak" }, // 3159485533
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHPakBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHPakBase.h" },
		{ "ModuleRelativePath", "Public/TIHPakBase.h" },
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
		0x009000A4u,
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHPakBase);
	ATIHPakBase::~ATIHPakBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHPakBase, ATIHPakBase::StaticClass, TEXT("ATIHPakBase"), &Z_Registration_Info_UClass_ATIHPakBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHPakBase), 198952048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_3696695314(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
