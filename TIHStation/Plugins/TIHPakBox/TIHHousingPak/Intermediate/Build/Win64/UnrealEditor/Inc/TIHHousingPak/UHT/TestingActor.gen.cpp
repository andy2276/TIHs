// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TestingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATestingActor();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATestingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	DEFINE_FUNCTION(ATestingActor::execOn01StationInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->On01StationInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestingActor::execOn01StationPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->On01StationPrepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestingActor::execOn00StationInstantiate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->On00StationInstantiate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestingActor::execOnTestingButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTestingButton();
		P_NATIVE_END;
	}
	void ATestingActor::StaticRegisterNativesATestingActor()
	{
		UClass* Class = ATestingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "On00StationInstantiate", &ATestingActor::execOn00StationInstantiate },
			{ "On01StationInit", &ATestingActor::execOn01StationInit },
			{ "On01StationPrepare", &ATestingActor::execOn01StationPrepare },
			{ "OnTestingButton", &ATestingActor::execOnTestingButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestingActor_On00StationInstantiate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestingActor_On00StationInstantiate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09to-do\n\x09\x09\xec\x9d\xb4\xea\xb1\xb8 \xec\x96\xb4\xeb\x94\x94\xec\x84\x9c \xed\x95\x98\xeb\x83\x90\xec\x9d\xb8\xeb\x8d\xb0, \xec\x9d\xb4\xea\xb1\xb0 \xec\x9d\xb8\xed\x85\x94\xeb\xa6\xac \xec\x84\xbc\xec\x8a\xa4\xeb\xa1\x9c \xec\x98\xae\xea\xb8\xb0\xec\x9e\x90.\n\x09\x09\xec\x96\xb4\xec\xb0\xa8\xed\x94\xbc \xec\x9d\xb8\xed\x85\x94\xeb\xa6\xac \xec\x84\xbc\xec\x8a\xa4\xeb\x8a\x94 \xec\x95\x84\xeb\xac\xb4\xea\xb3\xb3\xec\x97\x90\xec\x84\x9c\xeb\x82\x98 \xed\x98\xb8\xec\xb6\x9c\xed\x95\x98\xeb\x8b\x88\xea\xb9\x8c\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TestingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xec\x9d\xb4\xea\xb1\xb8 \xec\x96\xb4\xeb\x94\x94\xec\x84\x9c \xed\x95\x98\xeb\x83\x90\xec\x9d\xb8\xeb\x8d\xb0, \xec\x9d\xb4\xea\xb1\xb0 \xec\x9d\xb8\xed\x85\x94\xeb\xa6\xac \xec\x84\xbc\xec\x8a\xa4\xeb\xa1\x9c \xec\x98\xae\xea\xb8\xb0\xec\x9e\x90.\n\xec\x96\xb4\xec\xb0\xa8\xed\x94\xbc \xec\x9d\xb8\xed\x85\x94\xeb\xa6\xac \xec\x84\xbc\xec\x8a\xa4\xeb\x8a\x94 \xec\x95\x84\xeb\xac\xb4\xea\xb3\xb3\xec\x97\x90\xec\x84\x9c\xeb\x82\x98 \xed\x98\xb8\xec\xb6\x9c\xed\x95\x98\xeb\x8b\x88\xea\xb9\x8c" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestingActor_On00StationInstantiate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestingActor, nullptr, "On00StationInstantiate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestingActor_On00StationInstantiate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestingActor_On00StationInstantiate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestingActor_On00StationInstantiate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestingActor_On00StationInstantiate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestingActor_On01StationInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestingActor_On01StationInit_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09to-do\n\x09\x09\xec\x9d\xb4\xea\xb1\xb0\xeb\x8f\x84 \xed\x8c\xa9\xec\x9d\xb4 \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xeb\xa9\xb4 \xed\x95\x98\xeb\x8a\x94\xea\xb1\xb4\xeb\x8d\xb0 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb8\xed\x85\x94\xeb\xa6\xac \xec\x84\xbc\xec\x8a\xa4\xec\x97\x90\xec\x84\x9c \xed\x95\xb4\xec\xa3\xbc\xec\x9e\x90.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TestingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xec\x9d\xb4\xea\xb1\xb0\xeb\x8f\x84 \xed\x8c\xa9\xec\x9d\xb4 \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xeb\xa9\xb4 \xed\x95\x98\xeb\x8a\x94\xea\xb1\xb4\xeb\x8d\xb0 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb8\xed\x85\x94\xeb\xa6\xac \xec\x84\xbc\xec\x8a\xa4\xec\x97\x90\xec\x84\x9c \xed\x95\xb4\xec\xa3\xbc\xec\x9e\x90." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestingActor_On01StationInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestingActor, nullptr, "On01StationInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestingActor_On01StationInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestingActor_On01StationInit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestingActor_On01StationInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestingActor_On01StationInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestingActor_On01StationPrepare_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestingActor_On01StationPrepare_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09to-do\n\x09\x09\xec\x9d\xb4\xea\xb1\xb0\xeb\x8a\x94 \xed\x8c\xa9\xec\x9d\xb4 \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xeb\xa9\xb4 \xed\x95\x98\xec\x9e\x90.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TestingActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xec\x9d\xb4\xea\xb1\xb0\xeb\x8a\x94 \xed\x8c\xa9\xec\x9d\xb4 \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xeb\xa9\xb4 \xed\x95\x98\xec\x9e\x90." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestingActor_On01StationPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestingActor, nullptr, "On01StationPrepare", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestingActor_On01StationPrepare_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestingActor_On01StationPrepare_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestingActor_On01StationPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestingActor_On01StationPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestingActor_OnTestingButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestingActor_OnTestingButton_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/TestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestingActor_OnTestingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestingActor, nullptr, "OnTestingButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestingActor_OnTestingButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestingActor_OnTestingButton_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestingActor_OnTestingButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestingActor_OnTestingButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestingActor);
	UClass* Z_Construct_UClass_ATestingActor_NoRegister()
	{
		return ATestingActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestingActor_On00StationInstantiate, "On00StationInstantiate" }, // 740252642
		{ &Z_Construct_UFunction_ATestingActor_On01StationInit, "On01StationInit" }, // 445881162
		{ &Z_Construct_UFunction_ATestingActor_On01StationPrepare, "On01StationPrepare" }, // 1537045684
		{ &Z_Construct_UFunction_ATestingActor_OnTestingButton, "OnTestingButton" }, // 2161448271
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestingActor.h" },
		{ "ModuleRelativePath", "Public/TestingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestingActor_Statics::ClassParams = {
		&ATestingActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestingActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestingActor()
	{
		if (!Z_Registration_Info_UClass_ATestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestingActor.OuterSingleton, Z_Construct_UClass_ATestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestingActor.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<ATestingActor>()
	{
		return ATestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingActor);
	ATestingActor::~ATestingActor() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TestingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TestingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestingActor, ATestingActor::StaticClass, TEXT("ATestingActor"), &Z_Registration_Info_UClass_ATestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestingActor), 2325439830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TestingActor_h_168073148(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TestingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
