#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.h"
#include "TIHCommandCore.h"
#include "TIHCommands.generated.h"
//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Forward Declares									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Forward Declares
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Class
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

class FTIHCommandCreateNewAllocPrepare;
class FTIHCommandCreateNewAllocOnGenerate;
class FTIHCommandCreatePooling;
class FTIHCommandCreateReject;
class FTIHCommandServerConnect;
class FTIHCommandServerSend;
class FTIHCommandServerListen;
class FTIHCommandServerDisConnect;
class FTIHCommandDeleteRejectPool;
class FTIHCommanEDeleteDestory;
class FTIHCommandModifyTransform;
class FTIHCommandModifyValue;
class FTIHCommandInOutReadAndSave;
class FTIHCommandInOutWriteAndModify;

class FTIHCommandDataBoard;
class FTIHCommandShareBoard;
class FTIHCommandResultBoard;
class FTIHCommandPathBoard;


/*이거는 strategy 때문에 이렇게 해줌.근데 커맨더를 다른곳에 빼도 될거같긴한데 일단은*/
class FTIHCommanderStrategyCreateNewAlloc;
class FTIHCommanderStrategyCreateAssignPool;
class FTIHCommanderStrategyServerConnect;
class FTIHCommanderStrategyServerSend;
class FTIHCommanderStrategyServerListen;
class FTIHCommanderStrategyServerDisConnect;
class FTIHCommanderStrategyDeleteRejectPool;
class FTIHCommanderStrategyDeleteDestory;
class FTIHCommanderStrategyModifyTransform;
class FTIHCommanderStrategyModifyValue;
class FTIHCommanderStrategyInOutReadAndSave;
class FTIHCommanderStrategyInOutWriteAndModify;
class FTIHCommanderExtentionForExeCmdStrategy;
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Unions
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Structures
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

struct FTIHCommandServerConnectDatas;
struct FTIHCommandServerSendDatas;
struct FTIHCommandServerListenDatas;
struct FTIHCommandServerDisConnectDatas;
struct FTIHCommandDeleteRejectPoolDatas;
struct FTIHCommanEDeleteDestoryDatas;
struct FTIHCommandModifyTransformDatas;
struct FTIHCommandModifyValueDatas;
struct FTIHCommandInOutReadAndSaveDatas;
struct FTIHCommandInOutWriteAndModifyDatas;

struct FTIHCommandFunctorHeader;

#pragma endregion Forward Declares
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Forward Declares									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Command Meta Infos									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Command Meta Infos
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Sub_Title
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/


#pragma endregion Command Meta Infos
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Command Meta Infos									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										Commands										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Commands
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
									CommandBase
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Command Datas
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
using FTIHNewAllocPrepareDatas = FTIHNewAllocPrepareData;
using FTIHNewAllocOnGenerateDatas = FTIHMngObjPoolConfigureDatas;
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Command Implement
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHCommandCreateNewAllocPrepare : public TTIHCommand<FTIHNewAllocPrepareDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAllocPrepare);
public:
	FTIHCommandCreateNewAllocPrepare();
	virtual ~FTIHCommandCreateNewAllocPrepare();
};


class FTIHCommandCreateNewAllocOnGenerate : public TTIHCommand<FTIHMngObjPoolConfigureDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAllocOnGenerate);
public:
	FTIHCommandCreateNewAllocOnGenerate();
	virtual ~FTIHCommandCreateNewAllocOnGenerate();
};

class FTIHCommandCreatePooling : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreatePooling);
public:
	FTIHCommandCreatePooling();
	virtual ~FTIHCommandCreatePooling();
};

class FTIHCommandCreateReject : public TTIHCommand<FTIHMngObjPoolConfigureDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateReject);
public:
	FTIHCommandCreateReject();
	virtual ~FTIHCommandCreateReject();
};

USTRUCT()
struct FTIHCommandServerConnectDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerConnect : public TTIHCommand<FTIHCommandServerConnectDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerConnect);
public:
	FTIHCommandServerConnect();
	virtual ~FTIHCommandServerConnect();
};


USTRUCT()
struct FTIHCommandServerSendDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerSend : public TTIHCommand<FTIHCommandServerSendDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerSend);
public:
	FTIHCommandServerSend();
	virtual ~FTIHCommandServerSend();
};


USTRUCT()
struct FTIHCommandServerListenDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerListen : public TTIHCommand<FTIHCommandServerListenDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerListen);
public:
	FTIHCommandServerListen();
	virtual ~FTIHCommandServerListen();
};

USTRUCT()
struct FTIHCommandServerDisConnectDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerDisConnect : public TTIHCommand<FTIHCommandServerDisConnectDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerDisConnect);
public:
	FTIHCommandServerDisConnect();
	virtual ~FTIHCommandServerDisConnect();
};

USTRUCT()
struct FTIHCommandDeleteRejectPoolDatas
{
	GENERATED_BODY()

};
class FTIHCommandDeleteRejectPool : public TTIHCommand<FTIHCommandDeleteRejectPoolDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandDeleteRejectPool);
public:
	FTIHCommandDeleteRejectPool();
	virtual ~FTIHCommandDeleteRejectPool();
};

USTRUCT()
struct FTIHCommanEDeleteDestoryDatas
{
	GENERATED_BODY()

};
class FTIHCommanEDeleteDestory : public TTIHCommand<FTIHCommanEDeleteDestoryDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommanEDeleteDestory);
public:
	FTIHCommanEDeleteDestory();
	virtual ~FTIHCommanEDeleteDestory();
};


USTRUCT()
struct FTIHCommandModifyTransformDatas
{
	GENERATED_BODY()

};
class FTIHCommandModifyTransform : public TTIHCommand<FTIHCommandModifyTransformDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyTransform);
public:
	FTIHCommandModifyTransform();
	virtual ~FTIHCommandModifyTransform();
};


USTRUCT()
struct FTIHCommandModifyMeshData
{
	GENERATED_BODY()

	UPROPERTY()
	int8 ModifyValueType;

	UPROPERTY()
	int8 MngObjPoolAllocationSpace;

	UPROPERTY()
	int16 MngObjCompositeIndex;

	UPROPERTY()
	int16 MngObjIndex;

	UPROPERTY()
	int16 LoadedMeshIndex;
};

class FTIHCommandModifyMesh : public TTIHCommand<FTIHCommandModifyMeshData>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyMesh);
public:
	FTIHCommandModifyMesh();
	virtual ~FTIHCommandModifyMesh();
};

USTRUCT()
struct FTIHCommandModifyMeshDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int8 ModifyValueType;

	UPROPERTY()
	int8 MngObjPoolAllocationSpace;

	UPROPERTY()
	int16 MngObjCompositeIndex;

	UPROPERTY()
	int16 MngObjStartIndex;

	UPROPERTY()
	int16 LoadedMeshStartIndex;
};

class FTIHCommandModifyMeshs : public TTIHCommand<FTIHCommandModifyMeshDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyMeshs);
public:
	FTIHCommandModifyMeshs();
	virtual ~FTIHCommandModifyMeshs();
};


USTRUCT()
struct FTIHCommandModifyValueDatas
{
	GENERATED_BODY()

};
class FTIHCommandModifyValue : public TTIHCommand<FTIHCommandModifyValueDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyValue);
public:
	FTIHCommandModifyValue();
	virtual ~FTIHCommandModifyValue();
};


USTRUCT()
struct FTIHCommandInOutReadAndSaveDatas
{
	GENERATED_BODY()

};
class FTIHCommandInOutReadAndSave : public TTIHCommand<FTIHCommandInOutReadAndSaveDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutReadAndSave);
public:
	FTIHCommandInOutReadAndSave();
	virtual ~FTIHCommandInOutReadAndSave();
};


USTRUCT()
struct FTIHCommandInOutWriteAndModifyDatas
{
	GENERATED_BODY()

};
class FTIHCommandInOutWriteAndModify : public TTIHCommand<FTIHCommandInOutWriteAndModifyDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutWriteAndModify);
public:
	FTIHCommandInOutWriteAndModify();
	virtual ~FTIHCommandInOutWriteAndModify();
};
#pragma endregion Commands
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										Commands										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

class FTIHCommandDataBoard
{
public:
	TIHReturn64 ReserveForArrayInt8ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int8>>(size, mInt8Array);
	}
	TIHReturn64 ReserveForArrayInt16ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int16>>(size, mInt16Array);
	}
	TIHReturn64 ReserveForArrayInt32ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int32>>(size, mInt32Array);
	}
	TIHReturn64 ReserveForArrayInt64ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int64>>(size, mInt64Array);
	}
	TIHReturn64 ReserveForArrayFloatByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<float>>(size, mFloatArray);
	}
	TIHReturn64 ReserveForArrayDoubleByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<double>>(size, mDoubleArray);
	}
	TIHReturn64 ReserveForArrayVector3fByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FVector>>(size, mVectorArray);
	}
	TIHReturn64 ReserveForArrayTransformByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FTransform>>(size, mTransformArray);
	}
	TIHReturn64 ReserveForArrayStringByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FString>>(size, mStringArray);
	}

	TIHReturn64 RegisterToArrayAsInt8(const int8& value)
	{
		return RegisterToArray<int8, TArray<int8>>(value, mInt8Array);
	}
	TIHReturn64 RegisterToArrayAsInt16(const int16& value)
	{
		return RegisterToArray<int16, TArray<int16>>(value, mInt16Array);
	}
	TIHReturn64 RegisterToArrayAsInt32(const int32& value)
	{
		return RegisterToArray<int32, TArray<int32>>(value, mInt32Array);
	}
	TIHReturn64 RegisterToArrayAsInt64(const int64& value)
	{
		return RegisterToArray<int64, TArray<int64>>(value, mInt64Array);
	}
	TIHReturn64 RegisterToArrayAsFloat(const float& value)
	{
		return RegisterToArray<float, TArray<float>>(value, mFloatArray);
	}
	TIHReturn64 RegisterToArrayAsDouble(const double& value)
	{
		return RegisterToArray<double, TArray<double>>(value, mDoubleArray);
	}
	TIHReturn64 RegisterToArrayAsVector(const FVector& value)
	{
		return RegisterToArray<FVector, TArray<FVector>>(value, mVectorArray);
	}
	TIHReturn64 RegisterToArrayAsTransform(const FTransform& value)
	{
		return RegisterToArray<FTransform, TArray<FTransform>>(value, mTransformArray);
	}
	TIHReturn64 RegisterToArrayAsString(const FString& value)
	{
		return RegisterToArray<FString, TArray<FString>>(value, mStringArray);
	}


	const int32 GetDataInInt8Array(int32 index)
	{
		return mInt8Array[index];
	}
	const int64 GetDataInInt16Array(int32 index)
	{
		return mInt16Array[index];
	}

	const int32 GetDataInInt32Array(int32 index)
	{
		return mInt32Array[index];
	}
	const int64 GetDataInInt64Array(int32 index)
	{
		return mInt64Array[index];
	}
	const float GetDataInFloatArray(int32 index)
	{
		return mFloatArray[index];
	}
	const double GetDataInDoubleArray(int32 index)
	{
		return mDoubleArray[index];
	}
	const FVector& GetDataInVectorArray(int32 index)
	{
		return mVectorArray[index];
	}
	const FTransform& GetDataInTransformArray(int32 index)
	{
		return mTransformArray[index];
	}
	const FString& GetDataInStringArray(int32 index)
	{
		return mStringArray[index];
	}


private:
	TArray<int8> mInt8Array;
	TArray<int16> mInt16Array;
	TArray<int32> mInt32Array;
	TArray<int64> mInt64Array;
	TArray<float> mFloatArray;
	TArray<double> mDoubleArray;
	TArray<FVector> mVectorArray;
	TArray<FTransform> mTransformArray;
	TArray<FString> mStringArray;
	template<typename TIHTemplateType = TArray<int32>>
	TIHReturn64 ReserveForArrayByGrowing(int32 size, TIHTemplateType& memeberArray)
	{
		FUnionTIHDataBoardResult reValue;
		reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::EReserve;
		reValue.ReserveDetail.PreMax = memeberArray.Max();

		int16 reserveValue = size - reValue.ReserveDetail.PreMax;
		if (reserveValue < 1)
		{
			if (reserveValue == 0)
			{
				reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Void;
			}
			else
			{
				reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
			}
		}
		else
		{
			reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Success;
			memeberArray.Reserve(size);
			//reValue.ReserveDetail.CurMax = memeberArray.Max();
		}
		return reValue.WholeData;
	}

	template<typename TIHTemplateValueType = int32, typename TIHTemplateArrayType = TArray<int32>>
	TIHReturn64 RegisterToArray(const TIHTemplateValueType& value, TIHTemplateArrayType& memberArray)
	{
		FUnionTIHDataBoardResult reValue;
		reValue.RegisterDetail.Protocol = (int8)ETIHResultDetailProtocols::ERegister;
		reValue.RegisterDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
		int32 curPushIndex = memberArray.Num();
		if (curPushIndex < memberArray.Max())
		{
			reValue.RegisterDetail.RegistedIndex = memberArray.Add(value);
		}
		return reValue.WholeData;
	}
};
class FTIHCommandDataBoardCenter
{
public:
	

};


class FTIHCommandShareBoard
{
public:
	FTIHCommandShareBoard() {};
	~FTIHCommandShareBoard() {};

	//	샤딩을 넣는다면 여기에 넣어야겠지?

	FTIHCommandDataBoard mBoard;
};

class FTIHCommandResultBoard
{
public:
	FTIHCommandResultBoard() {};
	~FTIHCommandResultBoard() {};



	FTIHCommandDataBoard mBoard;
};

class FTIHCommandPathBoard
{
public:
	FTIHCommandPathBoard() {};
	~FTIHCommandPathBoard() {};

	TMap<FName, FString> mPathAddtions;

	FTIHCommandDataBoard mBoard;
};
