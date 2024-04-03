#include "TIHManagedObjects.h"
#include "TIHCommands.h"
#include "TIHStationCore.h"
#include "TIHManagedObjectLeafs.h"

void DefalutRightOverFunction()
{

}

void DefaultLeftOverFunction()
{
	
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

int16 FTIHMngObj::PushBackComposite(FTIHMngObjComposite* composite)
{
	int16 addedIndex = mCompositeArray.Add(composite);

	TIHHash64 compositeHash = composite->GetMngObjCompositeHash();

	if(mCompositeTable.Contains(compositeHash) == false)
	{
		mCompositeTable.Add(compositeHash,TArray<int16>() );
	}
	mCompositeTable[compositeHash].Add(addedIndex);
	composite->SetSelfIndex(addedIndex);
	composite->SetOwnerIndex(GetSelfIndex());
	composite->SetOwnerAllocationSpace(GetAllocationSpace());
	composite->PostRegistCallBack(this);

	composite->OnLinkingCallback(this);

	return addedIndex;
}

void FTIHMngObj::DeleteContent()
{
	if(mContents != nullptr)
	{
		switch (mMngObjHeader.UObjectType)
		{
		case TIHNameSpaceManagedObject::UEClassBaseType::ActorBase:
			DeleteActorBase(Cast<AActor>(mContents));
			break;
		case TIHNameSpaceManagedObject::UEClassBaseType::WidgetBase:
			DeleteWidgetBase(Cast<UWidget>(mContents));
			break;
		}
	}
	mContents = nullptr;
}

void FTIHMngObj::SetContents(UObject* ueobj)
{
	DeleteContent();
	mContents = ueobj;
	ueobj->SetTIHData0(GetSelfIndex());
	ueobj->SetTIHData1(GetAllocationSpace());
}

void FTIHMngObj::GenerateContentByHeader()
{
	/*
		to-do 
		generate 부분 만들기
		근데 이거하려면 factory 부터 만들어야함
		여기서 해주는게 뭐냐면 기존의 컨텐츠를 지우고 새롭게 언리얼 오브젝트를 만드는거임.
		그리고 나서 이것저것 갱신해줘야함.
	*/
	if(mMngObjState.IsReGeneratePossible() == true)
	{
		DeleteContent();
		mMngObjState.OnReset();
		switch (mMngObjHeader.UObjectType)
		{
		case TIHNameSpaceManagedObject::UEClassBaseType::ActorBase:
			GenerateActorByUclass();
			break;
		case TIHNameSpaceManagedObject::UEClassBaseType::WidgetBase:
			GenerateWidgetByUclass();
			break;
			/*
				to-do
				system 만들기
			*/
		}
		
		
	}
	else if(mMngObjState.IsOnStaging() == true)
	{
		/*
			to-do
			지금 pooling 되었는데 사용하지는 않는 상황임. 즉 준비는 다되었다는소리
		*/

	}
	else if(mMngObjState.IsOnUsing() == true)
	{


	}
}



void FTIHMngObj::SetMngObjHeader(const FTIHMngObjHeader& mngObjHeader)
{
	/*
		여기서 해야하는건 헤더가 변경이 되면 모든걸 리셋해야한다는것이다.
		리셋에는 엑터를 지우는 행위도 포함이 된다.
		그리고 state 를 변경해야한다.
		우선 이게 새롭게 만들어지는 과정과 같다
	*/
	if(mMngObjState.IsReGeneratePossible() == true)
	{

	}
	mMngObjHeader = mngObjHeader;
}

FTIHMngObj* FTIHMngObj::QueryGetParent()
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	FTIHMngObj* reValue = nullptr;
	FTIHMngObjPool* mngPool = poolCenter.GetMngObjPoolByIndex(mMngObjHeader.AllocationSpace);
	reValue = mngPool->QueryGetMngObj(mParentIndex);
	return reValue;
}


void FTIHMngObj::GenerateActorByUclass()
{
	/*
		to-do
		어느 월드인지 어디에 나올지 정해야함
		그거는 Factory 에서 해주자. 즉 Factory 의 것에서 해줘야함.
		물론 이거는 커맨드를 사용할게 아님.
	
	*/
	mMngObjState.OnContent();
}

void FTIHMngObj::GenerateWidgetByUclass()
{

	mMngObjState.OnContent();
}



int16 FTIHMngObjComposite::PushBackLeaf(FTIHMngObjLeaf* value)
{
	TIHHash64 leafHash = value->GetLeafHash();
	if(mLeafTable.Contains(leafHash) == false)
	{
		mLeafTable.Add(leafHash, TArray<int16>());
	}
	int16 leafIndex = mLeafs.Add(value);
	value->SetOwnerIndex(GetSelfIndex());
	value->SetSelfIndex(leafIndex);
	value->SetUEObjectView(GetUEObject());
	mLeafTable[leafHash].Add(leafIndex);
	value->OnLinkingCallback(this);
	return leafIndex;
}

void FTIHMngObjComposite::OnLinkingCallback(FTIHMngObj* owner)
{

}

void FTIHMngObjComposite::PostRegistCallBack(FTIHMngObj* owner)
{
	mOwnerIndex = owner->GetSelfIndex();
	mAllocationSpace = owner->GetMngObjHeader().AllocationSpace;
}

FTIHMngObj* FTIHMngObjComposite::GetOwnerMngObj()
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	FTIHMngObj* reValue = nullptr;

	int8 allocSpace = GetOwnerAllocationSpace();
	int16 ownerIndex = GetOwnerIndex();

	reValue = poolCenter.QueryGetMngObj(allocSpace, ownerIndex);

	return reValue;
}

FTIHMngObjComposite* FTIHMngObjComposite::QueryGetParentComposite()
{
	FTIHMngObjComposite* reValue = nullptr;
	reValue = GetOwnerMngObj()->GetCompositeByIndex(mParentIndex);
	return reValue;
}

void FTIHMngObjComposite::GenerateUESceneLeaves()
{
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();
	UObject* compUCls = GetUEObject();
	const TArray<TIHHash64>& leafHashs = poolCenter.QueryUEComponentBindTIHLeavesByUClass(compUCls->StaticClass());
	mLeafs.Reserve(leafHashs.Num());
	for (const TIHHash64& leafHash : leafHashs)
	{
		FTIHMngObjLeaf* temp = nullptr;
		temp = poolCenter.QueryGenerateLeafByLeafHash(leafHash);
		if (temp != nullptr)
		{
			PushBackLeaf(temp);
		}
	}
}

FTIHMngObjPool* FTIHMngObjPoolCenter::CreateAdminSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig)
{
	return nullptr;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::CreateSystemSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig)
{
	return nullptr;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::CreateGlobalSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig)
{
	return nullptr;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::CreateShareSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig)
{
	return nullptr;
}

FTIHMngObjPool* FTIHMngObjPoolCenter::CreateLocalSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig)
{
	return nullptr;
}

void FTIHMngObjPoolCenter::GenerateMngObjPool(const FTIHMngObjPoolConfigure& poolConfig)
{
	using namespace TIHNameSpaceManagedObject;
	FTIHMngObjPool* temp = nullptr;
	switch (poolConfig.AllocationSpace)
	{
	case AllocationSpaceType::UnknownSpace:
		break;
	case AllocationSpaceType::AdminSpace:
		temp = CreateAdminSpaceMngObjPool(poolConfig);
		break;
	case AllocationSpaceType::SystemSpace:
		temp = CreateSystemSpaceMngObjPool(poolConfig);
		break;
	case AllocationSpaceType::GlobalSpace:
		temp = CreateGlobalSpaceMngObjPool(poolConfig);
		break;
	case AllocationSpaceType::SharedSpace:
		temp = CreateShareSpaceMngObjPool(poolConfig);
		break;
	case AllocationSpaceType::LocalSpace:
		temp = CreateLocalSpaceMngObjPool(poolConfig);
		break;
	}
	if (temp == nullptr)
	{
	}

}

void FTIHMngObjPoolCenter::HowToUseMngObjPoolCenter()
{
	/*
		만약 	FTIHMngObjPoolCenter 를 불러와야한다면
		TIHSTATION 을 통해 불러오면된다.
		무조건 StationInstantiate 이후에 진행해야한다.
	*/
	static TIHSTATION_TYPE& station = TIHSTATION;
	static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

	/*
		만약 내가 만든 액터를 등록해야한다면로 등록해준다.
		무조건 PrepareData 이전에 등록시켜줘야한다.
	*/

	RegistUEObjectByMngObjHeaderSimple
	(
		TIHNameSpaceManagedObject::UEClassBaseType::ActorBase,
		AActor::StaticClass()
	);
	/*
		만약 내가 만든 UScene 이 있다면 RegistUEComponentSimple 
		이걸 써준다.
		해당 Scene 이 검색이 된다면 해당 Leaf 들을 담은 composite 를 만들고
		해당 composite 를 활용하여 컨트롤 할 수 있다.
	*/
	RegistUEComponentSimple
	(
		USceneComponent::StaticClass(),
		{
			TIHMACRO_MNG_OBJ_REGIST_LEAF(FTIHMngObjLeafMovement),
			TIHMACRO_MNG_OBJ_REGIST_LEAF(FTIHMngObjLeafStMesh),
			TIHMACRO_MNG_OBJ_REGIST_LEAF(FTIHMngObjLeafPretty)
		}
	);

}

void FTIHMngObjPoolCenter::InstantiateThis()
{

}

void FTIHMngObjPoolCenter::InitiateThis()
{

}

FTIHMngObj* FTIHMngObjFactory::CreateActorBaseMngObj(FTIHMngObjPool* objPool,AActor* actor, FTIHMngObjHeader& objHeader)
{
	FTIHMngObj* reValue = nullptr;

	USceneComponent* rootScene =  actor->GetRootComponent();
	TArray< USceneComponent*> children;
	rootScene->GetChildrenComponents(true, children);
	
	reValue = new FTIHMngObj;
	reValue->SetMngObjHeader(objHeader);
	reValue->SetMngObjState
	(
		TIHNameSpaceManagedObject::MngObjState::OnContent |
		TIHNameSpaceManagedObject::MngObjState::OnInitate
	);
	objPool->PushBackMngObj(reValue);
	reValue->SetContents(actor);
	reValue->ReserveCompositeArray(children.Num()+1);

	GenerateActorBaseMngObjRootComposite(rootScene, reValue);

	for(USceneComponent* childComp : children)
	{
		GenerateActorBaseMngObjComposite(childComp, reValue);
	}

	return reValue;
}

TIHReturn64 FTIHMngObjFactory::DefaultStartPipeliningCallback()
{
	return 0;
}

TIHReturn64 FTIHMngObjFactory::DefaultEndPipeliningCallback()
{
	return 0;
}

bool FTIHMngObjFactory::CheckFactoryConfigure()
{
	bool reValue = true;
	if (mPoolCenter == nullptr)
	{
		reValue = false;
	}
	else if (mPoolCenter->IsValidObjectPool(mFactoryConfig.AlloactionSpace) == false)
	{
		reValue = false;
	}
	else if (mFactoryConfig.SpawnWorld == nullptr)
	{
		reValue = false;
	}
	return reValue;
}

void FTIHMngObjFactory::GenerateActorBaseMngObjRootComposite(USceneComponent* rootComp,FTIHMngObj* mngObj)
{
	TTIHMngObjActorComposite<USceneComponent>* composite = new TTIHMngObjActorComposite<USceneComponent>;
	UClass* compCls = rootComp->StaticClass();
	FTIHMngObjCompositeHeader compHeader;
	compHeader.CompositeType = TIHNameSpaceManagedObject::MngObjCompositeType::SceneComponentBase;
	compHeader.CompositeOption0 = mPoolCenter->GetRegistedUEComponentHash16ByUEClass(compCls);
	compHeader.CompositeOption1 = mPoolCenter->GetUECompositeBindTIHLeavesByUEClass(compCls).Num() + 1;
	compHeader.CompositeOption2 = 1;
	composite->SetCompositeHeader(compHeader);
	int16 selfIndex =mngObj->PushBackComposite(composite);
	composite->SetUESceneComponent(rootComp);

	FTIHMngObjLeafMovement* moveComp = static_cast<FTIHMngObjLeafMovement*>(FTIHMngObjLeafMovement::GenerateLeaf());
	composite->PushBackLeaf(moveComp);
	composite->GenerateUESceneLeaves();
}

TTIHMngObjActorComposite<USceneComponent>* FTIHMngObjFactory::GenerateActorBaseMngObjComposite(USceneComponent* childComp, FTIHMngObj* mngObj)
{
	TTIHMngObjActorComposite<USceneComponent>* composite = new TTIHMngObjActorComposite<USceneComponent>;
	UClass* compCls = childComp->StaticClass();
	FTIHMngObjCompositeHeader compHeader;
	compHeader.CompositeType = TIHNameSpaceManagedObject::MngObjCompositeType::SceneComponentBase;
	compHeader.CompositeOption0 = mPoolCenter->GetRegistedUEComponentHash16ByUEClass(compCls);
	compHeader.CompositeOption1 = mPoolCenter->GetUECompositeBindTIHLeavesByUEClass(compCls).Num();
	compHeader.CompositeOption2 = 0;
	composite->SetCompositeHeader(compHeader);
	mngObj->PushBackComposite(composite);

	composite->SetUESceneComponent(childComp);
	composite->GenerateUESceneLeaves();
	
	return composite;
}

void FTIHMngObjFactory::CheckFactoryState()
{
	switch (mFactoryConfig.PipeliningState)
	{
	case TIHNameSpaceManagedObject::FactoryState::StopFactory:
		if(CheckFactoryConfigure() ==true)
		{
			mFactoryConfig.PipeliningState = TIHNameSpaceManagedObject::FactoryState::SpawingActor;
			mStartPipeliningCallBack.CheckCallable();
			mCurrReturnValue = mStartPipeliningCallBack();

			mPhaseMax = TIHSTATION.GetManagedObjectPoolCenter().GetPrepareDataActorBaseQueue().Num();
			mPhaseCount = 0;
		}
		else
		{
			/*
				to-do
				invalid config
			*/
		}
		break;
	case TIHNameSpaceManagedObject::FactoryState::SpawingActor:

		break;
	case TIHNameSpaceManagedObject::FactoryState::GenerateActorBaseMngObj :

		break;
	case TIHNameSpaceManagedObject::FactoryState::EndingFactory:

		break;
	default:
		break;
	}
}

void FTIHMngObjFactory::OnPipelining()
{
	mPoolCenter = &TIHSTATION.GetManagedObjectPoolCenter();
	bool changeOk = false;
	
	CheckFactoryState();
	
	/*
		execute step
	*/
	switch (mFactoryConfig.PipeliningState)
	{
	case TIHNameSpaceManagedObject::FactoryState::StopFactory:
		break;
	case TIHNameSpaceManagedObject::FactoryState::SpawingActor:
	{
		SpawnActors();
	}
		break;
	case TIHNameSpaceManagedObject::FactoryState::GenerateActorBaseMngObj:
	{
		GenerateActorBaseMngObjs();
	}
		break;
	case TIHNameSpaceManagedObject::FactoryState::EndingFactory:
		mEndPipeliningCallBack.CheckCallable();
		mCurrReturnValue = mEndPipeliningCallBack();
		mFactoryConfig.PipeliningState = TIHNameSpaceManagedObject::FactoryState::StopFactory;
		break;
	default:
		break;
	}

}

void FTIHMngObjFactory::SpawnActors()
{
	TDeque<FTIHMngObjPrepareData>& prepareQue = mPoolCenter->GetPrepareDataActorBaseQueue();
	int16 curPhaseCount = mFactoryConfig.ProcessingMax;
	
	FActorSpawnParameters actorSpawnParam;
	actorSpawnParam.OverrideLevel = mFactoryConfig.SpawnOverrideLevel;
	actorSpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	//actorSpawnParam
	while(true)
	{
		if (prepareQue.IsEmpty() == true)
		{
			mFactoryConfig.PipeliningState = TIHNameSpaceManagedObject::FactoryState::GenerateActorBaseMngObj;
			break;
		}
		if( curPhaseCount <= 0)
		{
			/*
				한페이즈에 실행할수 있는것이 바닥났을경우.
			*/
			break;
		}
		FTIHMngObjPrepareData& curParepare = prepareQue.First();
		
		FTIHMngObjHeader& objHeader = mPoolCenter->GetRegistedUEObjectByIndex(curParepare.UEClassIndex);
		UClass* ueCls = objHeader.UEClass;
		
		AActor* spawndActor = mFactoryConfig.SpawnWorld->SpawnActor(
			ueCls,
			&mFactoryConfig.DefaultSpawnTransform,
			actorSpawnParam
		);

		SettingPoolingStateActor(spawndActor);

		mCreatedUEObjects.PushLast(spawndActor);
		
		--curPhaseCount;
		--curParepare.MngObjCount;
		
		if (curParepare.MngObjCount <= 0)
		{
			prepareQue.PopFirst();
		}
	}
	

}

void FTIHMngObjFactory::GenerateActorBaseMngObjs()
{
	int16 curPhaseCount = mFactoryConfig.ProcessingMax;
	while(true)
	{
		if(mCreatedUEObjects.IsEmpty() == true)
		{
			mFactoryConfig.PipeliningState = TIHNameSpaceManagedObject::FactoryState::EndingFactory;
			break;
		}
		if(curPhaseCount <= 0)
		{
			
			break;
		}
		--curPhaseCount;
		FTIHMngObjPool* mngObjPool = mPoolCenter->GetMngObjPoolByIndex(mFactoryConfig.AlloactionSpace);
		AActor* actor = static_cast<AActor*>(mCreatedUEObjects.First());
		FTIHMngObjHeader& mngObjHeader = mPoolCenter->GetRegistedUEObjectByUEClass(actor->StaticClass());
		CreateActorBaseMngObj(mngObjPool,actor, mngObjHeader);
		mCreatedUEObjects.PopFirst();
	}
}

FTIHMngObj* FTIHMngObjPool::GenerateMngObjByConfig(const FTIHMngObjHeader& config)
{


	return nullptr;

}

int16 FTIHMngObjPool::PushBackMngObj(FTIHMngObj* mngObj)
{
	int16 reValue = mMngObjArray.Add(mngObj);
	mngObj->SetSelfIndex(reValue);
	/*
		만약 매니지드 오브젝트가 unknown 이다 하면 
		아니 애초에 이걸 호출하는곳이 factory 임. 그럼 팩토리를 따르면 되는거아님?
		
	*/
	mngObj->SetAllocationSpace(GetMngObjPoolConfig().AllocationSpace);
	return reValue;
}

FTIHMngObjQuery::FTIHMngObjQuery()
{
	mPoolCenter = &TIHSTATION.GetManagedObjectPoolCenter();
}

FTIHMngObjQuery::~FTIHMngObjQuery()
{
	mPoolCenter = nullptr;
}

void FTIHMngObjLeaf::OnLinkingCallback(FTIHMngObjComposite* owner)
{



}
