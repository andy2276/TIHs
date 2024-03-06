// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHCommands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHCommands() {}
// Cross Module References
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateStruct();
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
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo[] = {
		{ FTemplateStruct::StaticStruct, Z_Construct_UScriptStruct_FTemplateStruct_Statics::NewStructOps, TEXT("TemplateStruct"), &Z_Registration_Info_UScriptStruct_TemplateStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateStruct), 1942336892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_4171715719(TEXT("/Script/TIHLibraryEntry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
