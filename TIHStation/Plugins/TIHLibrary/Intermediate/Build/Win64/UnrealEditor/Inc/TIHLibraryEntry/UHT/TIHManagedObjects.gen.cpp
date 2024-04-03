// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHManagedObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHManagedObjects() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject_NoRegister();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPrepareData();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjState();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure;
class UScriptStruct* FTIHMeshPoolConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMeshPoolConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMeshPoolConfigure>()
{
	return FTIHMeshPoolConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingWindowType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SlidingWindowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingWindowSplitType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SlidingWindowSplitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingWindowSplitValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SlidingWindowSplitValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlindingWindowDirection_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SlindingWindowDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareLoadPathType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PrepareLoadPathType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareLoadPathDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_PrepareLoadPathDataIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateInnerQueryType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateInnerQueryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateCategoryPop_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateCategoryPop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateCategoryHashDefaultIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CreateCategoryHashDefaultIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMeshPoolConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xec\x9c\x88\xeb\x8f\x84\xec\x9a\xb0 \xed\x83\x80\xec\x9e\x85\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09""EStuckEnd,\x09""EInfiniteEnd,ESlackEnd,ECircling,\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xec\x9c\x88\xeb\x8f\x84\xec\x9a\xb0 \xed\x83\x80\xec\x9e\x85\xec\x9d\xb4\xeb\x8b\xa4.\nEStuckEnd,      EInfiniteEnd,ESlackEnd,ECircling," },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType = { "SlidingWindowType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlidingWindowType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType = { "SlidingWindowSplitType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlidingWindowSplitType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xed\x95\x9c\xeb\xb2\x88\xec\x97\x90 \xec\x96\xbc\xeb\xa7\x88\xec\x94\xa9 \xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9\xec\x9d\x84 \xed\x95\xa0\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4. \xec\xa6\x89 \xed\x95\x9c\xeb\xb2\x88\xec\x9d\x98 \xeb\xb2\x94\xec\x9c\x84\xec\x9d\xb4\xeb\xa9\xb0, count \xec\x9d\xb4\xeb\x8b\xa4.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x9c\xeb\xb2\x88\xec\x97\x90 \xec\x96\xbc\xeb\xa7\x88\xec\x94\xa9 \xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9\xec\x9d\x84 \xed\x95\xa0\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4. \xec\xa6\x89 \xed\x95\x9c\xeb\xb2\x88\xec\x9d\x98 \xeb\xb2\x94\xec\x9c\x84\xec\x9d\xb4\xeb\xa9\xb0, count \xec\x9d\xb4\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue = { "SlidingWindowSplitValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlidingWindowSplitValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xeb\xb0\xa9\xed\x96\xa5 left = -1 , right = 1\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xeb\xb0\xa9\xed\x96\xa5 left = -1 , right = 1" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection = { "SlindingWindowDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlindingWindowDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xeb\x95\x8c \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\n\x09\x09startEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\n\x09\x09perElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09UnknownType = 0,StartEnd = 1,PerElement = 2\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xeb\x95\x8c \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\nstartEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\nperElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\nUnknownType = 0,StartEnd = 1,PerElement = 2" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType = { "PrepareLoadPathType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, PrepareLoadPathType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09to-do\n\x09\x09\xec\x9d\xb4\xea\xb1\xb0 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94\xea\xb3\xb3 \xec\xb0\xa8\xea\xb8\xb0 \xeb\xa7\x8c\xeb\x93\xa0 \xec\x9d\xb4\xec\x9c\xa0\xeb\x8a\x94 \xec\x9e\x88\xeb\x8a\x94\xeb\x8d\xb0 \xea\xb8\xb0\xec\x96\xb5\xec\x9d\xb4 \xec\x95\x88\xeb\x82\xa8.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xec\x9d\xb4\xea\xb1\xb0 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94\xea\xb3\xb3 \xec\xb0\xa8\xea\xb8\xb0 \xeb\xa7\x8c\xeb\x93\xa0 \xec\x9d\xb4\xec\x9c\xa0\xeb\x8a\x94 \xec\x9e\x88\xeb\x8a\x94\xeb\x8d\xb0 \xea\xb8\xb0\xec\x96\xb5\xec\x9d\xb4 \xec\x95\x88\xeb\x82\xa8." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex = { "PrepareLoadPathDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, PrepareLoadPathDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09startEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\n\x09\x09perElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09UnknownType = 0,StartEnd = 1,PerElement = 2\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "startEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\nperElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\nUnknownType = 0,StartEnd = 1,PerElement = 2" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType = { "CreateInnerQueryType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, CreateInnerQueryType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac \xed\x81\x90\xeb\xa5\xbc \xed\x8c\x9d\xed\x95\xa0\xea\xb1\xb4\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x8c\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\n\x09\x09\xeb\xb3\xb4\xed\x86\xb5 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xea\xb0\x80 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x88\xeb\xa9\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\xa0\xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac \xed\x81\x90\xeb\xa5\xbc \xed\x8c\x9d\xed\x95\xa0\xea\xb1\xb4\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x8c\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\n\xeb\xb3\xb4\xed\x86\xb5 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xea\xb0\x80 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x88\xeb\xa9\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\xa0\xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop = { "CreateCategoryPop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, CreateCategoryPop), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09mDefaultCategories.Add(0, TEXT(\"NotAllocCategory\"));\n\x09\x09mDefaultCategories.Add(1, TEXT(\"Default0\"));\n\x09\x09mDefaultCategories.Add(2, TEXT(\"Default1\"));\n\x09\x09mDefaultCategories.Add(3, TEXT(\"Default2\"));\n\x09\x09mDefaultCategories.Add(4, TEXT(\"Default3\"));\n\x09\x09mDefaultCategories.Add(5, TEXT(\"StMeshDefault\"));\n\x09\x09mDefaultCategories.Add(6, TEXT(\"SkMeshDefault\"));\n\x09\x09\xec\x9d\xb4\xea\xb2\x8c \xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xec\x9e\x84.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mDefaultCategories.Add(0, TEXT(\"NotAllocCategory\"));\nmDefaultCategories.Add(1, TEXT(\"Default0\"));\nmDefaultCategories.Add(2, TEXT(\"Default1\"));\nmDefaultCategories.Add(3, TEXT(\"Default2\"));\nmDefaultCategories.Add(4, TEXT(\"Default3\"));\nmDefaultCategories.Add(5, TEXT(\"StMeshDefault\"));\nmDefaultCategories.Add(6, TEXT(\"SkMeshDefault\"));\n\xec\x9d\xb4\xea\xb2\x8c \xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xec\x9e\x84." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex = { "CreateCategoryHashDefaultIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, CreateCategoryHashDefaultIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMeshPoolConfigure",
		Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers),
		sizeof(FTIHMeshPoolConfigure),
		alignof(FTIHMeshPoolConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure;
class UScriptStruct* FTIHMeshPoolCenterConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMeshPoolCenterConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMeshPoolCenterConfigure>()
{
	return FTIHMeshPoolCenterConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_OrderType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09?? \xec\x9d\xb4\xea\xb1\xb0 \xec\x99\x9c\xeb\xa7\x8c\xeb\x93\xa4\xec\x97\x87\xec\xa7\x80?\n//\x09\xec\x9d\xb4\xea\xb1\xb0\xeb\x8a\x94 \xea\xb2\xb0\xea\xb5\xad \xeb\xa7\xa4\xec\x89\xac\xed\x92\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0\xec\x9c\x84\xed\x95\x9c \xec\xa0\x95\xeb\xb3\xb4\xea\xb0\x80 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "?? \xec\x9d\xb4\xea\xb1\xb0 \xec\x99\x9c\xeb\xa7\x8c\xeb\x93\xa4\xec\x97\x87\xec\xa7\x80?\n\xec\x9d\xb4\xea\xb1\xb0\xeb\x8a\x94 \xea\xb2\xb0\xea\xb5\xad \xeb\xa7\xa4\xec\x89\xac\xed\x92\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0\xec\x9c\x84\xed\x95\x9c \xec\xa0\x95\xeb\xb3\xb4\xea\xb0\x80 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMeshPoolCenterConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolCenterConfigure, OrderType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMeshPoolCenterConfigure",
		Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers),
		sizeof(FTIHMeshPoolCenterConfigure),
		alignof(FTIHMeshPoolCenterConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.InnerSingleton;
	}
	void UTIHMeshPoolConfigObject::StaticRegisterNativesUTIHMeshPoolConfigObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHMeshPoolConfigObject);
	UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject_NoRegister()
	{
		return UTIHMeshPoolConfigObject::StaticClass();
	}
	struct Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMeshDefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mMeshDefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMeshPathCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mMeshPathCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHManagedObjects.h" },
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath = { "mMeshDefaultPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHMeshPoolConfigObject, mMeshDefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath_MetaData), Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount = { "mMeshPathCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHMeshPoolConfigObject, mMeshPathCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount_MetaData), Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHMeshPoolConfigObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::ClassParams = {
		&UTIHMeshPoolConfigObject::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject()
	{
		if (!Z_Registration_Info_UClass_UTIHMeshPoolConfigObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHMeshPoolConfigObject.OuterSingleton, Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHMeshPoolConfigObject.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<UTIHMeshPoolConfigObject>()
	{
		return UTIHMeshPoolConfigObject::StaticClass();
	}
	UTIHMeshPoolConfigObject::UTIHMeshPoolConfigObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHMeshPoolConfigObject);
	UTIHMeshPoolConfigObject::~UTIHMeshPoolConfigObject() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure;
class UScriptStruct* FTIHMngObjFactoryConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjFactoryConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjFactoryConfigure>()
{
	return FTIHMngObjFactoryConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlloactionSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AlloactionSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipeliningState_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PipeliningState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingMax_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ProcessingMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingCurrCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ProcessingCurrCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding0_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Padding0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOwnerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultOwnerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOverrideLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnOverrideLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjFactoryConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_AlloactionSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_AlloactionSpace = { "AlloactionSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, AlloactionSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_AlloactionSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_AlloactionSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_PipeliningState_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_PipeliningState = { "PipeliningState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, PipeliningState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_PipeliningState_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_PipeliningState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingMax_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xed\x95\x9c\xeb\xb2\x88\xec\x97\x90 \xec\xa7\x84\xed\x96\x89\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 processing \xec\x9d\x98 \xec\x88\x98\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09\xec\xa2\x85\xeb\xa5\x98\xeb\x8a\x94 \xea\xb0\x80\xeb\xa6\xac\xec\xa7\x80 \xec\x95\x8a\xec\x9c\xbc\xeb\xa9\xb0 \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x9c\xeb\xb2\x88\xec\x97\x90 \xec\xa7\x84\xed\x96\x89\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 processing \xec\x9d\x98 \xec\x88\x98\xec\x9d\xb4\xeb\x8b\xa4.\n\xec\xa2\x85\xeb\xa5\x98\xeb\x8a\x94 \xea\xb0\x80\xeb\xa6\xac\xec\xa7\x80 \xec\x95\x8a\xec\x9c\xbc\xeb\xa9\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingMax = { "ProcessingMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, ProcessingMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingMax_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingCurrCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingCurrCount = { "ProcessingCurrCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, ProcessingCurrCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingCurrCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingCurrCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_Padding0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_Padding0 = { "Padding0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, Padding0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_Padding0_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_Padding0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnWorld = { "SpawnWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, SpawnWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnWorld_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultOwnerActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09null \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "null \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultOwnerActor = { "DefaultOwnerActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, DefaultOwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultOwnerActor_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultOwnerActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnOverrideLevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09null \xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "null \xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnOverrideLevel = { "SpawnOverrideLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, SpawnOverrideLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnOverrideLevel_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnOverrideLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultSpawnTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09null\xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "null\xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultSpawnTransform = { "DefaultSpawnTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjFactoryConfigure, DefaultSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultSpawnTransform_MetaData), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultSpawnTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_AlloactionSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_PipeliningState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_ProcessingCurrCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_Padding0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultOwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_SpawnOverrideLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewProp_DefaultSpawnTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjFactoryConfigure",
		Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::PropPointers),
		sizeof(FTIHMngObjFactoryConfigure),
		alignof(FTIHMngObjFactoryConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader;
class UScriptStruct* FTIHMngObjCompositeHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjCompositeHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjCompositeHeader>()
{
	return FTIHMngObjCompositeHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeType_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CompositeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeOption0_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CompositeOption0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeOption1_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CompositeOption1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeOption2_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CompositeOption2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n\x09\x09\x09\x09\x09\x09\x09\x09managedObject Composite base\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n                                                               managedObject Composite base\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjCompositeHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09{SceneComponent,UserWidget}\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{SceneComponent,UserWidget}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeType = { "CompositeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjCompositeHeader, CompositeType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeType_MetaData), Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption0_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09if SceneComponent \n\x09\x09\x09\xed\x95\xb4\xeb\x8b\xb9 \xec\x94\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xec\x9d\x98 16 \xed\x95\xb4\xec\x89\xac\n\x09\x09if UserWidget\n\x09\x09\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if SceneComponent\n        \xed\x95\xb4\xeb\x8b\xb9 \xec\x94\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xec\x9d\x98 16 \xed\x95\xb4\xec\x89\xac\nif UserWidget" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption0 = { "CompositeOption0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjCompositeHeader, CompositeOption0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption0_MetaData), Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09if SceneComponent \n\x09\x09\x09\xed\x95\xb4\xeb\x8b\xb9 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xec\x97\x90 \xea\xb8\xb0\xeb\xb3\xb8\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c \xeb\x8b\xac\xeb\xa6\xb0 \xeb\xa6\xac\xed\x94\x84\xec\x88\x98\n\x09\x09if UserWidget\n\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if SceneComponent\n        \xed\x95\xb4\xeb\x8b\xb9 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xec\x97\x90 \xea\xb8\xb0\xeb\xb3\xb8\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c \xeb\x8b\xac\xeb\xa6\xb0 \xeb\xa6\xac\xed\x94\x84\xec\x88\x98\nif UserWidget" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption1 = { "CompositeOption1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjCompositeHeader, CompositeOption1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption1_MetaData), Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption2_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09if SceneComponent \n\x09\x09\x09\xeb\xb2\x84\xec\xa0\x84\n\x09\x09if UserWidget\n\x09\x09\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if SceneComponent\n        \xeb\xb2\x84\xec\xa0\x84\nif UserWidget" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption2 = { "CompositeOption2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjCompositeHeader, CompositeOption2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption2_MetaData), Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewProp_CompositeOption2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjCompositeHeader",
		Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::PropPointers),
		sizeof(FTIHMngObjCompositeHeader),
		alignof(FTIHMngObjCompositeHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode;
class UScriptStruct* FTIHMngObjActorStructureNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjActorStructureNode"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjActorStructureNode>()
{
	return FTIHMngObjActorStructureNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistedUEComponentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_RegistedUEComponentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeStep_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_TreeStep;
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ChildStructureNodeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildStructureNodeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildStructureNodeArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xec\x9d\xb4 \xea\xb5\xac\xec\xa1\xb0\xeb\x8a\x94 \xeb\xa0\x88\xec\xa7\x80\xec\x8a\xa4\xed\x8a\xb8 \xeb\x90\x98\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 UE \xec\xbb\xb4\xed\x8f\xac\xed\x84\xb4\xed\x8a\xb8\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xea\xb5\xac\xec\xa1\xb0\xeb\x8a\x94 \xeb\xa0\x88\xec\xa7\x80\xec\x8a\xa4\xed\x8a\xb8 \xeb\x90\x98\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 UE \xec\xbb\xb4\xed\x8f\xac\xed\x84\xb4\xed\x8a\xb8" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjActorStructureNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_RegistedUEComponentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_RegistedUEComponentIndex = { "RegistedUEComponentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjActorStructureNode, RegistedUEComponentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_RegistedUEComponentIndex_MetaData), Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_RegistedUEComponentIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_TreeStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_TreeStep = { "TreeStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjActorStructureNode, TreeStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_TreeStep_MetaData), Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_TreeStep_MetaData) };
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray_Inner = { "ChildStructureNodeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray = { "ChildStructureNodeArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjActorStructureNode, ChildStructureNodeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray_MetaData), Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_RegistedUEComponentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_TreeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewProp_ChildStructureNodeArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjActorStructureNode",
		Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::PropPointers),
		sizeof(FTIHMngObjActorStructureNode),
		alignof(FTIHMngObjActorStructureNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjState;
class UScriptStruct* FTIHMngObjState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjState, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjState"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjState.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjState>()
{
	return FTIHMngObjState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MngObjState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewProp_MngObjState_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewProp_MngObjState = { "MngObjState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjState, MngObjState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewProp_MngObjState_MetaData), Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewProp_MngObjState_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewProp_MngObjState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjState",
		Z_Construct_UScriptStruct_FTIHMngObjState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjState_Statics::PropPointers),
		sizeof(FTIHMngObjState),
		alignof(FTIHMngObjState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjState()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjState.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjHeader;
class UScriptStruct* FTIHMngObjHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjHeader>()
{
	return FTIHMngObjHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_UObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexInPool_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_IndexInPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UEClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UEClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UObjectType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09""actor \xec\x9d\xb8\xec\xa7\x80,ui \xec\x9d\xb8\xec\xa7\x80,\xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\xec\x9d\xb8\xec\xa7\x80, \xeb\x8d\x94\xec\x83\x9d\xea\xb8\xb8\xec\x88\x98\xec\x9e\x88\xec\x9d\x8c\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "actor \xec\x9d\xb8\xec\xa7\x80,ui \xec\x9d\xb8\xec\xa7\x80,\xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\xec\x9d\xb8\xec\xa7\x80, \xeb\x8d\x94\xec\x83\x9d\xea\xb8\xb8\xec\x88\x98\xec\x9e\x88\xec\x9d\x8c" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UObjectType = { "UObjectType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, UObjectType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UObjectType_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UObjectType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\x8a\xa4\xec\x8a\xa4\xeb\xa1\x9c\xea\xb0\x80 \xec\x96\xb4\xeb\x94\x94\xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xec\x95\x8c\xeb\xa0\xa4\xec\xa3\xbc\xeb\x8a\x94\xea\xb2\x83\n\x09\x09""AllocationSpace\n\x09\x09IndexInPool\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xec\x8a\xa4\xeb\xa1\x9c\xea\xb0\x80 \xec\x96\xb4\xeb\x94\x94\xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xec\x95\x8c\xeb\xa0\xa4\xec\xa3\xbc\xeb\x8a\x94\xea\xb2\x83\nAllocationSpace\nIndexInPool" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace = { "AllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, AllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_IndexInPool_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09\xec\x9d\xb4\xea\xb1\xb4 factory \xec\x97\x90 \xec\x9e\x88\xeb\x8a\x94\xea\xb1\xb8 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94\xea\xb1\xb0\xec\x9e\x84.\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xea\xb1\xb4 factory \xec\x97\x90 \xec\x9e\x88\xeb\x8a\x94\xea\xb1\xb8 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94\xea\xb1\xb0\xec\x9e\x84." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_IndexInPool = { "IndexInPool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, IndexInPool), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_IndexInPool_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_IndexInPool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UEClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09mngobj \xeb\xa5\xbc \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xed\x95\xb4\xec\x89\xac\xec\x9e\x84.\n\x09\x09\xed\x95\xb4\xeb\x8b\xb9 \xed\x95\xb4\xec\x89\xac\xeb\x8a\x94 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c\xea\xb0\x80? \xec\x95\x84\xeb\x8b\x88\xec\xa7\x80 \xec\x9d\xb4\xea\xb1\xb4 \xea\xb3\xb5\xec\x9a\xa9\xec\x9d\xb4\xeb\x8b\x88\xea\xb9\x90 \xed\x95\x84\xec\x9a\x94\xec\x97\x86\xeb\x82\x98?\n\x09\x09\xec\x95\x84\xeb\x8b\x88\xeb\xa9\xb4 \xea\xb5\xac\xec\xa1\xb0\xeb\x95\x8c\xeb\xac\xb8\xec\x9d\xb4\xeb\x9d\xbc\xeb\x8f\x84 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c\xea\xb0\x80? \xec\x8b\x9c\xeb\xb0\x9c \xec\x96\xb4\xeb\xa0\xb5\xeb\x84\xa4 \xea\xb5\xac\xec\xa1\xb0\xeb\xa5\xbc \xed\x95\xb4\xec\x89\xac\xeb\xa1\x9c \xec\xa0\x80\xec\x9e\xa5\xed\x95\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\xeb\x8d\xb0 \xec\x96\xb4\xec\xbc\x80\xed\x95\x98\xec\xa7\x80?\n\x09\x09\xec\x9d\xbc\xeb\x8b\xa8 \xeb\xb3\xb4\xeb\xa5\x98\n\x09\x09\x09\xec\x82\xac\xec\x9c\xa0\xeb\x8a\x94 \xec\xbb\xb4\xed\x8f\xac\xec\xa7\x80\xed\x8a\xb8\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa0 \xed\x95\xb4\xec\x89\xac\xeb\x8a\x94 \xeb\x84\x88\xeb\xac\xb4 \xed\x81\xbc.\n\x09\x09\x09\xea\xb7\xb8\xeb\x9e\x98\xec\x84\x9c UClass \xeb\xa1\x9c \xed\x96\x88\xec\x9d\x8c\n\x09\x09\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mngobj \xeb\xa5\xbc \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xed\x95\xb4\xec\x89\xac\xec\x9e\x84.\n\xed\x95\xb4\xeb\x8b\xb9 \xed\x95\xb4\xec\x89\xac\xeb\x8a\x94 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c\xea\xb0\x80? \xec\x95\x84\xeb\x8b\x88\xec\xa7\x80 \xec\x9d\xb4\xea\xb1\xb4 \xea\xb3\xb5\xec\x9a\xa9\xec\x9d\xb4\xeb\x8b\x88\xea\xb9\x90 \xed\x95\x84\xec\x9a\x94\xec\x97\x86\xeb\x82\x98?\n\xec\x95\x84\xeb\x8b\x88\xeb\xa9\xb4 \xea\xb5\xac\xec\xa1\xb0\xeb\x95\x8c\xeb\xac\xb8\xec\x9d\xb4\xeb\x9d\xbc\xeb\x8f\x84 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c\xea\xb0\x80? \xec\x8b\x9c\xeb\xb0\x9c \xec\x96\xb4\xeb\xa0\xb5\xeb\x84\xa4 \xea\xb5\xac\xec\xa1\xb0\xeb\xa5\xbc \xed\x95\xb4\xec\x89\xac\xeb\xa1\x9c \xec\xa0\x80\xec\x9e\xa5\xed\x95\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\xeb\x8d\xb0 \xec\x96\xb4\xec\xbc\x80\xed\x95\x98\xec\xa7\x80?\n\xec\x9d\xbc\xeb\x8b\xa8 \xeb\xb3\xb4\xeb\xa5\x98\n        \xec\x82\xac\xec\x9c\xa0\xeb\x8a\x94 \xec\xbb\xb4\xed\x8f\xac\xec\xa7\x80\xed\x8a\xb8\xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa0 \xed\x95\xb4\xec\x89\xac\xeb\x8a\x94 \xeb\x84\x88\xeb\xac\xb4 \xed\x81\xbc.\n        \xea\xb7\xb8\xeb\x9e\x98\xec\x84\x9c UClass \xeb\xa1\x9c \xed\x96\x88\xec\x9d\x8c" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UEClass = { "UEClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, UEClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UEClass_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UEClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_IndexInPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_UEClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjHeader",
		Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers),
		sizeof(FTIHMngObjHeader),
		alignof(FTIHMngObjHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData;
class UScriptStruct* FTIHMngObjPrepareData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjPrepareData, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjPrepareData"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjPrepareData>()
{
	return FTIHMngObjPrepareData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UEClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_UEClassIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MngObjCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94 \xeb\xaa\xa9\xeb\xa1\x9d\xec\x9d\xb4\xeb\xa9\xb0 \xeb\xaa\x85\xeb\xa0\xb9\xec\x9d\xb4\xeb\x8b\xa4.\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94 \xeb\xaa\xa9\xeb\xa1\x9d\xec\x9d\xb4\xeb\xa9\xb0 \xeb\xaa\x85\xeb\xa0\xb9\xec\x9d\xb4\xeb\x8b\xa4." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjPrepareData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_UEClassIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_UEClassIndex = { "UEClassIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPrepareData, UEClassIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_UEClassIndex_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_UEClassIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_MngObjCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_MngObjCount = { "MngObjCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPrepareData, MngObjCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_MngObjCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_MngObjCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_UEClassIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewProp_MngObjCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjPrepareData",
		Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::PropPointers),
		sizeof(FTIHMngObjPrepareData),
		alignof(FTIHMngObjPrepareData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPrepareData()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure;
class UScriptStruct* FTIHMngObjPoolConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjPoolConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjPoolConfigure>()
{
	return FTIHMngObjPoolConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpaceAdd_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpaceAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocateCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_AllocateCapacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09memo\n\x09### \xec\x82\xac\xec\xa0\x84\xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94 \n\x09TArray< FTIHMngObj*> mWholeManagedObjects;\n\x09mGenerateTargetWorld\n\x09mGenerateOwner\n\x09""FTIHMngObjPool::mPrepareManagedObjects\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "memo\n### \xec\x82\xac\xec\xa0\x84\xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\nTArray< FTIHMngObj*> mWholeManagedObjects;\nmGenerateTargetWorld\nmGenerateOwner\nFTIHMngObjPool::mPrepareManagedObjects" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjPoolConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpace = { "AllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, AllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpaceAdd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09""0 \xec\x9d\xb4 \xea\xb8\xb0\xeb\xb3\xb8\xec\x9d\xb4\xea\xb3\xa0 \xec\xb6\x94\xea\xb0\x80\xea\xb0\x80 \xed\x95\x84\xec\x9a\x94\xed\x95\xa0\xea\xb2\xbd\xec\x9a\xb0 \xec\xb6\x94\xea\xb0\x80\xeb\x90\xa8\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 \xec\x9d\xb4 \xea\xb8\xb0\xeb\xb3\xb8\xec\x9d\xb4\xea\xb3\xa0 \xec\xb6\x94\xea\xb0\x80\xea\xb0\x80 \xed\x95\x84\xec\x9a\x94\xed\x95\xa0\xea\xb2\xbd\xec\x9a\xb0 \xec\xb6\x94\xea\xb0\x80\xeb\x90\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpaceAdd = { "AllocationSpaceAdd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, AllocationSpaceAdd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpaceAdd_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpaceAdd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocateCapacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocateCapacity = { "AllocateCapacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, AllocateCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocateCapacity_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocateCapacity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocationSpaceAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_AllocateCapacity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjPoolConfigure",
		Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers),
		sizeof(FTIHMngObjPoolConfigure),
		alignof(FTIHMngObjPoolConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure;
class UScriptStruct* FTIHMngObjPoolCenterConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjPoolCenterConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjPoolCenterConfigure>()
{
	return FTIHMngObjPoolCenterConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09memo\n\x09### \xec\x82\xac\xec\xa0\x84\xec\x97\x90 \xeb\xaf\xb8\xeb\xa6\xac \xed\x95\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\xec\x9d\xbc\n\x09- [ ] mManagedObjectFactory \xec\x9d\xb4\xea\xb1\xb0 \xec\x83\x9d\xec\x84\xb1\n\x09- [ ] mPrepareDatas \xec\x9d\xb4\xea\xb1\xb0 reserve\n\x09- [-] FTIHMngObjFactory \xec\x9d\x98 mGenStartCallBack \xeb\xa5\xbc \xec\x84\xa4\xec\xa0\x95 -> \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xed\x99\x94 \xed\x95\x98\xeb\xa9\xb4\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd\n\x09- [-] FTIHMngObjFactory \xec\x9d\x98 mGenEndCallBack \xeb\xa5\xbc \xec\x84\xa4\xec\xa0\x95 -> \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xed\x99\x94 \xed\x95\x98\xeb\xa9\xb4\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd\n\x09- [v] FTIHMngObjFactory \xec\x9d\xb4\xea\xb1\xb0\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4\xec\x84\x9c \xec\xb0\xa8\xeb\x9d\xbc\xeb\xa6\xac \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x93\xb8\xea\xb9\x8c? ->\xec\x99\x84\xeb\xa3\x8c\n\x09- [ ] FTIHMngObjGenerateQueues \xec\x9d\xb4\xea\xb1\xb0 \xeb\x8a\x98\xeb\xa6\xac\xeb\x8a\x94 reserve \xec\x8d\xa8\xec\x95\xbc\xed\x95\xa8. -> \xec\x9d\xb4\xea\xb1\xb0 factory \xec\x97\x90\xec\x84\x9c \xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94\xeb\x8d\xb0, \xec\x9d\xb4\xea\xb1\xb0 \xec\x96\xb4\xec\xbc\x80\xed\x95\x98\xec\xa7\x80 config \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\xa0\xeb\x93\xaf\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "memo\n### \xec\x82\xac\xec\xa0\x84\xec\x97\x90 \xeb\xaf\xb8\xeb\xa6\xac \xed\x95\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\xec\x9d\xbc\n- [ ] mManagedObjectFactory \xec\x9d\xb4\xea\xb1\xb0 \xec\x83\x9d\xec\x84\xb1\n- [ ] mPrepareDatas \xec\x9d\xb4\xea\xb1\xb0 reserve\n- [-] FTIHMngObjFactory \xec\x9d\x98 mGenStartCallBack \xeb\xa5\xbc \xec\x84\xa4\xec\xa0\x95 -> \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xed\x99\x94 \xed\x95\x98\xeb\xa9\xb4\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd\n- [-] FTIHMngObjFactory \xec\x9d\x98 mGenEndCallBack \xeb\xa5\xbc \xec\x84\xa4\xec\xa0\x95 -> \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xed\x99\x94 \xed\x95\x98\xeb\xa9\xb4\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd\n- [v] FTIHMngObjFactory \xec\x9d\xb4\xea\xb1\xb0\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4\xec\x84\x9c \xec\xb0\xa8\xeb\x9d\xbc\xeb\xa6\xac \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x93\xb8\xea\xb9\x8c? ->\xec\x99\x84\xeb\xa3\x8c\n- [ ] FTIHMngObjGenerateQueues \xec\x9d\xb4\xea\xb1\xb0 \xeb\x8a\x98\xeb\xa6\xac\xeb\x8a\x94 reserve \xec\x8d\xa8\xec\x95\xbc\xed\x95\xa8. -> \xec\x9d\xb4\xea\xb1\xb0 factory \xec\x97\x90\xec\x84\x9c \xed\x95\xb4\xec\xa3\xbc\xeb\x8a\x94\xeb\x8d\xb0, \xec\x9d\xb4\xea\xb1\xb0 \xec\x96\xb4\xec\xbc\x80\xed\x95\x98\xec\xa7\x80 config \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\xa0\xeb\x93\xaf" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjPoolCenterConfigure>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjPoolCenterConfigure",
		nullptr,
		0,
		sizeof(FTIHMngObjPoolCenterConfigure),
		alignof(FTIHMngObjPoolCenterConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo[] = {
		{ FTIHMeshPoolConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewStructOps, TEXT("TIHMeshPoolConfigure"), &Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMeshPoolConfigure), 2386625599U) },
		{ FTIHMeshPoolCenterConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewStructOps, TEXT("TIHMeshPoolCenterConfigure"), &Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMeshPoolCenterConfigure), 4261091302U) },
		{ FTIHMngObjFactoryConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjFactoryConfigure_Statics::NewStructOps, TEXT("TIHMngObjFactoryConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjFactoryConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjFactoryConfigure), 636526971U) },
		{ FTIHMngObjCompositeHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjCompositeHeader_Statics::NewStructOps, TEXT("TIHMngObjCompositeHeader"), &Z_Registration_Info_UScriptStruct_TIHMngObjCompositeHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjCompositeHeader), 725610455U) },
		{ FTIHMngObjActorStructureNode::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjActorStructureNode_Statics::NewStructOps, TEXT("TIHMngObjActorStructureNode"), &Z_Registration_Info_UScriptStruct_TIHMngObjActorStructureNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjActorStructureNode), 4230405503U) },
		{ FTIHMngObjState::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjState_Statics::NewStructOps, TEXT("TIHMngObjState"), &Z_Registration_Info_UScriptStruct_TIHMngObjState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjState), 1682845780U) },
		{ FTIHMngObjHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewStructOps, TEXT("TIHMngObjHeader"), &Z_Registration_Info_UScriptStruct_TIHMngObjHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjHeader), 2802496071U) },
		{ FTIHMngObjPrepareData::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPrepareData_Statics::NewStructOps, TEXT("TIHMngObjPrepareData"), &Z_Registration_Info_UScriptStruct_TIHMngObjPrepareData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPrepareData), 3369287607U) },
		{ FTIHMngObjPoolConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewStructOps, TEXT("TIHMngObjPoolConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolConfigure), 11518714U) },
		{ FTIHMngObjPoolCenterConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewStructOps, TEXT("TIHMngObjPoolCenterConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolCenterConfigure), 51749075U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHMeshPoolConfigObject, UTIHMeshPoolConfigObject::StaticClass, TEXT("UTIHMeshPoolConfigObject"), &Z_Registration_Info_UClass_UTIHMeshPoolConfigObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHMeshPoolConfigObject), 3340085010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_494599546(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
