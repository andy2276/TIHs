#include "TIHManagedObjects.h"
#include "TIHCommands.h"
#include "TIHStationCoreDefines.h"

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
	if (targetPoolConfig.PoolDatas.WholeManagedObjectMaxCount < wholeObjMax)
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
				if (0 < targetPoolConfig.PoolDatas.AddWholeCapasityWhenFullWhole)
				{
					if (targetPoolConfig.PoolDatas.AddWholeCapasityWhenFullWhole + wholeObjMax < INT16_MAX)
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

void FTIHMngObjFactory::GenerateManagedObjectByActorArray(FTIHMngObjTempDatas& tempDatas, int16 parentData)
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
		TTIHMngObjTempDataPair<UEObjectHash64, AActor*> currActor = tempDatas.GetTopAndPopActorPairQueue();
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
		newComposite->InitMngObjComposite(currAllocationSpace, currScene, ParentCompositeIndex, StepValue);
		currManagedObject->AddComposite(newComposite);

		const TArray<TObjectPtr<USceneComponent>>& childScenes = currScene->GetAttachChildren();

		for (const TObjectPtr<USceneComponent>& childScene : childScenes)
		{
			//													level						parentIndex == curCompositeIndex		attachScenes	managedObject
			tempDatas.PushBackPrepareDataForComposite({ StepValue + 1 ,newComposite->GetIndexInManagedObjectCompositeArray(),childScene ,currManagedObject });
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
	static FTIHMngObjPoolCenter& poolCenter = FTIHDefaultStation::GetSingle().GetManagedObjectPoolCenter();

	while (true)
	{
		if (tempDatas.IsEmptyEmptyCompositeQueue() == true)
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
void FTIHMngObjPoolCenter::RegistUEClassForGenerate(UClass* ucls)
{
	check(ucls != nullptr);
	FName uclassName = ucls->GetClassPathName().GetAssetName();
	//	여기에서  cstr 을 얻어내야한다.

	TIHReturn64 newHash = ClassNameHashImplement(*(uclassName.ToString()));
	if (mUeClassHashToUClass.Contains(newHash) == false)
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


void FTIHMngObjPool::PushBackReadyMngObj(FTIHMngObj* target)
{
	int8 ueObjBase = target->GetManagedObjectUEObjectBase();
	TIHHash64 ueObjHash = target->GetUEObjectHash();
	int16 mngobjSelfIndex = target->GetSelfIndexInWholeArray();

	if (mManagedObjectStateReadyIndices.Contains(ueObjBase) == false)
	{
		mManagedObjectStateReadyIndices.Add(ueObjBase, TMap< TIHHash64, TDeque<int16>>());
	}
	if (mManagedObjectStateReadyIndices[ueObjBase].Contains(ueObjHash) == false)
	{
		mManagedObjectStateReadyIndices[ueObjBase].Add(ueObjHash, TDeque<int16>());
	}
	mManagedObjectStateReadyIndices[ueObjBase][ueObjHash].PushLast(mngobjSelfIndex);
}

FTIHMngObj* FTIHMngObjPool::GetAnyReadyMngObj(int8 base, TIHHash64 ueHash)
{
	FTIHMngObj* reValue = nullptr;

	if (mManagedObjectStateReadyIndices.Contains(base) == true)
	{
		if (mManagedObjectStateReadyIndices[base].Contains(ueHash) == true)
		{
			int16 candiateIndex = mManagedObjectStateReadyIndices[base][ueHash].First();
			if (mWholeManagedObjects[candiateIndex]->GetStateNonConst().IsStateReady() == true)
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
	for (FTIHMngObj* mngObj : mWholeManagedObjects)
	{
		bool isOk = false;
		isOk = mngObj->GetStateNonConst().ChangeStateAllocatedToReady();

		if (isOk == true)
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

void FTIHMngObjGenerateHelper::GenerateLeavesByUEHash(UEObjectHash64 ueHash, FTIHMngObjComposite& out)
{
	if (mRegistedGenCandidates.Contains(ueHash) == true)
	{
		const FTIHGenerateCandidateLeaves& hashArray = mRegistedGenCandidates[ueHash];
		for (const TIHHash64& tihHash : hashArray.GenerateTags.Array())
		{
			out.AddLeaf(GenerateTIHManagedObjectLeaf(tihHash));
		}
	}
}

const FTIHGenerateCandidateLeaves& FTIHMngObjGenerateHelper::GetCandidateForManagedLeafByUEComponentHash(UEObjectHash64 ueHash)
{
	if (mRegistedGenCandidates.Contains(ueHash) == true)
	{
		return mRegistedGenCandidates[ueHash];
	}
	else
	{
		return FTIHGenerateCandidateLeaves();
	}
}
