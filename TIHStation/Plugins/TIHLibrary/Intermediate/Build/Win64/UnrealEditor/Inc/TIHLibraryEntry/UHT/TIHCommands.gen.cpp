// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHCommands.h"
#include "TIHLibrary/Public/TIHManagedObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHCommands() {}
// Cross Module References
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateStruct();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateStruct;
class UScriptStruct* FTemplateStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateStruct, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TemplateStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateStruct.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTemplateStruct>()
{
	return FTemplateStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTemplateStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateStruct_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n## \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c \xec\xa0\x9c\xec\x9e\x91\n\x09""1. feature \xea\xb0\x80 \xec\xa4\x91\xec\x9a\x94\xed\x95\x98\xeb\x8b\xa4\n\x09""2. \xed\x94\xbc\xec\xb2\x98\xeb\x93\xa4\xec\x9d\x80 \xeb\xaa\xa8\xeb\x91\x90 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xea\xba\xbc\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4. \xeb\xac\xbc\xeb\xa1\xa0 \xed\x95\x8f\xed\x95\x98\xea\xb2\x8c \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4.\n\x09""3. \xec\x96\xb4\xec\xb0\xa8\xed\x94\xbc \xeb\x8c\x80\xeb\xb6\x80\xeb\xb6\x84\xec\x9d\x98 \xea\xb2\x83\xeb\x93\xa4\xec\x9d\x80 strategy \xec\x97\x90\xec\x84\x9c \xec\xb2\x98\xeb\xa6\xac\xed\x95\xb4\xec\xa4\x84\xea\xb1\xb0\xec\x9e\x84\n\x09""4. \xeb\x82\xb4\xec\x9a\xa9\n\x09\x09+ FTIHCommandModifyConfigure\n\x09\x09+ FTIHCommandModifyPrepareMesh\n\x09\x09\x09+ \xeb\xb3\xb5\xec\x88\x98\xed\x98\x95\xec\x9d\x80 FTIHCommandModifyPrepareMeshes\n\x09\x09+ FTIHCommandModifyLoadMesh\n\x09\x09\x09+ \xeb\xb3\xb5\xec\x88\xb3\xed\x98\x95\xec\x9d\x80 FTIHCommandModifyLoadMeshes\n\x09\x09+ FTIHCommandModifyLoadMeshes\n\x09\x09+ FTIHCommandCreateNewAllocConfig\n\x09\x09+ FTIHCommandCreateNewAllocPrepare\n\x09\x09+ FTIHCommandCreateNewAllocOnGenerate\n\x09\x09+ FTIHCommandMngObjPooling\n\x09\x09+ FTIHCommandMngObjReject\n\x09""5. TIHCmd\xeb\x9d\xbc\xea\xb3\xa0 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x84 \xeb\xb0\x94\xea\xbe\xbc\xea\xb1\xb8 cmd \xeb\xa1\x9c \xec\x93\xb8\xea\xb1\xb0\xec\x9e\x84. \xec\x9d\xb4\xea\xb2\x8c \xeb\xaa\xa8\xeb\x93\xa0\xea\xb2\x83\xec\x9d\x98 \xeb\xaa\x85\xeb\xa0\xb9\xec\x9e\x84\n\x09""6. \xec\x9d\xbc\xeb\x8b\xa8 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb3\xa0\xeb\x82\x98\xec\x84\x9c \xec\x97\xb0\xea\xb2\xb0\xec\x9d\xb4 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c\xea\xb2\x83\xeb\x93\xa4\xec\x9d\x80 \xec\x97\xb0\xea\xb2\xb0\xec\x9d\x84 \xed\x95\xa0\xea\xb1\xb0\xec\x9e\x84.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "## \xec\x83\x88\xeb\xa1\x9c\xec\x9a\xb4 \xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c \xec\xa0\x9c\xec\x9e\x91\n       1. feature \xea\xb0\x80 \xec\xa4\x91\xec\x9a\x94\xed\x95\x98\xeb\x8b\xa4\n       2. \xed\x94\xbc\xec\xb2\x98\xeb\x93\xa4\xec\x9d\x80 \xeb\xaa\xa8\xeb\x91\x90 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xea\xba\xbc\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4. \xeb\xac\xbc\xeb\xa1\xa0 \xed\x95\x8f\xed\x95\x98\xea\xb2\x8c \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4.\n       3. \xec\x96\xb4\xec\xb0\xa8\xed\x94\xbc \xeb\x8c\x80\xeb\xb6\x80\xeb\xb6\x84\xec\x9d\x98 \xea\xb2\x83\xeb\x93\xa4\xec\x9d\x80 strategy \xec\x97\x90\xec\x84\x9c \xec\xb2\x98\xeb\xa6\xac\xed\x95\xb4\xec\xa4\x84\xea\xb1\xb0\xec\x9e\x84\n       4. \xeb\x82\xb4\xec\x9a\xa9\n               + FTIHCommandModifyConfigure\n               + FTIHCommandModifyPrepareMesh\n                       + \xeb\xb3\xb5\xec\x88\x98\xed\x98\x95\xec\x9d\x80 FTIHCommandModifyPrepareMeshes\n               + FTIHCommandModifyLoadMesh\n                       + \xeb\xb3\xb5\xec\x88\xb3\xed\x98\x95\xec\x9d\x80 FTIHCommandModifyLoadMeshes\n               + FTIHCommandModifyLoadMeshes\n               + FTIHCommandCreateNewAllocConfig\n               + FTIHCommandCreateNewAllocPrepare\n               + FTIHCommandCreateNewAllocOnGenerate\n               + FTIHCommandMngObjPooling\n               + FTIHCommandMngObjReject\n       5. TIHCmd\xeb\x9d\xbc\xea\xb3\xa0 \xec\x9d\xb4\xeb\xa6\x84\xec\x9d\x84 \xeb\xb0\x94\xea\xbe\xbc\xea\xb1\xb8 cmd \xeb\xa1\x9c \xec\x93\xb8\xea\xb1\xb0\xec\x9e\x84. \xec\x9d\xb4\xea\xb2\x8c \xeb\xaa\xa8\xeb\x93\xa0\xea\xb2\x83\xec\x9d\x98 \xeb\xaa\x85\xeb\xa0\xb9\xec\x9e\x84\n       6. \xec\x9d\xbc\xeb\x8b\xa8 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb3\xa0\xeb\x82\x98\xec\x84\x9c \xec\x97\xb0\xea\xb2\xb0\xec\x9d\xb4 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c\xea\xb2\x83\xeb\x93\xa4\xec\x9d\x80 \xec\x97\xb0\xea\xb2\xb0\xec\x9d\x84 \xed\x95\xa0\xea\xb1\xb0\xec\x9e\x84." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TemplateStruct",
		nullptr,
		0,
		sizeof(FTemplateStruct),
		alignof(FTemplateStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTemplateStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TemplateStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateStruct.InnerSingleton, Z_Construct_UScriptStruct_FTemplateStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TemplateStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas;
class UScriptStruct* FTIHCmdMngObjAllocPoolReserveDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCmdMngObjAllocPoolReserveDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCmdMngObjAllocPoolReserveDatas>()
{
	return FTIHCmdMngObjAllocPoolReserveDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReserveCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ReserveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding0_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Padding0;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCmdMngObjAllocPoolReserveDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_ReserveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_ReserveCount = { "ReserveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCmdMngObjAllocPoolReserveDatas, ReserveCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_ReserveCount_MetaData), Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_ReserveCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_Padding0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_Padding0 = { "Padding0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCmdMngObjAllocPoolReserveDatas, Padding0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_Padding0_MetaData), Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_Padding0_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_ReserveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewProp_Padding0,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCmdMngObjAllocPoolReserveDatas",
		Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::PropPointers),
		sizeof(FTIHCmdMngObjAllocPoolReserveDatas),
		alignof(FTIHCmdMngObjAllocPoolReserveDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas;
class UScriptStruct* FTIHCmdMeshPoolSetConfigureDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCmdMeshPoolSetConfigureDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCmdMeshPoolSetConfigureDatas>()
{
	return FTIHCmdMeshPoolSetConfigureDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPoolConfigure_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPoolConfigure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshCategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshCategoryName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCmdMeshPoolSetConfigureDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshPoolConfigure_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshPoolConfigure = { "MeshPoolConfigure", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCmdMeshPoolSetConfigureDatas, MeshPoolConfigure), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshPoolConfigure_MetaData), Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshPoolConfigure_MetaData) }; // 2007168826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshCategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshCategoryName = { "MeshCategoryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCmdMeshPoolSetConfigureDatas, MeshCategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshCategoryName_MetaData), Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshCategoryName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshPoolConfigure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewProp_MeshCategoryName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCmdMeshPoolSetConfigureDatas",
		Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::PropPointers),
		sizeof(FTIHCmdMeshPoolSetConfigureDatas),
		alignof(FTIHCmdMeshPoolSetConfigureDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas;
class UScriptStruct* FTIHCmdStMeshPathListLoadByServerDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCmdStMeshPathListLoadByServerDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCmdStMeshPathListLoadByServerDatas>()
{
	return FTIHCmdStMeshPathListLoadByServerDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xec\x97\xac\xea\xb8\xb0\xec\x97\x90 \xea\xb4\x80\xed\x95\x9c \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\x8a\x94 UrlCenter \xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xea\xb1\xb0\xeb\x82\x98 PathCenter \xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xec\x9e\x90.\n\x09\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xac\xea\xb8\xb0\xec\x97\x90 \xea\xb4\x80\xed\x95\x9c \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\x8a\x94 UrlCenter \xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xea\xb1\xb0\xeb\x82\x98 PathCenter \xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xec\x9e\x90." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCmdStMeshPathListLoadByServerDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCmdStMeshPathListLoadByServerDatas",
		nullptr,
		0,
		sizeof(FTIHCmdStMeshPathListLoadByServerDatas),
		alignof(FTIHCmdStMeshPathListLoadByServerDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo[] = {
		{ FTemplateStruct::StaticStruct, Z_Construct_UScriptStruct_FTemplateStruct_Statics::NewStructOps, TEXT("TemplateStruct"), &Z_Registration_Info_UScriptStruct_TemplateStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateStruct), 1942336892U) },
		{ FTIHCmdMngObjAllocPoolReserveDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCmdMngObjAllocPoolReserveDatas_Statics::NewStructOps, TEXT("TIHCmdMngObjAllocPoolReserveDatas"), &Z_Registration_Info_UScriptStruct_TIHCmdMngObjAllocPoolReserveDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCmdMngObjAllocPoolReserveDatas), 2572842428U) },
		{ FTIHCmdMeshPoolSetConfigureDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCmdMeshPoolSetConfigureDatas_Statics::NewStructOps, TEXT("TIHCmdMeshPoolSetConfigureDatas"), &Z_Registration_Info_UScriptStruct_TIHCmdMeshPoolSetConfigureDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCmdMeshPoolSetConfigureDatas), 3655725630U) },
		{ FTIHCmdStMeshPathListLoadByServerDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCmdStMeshPathListLoadByServerDatas_Statics::NewStructOps, TEXT("TIHCmdStMeshPathListLoadByServerDatas"), &Z_Registration_Info_UScriptStruct_TIHCmdStMeshPathListLoadByServerDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCmdStMeshPathListLoadByServerDatas), 1494712582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_392378823(TEXT("/Script/TIHLibraryEntry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
