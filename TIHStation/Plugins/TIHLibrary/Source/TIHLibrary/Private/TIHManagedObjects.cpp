#include "TIHManagedObjects.h"
#include "TIHCommands.h"
#include "TIHStationCore.h"
#include "TIHManagedObjectLeafs.h"

FTIHGenerateCandidateLeaves FTIHGenerateCandidateLeaves::gErrorReference = {};

//	정리를 한다면 이름들을 좀 통일하기
void FTIHMngObjFactory::OnGeneratePipeLining(FTIHMngObjPool* targetPool)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMngObjFactory& managedObjectFactory = TIHSTATION.GetManagedObjectPoolCenter().GetFactory();
	static FTIHTickTock& tickTock = TIHSTATION.GetTickTock();
	if(mIsStartPipeLining == true)
	{
		mStartTick = tickTock.GetTick();
		mIsStartPipeLining = false;
		const FTIHMngObjPoolCenterConfigure& centerConfig = poolCenter.GetMngObjPoolCenterConfig();
		/*
			미리 큐의 공간을 늘려준다.
		*/
		targetPool->GetGenerateQueues().Reserve(centerConfig.ForActorQueueCount, centerConfig.ForCompositeCount, centerConfig.ForLeafCount);
		mGenStartCallBack.Broadcast();
	}
	managedObjectFactory.SetManagedObjectPool(targetPool);

	const FTIHMngObjPoolConfigure& targetPoolConfig = targetPool->GetConfigure();

	TDeque<FTIHNewAllocPrepareData>& prepareQueue = poolCenter.GetPrepareDataQueue();
	int32 prepareNum = prepareQueue.Num();
	const TArray<FTIHMngObj*>& wholeArray = targetPool->GetWholeManagedObjectArray();
	FTIHMngObjGenerateQueues& GenerateQues = targetPool->GetGenerateQueues();

	int32 wholeObjNum = 0;
	const int32 wholeObjMax = wholeArray.Max();

	int32 endPhaseCount = targetPoolConfig.PoolDatas.MaxPhase;//	한번을 돌릴때 while 을 몇번돌릴지에 대한것임.
	int32 currPhaseCount = 0;

	targetPool->ReserveWholeObjectPool(targetPoolConfig.PoolDatas.WholeManagedObjectMaxCount);

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

		/*
			to-do
			다시 만들기 
			중요한건 공간을 늘리게 할건지 혹은 어떻게 할지 근데 대부분 일어나지 않을일이지만 에러처리부분인지라.
			extention 과 stop 으로 나눠서 
		*/
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
						/*
							to-do
							currAllocateCount 를 사용해서 공간 늘리기
							이게 전체에서 남은 공간을 얻어오는거임.
						*/
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

		if (currPrepareData.TargetUEClassBase == (int8)ETIHMngObjHeaderProcotols::EActorBase)
		{
			managedObjectFactory.GenerateUEActorBaseByPrepareData(currAllocateCount, currPrepareData.TargetClassHash, GenerateQues, isChildActor);
			managedObjectFactory.GenerateManagedObjectByActorArray(GenerateQues, currPrepareData.CallParentIndex);
			managedObjectFactory.GenerateManagedObjectCompositeArray(GenerateQues);
			managedObjectFactory.GenerateManagedObjectLeafArray(GenerateQues);

			prepareQueue.PopFirst();
		}
		else if (currPrepareData.TargetUEClassBase == (int8)ETIHMngObjHeaderProcotols::EWidgetBase)
		{

		}
		else if (currPrepareData.TargetUEClassBase == (int8)ETIHMngObjHeaderProcotols::ESystem)
		{

		}
		else if (currPrepareData.TargetUEClassBase == (int8)ETIHMngObjHeaderProcotols::EAuto)
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
		/*
			이제 끝났으니 정리해주는 코드임
		*/
		targetPool->GetGenerateQueues().OnEmpty();
		mGenEndCallBack.Broadcast();
		break;
	}
	
}

void FTIHMngObjFactory::GenerateUEActorBaseByPrepareData(int16 allocount, UEObjectHash64 ueObjHash, FTIHMngObjGenerateQueues& generateQueues, bool isChild)
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

		for (int16 addCount = 0; addCount < allocount; ++addCount)
		{
			AActor* newActor = spawnWorld->SpawnActor(spawnClass, &spawnTransform);
			ConvertPoolableActor(newActor);
			generateQueues.PushBackActor(newActor, ueObjHash);
		}
	}

}

void FTIHMngObjFactory::GenerateManagedObjectByActorArray(FTIHMngObjGenerateQueues& generateQueues, int16 parentData)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	int32 actorArrayNum = generateQueues.GetNumInActorQueue();
	//	to-do
	//	나중에 업데이트 할때 해주자
	//	액터도 같은 수끼리 묶어주는 작업해놓으면 됨. 그리고 prepare 만들어서 넣어주면 된다.

	FTIHMngObjPool& currMngObjPool = *GetCurrentManagedObjectPool();

	while (true)
	{
		if (generateQueues.IsEmptyActorQueue() == true)
		{
			break;
		}
		TTIHMngObjTempDataPair<UEObjectHash64, AActor*> currActor = generateQueues.GetTopAndPopActorPairQueue();
		USceneComponent* rootScene = currActor.UEValueType->GetRootComponent();

		FTIHMngObj* newManagedObject = new FTIHMngObj();
		newManagedObject->InitMngObj(currActor.UEValueType, parentData, currMngObjPool.GetConfigure().PoolDatas.AllocationSpace);
		newManagedObject->SetUEObjectHash(currActor.HashValueType);

		if (rootScene != nullptr)
		{
			generateQueues.PushBackPrepareDataForComposite
			(
				{ 
					0 ,					/* Step */
					-1, 				/* ParentCompositeIndex */
					rootScene ,			/* UE SceneComponent Pointer */
					newManagedObject 	/* TIHManagedObject Pointer */
				}
			);
		}
		else
		{
			newManagedObject->ChainManagedObjectHeader()
				.SetProtocol((int8)ETIHManagedObjectHeaderProtocols::ESystem);
		}

		currMngObjPool.AddNewManagedObject(newManagedObject);

		/*
			to-do
			업데이트 해주는부분이 여기가 맞는지.
		*/
		newManagedObject->UpdateStateByManagedObjectHeader();
	}
}

void FTIHMngObjFactory::GenerateManagedObjectCompositeArray(FTIHMngObjGenerateQueues& generateQueues)
{
	FTIHCommander& commander = TIHSTATION.GetCommander();

	FTIHMngObjPool& currMngObjPool = *GetCurrentManagedObjectPool();
	const int16 currAllocationSpace = currMngObjPool.GetConfigure().PoolDatas.AllocationSpace;
	int16 currStep = 0;

	while (true)
	{
		if (generateQueues.IsEmptyPrepareDataForCompositeQueue() == true)
		{
			break;
		}
		FTIHMngObjGenerateCompositeBFSData&& currGenData = generateQueues.GetTopAndPopPrepareDataForCompositeQueue();
		int16 stepValue = currGenData.StepValue;
		int16 parentCompositeIndex = currGenData.ParentCompositeIndex;
		FTIHMngObj* currManagedObject = currGenData.TIHManagedObject;
		USceneComponent* currScene = currGenData.UESceneComponent;

		if(currScene->StaticClass() == UChildActorComponent::StaticClass())
		{
			GenerateUEChildActorBy(Cast<UChildActorComponent>(currScene), currManagedObject, generateQueues);
		}
		//	그냥 여기에 childrenActorComponent 를 추가하자.

		FTIHMngObjComposite* newComposite = new FTIHMngObjComposite();
		newComposite->InitMngObjComposite(currAllocationSpace, currScene, parentCompositeIndex, stepValue);
		currManagedObject->AddComposite(newComposite);

		const TArray<TObjectPtr<USceneComponent>>& childScenes = currScene->GetAttachChildren();

		for (const TObjectPtr<USceneComponent>& childScene : childScenes)
		{		
			generateQueues.PushBackPrepareDataForComposite
			(
				{ 
					stepValue + 1 ,	//	level
					newComposite->GetIndexInManagedObjectCompositeArray(),	//	parentIndex == curCompositeIndex
					childScene ,	//	attachScenes
					currManagedObject	//	managedObject
				}
			);
		}
		generateQueues.PushBackEmptyComposite(newComposite);
	}
}

void FTIHMngObjFactory::GenerateUEChildActorBy(UChildActorComponent* childActorScene, FTIHMngObj* currManagedObject, FTIHMngObjGenerateQueues& genereteQueues)
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	static FTIHMngObjGenerateHelper& genHelper = TIHSTATION.GetGenerateHelper();

	check(childActorScene != nullptr);

	AActor* childActor = childActorScene->GetChildActor();

	check(childActor != nullptr);

	UClass* childActorClass = childActor->StaticClass();
	UEObjectHash64 ueChildActorCls = genHelper.GetUEHashByActorUClass(childActorClass);

	check(ueChildActorCls != genHelper.GetNoRegistTag());

	genereteQueues.PushBackActor(childActor, ueChildActorCls);
	UEObjectHash64 chileActorHash = genHelper.GetUESceneComponentHashByUClass(childActorClass);
	int16 parentIndex = currManagedObject->GetSelfIndexInWholeArray();
	poolCenter.EmplaceAddMngObjPrepareDataForChildActor(chileActorHash, parentIndex);
}

void FTIHMngObjFactory::GenerateManagedObjectLeafArray(FTIHMngObjGenerateQueues& tempDatas)
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

FTIHMngObjPoolCenter& FTIHMngObjPoolCenter::GetSingle()
{
	static FTIHMngObjPoolCenter& SelfObject = TIHSTATION.GetManagedObjectPoolCenter();
	return SelfObject;
}

void FTIHMngObjPoolCenter::InstantiateThis()
{
	mManagedObjectFactory = new FTIHMngObjFactory;
}

void FTIHMngObjPoolCenter::InitiateThis()
{

}

void FTIHMngObjPoolCenter::GenerateDefaultMngObjPools()
{
	FTIHMngObjPoolConfigure tempConfig;
	FTIHMngObjPool* tempMngPool = nullptr;

	tempConfig.Reset();
	tempConfig.PoolDatas.AllocationSpace = TIHNameSpaceManagedObject::AllocationSpaceType::AdminSpace;
	tempConfig.PoolDatas.WholeManagedObjectMaxCount = 128;
	tempConfig.PoolDatas.AddWholeCapasityWhenFullWhole = 16;
	tempConfig.PoolDatas.MaxPhase = 256;
	tempConfig.PoolDatas.Option0 = 0;

	tempMngPool = GenerateMngObjPoolByConfigure(tempConfig);

	mManagedObjectPools.Add
	(
		tempConfig.PoolDatas.AllocationSpace,
		tempMngPool
	);

	tempConfig.Reset();
	tempConfig.PoolDatas.AllocationSpace = TIHNameSpaceManagedObject::AllocationSpaceType::SystemSpace;
	tempConfig.PoolDatas.WholeManagedObjectMaxCount = 256;
	tempConfig.PoolDatas.AddWholeCapasityWhenFullWhole = 16;
	tempConfig.PoolDatas.MaxPhase = 256;
	tempConfig.PoolDatas.Option0 = 0;

	tempMngPool = GenerateMngObjPoolByConfigure(tempConfig);

	mManagedObjectPools.Add
	(
		tempConfig.PoolDatas.AllocationSpace,
		tempMngPool
	);

	tempConfig.Reset();
	tempConfig.PoolDatas.AllocationSpace = TIHNameSpaceManagedObject::AllocationSpaceType::GlobalSpace;
	tempConfig.PoolDatas.WholeManagedObjectMaxCount = 512;
	tempConfig.PoolDatas.AddWholeCapasityWhenFullWhole = 8;
	tempConfig.PoolDatas.MaxPhase = 256;
	tempConfig.PoolDatas.Option0 = 0;

	tempMngPool = GenerateMngObjPoolByConfigure(tempConfig);

	mManagedObjectPools.Add
	(
		tempConfig.PoolDatas.AllocationSpace,
		tempMngPool
	);
}

void FTIHMngObjPoolCenter::EmplaceAddMngObjPrepareData(int8 TargetClassType, UEObjectHash64 TargetClassHash, int16 CallParentIndex, int16 AllocateCount)
{
	//mPrepareDatas.EmplaceLast(FTIHNewAllocPrepareData( TargetClassType ,AllocateCount ,CallParentIndex ,TargetClassHash ));
	//FTIHNewAllocPrepareData tempData(TargetClassType, AllocateCount, CallParentIndex, TargetClassHash);
	mPrepareDatas.EmplaceLast((int8)TargetClassType, (int16)AllocateCount, (int16)CallParentIndex, (UEObjectHash64)TargetClassHash);
}

void FTIHMngObjPoolCenter::EmplaceAddMngObjPrepareDataForChildActor(UEObjectHash64 TargetClassHash, int16 CallParentIndex)
{
	EmplaceAddMngObjPrepareData((int8)ETIHMngObjHeaderProcotols::EActorBase, TargetClassHash, CallParentIndex, 1);
}

int8 FTIHMngObjPoolCenter::RegistManagedObjectPool(ETIHManagedObjectSpace managedObjectSpace, FTIHMngObjPool* managedObjectPool)
{
	int8 reValue = (int8)ETIHManagedObjectSpace::ENotRegistSpace;
	int8 wantSpaceSlot = (int8)managedObjectSpace;
	//	outBoundFTIHGenerateCandidateLeaves
	int8 maxSpaceSlotOutBound = wantSpaceSlot + MaxObjectPoolSlotCount;//- (int8)ETIHManagedObjectSpace::ELoaclSpace;

	for (; wantSpaceSlot < maxSpaceSlotOutBound; ++wantSpaceSlot)
	{
		if (mManagedObjectPools.Contains(wantSpaceSlot) == false)
		{
			reValue = wantSpaceSlot;
			mManagedObjectPools.Add(wantSpaceSlot, managedObjectPool);
			managedObjectPool->SetManagedPoolSpace(wantSpaceSlot);
			break;
		}
	}
	return reValue;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::GetManagedObjectPool(int8 objectPoolSpace)
{
	FTIHMngObjPool* reValue = nullptr;

	if (mManagedObjectPools.Contains(objectPoolSpace) == true)
	{
		reValue = mManagedObjectPools[objectPoolSpace];
	}
	return reValue;
}

UEObjectHash64 FTIHMngObjPoolCenter::RegistUEClassForGenerate(UClass* ucls)
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
			to-do
			중복! 에대한 로그를 넘긴다.
		*/
		
		check(false);
	}
	return newHash;
}


void FTIHMngObjPoolCenter::RegistFunctionForManagedComponentGeneration(TIHReturn64 managedCompHash, TFunction< FTIHMngObjLeaf* ()> func)
{
	if (mTIHClassHashToGenerateFunction.Contains(managedCompHash) == false)
	{
		mTIHClassHashToGenerateFunction.Add(managedCompHash, func);
	}
	else
	{
		/*
			to-do
			log.changeDelegateFunc
		*/
		mTIHClassHashToGenerateFunction[managedCompHash] = func;
	}
}

FTIHMngObjFactory& FTIHMngObjPoolCenter::GetFactory()
{
	return *mManagedObjectFactory;
}

void FTIHMngObjPoolCenter::OnGeneratePipeLining(int8 allocationSpace)
{
	FTIHMngObjPool* mngObjPool = GetManagedObjectPool(allocationSpace);
	check(mngObjPool != nullptr);
	mManagedObjectFactory->OnGeneratePipeLining(mngObjPool);
}

void FTIHMngObjPoolCenter::OnSetObjectPoolConfigure(const FTIHMngObjPoolConfigureDatas& data)
{

}

const FTIHGenerateCandidateLeaves& FTIHMngObjPoolCenter::GenerateManagedObjectComponentByUClass(UClass* ucls)
{
	check(ucls != nullptr);
	const FName & compName = ucls->GetClassPathName().GetAssetName();
	bool isContain = mClassNameToUeClassHash.Contains(compName);
	/*
		이걸 고치거나 지우자.
	*/
	if (isContain == true)
	{
		UEObjectHash64 ueHash = mClassNameToUeClassHash[compName];
		return mUClassToClassHashs[ueHash];
	}
	else
	{
		return FTIHGenerateCandidateLeaves::gErrorReference;
	}
}

UEObjectHash64 FTIHMngObjPoolCenter::GetUeHashByUClassInUEComponent(UClass* ucls)
{
	check(ucls != nullptr);
	/*
		이걸 고치거나 지우자.
	*/
	return 0;
}

bool FTIHMngObjPoolCenter::IsUeHashValid(UEObjectHash64 ueHash)
{
	bool reValue = mUClassToClassHashs.Contains(ueHash);
	return reValue;
}

const FTIHGenerateCandidateLeaves& FTIHMngObjPoolCenter::GetTIHHashArrayByUEHash(UEObjectHash64 ueHash)
{
	return mUClassToClassHashs[ueHash];
}

FTIHMngObjLeaf* FTIHMngObjPoolCenter::GenerateManagedComponentByTIHHash(TIHObjectHash64 ueHash)
{
	FTIHMngObjLeaf* reValue = nullptr;

	reValue = mTIHClassHashToGenerateFunction[ueHash]();

	return reValue;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::CreateManagedObjectPool(
	int8 allocationSpace, int16 wholeMngObjCapacity, int16 processingPhaseCount, UWorld* spawnSpace, AActor* ownerActor,
	const FTransform& defaultTransform /*= FTransform::Identity*/,const int8 ifAddCapacityCount /*= 256 */)
{
	return nullptr;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::GenerateMngObjPoolByConfigure(FTIHMngObjPoolConfigure config)
{
	FTIHMngObjPool* reValue = nullptr;
	/*
		마냥 생성하는게 아니라 메모리에 접근해야함. 
	
	*/
	if(mManagedObjectPools.Contains(config.PoolDatas.AllocationSpace) == false)
	{
		/*
			WholeManagedObjectMaxCount;
			MaxPhase;
			AddWholeCapasityWhenFullWhole;
			AllocationSpace;
			Option0;//{bitmask : isSet  WholeManagedObjectMaxCount,MaxPhase,AddWholeCapasityWhenFullWhole}
			Option1;
		*/
		reValue = new FTIHMngObjPool(*this);
		config.PoolDatas.Option0 =
			1 << 0 | 1 << 1 | 1 << 2 | 1 << 3;
		reValue->SetMngObjPoolConfig(config);
		reValue->UpdateConfig();
	}
	else
	{
		/*
			to-do
			이미 있으니 새롭게 만들어라라는 로그를 띄운다.
		*/

	}

	return reValue;
}

FTIHMngObj* FTIHMngObjPoolCenter::PoolingManagedObject(int8 allocationSpace, int8 ueObjBase, TIHObjectHash64 ueObjHash)
{
	FTIHMngObj* reValue = nullptr;
	if (mManagedObjectPools.Contains(allocationSpace) == true)
	{
		reValue = mManagedObjectPools[allocationSpace]->GetAnyReadyMngObj(ueObjBase, ueObjHash);
	}
	return reValue;
}

TIHReturn64 FTIHMngObjPool::ReserveWholeObjectPool(int16 maxCount)
{
	TIHReturn64 reValue = 0;
	if(mWholeManagedObjects.Max() < maxCount)
	{
		reValue = mWholeManagedObjects.Max();
		mWholeManagedObjects.Reserve(maxCount);
	}
	return reValue;
}

void FTIHMngObjPool::AddNewManagedObject(FTIHMngObj* newManagedObject)
{
	int16 addIndex = mWholeManagedObjects.Add(newManagedObject);
	int8 allocSpaceIndex = newManagedObject->GetManagedObjectAlloactionSpace();

	newManagedObject->SetSelfIndexInWholeArray(addIndex);

	newManagedObject->GetManagedUObject()->SetTIHData0(allocSpaceIndex);
	newManagedObject->GetManagedUObject()->SetTIHData1(addIndex);
};

void FTIHMngObjPool::OnSortManagedStates()
{
	for (int32 i = 0; i < mWholeManagedObjects.Num(); ++i)
	{
		if (mWholeManagedObjects[i] == nullptr)
		{
			continue;
		}
		if (mWholeManagedObjects[i]->GetStateNonConst().IsStateAllocated() == true)
		{
			mWholeManagedObjects[i]->GetStateNonConst().ChangeStateAllocatedToReady();


		}
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
	}
}

void FTIHMngObjPool::OnCompleteCreateNewAlloc()
{
	OnChangeStateAllocateToReady();
	/*
		0314 여기서 호출해주자.
	*/
	for (FTIHMngObj* mngObj : mWholeManagedObjects)
	{

	}
}



void FTIHMngObjPool::OnRepeatCreateNewAlloc(int32 currPhase)
{
	/*
		to-do
		이걸 콜하는 곳은 OnGeneratePipelining 인데, 그곳에서 void 를 호출했을때 콜된다
		여기에다가 함수포인터 만들어도 괜찮음
	*/
}

void FTIHMngObjPool::OnErrorCallCreateNewAlloc(TIHReturn64 errCode)
{
	/*
		to-do
		이걸 콜하는 곳은 OnGeneratePipelining 인데, 그곳에서 error 를 호출했을때 콜된다
		함수포인터를 만들어서 넣어주자. 기본은 내부에서 그냥 콜해주는걸로가자.
	*/
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
		return FTIHGenerateCandidateLeaves::gErrorReference;
	}
}

void FTIHMngObj::SetManagedObjectParent(int16 parentIndex)
{
	static FTIHMngObjGenerateHelper& tagHelper = TIHSTATION.GetGenerateHelper();
	mParentIndexInWholeArray = parentIndex;
	//if (-1 < parentIndex)
	//{
	//	//mHashTable.Add(HasParent);
	//	//GetParent()->HasChild
	//}
	//else
	//{
	//	//mHashTable.Add(Root);
	//}

}

void FTIHMngObj::InitMngObj(AActor* targetActor, int16 parentIndex, int8 allocationSpace)
{
	static FTIHTickTock& genTick = TIHSTATION.GetTickTock();
	SetGenerateTick(genTick.GetTick());
	SetManagedUObject(targetActor);
	SetManagedObjectParent(parentIndex);
	ChainManagedObjectHeader()
		.SetProtocol(TIHNameSpaceManagedObject::UEClassBaseType::ActorBase)
		.SetManagedObjectState((int8)ETIHManagedObjectStepState::ENotUse);
	SetAllocSpace(allocationSpace);

	std::vector<int> a;
	
}

FTIHMngObjPool* FTIHMngObj::GetMyManagedPool()
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	FTIHMngObjPool* reValue = nullptr;
	reValue = poolCenter.GetManagedObjectPool(mManagedObjectHeader.AllocationSpace);
	check(reValue != nullptr);

	return reValue;
}

void FTIHMngObj::SettingLeafTable()
{
	for(FTIHMngObjComposite* composite : mCompositeArray)
	{
		mHashTable.Union(composite->SettingLeafTable());
	}
}

void FTIHMngObj::QueryLeafActorMove(int16 compositeIndex, const FTransform& transform) 
{

}

void FTIHMngObj::QueryLeafActorMoveRoot(const FTransform& transform)
{
	/*
		to-do
		TEXT root 를 담은 리스트를 어딘가에 만들기
	*/
	if(mSpecialCompositetIndex.Contains(TEXT("root")) == true)
	{
		FTIHMngObjComposite* composite = mCompositeArray[mSpecialCompositetIndex[TEXT("root")]];
		FTIHMngObjLeafMovement* movementLeaf = composite->TryGetLeafForMovement();
		if(movementLeaf != nullptr)
		{
			movementLeaf->SetAddWorldTransform(transform);
		}
		/*
			query 들을 위한 로그 남기기
		*/
	}
}

void FTIHMngObj::CompleteGenerateFunc()
{

}

void FTIHMngObjComposite::AddLeaf(FTIHMngObjLeaf* leaf)
{
	check(leaf != nullptr);

	leaf->SetSelfIndex(mLeafMap.Num());
	leaf->SetManagedObjectCompositeIndex(this->GetSelfIndex());

	mLeafMap.Add(leaf->GetHashValue(), leaf);
}

FTIHMngObjLeaf* FTIHMngObjComposite::GetLeaf(TIHHash64 tihHash)
{
	FTIHMngObjLeaf* reValue = nullptr;
	if (mLeafMap.Contains(tihHash) == true)
	{
		reValue = mLeafMap[tihHash];
	}
	return reValue;
}

FTIHMngObj* FTIHMngObjComposite::GetOwnerMngObj()
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	FTIHMngObj* reValue = nullptr;
	FTIHMngObjPool* mngObjPool = poolCenter.GetManagedObjectPool(GetManagedObjectComponentHeader().AllocationSpace);
	if(mngObjPool != nullptr)
	{
		reValue = mngObjPool->GetMngObj(GetOwnerIndex());
	}
	return reValue;
}


void FTIHMngObjComposite::SetParent(int16 parent)
{
	TIHSTATION_TYPE& station = TIHSTATION;
	if (-1 < parent)
	{
		/*
			hasParent
		*/


	}
	else
	{
		/*
			root
			이제 여기에서 GetOwnerMngObj 이거쓰고 해당 매니지드 오브젝트에게 등록해주면 되는데, 어떻게 할까?

		*/
		
	}
	mParentIndex = parent;
}

FTIHMngObjLeafMovement* FTIHMngObjComposite::TryGetLeafForMovement()
{
	return static_cast<FTIHMngObjLeafMovement*>(TryGetLeafByHash(FTIHMngObjLeafMovement::TIHClassNameHash()));
}

FTIHMngObjLeafPretty* FTIHMngObjComposite::TryGetLeafForPretty()
{
	return static_cast<FTIHMngObjLeafPretty*>(TryGetLeafByHash(FTIHMngObjLeafPretty::TIHClassNameHash()));
}

FTIHMngObjLeafStMesh* FTIHMngObjComposite::TryGetLeafForStMesh()
{
	return static_cast<FTIHMngObjLeafStMesh*>(TryGetLeafByHash(FTIHMngObjLeafStMesh::TIHClassNameHash()));
}

FTIHMngObjLeafSkMesh* FTIHMngObjComposite::TryGetLeafForSkMesh()
{
	
	return static_cast<FTIHMngObjLeafSkMesh*>(TryGetLeafByHash(FTIHMngObjLeafSkMesh::TIHClassNameHash()));
}

FTIHMeshPool* FTIHMeshPool::GetSingle()
{
	static FTIHMeshPool* reValue = &TIHSTATION.GetMeshPool();
	return reValue;
}

TTIHMeshCapsule<UStaticMesh>* FTIHMeshPool::GenerateStaticMeshCapsules(const FString& path)
{
	static FTIHTickTock& tickTock = TIHSTATION.GetTickTock();
	TTIHMeshCapsule<UStaticMesh>* capsule = new TTIHMeshCapsule<UStaticMesh>(tickTock.GetTick(),path);
	return capsule;
}

void FTIHMeshPool::InitiateThis()
{
	mDefaultCategories.Add(0, TEXT("NotAllocCategory"));
	mDefaultCategories.Add(1, TEXT("Default0"));
	mDefaultCategories.Add(2, TEXT("Default1"));
	mDefaultCategories.Add(3, TEXT("Default2"));
	mDefaultCategories.Add(4, TEXT("Default3"));
	mDefaultCategories.Add(5, TEXT("StMeshDefault"));
	mDefaultCategories.Add(6, TEXT("SkMeshDefault"));
}

void FTIHMeshPool::PrepareStaticMeshPathsByCategory(const FString& cat, const FString& meshPath)
{
	using namespace TIHNameSpaceCommon;
	using namespace TIHNameSpaceMesh;

	//	애초에 들어가 있지 않는다.
	if (mStagingStMeshTable.Contains(meshPath) == false)
	{
		//	여기에서 tick 과 path 가 채워진다.
		int16 index = mStagingStMeshs.Add(MakeShareable(GenerateStaticMeshCapsules(meshPath)));
		mStagingStMeshTable.Add(meshPath, index);
	}
	TSharedPtr< TTIHMeshCapsule<UStaticMesh>> curMeshCapsule = GetMeshCapsuleByMeshPath(meshPath);
	int16 lastIndex = GetMeshCapsuleIndexByMeshPath(meshPath);
	TIHTick32 curTick = curMeshCapsule->GetSelfTick();
	if (LoadQueryByTick.Contains(curTick) == false)
	{
		LoadQueryByTick.Add
		(
			curTick,
			FTIHQueryMeshPool
			(
				mMeshPoolConfig.CreateInnerQueryType,
				TIHNameSpaceMesh::MeshPoolQueryStateBitMask::LoadedPath |
				TIHNameSpaceMesh::MeshPoolQueryStateBitMask::HasTickTime
			)
		);

		int8 queryType = LoadQueryByTick[curTick].InnerQueryType;
		LoadQueryByTick[curTick].IntData.Add(lastIndex);
		if (TIHNameSpaceCommon::QueryType::StartEnd == queryType)
		{
			LoadQueryByTick[curTick].IntData.Add(lastIndex);//[1]	//	지금 넣을것이 범위의 라스트가 된다.
		}
	}
	else
	{
		int8 queryType = LoadQueryByTick[curTick].InnerQueryType;
		if (TIHNameSpaceCommon::QueryType::StartEnd == queryType)
		{
			LoadQueryByTick[curTick].IntData[1] = lastIndex;	//	지금 넣을것이 범위의 라스트가 된다.
		}
		else if (TIHNameSpaceCommon::QueryType::PerElement == queryType)
		{
			LoadQueryByTick[curTick].IntData.Add(lastIndex);
		}
	}

	if (LoadQueryByCategory.Contains(cat) == false)
	{
		LoadQueryByCategory.Add
		(
			cat,
			FTIHQueryMeshPool
			(
				mMeshPoolConfig.CreateInnerQueryType,
				TIHNameSpaceMesh::MeshPoolQueryStateBitMask::LoadedPath |
				TIHNameSpaceMesh::MeshPoolQueryStateBitMask::HasTickTime
			)
		);
		int8 queryType = LoadQueryByCategory[cat].InnerQueryType;

		LoadQueryByCategory[cat].IntData.Add(lastIndex);
		if (TIHNameSpaceCommon::QueryType::StartEnd == queryType)
		{
			LoadQueryByCategory[cat].IntData.Add(lastIndex);//[1]	//	지금 넣을것이 범위의 라스트가 된다.
		}
	}
	else
	{
		int8 queryType = LoadQueryByCategory[cat].InnerQueryType;

		if (TIHNameSpaceCommon::QueryType::StartEnd == queryType)
		{
			LoadQueryByCategory[cat].IntData[1] = lastIndex;
		}
		else if (TIHNameSpaceCommon::QueryType::PerElement == queryType)
		{
			LoadQueryByCategory[cat].IntData.Add(lastIndex);
		}
	}
}

void FTIHMeshPool::PrepareStMeshPathsByList(const TArray<FString>& stMeshList)
{
	if(mCategoryQueue.IsEmpty() == true)
	{
		mCategoryQueue.PushLast(mDefaultCategories[mMeshPoolConfig.CreateCategoryHashDefaultIndex]);
	}
	const FString& topCat = mCategoryQueue.First();
	
	for(const FString& curPath : stMeshList)
	{
		PrepareStaticMeshPathsByCategory(topCat, curPath);
	}

	if (0 < mMeshPoolConfig.CreateCategoryPop)
	{
		mCategoryQueue.PopFirst();
	}
}

void FTIHMeshPool::OnLoadStMeshsBySlidingWindow()
{
	check(mSlidingWindow != nullptr);
	const FTIHMeshPoolConfigure& meshPoolConfig = GetMeshPoolConfig();
	const int8 slidingWindowType = meshPoolConfig.SlidingWindowType;
	const int8 slindingSplitType = meshPoolConfig.SlidingWindowSplitType;
	const int16 slidingSplitValue = meshPoolConfig.SlidingWindowSplitValue;
	const int8 slidingWindowDir = meshPoolConfig.SlindingWindowDirection;

	mSlidingWindow->GetIndexArray(mCandidateArray);

	for(int16& index : mCandidateArray)
	{
		if(mStagingStMeshs[index]->IsLoadedMesh() == true)
		{
			continue;
		}
		mStagingStMeshs[index]->SyncLoad();
	}
	
	if(0< slidingWindowDir)
	{
		mSlidingWindow->SlidingRight(slidingSplitValue);
	}
	else
	{
		mSlidingWindow->SlidingLeft(slidingSplitValue);
	}

	if(mSlidingWindow->IsDone() == true)
	{
		mMeshLoadingDone();
	}
}

ATIHMeshPoolPathLoadImbeding* FTIHMeshPool::GetMeshPoolPathLoadImbeding()
{
	ATIHMeshPoolPathLoadImbeding* reValue = nullptr;
	if (mMeshPoolImbeding == nullptr)
	{
		mMeshPoolImbeding = new ATIHMeshPoolPathLoadImbeding;
	}
	reValue = mMeshPoolImbeding;
	return mMeshPoolImbeding;
}

void FTIHSlidingWindowSlack::SlidingRight(int16 value)
{
	const int16 rangeStartIndex = GetRangeStartIndex();
	const int16 rangeEndIndex = GetRangeEndIndex();
	const int16 rangeCount = GetRangeCount();
	const int16 changeValue = value % rangeCount;
	
	if(IsSlidingWindowDone() == true)
	{
		return;
	}

	AddSlidingWindow(std::abs(changeValue) );

	bool isOver = not IsInIndexFunc(rangeStartIndex, mSlidingPointer.Detail.RightIndex, rangeEndIndex);
	if(isOver == true)
	{
		mSlidingPointer.Detail.RightIndex = rangeEndIndex;
		if(rangeEndIndex < mSlidingPointer.Detail.LeftIndex)
		{
			CallBackRightAdd();
			SetRangeCount(0);
			SetSlidingWindowDoneState
			(
				(int8)ETIHSlidingWindowDoneStateTypes::ESlackEndDone |
				(int8)ETIHSlidingWindowDoneStateTypes::EWhenRightAdd
			);
		}
	}
}

void FTIHSlidingWindowSlack::SlidingLeft(int16 value)
{
	const int16 rangeStartIndex = GetRangeStartIndex();
	const int16 rangeEndIndex = GetRangeEndIndex();
	const int16 rangeCount = GetRangeCount();
	const int16 changeValue = value % rangeCount;

	if (IsSlidingWindowDone() == true)
	{
		return;
	}
	MinusSlidingWindow(std::abs( changeValue));
	bool isOver = not IsInIndexFunc(rangeStartIndex, mSlidingPointer.Detail.LeftIndex, rangeEndIndex);
	if(isOver == true)
	{
		mSlidingPointer.Detail.LeftIndex = rangeStartIndex;
		if (mSlidingPointer.Detail.RightIndex < rangeStartIndex)
		{
			CallBackLeftAdd();
			SetRangeCount(0);
			SetSlidingWindowDoneState
			(
				(int8)ETIHSlidingWindowDoneStateTypes::ESlackEndDone |
				(int8)ETIHSlidingWindowDoneStateTypes::EWhenLeftAdd
			);
		}
	}
}

bool FTIHSlidingWindowSlack::IsInIndex(int16 index)
{
	bool reValue = false;
	if(IsSlidingWindowDone() == false)
	{
		reValue = IsInIndexFunc(mSlidingPointer.Detail.LeftIndex, index, mSlidingPointer.Detail.RightIndex);
	}
	return reValue;
}

int32 FTIHSlidingWindowSlack::GetIndexArray(TArray<int16>& arr)
{
	int32 outIndex = -1;
	if (IsSlidingWindowDone() == false)
	{
		if(GetRangeCount() - 1 < arr.Num())
		{
			for(int16 i = mSlidingPointer.Detail.LeftIndex; i <= mSlidingPointer.Detail.RightIndex; ++i)
			{
				++outIndex;
				arr[outIndex] = i;
			}
		}
	}
	return outIndex;
}

FTIHSlidingWindowBase::FTIHSlidingWindowBase() :
	mSlidingWindowType((int8)ETIHSlidingWindowTypes::EStuckEnd),
	mSlidingWindowDoneState(0),
	mRangeCount(INT16_MAX),
	mRangeStartIndex(0),
	mRangeEndIndex(INT16_MAX)
{
	mOverCallBackLeftAdd = DefaultLeftOverFunction;
	mOverCallBackRightAdd = DefalutRightOverFunction;
}

void FTIHSlidingWindowStuck::SlidingRight(int16 value)
{
	const int16 rangeCount = GetRangeCount();
	const int16 changeValue = value % rangeCount;
	const int16 endRangeIndex = GetRangeEndIndex();

	AddSlidingWindow(std::abs(changeValue));
	if (endRangeIndex < mSlidingPointer.Detail.RightIndex)
	{
		mSlidingPointer.Detail.RightIndex = endRangeIndex;
		mSlidingPointer.Detail.LeftIndex = mSlidingPointer.Detail.RightIndex - (rangeCount - 1);
		CallBackRightAdd();
		SetSlidingWindowDoneState
		(
			(int8)ETIHSlidingWindowDoneStateTypes::EStuckEndDone |
			(int8)ETIHSlidingWindowDoneStateTypes::EWhenRightAdd

		);
	}
}

void FTIHSlidingWindowStuck::SlidingLeft(int16 value)
{
	const int16 rangeCount = GetRangeCount();
	const int16 changeValue = value % rangeCount;
	const int16 startRangeIndex = GetRangeStartIndex();

	MinusSlidingWindow(std::abs(changeValue));

	if (mSlidingPointer.Detail.LeftIndex < startRangeIndex)
	{
		mSlidingPointer.Detail.LeftIndex = startRangeIndex;
		mSlidingPointer.Detail.RightIndex = mSlidingPointer.Detail.LeftIndex + (rangeCount - 1);
		CallBackLeftAdd();
		SetSlidingWindowDoneState
		(
			(int8)ETIHSlidingWindowDoneStateTypes::EStuckEndDone |
			(int8)ETIHSlidingWindowDoneStateTypes::EWhenLeftAdd
		);
	}
}
