#include "TIHCommands.h"

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

		if ((int8)ETIHCommandMethodProcessingProtocols::EStrategies == cmdMethod.CommandProcessingProtocol)
		{
			cmdResult.WholeData = ExecuteCommandStaticPolymorphs(primitiveCmd);
		}
		else if ((int8)ETIHCommandMethodProcessingProtocols::EDelegates == cmdMethod.CommandProcessingProtocol)
		{
			/*
				loopReValue = 커맨더 안에 있는 실행 델리게이트 실행
			*/
		}
		else if ((int8)ETIHCommandMethodProcessingProtocols::EMultiThreading == cmdMethod.CommandProcessingProtocol)
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
		if (mStrategyExention != nullptr)
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
	bool validCheck = (completIndex < mCompleteFunctions.Num()) ?
		mCompleteFunctions[completIndex].IsValidFunctor() : false;

	if (validCheck == true)
	{
		reValue = mCompleteFunctions[completIndex].GetFunction()(primitiveCmd);
	}

	return reValue;
}

TIHReturn64 FTIHCommander::CheckCallingErrorFunctions(FTIHCommandBase* primitiveCmd)
{
	return 0;
}


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

	if (currIndex + 1 < arrayNum)
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

	if (reValue.ReserveDetail.PreMax < reserveSize)
	{
		mBuildersArray.Reserve(reserveSize);
		int32 lastIndex = mBuildersArray.Num();

		reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Success;
		for (int32 i = lastIndex; i < reserveSize; ++i)
		{
			mBuildersArray.Add(FTIHCommandFactoryBuilders());
			mBuildersArray[i].CommandHeaderBuilder = CreateChainBuilderPtrCommandHeader();
			mBuildersArray[i].CommandMethodBuilder = CreateChainBuilderPtrCommandMethod();
		}
	}
	else
	{
		if (reValue.ReserveDetail.PreMax == reserveSize)
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

	for (int32 i = 0; i < mBuildersArray.Num(); ++i)
	{
		const FTIHCommandHeader cmdHeader = GetCastedBuildersCommandHeader(i);
		const FTIHCommandMethod cmdMethod = GetCastedBuildersCommandMethod(i);

		FTIHCommandBase* cmdBase = nullptr;

		int32 protocolIndex = cmdHeader.Protocol;
		if (protocolIndex < mGenerateCommandFunctions.Num())
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

		if (cmdBase != nullptr)
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