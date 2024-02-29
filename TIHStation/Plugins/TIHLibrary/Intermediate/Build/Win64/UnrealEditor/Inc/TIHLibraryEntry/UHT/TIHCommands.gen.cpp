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
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyMeshData();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerListenDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerSendDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas;
class UScriptStruct* FTIHCommandServerConnectDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerConnectDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerConnectDatas>()
{
	return FTIHCommandServerConnectDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerConnectDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerConnectDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerConnectDatas),
		alignof(FTIHCommandServerConnectDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas;
class UScriptStruct* FTIHCommandServerSendDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerSendDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerSendDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerSendDatas>()
{
	return FTIHCommandServerSendDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerSendDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerSendDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerSendDatas),
		alignof(FTIHCommandServerSendDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerSendDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas;
class UScriptStruct* FTIHCommandServerListenDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerListenDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerListenDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerListenDatas>()
{
	return FTIHCommandServerListenDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerListenDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerListenDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerListenDatas),
		alignof(FTIHCommandServerListenDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerListenDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas;
class UScriptStruct* FTIHCommandServerDisConnectDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerDisConnectDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerDisConnectDatas>()
{
	return FTIHCommandServerDisConnectDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerDisConnectDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerDisConnectDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerDisConnectDatas),
		alignof(FTIHCommandServerDisConnectDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas;
class UScriptStruct* FTIHCommandDeleteRejectPoolDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandDeleteRejectPoolDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandDeleteRejectPoolDatas>()
{
	return FTIHCommandDeleteRejectPoolDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandDeleteRejectPoolDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandDeleteRejectPoolDatas",
		nullptr,
		0,
		sizeof(FTIHCommandDeleteRejectPoolDatas),
		alignof(FTIHCommandDeleteRejectPoolDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas;
class UScriptStruct* FTIHCommanEDeleteDestoryDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommanEDeleteDestoryDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommanEDeleteDestoryDatas>()
{
	return FTIHCommanEDeleteDestoryDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommanEDeleteDestoryDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommanEDeleteDestoryDatas",
		nullptr,
		0,
		sizeof(FTIHCommanEDeleteDestoryDatas),
		alignof(FTIHCommanEDeleteDestoryDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas;
class UScriptStruct* FTIHCommandModifyTransformDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandModifyTransformDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandModifyTransformDatas>()
{
	return FTIHCommandModifyTransformDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandModifyTransformDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandModifyTransformDatas",
		nullptr,
		0,
		sizeof(FTIHCommandModifyTransformDatas),
		alignof(FTIHCommandModifyTransformDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData;
class UScriptStruct* FTIHCommandModifyMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandModifyMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandModifyMeshData>()
{
	return FTIHCommandModifyMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyValueType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ModifyValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjPoolAllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MngObjPoolAllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjCompositeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MngObjCompositeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MngObjIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedMeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_LoadedMeshIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandModifyMeshData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_ModifyValueType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_ModifyValueType = { "ModifyValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshData, ModifyValueType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_ModifyValueType_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_ModifyValueType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjPoolAllocationSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjPoolAllocationSpace = { "MngObjPoolAllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshData, MngObjPoolAllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjPoolAllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjPoolAllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjCompositeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjCompositeIndex = { "MngObjCompositeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshData, MngObjCompositeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjCompositeIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjCompositeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjIndex = { "MngObjIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshData, MngObjIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_LoadedMeshIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_LoadedMeshIndex = { "LoadedMeshIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshData, LoadedMeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_LoadedMeshIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_LoadedMeshIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_ModifyValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjPoolAllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjCompositeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_MngObjIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewProp_LoadedMeshIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandModifyMeshData",
		Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::PropPointers),
		sizeof(FTIHCommandModifyMeshData),
		alignof(FTIHCommandModifyMeshData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas;
class UScriptStruct* FTIHCommandModifyMeshDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandModifyMeshDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandModifyMeshDatas>()
{
	return FTIHCommandModifyMeshDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyValueType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ModifyValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjPoolAllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MngObjPoolAllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjCompositeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MngObjCompositeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MngObjStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MngObjStartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedMeshStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_LoadedMeshStartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandModifyMeshDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_ModifyValueType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_ModifyValueType = { "ModifyValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshDatas, ModifyValueType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_ModifyValueType_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_ModifyValueType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjPoolAllocationSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjPoolAllocationSpace = { "MngObjPoolAllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshDatas, MngObjPoolAllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjPoolAllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjPoolAllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjCompositeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjCompositeIndex = { "MngObjCompositeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshDatas, MngObjCompositeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjCompositeIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjCompositeIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjStartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjStartIndex = { "MngObjStartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshDatas, MngObjStartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjStartIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjStartIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_LoadedMeshStartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_LoadedMeshStartIndex = { "LoadedMeshStartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandModifyMeshDatas, LoadedMeshStartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_LoadedMeshStartIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_LoadedMeshStartIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_ModifyValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjPoolAllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjCompositeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_MngObjStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewProp_LoadedMeshStartIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandModifyMeshDatas",
		Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::PropPointers),
		sizeof(FTIHCommandModifyMeshDatas),
		alignof(FTIHCommandModifyMeshDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas;
class UScriptStruct* FTIHCommandModifyValueDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandModifyValueDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandModifyValueDatas>()
{
	return FTIHCommandModifyValueDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandModifyValueDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandModifyValueDatas",
		nullptr,
		0,
		sizeof(FTIHCommandModifyValueDatas),
		alignof(FTIHCommandModifyValueDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas;
class UScriptStruct* FTIHCommandInOutReadAndSaveDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandInOutReadAndSaveDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandInOutReadAndSaveDatas>()
{
	return FTIHCommandInOutReadAndSaveDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandInOutReadAndSaveDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandInOutReadAndSaveDatas",
		nullptr,
		0,
		sizeof(FTIHCommandInOutReadAndSaveDatas),
		alignof(FTIHCommandInOutReadAndSaveDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas;
class UScriptStruct* FTIHCommandInOutWriteAndModifyDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandInOutWriteAndModifyDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandInOutWriteAndModifyDatas>()
{
	return FTIHCommandInOutWriteAndModifyDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandInOutWriteAndModifyDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandInOutWriteAndModifyDatas",
		nullptr,
		0,
		sizeof(FTIHCommandInOutWriteAndModifyDatas),
		alignof(FTIHCommandInOutWriteAndModifyDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo[] = {
		{ FTIHCommandServerConnectDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::NewStructOps, TEXT("TIHCommandServerConnectDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerConnectDatas), 945904665U) },
		{ FTIHCommandServerSendDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::NewStructOps, TEXT("TIHCommandServerSendDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerSendDatas), 3920132505U) },
		{ FTIHCommandServerListenDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::NewStructOps, TEXT("TIHCommandServerListenDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerListenDatas), 1638330967U) },
		{ FTIHCommandServerDisConnectDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::NewStructOps, TEXT("TIHCommandServerDisConnectDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerDisConnectDatas), 2196975461U) },
		{ FTIHCommandDeleteRejectPoolDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::NewStructOps, TEXT("TIHCommandDeleteRejectPoolDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandDeleteRejectPoolDatas), 3902375792U) },
		{ FTIHCommanEDeleteDestoryDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::NewStructOps, TEXT("TIHCommanEDeleteDestoryDatas"), &Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommanEDeleteDestoryDatas), 1013351403U) },
		{ FTIHCommandModifyTransformDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::NewStructOps, TEXT("TIHCommandModifyTransformDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandModifyTransformDatas), 1373459174U) },
		{ FTIHCommandModifyMeshData::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandModifyMeshData_Statics::NewStructOps, TEXT("TIHCommandModifyMeshData"), &Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandModifyMeshData), 879019876U) },
		{ FTIHCommandModifyMeshDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandModifyMeshDatas_Statics::NewStructOps, TEXT("TIHCommandModifyMeshDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandModifyMeshDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandModifyMeshDatas), 2965406298U) },
		{ FTIHCommandModifyValueDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::NewStructOps, TEXT("TIHCommandModifyValueDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandModifyValueDatas), 1646058626U) },
		{ FTIHCommandInOutReadAndSaveDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::NewStructOps, TEXT("TIHCommandInOutReadAndSaveDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandInOutReadAndSaveDatas), 508582326U) },
		{ FTIHCommandInOutWriteAndModifyDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::NewStructOps, TEXT("TIHCommandInOutWriteAndModifyDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandInOutWriteAndModifyDatas), 894517057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_2313739243(TEXT("/Script/TIHLibraryEntry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
