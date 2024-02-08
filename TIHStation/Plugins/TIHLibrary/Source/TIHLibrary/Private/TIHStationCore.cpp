// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHStationCore.h"
#include "Engine/StreamableManager.h"
#include "Components/Widget.h"


#pragma region DefaultStation Functions
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	CRTP DefaultStation Implements

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
FTIHDefaultStation::FTIHDefaultStation()
{
	UE_LOG(LogTemp, Warning, TEXT("Gimochi!!!!!!"));
}

FTIHDefaultStation::~FTIHDefaultStation()
{
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



	return reValue;
}
/*!
*	@brief 
*	@detail 
*/
TIHReturn64 FTIHDefaultStation::PrepareStation()
{
	TIHReturn64 reValue = 0;

	/*
		외부 서버와 먼저 연결을 하기 전에 사전준비를 한다. 해당부분은 프로세서가 실행되고 로고 창이 뜰때 로딩이 될것이다.
		로딩이 
	*/

	mCommander = MakeUnique<FTIHCommander>();

	mObjectPoolCenter = MakeUnique<FTIHMngObjPoolCenter>();
	FTIHState::SetManagedObjectPoolCenter(mObjectPoolCenter.Get());
	FTIHMngObj::SetManagedObjectPoolCenter(mObjectPoolCenter.Get());

	mMngObjGenerateHelper = MakeUnique<FTIHMngObjGenerateHelper>();

	//FTIHMngObjPoolCenter& poolCeneter = GetManagedObjectPoolCenter();

	mSettingHelper.MngObjSetting().RegistUEActorTemplate<AActor>();
	mSettingHelper.MngObjSetting().RegistUEActorTemplate<APawn>();
	mSettingHelper.MngObjSetting().RegistUEActorTemplate<ACameraActor>();

	mSettingHelper.MngObjSetting().RegistTIHMngObjLeafGenerateFuncTemplate<FTIHMngObjLeafTestDelay>();

	mSettingHelper.MngObjSetting().RegistUESceneAndTIHMngObjLeafListTemplate<USkeletalMeshComponent>({ 12,3,4,5,6 });

	mSettingHelper.MngObjSetting().RegistPrepareDataForNewAllocTemplateActorBase<AActor>(16);
	mSettingHelper.MngObjSetting().RegistPrepareDataForNewAllocTemplateActorBase<APawn>(16);
	return reValue;
}

#pragma endregion

TIHReturn64 FTIHStationPolymorphInterface::TIHErrEmplementFunc()
{
	
	return -1;
}


#pragma region Commander
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commander Implements

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
void FTIHCommander::TestSettingCommandList()
{
	TTIHChainBuilder<FTIHCommandTestDelayDatas> chian;
	chian.
		GenerateChain().
		SetTest00(0).
		SetTest01(1).
		SetTest02(2).
		SetTest03(3);
}


TIHReturn64 FTIHCommander::ExecuteCommands()
{
	static TIHSETTING_CURRURNT_STATION& station = TIHSETTING_CURRURNT_STATION::GetSingle();

	FUnionTIHCommandResult cmdResult;
	
	while (mCommaderExecutionState.CheckExecuteCommanderLoop())
	{
		FTIHCommandBase* primitiveCmd = mCommandLists[mCurrCommandListIndex].GetCurrentCommand();
		
		const FTIHCommandMethod& cmdMethod = primitiveCmd->GetCommandMethod();

		if((int8)ETIHCommandMethodProcessingProtocols::EStrategies == cmdMethod.CommandProcessingProtocol)
		{
			cmdResult.WholeData = ExecuteCommandStaticPolymorphs(primitiveCmd);
		}
		else if((int8)ETIHCommandMethodProcessingProtocols::EDelegates == cmdMethod.CommandProcessingProtocol)
		{
			/*
				loopReValue = 커맨더 안에 있는 실행 델리게이트 실행
			*/
		}
		else if((int8)ETIHCommandMethodProcessingProtocols::EMultiThreading == cmdMethod.CommandProcessingProtocol)
		{
			/*
				Runable 이 모여있는 거에 해당 델리게이트 실행
			*/
		}

		cmdResult.WholeData = SequenceCommand(cmdResult.WholeData, primitiveCmd);
		
		if ((int8)ETIHCommandResultBitMask::EAsyncTask & cmdResult.ResultDetail.ProcessingResult0)
		{

		}
		else
		{
			if ((int8)ETIHCommandResultBitMask::EOnExecuteLoop & cmdResult.ResultDetail.ProcessingResult0)
			{
				GetCommandExecutionState().StartCommanderLoop();
			}
			else	//	StopLoop
			{
				GetCommandExecutionState().StopCommaderLoop();
			}
			if ((int8)ETIHCommandResultBitMask::EOnPopFornt & cmdResult.ResultDetail.ProcessingResult0)
			{
				GetCommandList().PopFrontCommand();
			}
			if ((int8)ETIHCommandResultBitMask::EOnNext & cmdResult.ResultDetail.ProcessingResult0)
			{
				GetCommandList().NextCommand();
			}
			if ((int8)ETIHCommandResultBitMask::EOnPopBack & cmdResult.ResultDetail.ProcessingResult0)
			{
				//GetCommandList().popBackCommand();
				/*
					이걸 지우고 다른걸 넣을까?
					예를 들어서 커맨드 리스트를 다음에도 실행할것인지 같은거
						이거는 사실 커맨드 리스트가 남아있는지 확인후 실행같은 느낌인데
						음...
						방향을 틀어서 일단은 무언가를 수정할 수 있게 만드는게 맞는거같다.
						아니면 그냥 캐스팅할까?
						아 컴포넌트에서 호출하면 되는거잖아.시발 이생각을 왜 못햇지?
				*/
			}
			if ((int8)ETIHCommandResultBitMask::ECallingCompleteFunction & cmdResult.ResultDetail.ProcessingResult0)
			{
				CheckCallingCompleteFunctions(primitiveCmd);
			}
			else if ((int8)ETIHCommandResultBitMask::ECallingErrorFunction & cmdResult.ResultDetail.ProcessingResult0)
			{
				CheckCallingErrorFunctions(primitiveCmd);
			}
		}
	}//whileEnd
	return cmdResult.WholeData;
}

TIHReturn64 FTIHCommander::ExecuteCommandDirect(FTIHCommandBase* curCommand)
{
	TIHReturn64 reValue = 0;
	
	FTIHCommandHeader primitiveCmdHeader = curCommand->GetCommandHeader();
	FTIHCommandMethod primitiveCmdMethod = curCommand->GetCommandMethod();

	UStaticMeshComponent;
	USkeletalMeshComponent* bbb;

	

	FTIHCommandFactory& factory = TIHSTATION.GetCommandFactory();
	FTIHCommander& commander = TIHSTATION.GetCommander();

	factory.BeginChainBuild();

	factory.ChainBuildCommandHeader()
		.SetProtocol((int8)ETIHCommandHeaderProtocols::ECreateAssignPool)
		.SetProtocolOption(0)
		.SetOption0(1)
		.SetOption1(2);

	factory.ChainBuildCommandMethod()
		.SetCommandProcessingProtocol((int8)ETIHCommandMethodProcessingProtocols::EStrategies)
		.SetCommandProgressionProtocol((int8)ETIHCommandMethodProgressionProtocols::ETickable)
		.SetCompleteFunctorIndex(1);

	factory.ChainBuildCommandData<FTIHCommandCreateAssignPoolDatas>()
		.SetCreateType(1)
		.SetDataType(1);

	factory.EndChainBuild();
	
	UClass* a;
	
	UStaticMesh::StaticClass();

	const uint8 TempProtocol[] =
	{
		0,	//	continue
		1	//	nextTick
	};

	FTIHCommandTestDelay commandDelay;
	

	
	return reValue;
}
/*!
*	@brief StaticPolymorph 패턴 사용하여 커맨드를 실행하는것
*	@detail 
*/
TIHReturn64 FTIHCommander::ExecuteCommandStaticPolymorphs(FTIHCommandBase* primitiveCmd)
{
	TIHReturn64 reValue = 0;

	const FTIHCommandHeader& cmdHeader = primitiveCmd->GetCommandHeader();

	if (cmdHeader.Protocol < (int8)ETIHCommandHeaderProtocols::MaxLength)
	{
		//	이거 룩업화 할수있는지 생각
		switch (cmdHeader.Protocol)
		{
		case (int8)ETIHCommandHeaderProtocols::ECreateAssignPool:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyCreateNewAlloc, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::ECreateNewAlloc:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyCreateAssignPool, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EServerConnect:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyServerConnect, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EServerSend:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyServerSend, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EServerListen:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyServerListen, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EServerDisConnect:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyServerDisConnect, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EDeleteRejectPool:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyDeleteRejectPool, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EDeleteDestory:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyDeleteDestory, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EModifyTransform:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyModifyTransform, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EModifyValue:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyModifyValue, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EInOutReadAndSave:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyInOutReadAndSave, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::EInOutWriteAndModify:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyInOutWriteAndModify, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::ETestDelay:
			reValue = ExecuteCommandStaticPolymorph(*mStrategyTestDelay, primitiveCmd);
			break;
		case (int8)ETIHCommandHeaderProtocols::MaxLength:
			break;
		}
	}
	else
	{
		/*
			저기에 카테고리에 없는 strategy 를 추가하겠다는 건데 
			만약 저기 없는 프로토콜에 심지어 라이브러리 업데이트 되지 않은 그런 전략을 커맨드 실행에 사용하고 싶다면
			commanderExention 을 상속받아 넣으면 된다. 대신 staticPolymorphism 이아니라 dynamicPolymorphism 일거임.
		*/
		if(mStrategyExention != nullptr)
		{
			reValue = mStrategyExention->ExecuteCommandInheritance(primitiveCmd);
		}
		
	}

	return reValue;
}
/*!
*	@brief execute 결과를 처리하는 함수. 루프를 컨트롤 한다.
*	@detail 
*/
TIHReturn64 FTIHCommander::SequenceCommand(TIHReturn64 result, FTIHCommandBase* primitiveCmd)
{
	FUnionTIHCommandResult reValue;
	reValue.WholeData = result;
	reValue.ResultDetail.ProcessingResult1 = 0;

	const FTIHCommandMethod& cmdMethod = primitiveCmd->GetCommandMethod();
	
	if ((int8)ETIHCommandMethodProgressionProtocols::EContinue == cmdMethod.CommandProgressionProtocol)
	{
		switch (reValue.ResultDetail.SimpleResult)
		{
		case (int32)ETIHReturn32Semantic::Fail:
		case (int32)ETIHReturn32Semantic::Void:
			reValue.ResultDetail.CommandResult0 =
				(int8)ETIHCommandResultBitMask::EOnPopFornt
				| (int8)ETIHCommandResultBitMask::ECallingErrorFunction;
			break;
		case (int32)ETIHReturn32Semantic::Success:
			reValue.ResultDetail.CommandResult0 =
				(int8)ETIHCommandResultBitMask::EOnExecuteLoop
				| (int8)ETIHCommandResultBitMask::EOnNext
				| (int8)ETIHCommandResultBitMask::EOnPopFornt
				| (int8)ETIHCommandResultBitMask::ECallingCompleteFunction;
			break;
		default:
			break;
		}
	}
	else if ((int8)ETIHCommandMethodProgressionProtocols::ETickable == cmdMethod.CommandProgressionProtocol)
	{
		switch (reValue.ResultDetail.SimpleResult)
		{
		case (int32)ETIHReturn32Semantic::Fail:
		case (int32)ETIHReturn32Semantic::Void:
			reValue.ResultDetail.CommandResult0 =
				(int8)ETIHCommandResultBitMask::EOnPopFornt
				| (int8)ETIHCommandResultBitMask::ECallingErrorFunction;
			break;
		case (int32)ETIHReturn32Semantic::Success:
			reValue.ResultDetail.CommandResult0 =
				(int8)ETIHCommandResultBitMask::EOnNext
				| (int8)ETIHCommandResultBitMask::EOnPopFornt
				| (int8)ETIHCommandResultBitMask::ECallingCompleteFunction;
			break;
		default:
			break;
		}
	
	}
	else if ((int8)ETIHCommandMethodProgressionProtocols::EReapeate == cmdMethod.CommandProgressionProtocol)
	{
		switch (reValue.ResultDetail.SimpleResult)
		{
		case (int32)ETIHReturn32Semantic::Fail:
			reValue.ResultDetail.CommandResult0 =
				(int8)ETIHCommandResultBitMask::EOnPopFornt
				| (int8)ETIHCommandResultBitMask::ECallingErrorFunction;
			break;
		case (int32)ETIHReturn32Semantic::Void:
			reValue.ResultDetail.CommandResult0 = 0;
			break;
		case (int32)ETIHReturn32Semantic::Success:
			reValue.ResultDetail.CommandResult0 =
				(int8)ETIHCommandResultBitMask::EOnNext
				| (int8)ETIHCommandResultBitMask::EOnExecuteLoop
				| (int8)ETIHCommandResultBitMask::EOnPopFornt
				| (int8)ETIHCommandResultBitMask::ECallingCompleteFunction;
			break;
		default:
			break;
		}
	}
	else if ((int8)ETIHCommandMethodProgressionProtocols::EAsyncDonCare == cmdMethod.CommandProgressionProtocol)
	{
		reValue.ResultDetail.CommandResult0 = (int8)ETIHCommandResultBitMask::EAsyncTask;
	}
	return reValue.WholeData;
}

TIHReturn64 FTIHCommander::CheckCallingCompleteFunctions(FTIHCommandBase* primitiveCmd)
{
	const FTIHCommandHeader cmdHeader = primitiveCmd->GetCommandHeader();
	const FTIHCommandMethod cmdMethod = primitiveCmd->GetCommandMethod();
	TIHReturn64 reValue = 0;
	
	int16 completIndex = cmdMethod.CompleteFunctorIndex;
	bool validCheck =  (completIndex < mCompleteFunctions.Num())? 
		mCompleteFunctions[completIndex].IsValidFunctor() :false;

	if(validCheck == true)
	{
		reValue = mCompleteFunctions[completIndex].GetFunction()(primitiveCmd);
	}

	return reValue;
}

TIHReturn64 FTIHCommander::CheckCallingErrorFunctions(FTIHCommandBase* primitiveCmd)
{
	return 0;
}

#pragma endregion	//Commander

/*	
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
																			
																	Command Factory Implements

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
#pragma region CommandFactory

TIHReturn64 FTIHCommandFactory::BeginChainBuild()
{
	FUnionTIHCommandFactoryResult reValue;
	reValue.WholeData = 0;

	int32 currIndex = mCurrBuilderIndex;
	//int32 arrayNum = mBuildersArray.Num();

	mBuildersArray[currIndex].RefreshForCommandHeaderBuilderReuse();
	mBuildersArray[currIndex].RefreshForCommandMethodBuilderReuse();
	RejectCommandData(mBuildersArray[currIndex].CommandDataBuilder);
	mBuildersArray[currIndex].SetRWStates(true);

	return reValue.WholeData;
}

TIHReturn64 FTIHCommandFactory::PrevBuilders()
{
	return TIHReturn64();
}

TIHReturn64 FTIHCommandFactory::JumpBuilders(int32 index)
{
	return TIHReturn64();
}

TIHReturn64 FTIHCommandFactory::NextBuilders()
{
	//	여기 다시고치자
	FUnionTIHCommandFactoryResult reValue;
	int32 nextIndex = 0;
	/*
		move 와 절대 index 가 일치하는지 확인
	
	*/

	
	return reValue.WholeData;
}

TIHReturn64 FTIHCommandFactory::EndChainBuild()
{
	FUnionTIHCommandFactoryResult reValue;
	reValue.WholeData = 0;

	int32 currIndex = mCurrBuilderIndex;
	int32 arrayNum = mBuildersArray.Num();

	mBuildersArray[currIndex].SetRWStates(false);

	if(currIndex + 1 < arrayNum)
	{
		currIndex += 1;
	}
	mCurrBuilderIndex = currIndex;

	return reValue.WholeData;
}


TIHReturn64 FTIHCommandFactory::ReserveArrayForCommandMetaDatasByGrowing()
{
	FUnionTIHCommandFactoryResult reValue;
	reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::EReserve;
	reValue.ReserveDetail.PreMax = mBuildersArray.Max();
	reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
	int16 reserveSize = GetCommandFactoryReserveSize();

	if(reValue.ReserveDetail.PreMax < reserveSize)
	{
		mBuildersArray.Reserve(reserveSize);
		int32 lastIndex = mBuildersArray.Num();

		reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Success;
		for(int32 i = lastIndex; i < reserveSize; ++i)
		{
			mBuildersArray.Add(FTIHCommandFactoryBuilders());
			mBuildersArray[i].CommandHeaderBuilder = CreateChainBuilderPtrCommandHeader();
			mBuildersArray[i].CommandMethodBuilder = CreateChainBuilderPtrCommandMethod();
		}
	}
	else
	{
		if(reValue.ReserveDetail.PreMax == reserveSize)
		{
			reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Void;
		}
	}
	return reValue.WholeData;
}

TIHReturn64 FTIHCommandFactory::AssignToArrayForCommandMetaData(FTIHChainBuilderBase* data)
{
	FUnionTIHCommandFactoryResult reValue;
	/*
		이거는 없어져야할듯
		1. 할당할 영역이 pooling 인지 혹은 realloc 인지확인
		2

		무조건 선형구조로 진행을한다
		리턴에는 지금 값을 셋팅해야하는 내용을 적는다
		실패는 거의 나오지 않게하는데 만약 지금 pool 이 꽉찼다면 해당 커맨드를 수정하게 하면 안된다.
			만약 수저하고싶다면 다시 Modify 를 해줘야한다.아니면 그냥 false 가 나고 에러는 호출 되지 않는다.
		거의 무조건 무조건 assign 혹은 pooling 이 되어야한다.

		먼저 내부 pooling 이 완성되었는지 부터 확인한다
		if(array.num < array.max)
			이러면 num 이 지금의 크기가 되고 add 를 해준다.
		-지금의 assignIndex 는 num 이고 그것이 마지막의 인덱스가 될것이다.
		
		if(지금 인덱스의 array 엘리먼트가 초기화 안되었는지 확인한다.)
			해당 엘리먼트내부에 초기화를 진행해준다.
		else // 초기화가 진행되어있다라는 말이다.
			해당 포인터를 다시 접근한다라는 것은 초기화를 진행하고 다시 재사용한다는 것이기에 refresh 를 진행해준다.
			근데 사실 data 만 재설정 해주면 된다. 그말인 즉슨 clear commandHeader 와 commandMethod 만 진행해주면 된다는것이다.
	*/
	

	return reValue.WholeData;
}

void FTIHCommandFactory::RejectCommandData(FTIHChainBuilderBase*& data)
{
	uint32 typeHash = typeid(*data).hash_code();
	mCommandDataBuilderPool[typeHash].ChainPtrsQueue.PushLast(data);
	data = nullptr;
}

TIHReturn64 FTIHCommandFactory::PrepareCommandFactory()
{
	FUnionTIHCommandFactoryResult reValue;
	reValue.WholeData = 0;

	CommandFactoryConfig().
		SetFactoryReserveSize(128).
		SetFactorySettingType(1);
	ReserveArrayForCommandMetaDatasByGrowing();
	return reValue.WholeData;
}

TIHReturn64 FTIHCommandFactory::PrevRegistCommand()
{
	FUnionTIHCommandFactoryResult reValue;
	FUnionTIHDataBoardResult dataResult;
	reValue.WholeData = 0;
	
	TIH_CURRURNT_STATION_CLASS& station = TIHSTATION;

	/*
	mGenerateHash.Add(FTIHCommandCreateAssignPool::TIHClassNameHash(), nullptr);

	mClassNamesForCreateCommand.Add("TestDelay");
	mClassNamesForCreateCommand.Add("CreateAssignPool");
	mClassNamesForCreateCommand.Add("CreateNewAlloc");
	mClassNamesForCreateCommand.Add("ServerConnect");
	mClassNamesForCreateCommand.Add("ServerSend");
	mClassNamesForCreateCommand.Add("ServerListen");
	mClassNamesForCreateCommand.Add("ServerDisConnect");
	mClassNamesForCreateCommand.Add("DeleteRejectPool");
	mClassNamesForCreateCommand.Add("DeleteDestroy");
	mClassNamesForCreateCommand.Add("ModifyTransform");
	mClassNamesForCreateCommand.Add("ModifyValue");
	mClassNamesForCreateCommand.Add("InOutReadAndSave");
	mClassNamesForCreateCommand.Add("InOutWriteAndModify");

	int32 tempIndex = 0;
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[tempIndex], FTIHCommandTestDelay::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandCreateAssignPool::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandCreateNewAlloc::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandServerConnect::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandServerSend::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandServerListen::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandServerDisConnect::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandDeleteRejectPool::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommanEDeleteDestory::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandModifyTransform::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandModifyValue::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandInOutReadAndSave::TIHClassNameHash());
	mClassNameHashsForCreateCommand.Add(mClassNamesForCreateCommand[++tempIndex], FTIHCommandInOutWriteAndModify::TIHClassNameHash());

	tempIndex = 0;
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[tempIndex]]	,&FTIHCommandTestDelay::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandCreateAssignPool::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandCreateNewAlloc::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandServerConnect::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]], &FTIHCommandServerSend::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandServerListen::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandServerDisConnect::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandDeleteRejectPool::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommanEDeleteDestory::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandModifyTransform::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandModifyValue::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandInOutReadAndSave::GenerateThisClass);
	mGenerateCommandFunctions.Add(mClassNameHashsForCreateCommand[mClassNamesForCreateCommand[++tempIndex]] ,&FTIHCommandInOutWriteAndModify::GenerateThisClass);
	
	*/

	BeginChainBuild();
	/*
	dataResult.WholeData = station.GetCommandShaderBoard().mBoard.RegisterToArrayAsTransform(FTransform(1, 2, 3, 4));
	dataResult.RegisterDetail.Protocol;
	if (dataResult.RegisterDetail.SimpleResult == 성공이다)
	{
		switch (dataResult.RegisterDetail.Protocol)
		{
		case 0:
			단일등록이다
				break;
		default:
			break;
		}
		int8 refIndex = dataResult.RegisterDetail.RegistedIndex;
		ChainBuildCommandHeader().SetTest00(1(refIndex);
	}
	//	키값을 넣으면 해당 하는 정보를 넘기게 만듦
	dataResult.WholeData = station.GetPathBoard().GetPathRangeStart();
	dataResult.RegisterDetail.protocol
	int startPathRange = 0;
	int rangeCount = 0;
	if (dataResult.GetRangeDetail.SimpleResult == 성공이다)
	{
		switch (dataResult.RegisterDetail.Protocol)
		{
		case 0:
			startPathRange = dataResult.GetRangeDetail.start.
			rangeCount = count 를 들고옴
				break;
		default:
			break;
		}
		int8 refIndex = dataResult.RegisterDetail.RegistedIndex;
		ChainBuildCommandHeader().SetTest00(1(refIndex);

	}
	ChainBuildCommandHeader.setProtocol(EInOutReadAndSave);
	.setProtocolOption(EInoutFolderLoad)
	.setOption0(0).SetOption(0);

	ChainBuildCommandMethod.SEtProtocol(EASyncTask)
	ChainBuildCommandMethod().SetProtocol(EASyncTask).
	SetExecuteMethodType(StaticPolymorph).
	SetMethodAddtionalInfoIndex(0);

	dataResult.WholeData = station.GetPathBoard().Find("housing")
	
	ChainBuildCommandData<FTIHCommandInOutReadAndSaveData>()
	.protocol(folderCategory)
	.FilterProtocol(userHave)
	.pathindex(station.GetPathBoard().FindCategoryFolder("structures/"))

	dataResult.WholeData = station.GetObjectPool().mBoard.RegisterToArrayAsTransform(FTransform(1, 2, 3, 4));


	*/
	



	return reValue.WholeData;
}

TIHReturn64 FTIHCommandFactory::InstantiateCommandsInMetaArray(FTIHCommander& commander)
{
	FUnionTIHCommandFactoryResult reValue;

	FTIHCommandList& cmdList = commander.GetCommandList();
	
	for(int32 i = 0; i < mBuildersArray.Num(); ++i)
	{
		const FTIHCommandHeader cmdHeader = GetCastedBuildersCommandHeader(i);
		const FTIHCommandMethod cmdMethod = GetCastedBuildersCommandMethod(i);

		FTIHCommandBase* cmdBase = nullptr;

		int32 protocolIndex = cmdHeader.Protocol;
		if(protocolIndex < mGenerateCommandFunctions.Num())
		{
			FName currCmdName = mClassNamesForCreateCommand[protocolIndex];
			//cmdBase = mGenerateCommandFunctions[currCmdName]();
		}
		else
		{
			/*
				custom command 를 실행시키는 곳
			*/
		}

		if(cmdBase != nullptr)
		{
			cmdBase->SetCommandHeader(cmdHeader);
			cmdBase->SetCommandMethod(cmdMethod);

			/*
				if(cmdList.IsPossiblePush() == true)
				{
					cmdList.PushBackCommandPtr(cmdBase);
					reValue.SuccessCount ++;
				}
				else
				{
					log.add()
				}
			*/
			cmdList.PushBackCommandPtr(cmdBase);
		}
		else
		{
			reValue.InstantiateDetail.FailCount++;
		}
	}
	return reValue.WholeData;
}

FTIHCommandFactory::FTIHCommandFactory()
{
	mFactoryConfigObject = MakeUnique<UTIHCommandFactoryConfigure>();
	mFactoryConfigObject->CheckConstantSetting();

}

TIHReturn64 FTIHCommandFactory::SearchReserveIndex()
{
	FUnionTIHCommandFactoryResult reValue;
	reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::ESearch;



	return reValue.WholeData;
}


TIHReturn64 FTIHCommandFactoryForDefaultStation::InstantiateCommandsInMetaArray(FTIHCommander& commander)
{
	FTIHCommandFactory::FUnionTIHCommandFactoryResult reValue;





	return reValue.WholeData;
}


#pragma endregion

/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command Factory Configure Implements

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
#pragma region UTIHCommandFactoryConfigure

TIHReturn64 UTIHCommandFactoryConfigure::CheckConstantSetting()
{
	mFactorySettingType = 1;
	mFactorySettingTypeOption = 0;
	mFactoryReserveSize = 128;
	mIsRogginEnabledOnRuntime = false;
	mIsRoggingEnabledOnSaveing = false;
	mIsRoggingEnabledPassToServer = false;
	mIsRoggingEnabledForDebuging = false;
	mRoggingSavePath = "";
	mRoggingServerUrl = "";
	return 0;
}
#pragma endregion // UTIHCommandFactoryConfigure

#pragma region Strategies
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Strategies Implements

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													TestDelay Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyTestDelay::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	/*
		여기에 다음 행동할것에 대한 내용을 넣는다.
		그리고 작동을 시켜주는 것이다.
		그럼 여기는 아마 딜레이겠지?
		만약 load 였다하면?
	*/
	TIHSTATION_TYPE& defaultStation = TIHSTATION;
	
	const FTIHCommandHeader cmdHeader = cmdBase->GetCommandHeader();
	const FTIHCommandMethod cmdMethod = cmdBase->GetCommandMethod();

	FTIHCommandTestDelay* testDelay = static_cast<FTIHCommandTestDelay*>(cmdBase);
	FTIHCommandTestDelayDatas& feature = testDelay->GetCommandFeature();

	int8 checkTimeIndex = feature.Test00;
	float checkTimeValue = defaultStation.GetCommandPathBoard().mBoard.GetDataInFloatArray(checkTimeIndex);


	return 0;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													CreateAssignPool Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyCreateAssignPool::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	
	UObject* o;
	

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													CreateNewAlloc Implements
													이거 이름바꾸자 prepare 로 하고 뭐 지금 뒤에서 부터 모든 prepare 은 특정 영역으로 만들어진다. 이렇게?
													추가적으로 위치에 대해서도 변경을 좀 해야할거 같은데, 오브젝트가 생성되는 위치 혹은 이동?
													그리고 이거는 처음에 만들어졌을때 호출되는거고 pooling 도 만들어야함. 거의 다왔다. 이거까지 되면 이제 파서 들어간다.
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyCreateNewAlloc::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	
	const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	//	원래는 option 으로 특징을 확인하는 과정이 있어야하지만 기본으로 제공되는거에 그게 필요한가?
	//	필요함. prepare 과정과 execute과정은 나눠져 있어야함.
	
	if(cmdHeader.ProtocolOption == 0)/*prepare*/
	{
		FTIHCommandCreateNewAllocPrepare* createNewAlloc = static_cast<FTIHCommandCreateNewAllocPrepare*>(cmdBase);

		const FTIHNewAllocPrepareData& feature = createNewAlloc->GetCommandFeature();
		poolCenter.EmplaceAddMngObjPrepareData(feature.TargetClassType, feature.TargetClassHash, -1, feature.AllocateCount);
	}
	else if(cmdHeader.ProtocolOption == 1)
	{
		FTIHCommandCreateNewAllocOnGenerate* createNewAlloc = static_cast<FTIHCommandCreateNewAllocOnGenerate*>(cmdBase);

		const FTIHMngObjPoolConfigureDatas& onGenerateData = createNewAlloc->GetCommandFeature();
		
		int8 allocationSpace = onGenerateData.AllocationSpace;
		if (onGenerateData.Option0 != 0)
		{
			poolCenter.GetManagedObjectPool(allocationSpace)->SetObjectPoolConfigure(onGenerateData);
		}

		poolCenter.OnGeneratePipeLining(allocationSpace);
	}
	


	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													ServerConnect Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyServerConnect::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													ServerSend Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyServerSend::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													ServerListen Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyServerListen::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													ServerDisConnect Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyServerDisConnect::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													DeleteRejectPool Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyDeleteRejectPool::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													DeleteDestory Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyDeleteDestory::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													ModifyTransform Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyModifyTransform::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strateg
													yModifyValue Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyModifyValue::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													InOutReadAndSave Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyInOutReadAndSave::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													InOutWriteAndModify Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyInOutWriteAndModify::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
#pragma endregion


void FTIHMngObjPoolCenter::MergeSamePrepareDatas()
{
	if(mPrepareDatas.Num() < 2)
	{
		return;
	}
	FTIHNewAllocPrepareData mergeDataA = mPrepareDatas.First();
	mPrepareDatas.PopFirst();

	int32 mergeCount = mPrepareDatas.Num();

	for(int32 i = 0; i < mergeCount; ++i)
	{
		

	}

	mPrepareDatas.PushLast(mergeDataA);

}

void FTIHMngObjPoolCenter::RegistUEClassForGenerate(UClass* ucls)
{
	check(ucls != nullptr);
	FName uclassName = ucls->GetClassPathName().GetAssetName();
	//	여기에서  cstr 을 얻어내야한다.

	TIHReturn64 newHash = ClassNameHashImplement(*(uclassName.ToString()));
	if(mUeClassHashToUClass.Contains(newHash) == false)
	{
		mUeClassHashToUClass.Add(newHash, ucls);
	}
	else
	{
		/*
			중복! 에대한 로그를 넘긴다. 
		*/
		check(false);
	}
}

//	정리를 한다면 이름들을 좀 통일하기
void FTIHMngObjFactory::OnGeneratePipeLining(FTIHMngObjPool* targetPool)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMngObjFactory& managedObjectFactory = TIHSTATION.GetManagedObjectPoolCenter().GetFactory();

	managedObjectFactory.SetManagedObjectPool(targetPool);

	const FTIHMngObjPoolConfigure& targetPoolConfig = targetPool->GetConfigure();

	TDeque<const FTIHNewAllocPrepareData>& prepareQueue = poolCenter.GetPrepareDataQueue();
	int32 prepareNum = prepareQueue.Num();
	const TArray<FTIHMngObj*>& wholeArray = targetPool->GetWholeManagedObjectArray();
	FTIHMngObjTempDatas& tempDatas = targetPool->GetTempDatas();

	int32 wholeObjNum = 0;
	const int32 wholeObjMax = wholeArray.Max();

	int32 endPhaseCount = targetPoolConfig.PoolDatas.MaxPhase;//	한번을 돌릴때 while 을 몇번돌릴지에 대한것임.
	int32 currPhaseCount = 0;

	//	config 동기화 하는곳임
	if(targetPoolConfig.PoolDatas.WholeManagedObjectMaxCount < wholeObjMax)
	{
		/*
			이전에 어떤것에 의해서 늘어났다는 소리임.
		*/
		targetPool->ReserveWholeObjectPool(targetPoolConfig.PoolDatas.WholeManagedObjectMaxCount);//	리절브를 해주는데, 이건 에러를 고치는 용도이지 
	}

	ETIHReturn32Semantic currPipeliningState = ETIHReturn32Semantic::Success;

	while (true)
	{
		if (prepareQueue.IsEmpty() == true)
		{
			/*
				어찌되었든 간에 끝났다는 것이다. 
			*/
			targetPool->OnCompleteCreateNewAlloc();
			/*
				완료시 커맨더에 있는 완료 함수를 호출해준다.
			*/
			break;
		}
		if (endPhaseCount <= currPhaseCount)
		{
			/*
				반복해서 하겠다는 말임
				반복시 콜해야하는것에 대한 것임. 만약 command 였다면 강제종료가 가능하도록 만들어야함.
				그리고 다음 phase 가 들어오는곳임
			*/
			currPipeliningState = ETIHReturn32Semantic::Void;
			break;
		}

		const FTIHNewAllocPrepareData& currPrepareData = prepareQueue.First();
		int16 currAllocateCount = currPrepareData.AllocateCount;
		bool isChildActor = false;
		wholeObjNum = wholeArray.Num();

		if (wholeObjMax < wholeObjNum + currAllocateCount)
		{
			/*
				만약 전체 캐퍼시티보다 지금 물체+ 할당해야하는 물체가 더클경우에
				지금의 오브젝트 맥스 에서 지금의 물체를 빼준다. 그게 남은 공간일것이니깐. 
			*/
			currAllocateCount = wholeObjMax - wholeObjNum;
			/*
				근데 남은 물체가 0일경우에 늘려줄 영역이 있는지 확인해보고 그것도 안된다 싶으면 에러를 콜해준다.
				즉 여기는 메모리의 크기가 안남았을경우에 호출되는 영역이라는 것이다.
			*/
			if (currAllocateCount == 0)
			{
				if(0 < targetPoolConfig.PoolDatas.AddWholeCapasityWhenFullWhole)
				{
					if(targetPoolConfig.PoolDatas.AddWholeCapasityWhenFullWhole + wholeObjMax < INT16_MAX)
					{

					}
					else
					{
						/*
							용량이 너무커서 더이상 진행하지 못한다.
						*/
						currPipeliningState = ETIHReturn32Semantic::Fail;
						break;
					}

					/*
						여기에 configure 업데이트가 들어갈자리임.
					*/
				}
				else
				{
					/*
						아니면 터트린다.
						리턴에 정보를 넣고싶은데 이거 생각좀해봐라.
					*/
					currPipeliningState = ETIHReturn32Semantic::Fail;
					break;
				}
			}
		}
		++currPhaseCount;
		
		if (currPrepareData.TargetClassType == (int8)ETIHMngObjHeaderProcotols::EActorBase)
		{
			managedObjectFactory.GenerateUEActorBaseByPrepareData(currAllocateCount, currPrepareData.TargetClassHash, tempDatas, isChildActor);
			managedObjectFactory.GenerateManagedObjectByActorArray(tempDatas, currPrepareData.CallParentIndex);
			managedObjectFactory.GenerateManagedObjectCompositeArray(tempDatas);
			managedObjectFactory.GenerateManagedObjectLeafArray(tempDatas);

			prepareQueue.PopFirst();
		}
		else if (currPrepareData.TargetClassType == (int8)ETIHMngObjHeaderProcotols::EWidgetBase)
		{

		}
		else if (currPrepareData.TargetClassType == (int8)ETIHMngObjHeaderProcotols::ESystem)
		{

		}
		else if (currPrepareData.TargetClassType == (int8)ETIHMngObjHeaderProcotols::EAuto)
		{

		}
	}
	switch (currPipeliningState)
	{
	case ETIHReturn32Semantic::Fail:
		targetPool->OnErrorCallCreateNewAlloc(0);
		break;
	case ETIHReturn32Semantic::Void:
		targetPool->OnRepeatCreateNewAlloc(currPhaseCount);
		break;
	case ETIHReturn32Semantic::Success:
		targetPool->OnCompleteCreateNewAlloc();
		break;
	}

}

void FTIHMngObjFactory::GenerateUEActorBaseByPrepareData(int16 allocount, UEObjectHash64 ueObjHash, FTIHMngObjTempDatas& tempDatas, bool isChild)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMngObjGenerateHelper& tagHelper = TIHSTATION.GetGenerateHelper();

	FTIHMngObjPool& currMngObjPool = *GetCurrentManagedObjectPool();
	FTIHMngObjPoolConfigure& poolConfigu = currMngObjPool.GetConfigureNoConst();

	if (isChild == false)
	{
		UWorld* spawnWorld = poolConfigu.SpawnSpace;
		AActor* spawnOwner = poolConfigu.OwnerActor;
		FTransform spawnTransform = poolConfigu.DefaultTransform;
		UClass* spawnClass = tagHelper.GetUEActorClassByUEHash(ueObjHash);//	GetUEActorByHash 를 넣어주자.

		for (int16 addCount = 0; addCount < allocount; ++allocount)
		{
			AActor* newActor = spawnWorld->SpawnActor(spawnClass, &spawnTransform);
			ConvertPoolableActor(newActor);
			tempDatas.PushBackActor(newActor, ueObjHash);
		}
	}

}

void FTIHMngObjFactory::GenerateManagedObjectByActorArray(FTIHMngObjTempDatas& tempDatas,int16 parentData)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter(); 

	int32 actorArrayNum = tempDatas.GetNumInActorQueue();
	//	나중에 업데이트 할때 해주자
	//	액터도 같은 수끼리 묶어주는 작업해놓으면 됨. 그리고 prepare 만들어서 넣어주면 된다.
	

	FTIHMngObjPool& currMngObjPool = *GetCurrentManagedObjectPool();

	while (true)
	{
		if (tempDatas.IsEmptyActorQueue() == true)
		{
			break;
		}
		TTIHMngObjTempDataPair<UEObjectHash64,AActor*> currActor = tempDatas.GetTopAndPopActorPairQueue();
		USceneComponent* rootScene = currActor.UEValueType->GetRootComponent();

		FTIHMngObj* newManagedObject = new FTIHMngObj();
		newManagedObject->InitMngObj(currActor.UEValueType, parentData, currMngObjPool.GetConfigure().PoolDatas.AllocationSpace);
		newManagedObject->SetUEObjectHash(currActor.HashValueType);

		if (rootScene != nullptr)
		{
			tempDatas.PushBackPrepareDataForComposite({ 0 , -1, rootScene ,newManagedObject });
		}
		else
		{
			newManagedObject->ChainManagedObjectHeader()
				.SetProtocol((int8)ETIHManagedObjectHeaderProtocols::ESystem);
		}

		currMngObjPool.AddNewManagedObject(newManagedObject);
		
		newManagedObject->UpdateStateByManagedObjectHeader();//	여기를 뒤로 미루자. 나중에 한번에 해주면 된다. 그냥 여기서 해
	}
}

void FTIHMngObjFactory::GenerateManagedObjectCompositeArray(FTIHMngObjTempDatas& tempDatas)
{
	FTIHCommander& commander = TIHSTATION.GetCommander();

	FTIHMngObjPool& currMngObjPool = *GetCurrentManagedObjectPool();
	const int16 currAllocationSpace = currMngObjPool.GetConfigure().PoolDatas.AllocationSpace;
	int16 currStep = 0;

	while (true)
	{
		if (tempDatas.IsEmptyPrepareDataForCompositeQueue() == true)
		{
			break;
		}
		FTIHMngObjGenerateCompositeBFSData&& currGenData = tempDatas.GetTopAndPopPrepareDataForCompositeQueue();
		int16 StepValue = currGenData.StepValue;
		int16 ParentCompositeIndex = currGenData.ParentCompositeIndex;
		FTIHMngObj* currManagedObject = currGenData.TIHManagedObject;
		USceneComponent* currScene = currGenData.UESceneComponent;

		if (currScene->StaticClass() == UChildActorComponent::StaticClass())
		{
			GenerateUEChildActorBy(Cast<UChildActorComponent>(currScene), currManagedObject, tempDatas);
		}

		FTIHMngObjComposite* newComposite = new FTIHMngObjComposite();
		newComposite->InitMngObjComposite(currAllocationSpace,currScene, ParentCompositeIndex, StepValue);
		currManagedObject->AddComposite(newComposite);

		const TArray<TObjectPtr<USceneComponent>>& childScenes = currScene->GetAttachChildren();

		for (const TObjectPtr<USceneComponent>& childScene : childScenes)
		{
			//													level						parentIndex == curCompositeIndex		attachScenes	managedObject
			tempDatas.PushBackPrepareDataForComposite({ StepValue +1 ,newComposite ->GetIndexInManagedObjectCompositeArray(),childScene ,currManagedObject });
		}
		tempDatas.PushBackEmptyComposite(newComposite);
	}
}

void FTIHMngObjFactory::GenerateUEChildActorBy(UChildActorComponent* childActorScene, FTIHMngObj* currManagedObject, FTIHMngObjTempDatas& tempDatas)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMngObjGenerateHelper& genHelper = TIHSTATION.GetGenerateHelper();

	check(childActorScene != nullptr);

	AActor* childActor = childActorScene->GetChildActor();

	check(childActor != nullptr);

	UClass* childActorClass = childActor->StaticClass();
	UEObjectHash64 ueChildActorCls = genHelper.GetUEHashByActorUClass(childActorClass);

	check(ueChildActorCls != genHelper.GetNoRegistTag());
		
	tempDatas.PushBackActor(childActor, ueChildActorCls);
	UEObjectHash64 chileActorHash = genHelper.GetUESceneComponentHashByUClass(childActorClass);
	int16 parentIndex = currManagedObject->GetSelfIndexInWholeArray();
	poolCenter.EmplaceAddMngObjPrepareDataForChildActor(chileActorHash, parentIndex);
}

void FTIHMngObjFactory::GenerateManagedObjectLeafArray(FTIHMngObjTempDatas& tempDatas)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	while(true)
	{
		if(tempDatas.IsEmptyEmptyCompositeQueue() == true)
		{
			break;
		}

		FTIHMngObjComposite* currComposite = tempDatas.GetTopAndPopEmptyCompositeQueue();
		UEObjectHash64 targetSceneComponentHash = currComposite->GetHashValue();
		const FTIHGenerateCandidateLeaves& hashArray = poolCenter.GetTIHHashArrayByUEHash(targetSceneComponentHash);

		for (const TIHHash64 managedComponentHash : hashArray.GenerateTags)
		{
			FTIHMngObjLeaf* leaf = poolCenter.GenerateManagedComponentByTIHHash(managedComponentHash);
			//	여기에다가 leaf 가 nullptr 이면 넘어가게 해야하나?
			leaf->SetManagedSceneComponentAndCasting(currComposite->GetTargetUeSceneComponent());
			currComposite->AddLeaf(leaf);
		}
	}
}

void FTIHMngObjLeafTestDelay::InitSetting()
{
	
	
}

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

void FTIHMngObjLeafMovement::InitSetting()
{
	
}

void FTIHMngObjPool::PushBackReadyMngObj(FTIHMngObj* target)
{
	int8 ueObjBase = target->GetManagedObjectUEObjectBase();
	TIHHash64 ueObjHash = target->GetUEObjectHash();
	int16 mngobjSelfIndex = target->GetSelfIndexInWholeArray();

	if (mManagedObjectStateReadyIndices.Contains(ueObjBase) == false)
	{
		mManagedObjectStateReadyIndices.Add(ueObjBase, TMap< TIHHash64, TDeque<int16>>());
	}
	if(mManagedObjectStateReadyIndices[ueObjBase].Contains(ueObjHash) == false)
	{
		mManagedObjectStateReadyIndices[ueObjBase].Add(ueObjHash, TDeque<int16>());
	}
	mManagedObjectStateReadyIndices[ueObjBase][ueObjHash].PushLast(mngobjSelfIndex);
}

FTIHMngObj* FTIHMngObjPool::GetAnyReadyMngObj(int8 base, TIHHash64 ueHash)
{
	FTIHMngObj* reValue = nullptr;

	if(mManagedObjectStateReadyIndices.Contains(base) == true)
	{
		if(mManagedObjectStateReadyIndices[base].Contains(ueHash) == true)
		{
			int16 candiateIndex = mManagedObjectStateReadyIndices[base][ueHash].First();
			if(mWholeManagedObjects[candiateIndex]->GetStateNonConst().IsStateReady() == true)
			{
				mManagedObjectStateReadyIndices[base][ueHash].PopFirst();
				reValue = mWholeManagedObjects[candiateIndex];
			}
		}
	}
	return reValue;
}

void FTIHMngObjPool::OnChangeStateAllocateToReady()
{
	for(FTIHMngObj* mngObj : mWholeManagedObjects)
	{
		bool isOk = false;
		isOk = mngObj->GetStateNonConst().ChangeStateAllocatedToReady();

		if(isOk == true)
		{
			PushBackReadyMngObj(mngObj);
		}
		else
		{

		}
	}
}

void FTIHMngObjPool::OnCompleteCreateNewAlloc()
{
	OnChangeStateAllocateToReady();

}
