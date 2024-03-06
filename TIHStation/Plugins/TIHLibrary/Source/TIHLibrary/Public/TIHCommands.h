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
//#ifdef TTTT
//using FTIHNewAllocPrepareDatas = FTIHNewAllocPrepareData;
//using FTIHNewAllocOnGenerateDatas = FTIHMngObjPoolConfigureDatas;
///*
//┌──────────────────────────────────────────────────────────────────────────────────────────┐
//										Command Implement
//└──────────────────────────────────────────────────────────────────────────────────────────┘
//*/
//class FTIHCommandCreateNewAllocPrepare : public TTIHCommand<FTIHNewAllocPrepareDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAllocPrepare);
//public:
//	FTIHCommandCreateNewAllocPrepare();
//	virtual ~FTIHCommandCreateNewAllocPrepare();
//};
//
//
//class FTIHCommandCreateNewAllocOnGenerate : public TTIHCommand<FTIHMngObjPoolConfigureDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAllocOnGenerate);
//public:
//	FTIHCommandCreateNewAllocOnGenerate();
//	virtual ~FTIHCommandCreateNewAllocOnGenerate();
//};
//
//class FTIHCommandCreatePooling : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreatePooling);
//public:
//	FTIHCommandCreatePooling();
//	virtual ~FTIHCommandCreatePooling();
//};
//
//class FTIHCommandCreateReject : public TTIHCommand<FTIHMngObjPoolConfigureDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateReject);
//public:
//	FTIHCommandCreateReject();
//	virtual ~FTIHCommandCreateReject();
//};
//
//USTRUCT()
//struct FTIHCommandServerConnectDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandServerConnect : public TTIHCommand<FTIHCommandServerConnectDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerConnect);
//public:
//	FTIHCommandServerConnect();
//	virtual ~FTIHCommandServerConnect();
//};
//
//
//USTRUCT()
//struct FTIHCommandServerSendDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandServerSend : public TTIHCommand<FTIHCommandServerSendDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerSend);
//public:
//	FTIHCommandServerSend();
//	virtual ~FTIHCommandServerSend();
//};
//
//
//USTRUCT()
//struct FTIHCommandServerListenDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandServerListen : public TTIHCommand<FTIHCommandServerListenDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerListen);
//public:
//	FTIHCommandServerListen();
//	virtual ~FTIHCommandServerListen();
//};
//
//USTRUCT()
//struct FTIHCommandServerDisConnectDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandServerDisConnect : public TTIHCommand<FTIHCommandServerDisConnectDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerDisConnect);
//public:
//	FTIHCommandServerDisConnect();
//	virtual ~FTIHCommandServerDisConnect();
//};
//
//USTRUCT()
//struct FTIHCommandDeleteRejectPoolDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandDeleteRejectPool : public TTIHCommand<FTIHCommandDeleteRejectPoolDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandDeleteRejectPool);
//public:
//	FTIHCommandDeleteRejectPool();
//	virtual ~FTIHCommandDeleteRejectPool();
//};
//
//USTRUCT()
//struct FTIHCommanEDeleteDestoryDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommanEDeleteDestory : public TTIHCommand<FTIHCommanEDeleteDestoryDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommanEDeleteDestory);
//public:
//	FTIHCommanEDeleteDestory();
//	virtual ~FTIHCommanEDeleteDestory();
//};
//
//
//USTRUCT()
//struct FTIHCommandModifyTransformDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandModifyTransform : public TTIHCommand<FTIHCommandModifyTransformDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyTransform);
//public:
//	FTIHCommandModifyTransform();
//	virtual ~FTIHCommandModifyTransform();
//};
//
//
//USTRUCT()
//struct FTIHCommandModifyMeshData
//{
//	GENERATED_BODY()
//
//	UPROPERTY()
//	int8 ModifyValueType;
//
//	UPROPERTY()
//	int8 MngObjPoolAllocationSpace;
//
//	UPROPERTY()
//	int16 MngObjCompositeIndex;
//
//	UPROPERTY()
//	int16 MngObjIndex;
//
//	UPROPERTY()
//	int16 LoadedMeshIndex;
//};
//
//class FTIHCommandModifyMesh : public TTIHCommand<FTIHCommandModifyMeshData>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyMesh);
//public:
//	FTIHCommandModifyMesh();
//	virtual ~FTIHCommandModifyMesh();
//};
//
//USTRUCT()
//struct FTIHCommandModifyMeshDatas
//{
//	GENERATED_BODY()
//
//	UPROPERTY()
//	int8 ModifyValueType;
//
//	UPROPERTY()
//	int8 MngObjPoolAllocationSpace;
//
//	UPROPERTY()
//	int16 MngObjCompositeIndex;
//
//	UPROPERTY()
//	int16 MngObjStartIndex;
//
//	UPROPERTY()
//	int16 LoadedMeshStartIndex;
//};
//
//class FTIHCommandModifyMeshs : public TTIHCommand<FTIHCommandModifyMeshDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyMeshs);
//public:
//	FTIHCommandModifyMeshs();
//	virtual ~FTIHCommandModifyMeshs();
//};
//
//
//USTRUCT()
//struct FTIHCommandModifyValueDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandModifyValue : public TTIHCommand<FTIHCommandModifyValueDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyValue);
//public:
//	FTIHCommandModifyValue();
//	virtual ~FTIHCommandModifyValue();
//};
//
//
//USTRUCT()
//struct FTIHCommandInOutReadAndSaveDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandInOutReadAndSave : public TTIHCommand<FTIHCommandInOutReadAndSaveDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutReadAndSave);
//public:
//	FTIHCommandInOutReadAndSave();
//	virtual ~FTIHCommandInOutReadAndSave();
//};
//
//
//USTRUCT()
//struct FTIHCommandInOutWriteAndModifyDatas
//{
//	GENERATED_BODY()
//
//};
//class FTIHCommandInOutWriteAndModify : public TTIHCommand<FTIHCommandInOutWriteAndModifyDatas>
//{
//	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutWriteAndModify);
//public:
//	FTIHCommandInOutWriteAndModify() {};
//	virtual ~FTIHCommandInOutWriteAndModify() {};
//};
//#pragma endregion Commands
//#endif
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										Commands										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
/*
## 새로운 커맨드 제작
	1. feature 가 중요하다
	2. 피처들은 모두 언리얼꺼로 만든다. 물론 핏하게 만든다.
	3. 어차피 대부분의 것들은 strategy 에서 처리해줄거임
	4. 내용
		+ FTIHCommandModifyConfigure
		+ FTIHCommandModifyPrepareMesh
			+ 복수형은 FTIHCommandModifyPrepareMeshes
		+ FTIHCommandModifyLoadMesh
			+ 복숳형은 FTIHCommandModifyLoadMeshes
		+ FTIHCommandModifyLoadMeshes
		+ FTIHCommandCreateNewAllocConfig
		+ FTIHCommandCreateNewAllocPrepare
		+ FTIHCommandCreateNewAllocOnGenerate
		+ FTIHCommandMngObjPooling
		+ FTIHCommandMngObjReject
	5. TIHCmd라고 이름을 바꾼걸 cmd 로 쓸거임. 이게 모든것의 명령임
	6. 일단 만들고나서 연결이 가능한것들은 연결을 할거임.
*/


USTRUCT()
struct FTemplateStruct
{
	GENERATED_BODY()
};

/*
	이거 쓸까? 쓰지말자
*/
//#define TIHMACRO_COMMAND_CLASS_TEMPLATE_CUSTOM_BEGIN(thisClass , thisClassFeatureStruct )\
//class thisClass : public TTIHCommand<thisClassFeatureStruct>\
//{\
//TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(thisClass);
//
////#define TIHMACRO_COMMAND_CLASS_TEMPLATE_CUSTOM_END(thisClass)\
////int32 GetCommandSize(){ int32 reValue = sizeof( thisClass );return reValue;}\
////}
//
//#define TIHMACRO_COMMAND_CLASS_TEMPLATE( thisClass , thisClassFeatureStruct ) \
//class thisClass : public TTIHCommand<thisClassFeatureStruct>\
//{\
//TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(thisClass);\
//public:\
//thisClass(){};\
//virtual ~thisClass(){};\
//}

/*
	필요한 컨셉을 써보고 뇌코딩
		뇌코딩시에는
			전체적인 방법을 먼저생각하고 하나하나 쪼개보고 더 쪼개는 방식으로 가기
		그리고 마지막에 한번의 검증

	Create
		NewAlloc
			매니지드 오브젝트를 NewAlloc 할거임
			그럼 이름도 바뀌어야 할거같은데 어떻게 하지?
				-> 일단 이름을 바꾸는건 확인

			cmdCreateNewAllocMngObjPrepareData
			cmdCreateNewAlloc
		Pooling
			TryActor

		스테이션에 있는 strategy 를 변경해야한다


*/



class FTIHCmdMngObjAllocPoolCenterSetConfigure : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdMngObjAllocPoolCenterSetConfigure);
public:
	FTIHCmdMngObjAllocPoolCenterSetConfigure() 
	{
		//mCmdHeader.SetProtocol((int8)ETIHCommandHeaderProtocols::EManagedObject);

	};
	virtual ~FTIHCmdMngObjAllocPoolCenterSetConfigure() {};
};

class FTIHCmdMngObjAllocPoolReserve : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdMngObjAllocPoolReserve);
public:
	FTIHCmdMngObjAllocPoolReserve() {};
	virtual ~FTIHCmdMngObjAllocPoolReserve() {};
};

using FTIHCmdMngObjAllocPrepareDatasDatas = FTIHNewAllocPrepareData;

class FTIHCmdMngObjAllocPrepareDatas : public TTIHCommand<FTIHCmdMngObjAllocPrepareDatasDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdMngObjAllocPrepareDatas);
public:
	FTIHCmdMngObjAllocPrepareDatas() {};
	virtual ~FTIHCmdMngObjAllocPrepareDatas() {};
};

using FTIHCmdMngObjAllocOnGenerateDatas = FTIHMngObjPoolConfigureDatas;

class FTIHCmdMngObjAllocOnGenerate : public TTIHCommand<FTIHCmdMngObjAllocOnGenerateDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdMngObjAllocOnGenerate);
public:
	FTIHCmdMngObjAllocOnGenerate() {};
	virtual ~FTIHCmdMngObjAllocOnGenerate() {};
};

//	stmesh
class FTIHCmdMeshPoolSetConfigure : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdMeshPoolSetConfigure);
public:
	FTIHCmdMeshPoolSetConfigure() {};
	virtual ~FTIHCmdMeshPoolSetConfigure() {};
};

class FTIHCmdStMeshPathListLoadByServer : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshPathListLoadByServer);
public:
	FTIHCmdStMeshPathListLoadByServer() {};
	virtual ~FTIHCmdStMeshPathListLoadByServer() {};
};

class FTIHCmdStMeshPathListLoadByConfigObject: public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshPathListLoadByConfigObject);
public:
	FTIHCmdStMeshPathListLoadByConfigObject() {};
	virtual ~FTIHCmdStMeshPathListLoadByConfigObject() {};
};

class FTIHCmdStMeshPathListLoadBySpecial: public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshPathListLoadBySpecial);
public:
	FTIHCmdStMeshPathListLoadBySpecial() {};
	virtual ~FTIHCmdStMeshPathListLoadBySpecial() {};
};

class FTIHCmdStMeshesLoadBySlidingWindow : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshesLoadBySlidingWindow);
public:
	FTIHCmdStMeshesLoadBySlidingWindow() {};
	virtual ~FTIHCmdStMeshesLoadBySlidingWindow() {};
};

class FTIHCmdStMeshesLoadByList : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshesLoadByList);
public:
	FTIHCmdStMeshesLoadByList() {};
	virtual ~FTIHCmdStMeshesLoadByList() {};
};

class FTIHCmdStMeshesLoadAll : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshesLoadAll);
public:
	FTIHCmdStMeshesLoadAll() {};
	virtual ~FTIHCmdStMeshesLoadAll() {};
};

class FTIHCmdStMeshQuery : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshQuery);
public:
	FTIHCmdStMeshQuery() {};
	virtual ~FTIHCmdStMeshQuery() {};
};


class FTIHCmdStMeshModifyMeshes : public TTIHCommand<FTemplateStruct>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdStMeshModifyMeshes);
public:
	FTIHCmdStMeshModifyMeshes() {};
	virtual ~FTIHCmdStMeshModifyMeshes() {};
};




