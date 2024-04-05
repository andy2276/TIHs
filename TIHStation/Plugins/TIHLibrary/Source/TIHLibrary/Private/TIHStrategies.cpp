
#include "TIHStrategies.h"
#include "TIHManagedObjects.h"
#include "TIHManagedObjectLeafs.h"
#include "TIHStationCore.h"



TIHReturn64 FTIHCommanderStrategyCreateAssignPool::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;


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
TIHReturn64 FTIHCommanderStrategyCreateNewAlloc::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	//static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	//const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	//const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	////	원래는 option 으로 특징을 확인하는 과정이 있어야하지만 기본으로 제공되는거에 그게 필요한가?
	////	필요함. prepare 과정과 execute과정은 나눠져 있어야함.

	//if (cmdHeader.ProtocolOption == 0)/*prepare*/
	//{
	//	FTIHCommandCreateNewAllocPrepare* createNewAlloc = static_cast<FTIHCommandCreateNewAllocPrepare*>(cmdBase);

	//	const FTIHNewAllocPrepareData& feature = createNewAlloc->GetCommandFeature();
	//	poolCenter.EmplaceAddMngObjPrepareData(feature.TargetClassType, feature.TargetClassHash, -1, feature.AllocateCount);
	//}
	//else if (cmdHeader.ProtocolOption == 1)
	//{
	//	FTIHCommandCreateNewAllocOnGenerate* createNewAlloc = static_cast<FTIHCommandCreateNewAllocOnGenerate*>(cmdBase);

	//	const FTIHMngObjPoolConfigureDatas& onGenerateData = createNewAlloc->GetCommandFeature();

	//	int8 allocationSpace = onGenerateData.AllocationSpace;
	//	if (onGenerateData.Option0 != 0)
	//	{
	//		poolCenter.GetManagedObjectPool(allocationSpace)->SetObjectPoolConfigure(onGenerateData);
	//	}

	//	poolCenter.OnGeneratePipeLining(allocationSpace);
	//}

	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													ServerConnect Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyServerConnect::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyServerSend::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyServerListen::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyServerDisConnect::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyDeleteRejectPool::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyDeleteDestory::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyModifyTransform::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyModifyValue::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	//static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	//static FTIHMeshPool& meshPool = *FTIHMeshPool::GetSingle();

	//const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	//const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	//if(cmdHeader.ProtocolOption == 0)
	//{
	//	FTIHCommandModifyMesh* modifyValue = static_cast<FTIHCommandModifyMesh*>(cmdBase);
	//	const FTIHCommandModifyMeshData& modifyData = modifyValue->GetCommandFeature();
	//	const int16 targetMngObjSpace = modifyData.MngObjPoolAllocationSpace;
	//	const int16 targetMngObjIndex = modifyData.MngObjIndex;
	//	const int16 targetMngObjCompositeIndex = modifyData.MngObjCompositeIndex;
	//	const int16 targetMeshIndex = modifyData.LoadedMeshIndex;
	//	FTIHMngObj* mngObj = poolCenter.GetManagedObjectPool(targetMngObjSpace)->GetMngObj(targetMngObjIndex);
	//	FTIHMngObjLeafStMesh* tryLeaf = mngObj->TryGetCastedLeaf<FTIHMngObjLeafStMesh>(targetMngObjCompositeIndex);
	//	check(tryLeaf != nullptr);
	//	/*
	//		tihReturn 을 통합해보자.
	//	*/
	//	tryLeaf->SetStMesh(meshPool.GetLoadedStaticMeshByIndex((targetMeshIndex)));
	//}
	//else if(cmdHeader.ProtocolOption == 1)
	//{

	//}


	return reValue;
}
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
															Strategy
													InOutReadAndSave Implements
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
TIHReturn64 FTIHCommanderStrategyInOutReadAndSave::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
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
TIHReturn64 FTIHCommanderStrategyInOutWriteAndModify::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;

	return reValue;
}
#pragma endregion


TIHReturn64 FTIHStrategyCmdMngObj::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	using namespace TIHNameSpaceCommandType;
	TIHReturn64 reValue = 0;
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	if (OptionManagedObject::PrepareDatas == cmdHeader.ProtocolOption)/*prepare*/
	{
		FTIHCmdMngObjAllocPrepareDatas* createNewAlloc = static_cast<FTIHCmdMngObjAllocPrepareDatas*>(cmdBase);

		const FTIHCmdMngObjAllocPrepareDatasDatas& feature = createNewAlloc->GetCommandFeature();
		/*
			to-do
			여기 수정필요
			용도는 prepare data 를 커맨드로 등록하는기능임
		*/
		//poolCenter.EmplaceAddMngObjPrepareData(feature.TargetUEClassBase, feature.TargetClassHash, -1, feature.AllocateCount);
	}
	else if (OptionManagedObject::PoolCenterSetConfigure == cmdHeader.ProtocolOption)
	{
	}
	else if(OptionManagedObject::OnGenerate == cmdHeader.ProtocolOption)
	{
		FTIHCmdMngObjAllocOnGenerate* createNewAlloc = static_cast<FTIHCmdMngObjAllocOnGenerate*>(cmdBase);

		//const FTIHMngObjPoolConfigureDatas& onGenerateData = createNewAlloc->GetCommandFeature();
		//
		//int8 allocationSpace = onGenerateData.AllocationSpace;
		//if (onGenerateData.Option0 != 0)
		//{
		//	poolCenter.GetManagedObjectPool(allocationSpace)->SetObjectPoolConfigure(onGenerateData);
		//}
		//poolCenter.OnGeneratePipeLining(allocationSpace);
	}

	return reValue;
}

TIHReturn64 FTIHStrategyLoadMesh::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	using namespace TIHNameSpaceCommandType;
	TIHReturn64 reValue = 0;
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMeshPool& meshPool = TIHSTATION.GetMeshPool();

	const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	if(TIHNameSpaceCommandType::OptionMeshLoad::MeshPoolSetConfigure == cmdHeader.ProtocolOption)
	{
		FTIHCmdMeshPoolSetConfigure* meshPoolSetConfig = static_cast<FTIHCmdMeshPoolSetConfigure*>(cmdBase);

		const FTIHCmdMeshPoolSetConfigureDatas& setConfigDatas = meshPoolSetConfig->GetCommandFeature();
		if(0 < setConfigDatas.MeshCategoryName.Len())
		{
			meshPool.PushBackCategory(setConfigDatas.MeshCategoryName);
		}
		meshPool.SetMeshPoolConfig(setConfigDatas.MeshPoolConfigure);
		
	}
	else if(TIHNameSpaceCommandType::OptionMeshLoad::StMeshPathListLoadByServer == cmdHeader.ProtocolOption)
	{
		/*
			to-do
			여기에는 서버에서 경로리스트를 받을때 써주면 되는곳이다.
			참고로 기본적으로 서버에서 받는것은 repeat임
		*/
	}
	else if (TIHNameSpaceCommandType::OptionMeshLoad::StMeshPathListLoadByImbeding == cmdHeader.ProtocolOption)
	{
		//	이건 간단하게 string 만 넣어놓자.
		FTIHCmdStMeshPathListLoadByImbeding* castedCmd = static_cast<FTIHCmdStMeshPathListLoadByImbeding*>(cmdBase);
		meshPool.PushBackCategory(castedCmd->GetCommandFeature());

		ATIHMeshPoolPathLoadImbeding* imbeding = meshPool.GetMeshPoolPathLoadImbeding();
		meshPool.PrepareStMeshPathsByList(imbeding->GetMeshPathList());
	}
	else if (TIHNameSpaceCommandType::OptionMeshLoad::StMeshPathListLoadByConfigObject == cmdHeader.ProtocolOption)
	{
		/*
			to-do
			컨피규 에서 들고오는건데 이걸 나중에 만들자...나중에
		*/
	}
	else if (TIHNameSpaceCommandType::OptionMeshLoad::StMeshPathListLoadBySpecial == cmdHeader.ProtocolOption)
	{
		/*
			to-do
			특수하게 처리해야하는경우에 사용한다. 커맨드안에 넣는게 아니라 특수 처리 를 여기다 넣는데 일단 
			보류
		*/
	}
	/*
		to-do
		이제 추가적으로 stmeshload 시에 해야할걸 해야함 이거 로드하는거라 경로뿐만아니라 메쉬도 해야함
	*/
	return reValue;
}

TIHReturn64 FTIHStrategySystem::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	
	static TIHSTATION_TYPE& staion = TIHSTATION;
	static FTIHStationInterface stationStaticPolymorph;

	const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	/*
		config 하던가
		reserve
		일단 station 실행을 여기다.

		Instantiate 는 gameInstance 에서 해준다.
		prepareStation
		Initiate
		이걸 stationExecute 라고 할까?
	*/
	
	if(0 == cmdHeader.ProtocolOption)//	stationExecute
	{
		if (0 == cmdHeader.Option0)//	prepareStation
		{
			reValue = stationStaticPolymorph.OnPrepareStation(staion);
		}
		else if(1 == cmdHeader.Option1)//	init
		{
			reValue = stationStaticPolymorph.OnInitializeStation(staion);
		}
		else if (3 == cmdHeader.Option1)//	wait
		{
			reValue = stationStaticPolymorph.OnWaitStation(staion);
		}
		else if (3 == cmdHeader.Option1)//	suspend
		{
			reValue = stationStaticPolymorph.OnSuspendStation(staion);
		}
		else if (4 == cmdHeader.Option1)//	refresh
		{
			reValue = stationStaticPolymorph.OnRefreshStation(staion);
		}
		else if(5 == cmdHeader.Option1)//	finalize
		{
			reValue = stationStaticPolymorph.OnFinalizeStation(staion);
		}
		else if (6 == cmdHeader.Option1)//	
		{
			reValue = stationStaticPolymorph.OnDestroyStation(staion);
		}
	}
	else if(1 == cmdHeader.ProtocolOption)
	{

	}

	return reValue;
}
