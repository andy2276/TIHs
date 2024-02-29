// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"

#include "TIHCommandCore.h"
#include "TIHCommands.h"
#include "TIHStrategies.h"
#include "TIHNetworks.h"

#include "TIHStationCore.generated.h"


#pragma region Forward Declare
//	enum	ETIHAsyncType
//	enum	ETIHMainState

union	FUnionTIHStateValue;
struct	FTIHStateValueDetail;
struct	FTIHServerConfigure;

class	FTIHState;
class	FTIHTagWrapper;
class	FTIHCommand;
class	FTIHCommandList;
class	FTIHCommander;
class	FTIHPakInfra;


class	FTIHMngObj;
class	FTIHMngObjPool;

class	FTIHNetwork;

template<typename TIHTemplateType> class TTIHStationCRTP;

class	FTIHStationPolymorphInterface;
class	FTIHDefaultStation;


#pragma endregion

#pragma region TIH Miscellaneous

#pragma region Macros_bases



class FTIHProtocolHelper
{
public:
	static FTIHProtocolHelper& GetSingle()
	{
		static FTIHProtocolHelper helper;
		return helper;
	}

	const FTIHMngObjHeader& GetManagedObjectHeaderForInit()
	{
		return FTIHProtocolHelper::GetSingle().mManagedObjectHeaderForInit;
	}
private:

	FTIHProtocolHelper()
	{
		mManagedObjectHeaderForInit.Protocol = (int8)ETIHManagedObjectHeaderProtocols::ENotUse;
		//mManagedObjectHeaderForInit.ProtocolOption = (int8)ETIHManagedObjectHeaderProtocolOptions::ENotUse;
		//mManagedObjectHeaderForInit.ComponentProtocol = (int8)ETIHManagedObjectHeaderComponentProtocols::ENotUse;
		//mManagedObjectHeaderForInit.AllocatedSpace = (int8)ETIHManagedObjectSpace::ELoaclSpace;
	};

	FTIHMngObjHeader mManagedObjectHeaderForInit;
};

class FTIHResultHelper
{
public:
	static FTIHResultHelper& GetSingle()
	{
		static FTIHResultHelper helper;
		return helper;
	}

private:
	FTIHResultHelper()
	{

	};

};
//sc e



/*!
*	@brief 
*	@detail 
*/

//sc s


//sc e


#pragma endregion
#pragma region Commands
/*
	commander : 커맨드를 실행시키고 여러 도움이 되는 기능을 담고있는녀석
	commandList : 커맨드 목록이다. 목록을 컨트롤 하기위해 만든 인터페이스
	commandShaerBoard : 커맨드 쉐어보드. 데이터를 담고있다.이거는 dynamicPolymorphism 을 사용하자.
	commandState : 커맨드의 상태를 담고있다.
	command : 명령을 담고있다.
	commandHeaer : 구체적인 카테고리가 적혀있다. 로딩 혹은 할당,삭제같은게 여기에있다.
					커맨드 자체가 해야할 행동인 wait 라든지 그런것도 여기있음.
	commandAction : 내부에 사용할 함수가 들어가있다.
	commandParam :커맨드파라미터를 정의한다. ->이걸 만들어야하나
	commandBuilder

*/

class FTIHCommand;
class FTIHCommandList;
class FTIHCommandDataShareBoard;
class FTIHCommandState;
class FTIHCommander;

struct FTIHCommandDataRefParameter;
struct FTIHCommandHeader;
struct FTIHCommandMethod;

/*
	커맨드 헤더와 커맨드 액션은 언리얼에서 사용할 수 있게 만든다.
	구성을 전달할때는 레퍼런스를 사용한다. 읽기 전용이 빠르기는한데, 솔직히 변경이 불가능한게 좀 애바다.


	커맨드는 상속으로 구현한다.
		커맨드는 버추얼테이블이 호출되기전에 처리할 수 있도록한다.
*/

USTRUCT()
struct FTIHCommandDataRefParameter
{
	GENERATED_BODY()

	UPROPERTY()
	int16 DataRefType;
	UPROPERTY()
	int16 DataRefIndex;
};
/*
	빌더를 만들어야한다.->만듬

	결과를 통합해야한다 자꾸 이거 다른곳으로 뻗는거같음
		생성
			assign : pooled
			malloc
		변경
			Modify
		삭제
			reject : pooled
			destory : 진짜삭제
		IO
			리드세이브 == assign + IO
			라이트
		서버
			커넥트 {샌드 + 값대기 + 샌드 + 값대기}
			샌드	{샌드 + 값대기== requese }
			값대기	== receive
			디스커넥트
*/


/*
	command state 가 필요할까?
	이게 있으면 좋은점
		상태에 대한 추적이 가능하다
		상태에 따른 다른 처리가 가능하다.
*/

class FTIHCommandMethodAdditionalManager
{
public:

private:
	/*
		TMap<uint32,FTIHCommandDelegateFuncs> mDelegateFunctions;
		struct FTIHCommandDelegateFuncs
		{
		TFunction<TIHReturn64()> ExecuteFunc;
		TFunction<TIHReturn64()> DoneFunc;
	
	*/

};


USTRUCT()
struct FTIHCommandReferenceData
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<int32> Int32Array;
	UPROPERTY()
	TArray<int64> Int64Array;
	UPROPERTY()
	TArray<float> FloatArray;
	UPROPERTY()
	TArray<double> DoubleArray;
	UPROPERTY()
	TArray<FVector> VectorArray;
	UPROPERTY()
	TArray<FTransform> TransformArray;
	UPROPERTY()
	TArray<FString> StringArray;
};

#pragma region CommandReferenceBoards

/*
	여기에 빠르게 접근할 수 있게 CRTP나 staticPolymorph 를 적용한 클래스를 통해 만들던가
	인터페이스 정도는 만들어주자.

*/

#pragma endregion

/*
	그전에 
	이제 이걸 담은 녀석을 만들어야한다.
	또 담는녀석을 또 한번에 만들 수 있는 래퍼도 필요하다.
	커맨더
*/
USTRUCT()
struct FTIHCommandTestDelayDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Test00;
	UPROPERTY()
	int8 Test01;
	UPROPERTY()
	int8 Test02;
	UPROPERTY()
	int8 Test03;
	

	TIHMACRO_CHAINBUILDER_SETTER(Test00);
	TIHMACRO_CHAINBUILDER_SETTER(Test01);
	TIHMACRO_CHAINBUILDER_SETTER(Test02);
	TIHMACRO_CHAINBUILDER_SETTER(Test03);

};
class FTIHCommandTestDelay : public TTIHCommand<FTIHCommandTestDelayDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandTestDelay);
public:
	FTIHCommandTestDelay() {};
	virtual ~FTIHCommandTestDelay() {};
};




/*
	leaf 만들기
	command datas 정의 및 command 만들기
	strategy 설정
	
	leaf 는 단순하게 설정을 하고 하는 역할만 하는거임
	command 데이터는 커맨더가 참조할 데이터를 담고있는 녀석임. 만약 set mesh 를 할거면
		참조할 영역은 무엇인지. 그 영역에서 뭐를 들고와야하는지
		대상은 어느 매니지드 오브젝트의 몇번째에 있는 것인지 2차원으로 찾는다라고 생각하면됨
			그러면 어떤 오브젝트를 변경할건지는 그냥 커맨더에 넣어서 해주면됨
	gpu 에 빗대어서 생각하면편함
	자원의 메모리는 board 에 기록이 된다. r 인지 w 인지
	쉐이더는 strategy 를 사용한다.
	명령은 command 로 하고 기능은 leaf 로 처리한다.
	더 정확하게는
		특정 컴포지트에 명령을 내기러가 매니지드 오브젝트에 명령을 내리면

*/

class FTIHCommandFactoryForDefaultStation : public FTIHCommandFactory
{
public:
	TIHReturn64 InstantiateCommandsInMetaArray(FTIHCommander& commander) override;
};

#pragma region Command Strategy



class FTIHCommanderStrategyTestDelay :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyTestDelay>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};
/*
	0 == Pooling
	return 의 결과가 result 보드에 들어간다. 즉 그냥 결정되어있는거임.
	1 == Reject
*/

#pragma endregion



/*!
*	@brief 
*	@detail 
*/


/*!
*	@brief 
*	@detail https://benui.ca/unreal/tickable-object/
*/
class FTIHCommandTickableScheduler : public FTickableGameObject
{
public:
	// FTickableGameObject Begin
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override
	{
		return ETickableTickType::Always;
	}
	virtual TStatId GetStatId() const override
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FTIHCommandTickableScheduler, STATGROUP_Tickables);
	}
	virtual bool IsTickableWhenPaused() const
	{
		return true;
	}
	virtual bool IsTickableInEditor() const
	{
		return false;
	}
private:
	uint32 LastFrameNumberWeTicked = INDEX_NONE;
};

/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commander

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/


#pragma endregion 
/*
=================================================================================================================================================
										 여기 아래서 부터 다시한다
=================================================================================================================================================
*/


class FTIHSettingHelper
{
	class FTIHManagedObjectSettings;
public:
	FTIHManagedObjectSettings& MngObjSetting()
	{
		return mManagedObjectSettingHelper;
	}

	FTIHManagedObjectSettings& GetManagedObjectSettingHelper()
	{
		return mManagedObjectSettingHelper;
	}
private:
	class FTIHManagedObjectSettings
	{
	public:
		void RegistUEActorByUEHash(UClass* ueActorUcls);
		template<typename TIHTemplateType = AActor>
		void RegistUEActorTemplate()
		{
			RegistUEActorByUEHash(TIHTemplateType::StaticClass());
		}

		void RegistTIHMngObjLeafGenerateFunc(TIHHash64 tihHash, TFunction < FTIHMngObjLeaf* ()> generateFunc);
		template<typename TIHTemplateType>
		void RegistTIHMngObjLeafGenerateFuncTemplate()
		{
			RegistTIHMngObjLeafGenerateFunc(TIHTemplateType::TIHClassNameHash(), &TIHTemplateType::GenerateLeaf);
		}
		void RegistUESceneAndTIHMngObjLeafList(UClass* ueSceneCls, const FTIHGenerateCandidateLeaves& tihLeafList);
		template<typename TIHTemplateType = USceneComponent>
		void RegistUESceneAndTIHMngObjLeafListTemplate(const FTIHGenerateCandidateLeaves& tihLeafList)
		{
			RegistUESceneAndTIHMngObjLeafList(TIHTemplateType::StaticClass(), tihLeafList);
		}
		void RegistPrepareDataForNewAlloc(ETIHMngObjHeaderProcotols targetClsType, UClass* targetCls, int16 allocCount);
		template<typename TIHTemplateType = AActor>
		void RegistPrepareDataForNewAllocTemplateActorBase(int16 allocCount)
		{
			RegistPrepareDataForNewAlloc(ETIHMngObjHeaderProcotols::EActorBase, TIHTemplateType::StaticClass(), allocCount);
		}
	};
	FTIHManagedObjectSettings mManagedObjectSettingHelper;
};


enum class ETIHManagedObjectProtocolOptions
{
	EEmpty
};
enum class ETIHManagedObjectHeaderComponentProtocols
{
	ENotUse = 0,
};

UCLASS()
class ATIHTestPawn : public APawn
{
	GENERATED_BODY()
};

struct FTIHManagedObjectClassStatus
{
	TDeque<int16> RejectedManagedObjectIndices;
	TDeque<int16> UsingManagedObjectIndices;
};
struct FTIHManagedObjectComponentStatus
{
	TDeque<int16> RejectedManagedObjectComponentIndices;
	TDeque<int16> UsingManagedObjectComponentIndices;
};



#pragma endregion
class FTIHCommandHelper
{
public:
	void DictateCommandCreateNewAllocPrepare();
	void DictateCommandCreateNewAllocOnGenerate();

	void DictateCommandCreatePooling();
	void DictateCommandCreateReject();

	void DictateCommandLoadMesh();
};


#pragma endregion
#pragma region TIH CRTP


#pragma region Macros_CRTP_CheckFunctions
/*
----	----	----	----	----	----	----	----	----	----
								Prepare
								Init
								Execute
								Refresh
								Wait
								Clearance
								Destroy
	----	----	----	----	----	----	----	----	----
*/

#pragma endregion

/**
 * 
 */
class TIHLIBRARYENTRY_API FTIHDefaultStation : public TTIHStationCRTP<FTIHDefaultStation>
{
public:
	FTIHDefaultStation();
	virtual ~FTIHDefaultStation();

	TIHMACRO_STATION_HELPER_LIFECYCLE_FUNCTIONS(FTIHDefaultStation);
};

