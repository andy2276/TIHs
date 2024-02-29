// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNode();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNode_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeDisplay();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeDisplay_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeMatter();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeMatter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void UTIHHouseNode::StaticRegisterNativesUTIHHouseNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHHouseNode);
	UClass* Z_Construct_UClass_UTIHHouseNode_NoRegister()
	{
		return UTIHHouseNode::StaticClass();
	}
	struct Z_Construct_UClass_UTIHHouseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHHouseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseNode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n*\x09@brief \n*\x09@detail \n*/" },
#endif
		{ "IncludePath", "TIHHouseNode.h" },
		{ "ModuleRelativePath", "Public/TIHHouseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n*      @brief\n*      @detail" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHHouseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHHouseNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHHouseNode_Statics::ClassParams = {
		&UTIHHouseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHHouseNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHHouseNode()
	{
		if (!Z_Registration_Info_UClass_UTIHHouseNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHHouseNode.OuterSingleton, Z_Construct_UClass_UTIHHouseNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHHouseNode.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHHouseNode>()
	{
		return UTIHHouseNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHHouseNode);
	UTIHHouseNode::~UTIHHouseNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTIHHouseNode)
	void UTIHHouseNodeMatter::StaticRegisterNativesUTIHHouseNodeMatter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHHouseNodeMatter);
	UClass* Z_Construct_UClass_UTIHHouseNodeMatter_NoRegister()
	{
		return UTIHHouseNodeMatter::StaticClass();
	}
	struct Z_Construct_UClass_UTIHHouseNodeMatter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHHouseNodeMatter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTIHHouseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeMatter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseNodeMatter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n*\x09@brief \n*\x09@detail \n*/" },
#endif
		{ "IncludePath", "TIHHouseNode.h" },
		{ "ModuleRelativePath", "Public/TIHHouseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n*      @brief\n*      @detail" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHHouseNodeMatter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHHouseNodeMatter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHHouseNodeMatter_Statics::ClassParams = {
		&UTIHHouseNodeMatter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeMatter_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHHouseNodeMatter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHHouseNodeMatter()
	{
		if (!Z_Registration_Info_UClass_UTIHHouseNodeMatter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHHouseNodeMatter.OuterSingleton, Z_Construct_UClass_UTIHHouseNodeMatter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHHouseNodeMatter.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHHouseNodeMatter>()
	{
		return UTIHHouseNodeMatter::StaticClass();
	}
	UTIHHouseNodeMatter::UTIHHouseNodeMatter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHHouseNodeMatter);
	UTIHHouseNodeMatter::~UTIHHouseNodeMatter() {}
	void UTIHHouseNodeDisplay::StaticRegisterNativesUTIHHouseNodeDisplay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHHouseNodeDisplay);
	UClass* Z_Construct_UClass_UTIHHouseNodeDisplay_NoRegister()
	{
		return UTIHHouseNodeDisplay::StaticClass();
	}
	struct Z_Construct_UClass_UTIHHouseNodeDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTIHHouseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n*\x09@brief \n*\x09@detail \n*/" },
#endif
		{ "IncludePath", "TIHHouseNode.h" },
		{ "ModuleRelativePath", "Public/TIHHouseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n*      @brief\n*      @detail" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHHouseNodeDisplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::ClassParams = {
		&UTIHHouseNodeDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHHouseNodeDisplay()
	{
		if (!Z_Registration_Info_UClass_UTIHHouseNodeDisplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHHouseNodeDisplay.OuterSingleton, Z_Construct_UClass_UTIHHouseNodeDisplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHHouseNodeDisplay.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHHouseNodeDisplay>()
	{
		return UTIHHouseNodeDisplay::StaticClass();
	}
	UTIHHouseNodeDisplay::UTIHHouseNodeDisplay() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHHouseNodeDisplay);
	UTIHHouseNodeDisplay::~UTIHHouseNodeDisplay() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHHouseNode, UTIHHouseNode::StaticClass, TEXT("UTIHHouseNode"), &Z_Registration_Info_UClass_UTIHHouseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHHouseNode), 132791081U) },
		{ Z_Construct_UClass_UTIHHouseNodeMatter, UTIHHouseNodeMatter::StaticClass, TEXT("UTIHHouseNodeMatter"), &Z_Registration_Info_UClass_UTIHHouseNodeMatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHHouseNodeMatter), 3192345793U) },
		{ Z_Construct_UClass_UTIHHouseNodeDisplay, UTIHHouseNodeDisplay::StaticClass, TEXT("UTIHHouseNodeDisplay"), &Z_Registration_Info_UClass_UTIHHouseNodeDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHHouseNodeDisplay), 4273516296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNode_h_3334731462(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
