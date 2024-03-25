// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHStationCore.h"
#include "TIHCommandCore.h"
#include "Engine/StreamableManager.h"
#include "Components/Widget.h"
#include "TIHManagedObjectLeafs.h"


#pragma region DefaultStation Functions
FTIHDefaultStation::FTIHDefaultStation()
{
	UE_LOG(LogTemp, Warning, TEXT("Gimochi!!!!!!"));
}

FTIHDefaultStation::~FTIHDefaultStation()
{
}

void FTIHDefaultStation::RegistForTIHMngObj()
{
	mSettingHelper->MngObjSetting().RegistTIHMngObjLeafGenerateFuncTemplate<FTIHMngObjLeafMovement>();
	mSettingHelper->MngObjSetting().RegistTIHMngObjLeafGenerateFuncTemplate<FTIHMngObjLeafStMesh>();
	mSettingHelper->MngObjSetting().RegistTIHMngObjLeafGenerateFuncTemplate<FTIHMngObjLeafSkMesh>();
	mSettingHelper->MngObjSetting().RegistTIHMngObjLeafGenerateFuncTemplate<FTIHMngObjLeafPretty>();

	mSettingHelper->MngObjSetting().RegistUESceneAndTIHMngObjLeafListTemplate
		<USceneComponent>
		(
			{
				FTIHMngObjLeafMovement::TIHClassNameHash()
			}
	);
	mSettingHelper->MngObjSetting().RegistUESceneAndTIHMngObjLeafListTemplate
		<UStaticMeshComponent>
		(
			{
				FTIHMngObjLeafMovement::TIHClassNameHash(),
				FTIHMngObjLeafStMesh::TIHClassNameHash(),
				FTIHMngObjLeafPretty::TIHClassNameHash()
			}
	);
	mSettingHelper->MngObjSetting().RegistUESceneAndTIHMngObjLeafListTemplate
		<USkeletalMeshComponent>
		(
			{
				FTIHMngObjLeafMovement::TIHClassNameHash(),
				FTIHMngObjLeafSkMesh::TIHClassNameHash(),
				FTIHMngObjLeafPretty::TIHClassNameHash()
			}
	);
}

/*!
*	@brief 전부 멈추는 기능이다.
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::SuspendStation()
{
	TIHReturn64 reValue = 0;


	return reValue;
}
/*!
*	@brief 정리하기 직전에 호출하는 함수
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::FinalizeStation()
{
	TIHReturn64 reValue = 0;


	return reValue;
}
/*!
*	@brief 파괴시 호출하는 함수
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::DestroyStation()
{
	TIHReturn64 reValue = 0;

	

	return reValue;
}
/*!
*	@brief 객체 초기화시 호출하는 함수
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::InitializeStation()
{
	TIHReturn64 reValue = 0;


	return reValue;
}
/*!
*	@brief 스테이션을 초기상태로 돌리는 함수
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::RefreshStation()
{
	TIHReturn64 reValue = 0;


	return reValue;
}
/*!
*	@brief 스테이션안에 있는 tickable 과 timeManager 등등을 실행하기 위한 영역이다. 자체적인 tick 은 없다.
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::ExecuteStation()
{
	TIHReturn64 reValue = 0;


	return reValue;
}
/*!
*	@brief 자신 내부에 있는 tickable 을 멈추고 서버를 기다리는기능이다.->이거는 수정해보자
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::WaitStation()
{
	TIHReturn64 reValue = 0;


	return reValue;
}
/*!
*	@brief 
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::InstantiateStation()
{
	TIHReturn64 reValue = 0;

	mMngObjGenerateHelper = new FTIHMngObjGenerateHelper;
	mSettingHelper = new FTIHSettingHelper;

	/*
		to-do
		mCommandFactory 이걸 안쓸거같음 
	*/
	mCommandFactory = new FTIHCommandFactory;
	mCommander = new FTIHCommander;			
	
	mPoolCenter = new FTIHMngObjPoolCenter;
	mPathCenter = new FTIHPathCenter;
	mMeshPool = new FTIHMeshPool;

	mTickTock.UpdataTick();
	/*
		to-do
		pakbox 에 넣는 함수 만들기
		지금 pak 만들기
			-> 팩의 header 만들기
		여기서 초기화를 진행하지 않음. 기본 초기화인 내부 초기화만 진행이됨
		왜냐하면 command 를 써야하기때문에.
	
	*/

	return reValue;
}
/*!
*	@brief 
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::PrepareStation()
{
	TIHReturn64 reValue = 0;

	RegistForTIHMngObj();

	FTIHCommanderConfigure commandConfig;
	commandConfig.InitType = 1;
	commandConfig.CommandCapacity = 256;

	/*
		to-do
		InstantiateThis 와
		InitiateThis 이거 만들어야함
	*/
	mCommander->SetCommanderConfig(commandConfig);
	mCommander->OnReserveCommander();

	mPoolCenter->InstantiateThis();
	FTIHMngObjPoolCenterConfigure poolCenterConfig;
	poolCenterConfig.PrepareDataQueCapacityCount = 512;
	mPoolCenter->SetMngObjPoolCenterConfig(poolCenterConfig);
	mPoolCenter->InitiateThis();

	mPathCenter->InstantiateThis();
	FTIHPathCenterConfigure pathConfig;
	pathConfig.PathArrayCapacityCount = 768;
	pathConfig.UrlArrayCapacityCount = 32;
	mPathCenter->SetPathCenterConfig(pathConfig);
	mPathCenter->InitiateThis();

	mMeshPool->InstantiateThis();
	FTIHMeshPoolConfigure meshPoolConfig;
	meshPoolConfig.CreateInnerQueryType = TIHNameSpaceCommon::QueryType::StartEnd;
	
	mMeshPool->SetMeshPoolConfig(meshPoolConfig);
	mMeshPool->InitiateThis();

	

	/*
		외부 서버와 먼저 연결을 하기 전에 사전준비를 한다. 해당부분은 프로세서가 실행되고 로고 창이 뜰때 로딩이 될것이다.
		로딩이 
	*/
	
	FTIHState::SetManagedObjectPoolCenter(mPoolCenter);
	FTIHMngObj::SetManagedObjectPoolCenter(mPoolCenter);

	
	return reValue;
	
}

#pragma endregion

TIHReturn64 FTIHStationPolymorphInterface::TIHErrEmplementFunc()
{
	
	return -1;
}

#pragma region CommandFactory


TIHReturn64 FTIHCommandFactoryForDefaultStation::InstantiateCommandsInMetaArray(FTIHCommander& commander)
{
	FUnionTIHCommandFactoryResult reValue;
	reValue.WholeData = 0;
	return reValue.WholeData;
}


#pragma endregion


//TIHReturn64 FTIHCommanderStrategyTestDelay::ExecuteStrategy(FTIHCommandBase* cmdBase)
//{
//	TIHReturn64 reValue = 0;
//	/*
//		여기에 다음 행동할것에 대한 내용을 넣는다.
//		그리고 작동을 시켜주는 것이다.
//		그럼 여기는 아마 딜레이겠지?
//		만약 load 였다하면?
//	*/
//	TIHSTATION_TYPE& defaultStation = TIHSTATION;
//	
//	const FTIHCommandHeader cmdHeader = cmdBase->GetCommandHeader();
//	const FTIHCommandMethod cmdMethod = cmdBase->GetCommandMethod();
//
//	FTIHCommandTestDelay* testDelay = static_cast<FTIHCommandTestDelay*>(cmdBase);
//	FTIHCommandTestDelayDatas& feature = testDelay->GetCommandFeature();
//
//	int8 checkTimeIndex = feature.Test00;
//	float checkTimeValue = defaultStation.GetCommandPathBoard().mBoard.GetDataInFloatArray(checkTimeIndex);
//
//
//	return 0;
//}


void FTIHSettingHelper::FTIHManagedObjectSettings::RegistUEActorByUEHash(UClass* ueActorUcls)
{
	static FTIHMngObjGenerateHelper& genHelper = TIHSTATION.GetGenerateHelper();
	UEObjectHash64 ueHash = genHelper.ConvertUClassToHash(ueActorUcls);
	genHelper.RegistUEActorByUClass(ueHash, ueActorUcls);
}

void FTIHSettingHelper::FTIHManagedObjectSettings::RegistTIHMngObjLeafGenerateFunc(TIHHash64 tihHash, TFunction < FTIHMngObjLeaf* ()> generateFunc)
{
	static FTIHMngObjGenerateHelper& genHelper = TIHSTATION.GetGenerateHelper();
	genHelper.RegistGenerateFunc(tihHash, generateFunc);
}

void FTIHSettingHelper::FTIHManagedObjectSettings::RegistUESceneAndTIHMngObjLeafList(UClass* ueSceneCls,const FTIHGenerateCandidateLeaves& tihLeafList)
{
	static FTIHMngObjGenerateHelper& genHelper = TIHSTATION.GetGenerateHelper();
	UEObjectHash64 ueHash = genHelper.ConvertUClassToHash(ueSceneCls);

	genHelper.RegistGenerateCandidateHashArrayByUEHash(ueHash, tihLeafList);
}

void FTIHSettingHelper::FTIHManagedObjectSettings::RegistPrepareDataForNewAlloc(ETIHMngObjHeaderProcotols targetClsType, UClass* targetCls, int16 allocCount)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMngObjGenerateHelper& genHelper = TIHSTATION.GetGenerateHelper();

	UEObjectHash64 ueHash = genHelper.ConvertUClassToHash(targetCls);

	poolCenter.EmplaceAddMngObjPrepareData((int8)targetClsType, ueHash, -1, allocCount );
}

