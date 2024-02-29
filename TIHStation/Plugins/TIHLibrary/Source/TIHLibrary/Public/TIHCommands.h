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
