// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHStation/Public/TIHTestPlayerControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHTestPlayerControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	TIHSTATION_API UClass* Z_Construct_UClass_ATIHTestPlayerControl();
	TIHSTATION_API UClass* Z_Construct_UClass_ATIHTestPlayerControl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHStation();
// End Cross Module References
	DEFINE_FUNCTION(ATIHTestPlayerControl::execTestSelectFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestSelectFunc();
		P_NATIVE_END;
	}
	void ATIHTestPlayerControl::StaticRegisterNativesATIHTestPlayerControl()
	{
		UClass* Class = ATIHTestPlayerControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestSelectFunc", &ATIHTestPlayerControl::execTestSelectFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHTestPlayerControl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATIHTestPlayerControl, nullptr, "TestSelectFunc", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHTestPlayerControl);
	UClass* Z_Construct_UClass_ATIHTestPlayerControl_NoRegister()
	{
		return ATIHTestPlayerControl::StaticClass();
	}
	struct Z_Construct_UClass_ATIHTestPlayerControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHTestPlayerControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHStation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHTestPlayerControl_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATIHTestPlayerControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATIHTestPlayerControl_TestSelectFunc, "TestSelectFunc" }, // 3740663725
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHTestPlayerControl_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHTestPlayerControl_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TIHTestPlayerControl.h" },
		{ "ModuleRelativePath", "Public/TIHTestPlayerControl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHTestPlayerControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHTestPlayerControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHTestPlayerControl_Statics::ClassParams = {
		&ATIHTestPlayerControl::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHTestPlayerControl_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHTestPlayerControl_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATIHTestPlayerControl()
	{
		if (!Z_Registration_Info_UClass_ATIHTestPlayerControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHTestPlayerControl.OuterSingleton, Z_Construct_UClass_ATIHTestPlayerControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHTestPlayerControl.OuterSingleton;
	}
	template<> TIHSTATION_API UClass* StaticClass<ATIHTestPlayerControl>()
	{
		return ATIHTestPlayerControl::StaticClass();
	}
	ATIHTestPlayerControl::ATIHTestPlayerControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHTestPlayerControl);
	ATIHTestPlayerControl::~ATIHTestPlayerControl() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHTestPlayerControl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHTestPlayerControl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHTestPlayerControl, ATIHTestPlayerControl::StaticClass, TEXT("ATIHTestPlayerControl"), &Z_Registration_Info_UClass_ATIHTestPlayerControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHTestPlayerControl), 787444105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHTestPlayerControl_h_1796609490(TEXT("/Script/TIHStation"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHTestPlayerControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHTestPlayerControl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
