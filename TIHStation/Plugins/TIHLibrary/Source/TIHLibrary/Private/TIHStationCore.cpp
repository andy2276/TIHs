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

	mCommander = MakeUnique<FTIHCommander>();
	

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
	static TIHSETTING_CURRURNT_STATION* station = TIHSETTING_CURRURNT_STATION::SingleTone();

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

	

	FTIHCommandFactory& factory = TIHSETTING_CURRURNT_STATION::SingleTone()->GetCommandFactory();
	FTIHCommander& commander = TIHSETTING_CURRURNT_STATION::SingleTone()->GetCommander();

	factory.BeginChainBuild();

	//int16 linkedManagedObjectIndex = commander.
	/*
		



	*/

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
	
	UStaticMesh::StaticClass()

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
	FTIHCommandDataBoard::FUnionTIHDataBoardResult dataResult;
	reValue.WholeData = 0;
	
	TIH_CURRURNT_STATION_CLASS& station = *TIH_CURRURNT_STATION_CLASS::SingleTone();

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
	

	ChainBuildCommandHeader().SetProtocol(1).;
	ChainBuildCommandMethod().SetProtocol(1).SetExecuteMethodType(1).SetMethodAddtionalInfoIndex(1);
	ChainBuildCommandData<FTIHCommandTestDelayDatas>().SetTest00(1);

	EndChainBuild();




	BeginChainBuild();

	ChainBuildCommandHeader().SetProtocol(1);
	ChainBuildCommandMethod().SetProtocol(1);
	ChainBuildCommandData<FTIHCommandTestDelayDatas>().SetTest00(1);

	EndChainBuild();


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
			cmdBase = mGenerateCommandFunctions[currCmdName]();
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


	UClass* c;
	


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
	FTIHDefaultStation& defaultStation = *FTIHDefaultStation::SingleTone();
	
	
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
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyCreateNewAlloc::ExecuteStrategy(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

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

TIHReturn64 FTIHManagedObjectPool::ReserveWholeObjectPool(int16 maxCount)
{
	/*
	
	*/
}

void FTIHManagedObjectPool::ReserveObjectPool(SIZE_T targetCls, int16 maxCount)
{
	/*
		개별적인 영역확장을 위한것이다.
		
	*/
	UObject* obje;

	
	
}

TIHReturn64 FTIHManagedObjectPool::GenerateManagedObjectByActorPtr(AActor* actor)
{
	TIHReturn64 reValue = 0;

	USceneComponent* rootComponent = nullptr;
	UClass* whatIsThisClass = actor->StaticClass();
	
	FTIHManagedObjectBase* managedObject = CheckManagedObjectPoolByUEClass(whatIsThisClass);
	
	APawn* pawn;



	rootComponent = actor->GetRootComponent();
	/*
		루트 컴포넌트를 먼저 검색한다.
		
		여기서 먼저 해당 컴포넌트가 루트 컴포넌트가 있는지 없는지 부터 검색해서 시스템인지 아닌지부터 확인한다.
			만약 루트가 있다면
				오브젝트 풀에 재사용할 오브젝트가 있는지 부터 검사한다.
					재사용될 오브젝트가 있는경우에
						->결정 오브젝트가 reject 되었을경우에 컴포넌트들을 모두 반환할것인지 냅둘것인지
							모두 반환을 했을경우에 찾는 과정에서 오버헤드가 발생하겠지만 일반적이된다.
							반환하지 않았을 경우에 그럼에도 액터에 잇는 컴포넌트들과 연결을 해줘야한다
								그럼 조금 변경을 해야하는데 매니지드 오브젝트를 먼저 등록해서 만들어 놔야한다.
								즉 지금의 과정을 변화시켜서 등록하는 과정으로 생각을 해야한다.
								그럼 컴포넌트들은 필요가 없을것이다
								->	결론 어차피 액터들의 컴포넌트가 변화가 이루어지는건 극히 드문경우이고 
									같은 액터라면 같은 컴포넌트들이 잇을것이기때문에 처음 만들때만 생성해준다.

			
			만약 루트가 없다면 시스템이라고 생각하고 해당 클래스가 있는지 체크를 한다.
				없다면 새롭게 생성할것인지 컨피규에서 확인한다.
					컨피규에서 새롭게 생성한다라는게 켜져있다면
						새롭게 생성을 한다. 이때 이거 전용 함수를 실행시켜준다.
					안켜져있다면 무시한다. 즉 해당 액터의 생성은 거절된다.
				있다면 해당 시스템에 관련된 매니지드 오브젝트를 넣고 상태를 변화시켜준다.(정지되어진것만 찾아서 넣는것이므로)
			

		논리부터 생각하자
			다시 처음부터 설계한다.
			여기는 처음부터 매니지드 오브젝트를 제너레이트 하는곳이다.
			액터가 있다는 전재하에 만든다
			해당 액터에서 루트 컴포넌트를 가져온다,
				그리고 해당 오브젝트의 타입으로 객체를 생성해준다.
				객체의 생성을 할때 staticPolyMorph 를 사용한다. 
				아니면 이것도 생성하는 것을 만들어줄까? 이럴거면 역할을 좀 바꾸자. 
			루트 컴포넌트가 있다면
				해당 루트 컴포넌트를 생성하는 곳에 넣는다.
					해당 함수는 씬 컴포넌트를 받고		

			루트 컴포넌트가 없다면
				해당 액터는 시스템에 사용되는 것으로 이것보다 위에 만들어지는 시스템은 uobject 단에서밖에 없다
				그래서 해당 매니지드 오브젝트 태그에 해당 정보를 써 넣는다.
			다시 생각해보자
				오브젝트를 NewAlloc 할거다
				이때 이에 해당하는 Actor 가 만들어질거다. 이러한 액터는 결국 어떻게 되어야하나.
				잠시만 생각해보니깐 해당 물체의 AActor 포인터만 가지고 있어도 되는거아님?
				물론 그 자체를 가지는게 제일 좋아보이긴 하는데, 이미 매니지드 컴포넌트에 그에 따른 행동이 있잖아.
				그럼 차라리 인터페이스를 만들어서 내가 새로운 Pawn 을 만들었을때 그에 할당시켜가지고 
				사용하는게 맞는거아님?
				커맨드에서 보자 내가 transform 을 시킬거야.
				그럼 커맨드 transform 에다가 값을 이제 쓰는거지. 그리고 해당 액터에서 IManagedBridge 를 통해 해당 액터의 
				인덱스를들고오고 해당 값을 넣어주고 런 시키면 움직이는거잖아. 즉 커맨더가 들어가있으니깐 작동하겠지.
				만약 유저가 마우스 클릭후에 옮겼어 그럼 그 옮기는 함수 부분에 직접 transform 시키는게 아니라 해당 커맨더를 
				커맨더에 등록시키는 것을 호출해서 값을 써주는거지.그리고 그곳에 자기자신 넣어주고 콜백함수도 넣어주고
				그럼 해당 액터의 매니지드 오브젝트를 알아서 찾아서 넣어주면 되는거아님?그리고 언리얼 내부에 있는 id 를 써야하나?
				아니면 해당 오브젝트가 맞다라는 정확한 정보가 필요한데... 생성은 순서대로니깐 오브젝트타입+생성순서 로 통일?
				그러면 IManagedObectBridge 는 해당 정보가 들어가 있는 액터겠네? pawn 들도 전부 이거 상속받아 만들고
				stuff 들도 이거 상속받아 만들고 그리고 만들어지면 이게 자동으로 호출되면서 액터의 이름과 순서를 받아서 만들기네
				즉 나는 어느 시스템에 가서도 동일한 정보를 유지할 수 있는 절대적인 게 필요한데 이걸 이렇게 하면 되겠네
				-> 정리하자면 절대적인 액터를 구분하는 것이필요.-> 이거는 좀 나중에 해도 괜찮을까? 
	*/


	return reValue;
}
