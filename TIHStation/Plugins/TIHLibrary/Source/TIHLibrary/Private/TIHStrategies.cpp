\
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


void FTIHMngObjPoolCenter::MergeSamePrepareDatas()
{
	if (mPrepareDatas.Num() < 2)
	{
		return;
	}
	FTIHNewAllocPrepareData mergeDataA = mPrepareDatas.First();
	mPrepareDatas.PopFirst();

	int32 mergeCount = mPrepareDatas.Num();

	for (int32 i = 0; i < mergeCount; ++i)
	{


	}

	//mPrepareDatas.PushLast(mergeDataA);

}

TIHReturn64 FTIHStrategyCmdMngObj::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	TIHReturn64 reValue = 0;
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	const FTIHCommandHeader& cmdHeader = cmdBase->GetCommandHeader();
	const FTIHCommandMethod& cmdMethod = cmdBase->GetCommandMethod();

	if (cmdHeader.ProtocolOption == 0)/*prepare*/
	{
		FTIHCmdMngObjAllocPrepareDatas* createNewAlloc = static_cast<FTIHCmdMngObjAllocPrepareDatas*>(cmdBase);

		const FTIHCmdMngObjAllocPrepareDatasDatas& feature = createNewAlloc->GetCommandFeature();
		poolCenter.EmplaceAddMngObjPrepareData(feature.TargetClassType, feature.TargetClassHash, -1, feature.AllocateCount);
	}
	else if (cmdHeader.ProtocolOption == 1)
	{
		FTIHCmdMngObjAllocOnGenerate* createNewAlloc = static_cast<FTIHCmdMngObjAllocOnGenerate*>(cmdBase);

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

TIHReturn64 FTIHStrategyLoadMesh::ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase)
{
	return 0;
}
