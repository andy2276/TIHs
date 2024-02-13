#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.generated.h"


USTRUCT()
struct FTIHMngObjHeader
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Protocol;//	objectType
	UPROPERTY()
	int8 ProtocolOption; // 뭐 해당 오브젝트의 이름같은거겠지
	UPROPERTY()
	int8 ComponentProtocol;
	UPROPERTY()
	int8 AllocatedSpace;

	TIHMACRO_CHAINBUILDER_SETTER_AUTO(Protocol);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(ProtocolOption);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(ComponentProtocol);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(AllocatedSpace);
};


USTRUCT()
struct FTIHMngObjPoolConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	FTIHMngObjPoolConfigureDatas PoolDatas;

	UPROPERTY()
	UWorld* SpawnSpace;

	UPROPERTY()
	AActor* OwnerActor;

	UPROPERTY()
	FTransform DefaultTransform;
};

USTRUCT()
struct FTIHNewAllocPrepareData
{
	GENERATED_BODY()

	static int16 StaticPrepareAddOrder;

	static int16 StaticPrepareAddOrderFunction()
	{
		++StaticPrepareAddOrder;
		if(StaticPrepareAddOrder < 0)
		{
			StaticPrepareAddOrder = 0;
		}
	}

	UPROPERTY()
	int8 TargetClassType;

	UPROPERTY()
	int8 AllocationSpace;

	UPROPERTY()
	int16 AllocateCount;

	UPROPERTY()
	int16 CallParentIndex;

	UPROPERTY()
	int16 AddOrder;
	
	UPROPERTY()
	UEObjectHash64 TargetClassHash;

	FTIHNewAllocPrepareData() :
		TargetClassType((int8)ETIHManagedObjectHeaderProtocols::ENotUse),
		AllocateCount(0),
		CallParentIndex(-1),
		TargetClassHash(FTIHMngObjGenerateHelper::GetSingle().GetNoRegistTag())
	{
	};
	FTIHNewAllocPrepareData(
		int8 targetClassType, int16 allocateCount,
		int16 callParentIndex, UEObjectHash64 targetClassHash
	) :
		TargetClassType(targetClassType),
		AllocateCount(allocateCount),
		CallParentIndex(callParentIndex),
		TargetClassHash(targetClassHash)
	{
	};

	FTIHNewAllocPrepareData(const FTIHNewAllocPrepareData& rvalue):
		TargetClassType(rvalue.TargetClassType),
		AllocateCount(rvalue.AllocateCount),
		CallParentIndex(rvalue.CallParentIndex),
		TargetClassHash(rvalue.TargetClassHash),
		AllocationSpace(rvalue.AllocationSpace)
		
	{
	}
	FTIHNewAllocPrepareData(FTIHNewAllocPrepareData&& rvalue) :
		TargetClassType(rvalue.TargetClassType),
		AllocateCount(rvalue.AllocateCount),
		CallParentIndex(rvalue.CallParentIndex),
		TargetClassHash(rvalue.TargetClassHash),
		AllocationSpace(rvalue.AllocationSpace)
	{
	}
	~FTIHNewAllocPrepareData()
	{
		
	}
	FTIHNewAllocPrepareData& operator=(const FTIHNewAllocPrepareData& rvalue)
	{
		TargetClassType = rvalue.TargetClassType;
		AllocateCount = rvalue.AllocateCount;
		CallParentIndex = rvalue.CallParentIndex;
		TargetClassHash = rvalue.TargetClassHash;
		AllocationSpace = rvalue.AllocationSpace;

		return *this;
	}

	FTIHNewAllocPrepareData& operator=(FTIHNewAllocPrepareData&& rvalue)
	{
		*this = std::move(rvalue);
		
		return *this;
	}
	
	bool IsSamePrepareData(const FTIHNewAllocPrepareData& compareOther)
	{
		bool reValue =
			(
				compareOther.TargetClassType == TargetClassType &&
				compareOther.AllocationSpace == AllocationSpace &&
				compareOther.CallParentIndex == CallParentIndex &&
				compareOther.TargetClassHash == TargetClassHash
				);
		return reValue;
	}
	void OnCheck()
	{
		AddOrder = 1;
	}
};

USTRUCT()
struct FTIHMngObjPoolConfigureDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int16 WholeManagedObjectMaxCount;

	UPROPERTY()
	int16 MaxPhase;

	UPROPERTY()
	int8 AddWholeCapasityWhenFullWhole;

	UPROPERTY()
	int8 AllocationSpace;

	UPROPERTY()
	int8 Option0;//{bitmask : isSet  WholeManagedObjectMaxCount,MaxPhase,AddWholeCapasityWhenFullWhole}

	UPROPERTY()
	int8 Option1;

	FTIHMngObjPoolConfigureDatas& operator=(const FTIHMngObjPoolConfigureDatas& otherDatas)
	{
		//	WholeManagedObjectMaxCount
		if(otherDatas.Option0 & 1 << 0 )
		{
			WholeManagedObjectMaxCount = otherDatas.WholeManagedObjectMaxCount;
		}
		//	MaxPhase
		if (otherDatas.Option0 & 1 << 1)
		{
			MaxPhase = otherDatas.MaxPhase;
		}
		//	AddWholeCapasityWhenFullWhole
		if (otherDatas.Option0 & 1 << 2)
		{
			AddWholeCapasityWhenFullWhole = otherDatas.AddWholeCapasityWhenFullWhole;
		}
		//	AllocationSpace
		if (otherDatas.Option0 & 1 << 3)
		{
			//	사실 이거 바꾸는건 얼척이 없는거긴해.
			AllocationSpace = otherDatas.AllocationSpace;
		}
		//	Option0
		if (otherDatas.Option0 < 0 )
		{
			Option0 = otherDatas.Option0;
		}
		//	Option1
		if (otherDatas.Option0 & 1 << 4)
		{
			Option1 = otherDatas.Option1;
		}
		return *this;
	}
};

//
//USTRUCT()
//struct FTIHMngObjPoolingDatas
//{
//	GENERATED_BODY()
//
//	UPROPERTY()
//	int8 AllocationSpace;
//
//	UPROPERTY()
//	int8 UEObjectBase;
//
//	UPROPERTY()
//	int16 PoolingCount;
//
//	UPROPERTY()
//	TIHObjectHash64 UEObjectHash;
//};
USTRUCT()
struct FTIHCommandCreateAssignPoolDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int8 CreateType;
	UPROPERTY()
	int8 DataType;
	UPROPERTY()
	int8 PoolMask;
	UPROPERTY()
	int8 PoolOption;

	UPROPERTY()
	int16 DataCount;
	UPROPERTY()
	int16 DataOption;

	TIHMACRO_CHAINBUILDER_SETTER(CreateType);
	TIHMACRO_CHAINBUILDER_SETTER(DataType);
	TIHMACRO_CHAINBUILDER_SETTER(PoolMask);
	TIHMACRO_CHAINBUILDER_SETTER(PoolOption);
	TIHMACRO_CHAINBUILDER_SETTER(DataCount);
	TIHMACRO_CHAINBUILDER_SETTER(DataOption);
};



class FTIHMngObjPool
{
public:

	FTIHMngObjPool(FTIHMngObjPoolCenter& center)
		: mPoolCenter(center)
	{};
	~FTIHMngObjPool() {};

	TIHReturn64 ReserveWholeObjectPool(int16 maxCount);


	FTIHUnionFind& GetUnionFind()
	{
		return mUnionFind;
	}

	FTIHMngObjPoolCenter& GetManagedObjectPoolCenter()
	{
		return mPoolCenter;
	}
	/*
		self 인덱스가 필요한가? 어차피 지금 객체를 특정짓는건 불가능하잖아. 그럼tarray 로 그냥 넣는게 맞지않나?
		근데 remove 를 위해서는 있어야하긴하네.
		tset 에 top 이있나?
	*/


#pragma region Object Assgin and NewAlloc
public:


	void SetManagedPoolSpace(int8 managedSpace)
	{

		mManagedObjectPoolConfigure.PoolDatas.AllocationSpace = managedSpace;
	}

	const FTIHMngObjPoolConfigure& GetConfigure()
	{
		return mManagedObjectPoolConfigure;
	}
	FTIHMngObjPoolConfigure& GetConfigureNoConst()
	{
		return mManagedObjectPoolConfigure;
	}
	void SetObjectPoolConfigure(const FTIHMngObjPoolConfigureDatas& datas)
	{
		mManagedObjectPoolConfigure.PoolDatas = datas;
	}

	//	여기에서 SetSelfIndexInWholeArray 를 해준다.
	void AddNewManagedObject(FTIHMngObj* newManagedObject)
	{
		int16 addIndex = mWholeManagedObjects.Add(newManagedObject);
		newManagedObject->SetSelfIndexInWholeArray(addIndex);

	}


	TArray<FTIHMngObj*>& GetWholeManagedObjectArray()
	{
		return mWholeManagedObjects;
	}
	FTIHMngObjTempDatas& GetTempDatas()
	{
		return mTempDatasForNewAlloc;
	}

	void OnSortManagedStates()
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

	void PushBackReadyMngObj(FTIHMngObj* target);
	FTIHMngObj* GetAnyReadyMngObj(int8 base, TIHHash64 ueHash);

	void OnChangeStateAllocateToReady();
	void OnCompleteCreateNewAlloc();

	void OnRepeatCreateNewAlloc(int32 currPhase);
	void OnErrorCallCreateNewAlloc(TIHReturn64 errCode);



protected:
	FTIHMngObjPoolCenter& mPoolCenter;

	TArray< FTIHMngObj*> mWholeManagedObjects;
	//	reserve 가 반드시 필요하다.

	/*
		reserve
		merge
		IsValid
	*/
	FTIHUnionFind mUnionFind;//	need reserve

	/*
		setWorldTarget
	*/
	AActor* mGenerateTargetWorld;	//	need setting
	/*
		setWorldTarget
	*/
	AActor* mGenerateOwner;//	need setting

	/*
		setManagedObjectConfigure 내부 setter 함수들
	*/
	FTIHMngObjPoolConfigure mManagedObjectPoolConfigure;

#pragma endregion

	TDeque< FTIHNewAllocPrepareData> mPrepareManagedObjects;

	//TMap<int8,TMap<int8, TMap<TIHHash64,TSet<int16>>>> mManagedObjectStateBaseTypeIndices;

	TMap<int8, TMap< TIHHash64, TSet<int16> > > mManagedObjectStateRunningIndices;
	/*
		base
			managedHash
					selfIndex
	*/
	TMap<int8, TMap< TIHHash64, TDeque<int16>>> mManagedObjectStateReadyIndices;

	/*
		running 일때 tset 쓰고
		ready 일땐 deque 쓰고

		저거 인터페이스 만들기
			저게 어디에 들어가야 할지 만들기
		커맨드와 리프들 만들기

	*/


	/*
		state
			base
				managedHash
					selfIndex
		allocate 는 무조건 생성하고 나서만 존재해야한다.
		그리고
	*/
	FTIHMngObjTempDatas mTempDatasForNewAlloc;
};

class FTIHMngObjPoolCenter
{
	/*
		사실 여기서 하고싶은건 ObjectPool 의 공통기능 및 공유 기능을 만드는건데,
		특히 prepare 이거를 하는거다.


	*/
public:
	static FTIHMngObjPoolCenter& GetSingle()
	{
		static FTIHMngObjPoolCenter& SelfObject = TIHSTATION.GetManagedObjectPoolCenter();
		return SelfObject;
	}
	void MergeSamePrepareDatas();



	TDeque<const FTIHNewAllocPrepareData>& GetPrepareDataQueue()
	{

		return mPrepareDatas;
	}
	void EmplaceAddMngObjPrepareData
	(
		int8 TargetClassType, UEObjectHash64 TargetClassHash,
		int16 CallParentIndex, int16 AllocateCount
	)
	{
		mPrepareDatas.EmplaceLast(FTIHNewAllocPrepareData{ TargetClassType ,AllocateCount ,CallParentIndex ,TargetClassHash });
	}
	void EmplaceAddMngObjPrepareDataForChildActor
	(
		UEObjectHash64 TargetClassHash, int16 CallParentIndex
	)
	{
		EmplaceAddMngObjPrepareData((int8)ETIHMngObjHeaderProcotols::EActorBase, TargetClassHash, CallParentIndex, 1);
	}


	int8 RegistManagedObjectPool(ETIHManagedObjectSpace managedObjectSpace, FTIHMngObjPool* managedObjectPool)
	{
		int8 reValue = (int8)ETIHManagedObjectSpace::ENotRegistSpace;
		int8 wantSpaceSlot = (int8)managedObjectSpace;
		//	outBound
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

	FTIHMngObjPool* GetManagedObjectPool(int8 objectPoolSpace)
	{
		FTIHMngObjPool* reValue = nullptr;

		if (mManagedObjectPools.Contains(objectPoolSpace) == true)
		{
			reValue = mManagedObjectPools[objectPoolSpace];
		}
		return reValue;
	}



	void RegistUEClassForGenerate(UClass* ucls);
	void RegistFunctionForManagedComponentGeneration(TIHReturn64 managedCompHash, TFunction< FTIHMngObjLeaf* ()> func)
	{
		if (mTIHClassHashToGenerateFunction.Contains(managedCompHash) == false)
		{
			mTIHClassHashToGenerateFunction.Add(managedCompHash, func);
		}
		else
		{
			/*
				log.changeDelegateFunc
			*/
			mTIHClassHashToGenerateFunction[managedCompHash] = func;
		}
	}
	void RegistLinkUEClassAndManagedComponentByUEClass(UClass* ucls, const TArray<TIHReturn64>& tihHashs)
	{

	}

	FTIHMngObjFactory& GetFactory()
	{
		return mManagedObjectFactory;
	}
	void OnGeneratePipeLining(int8 allocationSpace)
	{
		FTIHMngObjPool* mngObjPool = GetManagedObjectPool(allocationSpace);
		check(mngObjPool != nullptr);
		mManagedObjectFactory.OnGeneratePipeLining(mngObjPool);
	}
	void OnSetObjectPoolConfigure(const FTIHMngObjPoolConfigureDatas& data)
	{


	}
	const FTIHGenerateCandidateLeaves& GenerateManagedObjectComponentByUClass(UClass* ucls)
	{
		check(ucls != nullptr);
		FTIHGenerateCandidateLeaves reValue = {};
		const FName& compName = ucls->GetClassPathName().GetAssetName();
		bool isContain = mClassNameToUeClassHash.Contains(compName);

		if (isContain == true)
		{
			UEObjectHash64 ueHash = mClassNameToUeClassHash[compName];
		}
		return reValue;
	}
	UEObjectHash64 GetUeHashByUClassInUEComponent(UClass* ucls)
	{
		check(ucls != nullptr);
		UEObjectHash64 reValue = 0;
		const FName& compName = ucls->GetClassPathName().GetAssetName();
		bool isContain = mClassNameToUeClassHash.Contains(compName);
		if (isContain == true)
		{
			reValue = mClassNameToUeClassHash[compName];
		}
		return reValue;
	}
	bool IsUeHashValid(UEObjectHash64 ueHash)
	{
		bool reValue = mUClassToClassHashs.Contains(ueHash);
		return reValue;
	}
	const FTIHGenerateCandidateLeaves& GetTIHHashArrayByUEHash(UEObjectHash64 ueHash)
	{
		return mUClassToClassHashs[ueHash];
	}
	FTIHMngObjLeaf* GenerateManagedComponentByTIHHash(TIHObjectHash64 ueHash)
	{
		FTIHMngObjLeaf* reValue = nullptr;

		reValue = mTIHClassHashToGenerateFunction[ueHash]();

		return reValue;
	}
	/*
		그래서 이거는 어디서? 바로 원하는 곳에서 호출해주면 된다. 대신 prepare 들 이전에 호출해줘야함.

	*/
	FTIHMngObjPool* CreateManagedObjectPool(
		int8 allocationSpace,
		int16 wholeMngObjCapacity,
		int16 processingPhaseCount,
		UWorld* spawnSpace,
		AActor* ownerActor,
		const FTransform& defaultTransform = FTransform::Identity,
		int8 ifAddCapacityCount = 256
	);
	FTIHMngObj* PoolingManagedObject(int8 allocationSpace, int8 ueObjBase, TIHObjectHash64 ueObjHash)
	{
		FTIHMngObj* reValue = nullptr;
		if (mManagedObjectPools.Contains(allocationSpace) == true)
		{
			reValue = mManagedObjectPools[allocationSpace]->GetAnyReadyMngObj(ueObjBase, ueObjHash);
		}
		return reValue;
	}

private:
	TMap<FName, UEObjectHash64> mClassNameToUeClassHash;
	TDeque<const FTIHNewAllocPrepareData> mPrepareDatas;

	TMap<TIHObjectHash64, TFunction< FTIHMngObjLeaf* ()>> mTIHClassHashToGenerateFunction;
	TMap<UEObjectHash64, FTIHGenerateCandidateLeaves> mUClassToClassHashs;// ForManagedComponent	ue컴포넌트로 해당하는 해쉬찾는거임
	TMap<UEObjectHash64, UClass*> mUeClassHashToUClass;

	TMap<int8, FTIHMngObjPool*> mManagedObjectPools;

	FTIHMngObjFactory mManagedObjectFactory;
};



USTRUCT()
struct FTIHMngObjComponentHeader
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Protocol;//{}
	UPROPERTY()
	int8 AllocationSpace;
	UPROPERTY()
	int8 ProtocolOption;
	UPROPERTY()
	int8 Padding;

	TIHMACRO_CHAINBUILDER_SETTER(Protocol);
	TIHMACRO_CHAINBUILDER_SETTER(ProtocolOption);
	TIHMACRO_CHAINBUILDER_SETTER(AllocationSpace);
};
struct FTIHGenerateDataPairForManagedObjectLeaf
{
	TIHHash64 TihHash;
	TFunction<FTIHMngObjLeaf* ()> GenerateFunction;
};

class FTIHMngObjLeaf;

//	그냥 합치자
class FTIHMngObjGenerateHelper
{
public:
	static FTIHMngObjGenerateHelper& GetSingle()
	{
		static FTIHMngObjGenerateHelper self;
		return self;
	}
	/*
		UnknownHash
		ExistRegistHash
	*/
	UEObjectHash64 RegistUESceneComponentByUClass(UClass* ucls)
	{
		UEObjectHash64 reValue = 0;//UnknownHash
		reValue = ConvertUClassToHash(ucls);

		if(mRegistedUESceneComponenBytUEHash.Contains(reValue) == false)
		{
			mRegistedUESceneComponenBytUEHash.Add(reValue, ucls);
			mRegistedSwapUESceneToUEHash.Add(ucls, reValue);
		}
		else
		{
			/*
			reValue = existRegistHash
			*/
		}
		return reValue;
	}
	TIHHash64 ConvertUClassToHash(UClass* ucls)
	{
		check(ucls != nullptr);
		TIHHash64 reValue = GetNoRegistTag();
		FString assetName = ucls->GetClassPathName().GetAssetName().ToString();
		reValue = ClassNameHashImplement(*assetName);
		return reValue;
	}

	UClass* GetUESceneComponentByHash(UEObjectHash64 ueHash)
	{
		UClass* reValue = nullptr;

		if(mRegistedUESceneComponenBytUEHash.Contains(ueHash) == true)
		{
			reValue = mRegistedUESceneComponenBytUEHash[ueHash];
		}
		return reValue;
	}
	UEObjectHash64 GetUESceneComponentHashByUClass(UClass* ucls)
	{
		UEObjectHash64 reValue = 0;//	noRegist
		if(mRegistedSwapUESceneToUEHash.Contains(ucls) == true)
		{
			reValue = mRegistedSwapUESceneToUEHash[ucls];
		}
		return reValue;
	}
	
	UClass* GetUEActorClassByUEHash(UEObjectHash64 ueHash)
	{
		UClass* reValue = nullptr;
		if(mRegistedActorByUEHash.Contains(ueHash) == true)
		{
			reValue = mRegistedActorByUEHash[ueHash];
		}
		return reValue;
	}

	void RegistUEActorByUClass(UEObjectHash64 ueHash,UClass* ueActorUcls)
	{
		mRegistedActorByUEHash;

		if(mRegistedActorByUEHash.Contains(ueHash) == false)
		{
			mRegistedActorByUEHash.Add(ueHash, ueActorUcls);
			mSwapActorHashByUClass.Add(ueActorUcls, ueHash);
		}
		else
		{
			/*
				겹침
			*/
		}
	}

	/*
		이거 이관해야함
	*/
	void RegistGenerateFunc(TIHHash64 tihHash, TFunction<FTIHMngObjLeaf* ()> genFunc)
	{
		if(mRegistedGenerateFuncByTIHHash.Contains(tihHash) == false)
		{
			mRegistedGenerateFuncByTIHHash.Add(tihHash, genFunc);
		}
		else
		{
			/*
				logging.changeGenFunc
			*/
			mRegistedGenerateFuncByTIHHash[tihHash] = genFunc;
		}
	}
	FTIHMngObjLeaf* GenerateTIHManagedObjectLeaf(TIHHash64 tihHash)
	{
		FTIHMngObjLeaf* reValue = nullptr;
		if(mRegistedGenerateFuncByTIHHash.Contains(tihHash) == true)
		{
			reValue = mRegistedGenerateFuncByTIHHash[tihHash]();
		}
		else
		{
			/*

				logging.noregistedFunc

			*/
		}
		return reValue;
	}
	void RegistGenerateCandidateHashArrayByUEHash(UEObjectHash64 ueHash,const FTIHGenerateCandidateLeaves& hashArray)
	{
		 if(mRegistedGenCandidates.Contains(ueHash) == false)
		 {
			 mRegistedGenCandidates.Add(ueHash, hashArray);
		 }
	}
	
	const FTIHGenerateCandidateLeaves& GetGenerateCandidateHashArrayByUEHash(UEObjectHash64 ueHash)
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
	void GenerateLeavesByUEHash(UEObjectHash64 ueHash,FTIHMngObjComposite& out)
	{
		if(mRegistedGenCandidates.Contains(ueHash) == true)
		{
			const FTIHGenerateCandidateLeaves& hashArray = mRegistedGenCandidates[ueHash];
			for (const TIHHash64& tihHash : hashArray.GenerateTags.Array())
			{
				out.AddLeaf(GenerateTIHManagedObjectLeaf(tihHash));
			}
		}
	}

	const FTIHGenerateCandidateLeaves& GetCandidateForManagedLeafByUEComponentHash(UEObjectHash64 ueHash) 
	{
		if(mRegistedGenCandidates.Contains(ueHash) == true)
		{
			return mRegistedGenCandidates[ueHash];
		}
		else
		{
			return FTIHGenerateCandidateLeaves();
		}
	}

	void RegistForGenerate(UClass* ucls, TArray<FTIHGenerateDataPairForManagedObjectLeaf>& leafGenPairArray)
	{
		UEObjectHash64 registedUeHash = RegistUESceneComponentByUClass(ucls);
		FTIHGenerateCandidateLeaves hashArray;
		for (FTIHGenerateDataPairForManagedObjectLeaf& leafPair : leafGenPairArray)
		{
			hashArray.GenerateTags.Add(leafPair.TihHash);
			RegistGenerateFunc(leafPair.TihHash, leafPair.GenerateFunction);
		}
		RegistGenerateCandidateHashArrayByUEHash(registedUeHash, hashArray);
	}

	UEObjectHash64 GetUEHashByActorUClass(UClass* ucls)
	{
		UEObjectHash64 reValue = GetNoRegistTag();
		if(mSwapActorHashByUClass.Contains(ucls) == true)
		{
			reValue = mSwapActorHashByUClass[ucls];
		}
		return reValue;
	}

	UEObjectHash64 GetNoRegistTag()
	{
		static UEObjectHash64 reValue = ClassNameHashImplement(L"GetNoRegistTag");
		return reValue;
	}


private:
	TMap<UEObjectHash64, UClass*> mRegistedUESceneComponenBytUEHash;	//	for Leaf
	TMap<UClass*, UEObjectHash64> mRegistedSwapUESceneToUEHash;//	이거는 솔직히 잘안 쓸거 같긴함.  왜냐하면 이거 솔직히 용량 낭비같음
	
	//TMap< UClass*, UEObjectHash64> mRegistedSwap
	TMap<UEObjectHash64, FTIHGenerateCandidateLeaves> mRegistedGenCandidates;	//	이녀석은 uclass 를 넣으면 그에 해당하는 generateFunc목록에 관한 해쉬를 넘겨줌
	TMap < TIHHash64, TFunction<FTIHMngObjLeaf* ()> > mRegistedGenerateFuncByTIHHash;//	tih 해쉬를 넣으면 그에 해당하는 함수를 호출해줌.
	

	TMap< UEObjectHash64, UClass*> mRegistedActorByUEHash;//	for Actor
	TMap< UClass*, UEObjectHash64 > mSwapActorHashByUClass;//	for Actor
};

class FTIHMngObjComponent
{
public:
	/*
		여기서 씬을 넣었을때 컴포넌트에 필요한 기능을 해준다.
		case composite
			자기자신이아니라 Scene 에대한 해쉬
		case Leaf
			자기 자신의 hash 즉 managedObjectComposite 에 대한 해쉬
			타겟 scene 에대한 해쉬는 composite 에 잇음
	*/
	void SetHashValue(TIHHash64 tihHash)
	{
		mHashValue = tihHash;
	}
	TIHHash64 GetHashValue()
	{
		return mHashValue;
	}

	const FTIHMngObjComponentHeader& GetManagedObjectComponentHeader()
	{
		return mComponentHeader;
	}
	void SetManagedObjectComponentHeader(FTIHMngObjComponentHeader compHeader)
	{
		mComponentHeader = compHeader;
	}
	FTIHMngObjComponentHeader& ChainManagedObjectComponentHeader()
	{
		return mComponentHeader;
	}

	/*
		case composite
			매니지드 오브젝트 안의 배열에서 인덱스임
		case leaf
			사실 의미가 없음. 왜냐하면 leaf 는 composite 안에서 스스로의 hash 로 검색되는 map 안에
			있을거기때문에
	*/
	void SetSelfIndex(int16 index)
	{
		mSelfIndex = index;
	}
	int16 GetSelfIndex()
	{
		return mSelfIndex;
	}



	/*
		case managedComposite
			mOwnerIndex is my managedObject's index in WholeDatas in ManagedPool
		case managedLeaf
			mOwnerIndex is my managedObject's index in WholeDatas in ManagedPool
	*/
	void SetOwnerIndex(int16 index)
	{
		mOwnerIndex = index;
	}
	int16 GetOwnerIndex()
	{
		return mOwnerIndex;
	}
	virtual void InitSetting() = 0;

private:
	FTIHMngObjComponentHeader mComponentHeader;
	TIHHash64 mHashValue;
	int16 mOwnerIndex;//InManagedObjectPool
	int16 mSelfIndex;//InManagedObject
};
class FTIHMngObjLeaf;

class FTIHMngObjComposite :public FTIHMngObjComponent
{
public:
	/*
		이녀석의 selfHash 는 그냥 컴포지트를 넘겨준다. 즉
	*/
	/*

		GetLeaf
		UnionTagTable()
		GetTagTable
		set parentindex
		get parentindex

		get selfindex

		LinkScene
	*/
	void AddLeaf(FTIHMngObjLeaf* leaf)
	{
		check(leaf != nullptr);

		leaf->SetSelfIndex(mLeafMap.Num());
		leaf->SetManagedObjectCompositeIndex(this->GetSelfIndex());

		mLeafMap.Add(leaf->GetHashValue(), leaf);
	}
	FTIHMngObjLeaf* GetLeaf(TIHHash64 tihHash)
	{
		FTIHMngObjLeaf* reValue = nullptr;
		if (mLeafMap.Contains(tihHash) == true)
		{
			reValue = mLeafMap[tihHash];
		}
		return reValue;
	}
	void SetManagedObjectIndex(int16 idx)
	{
		SetOwnerIndex(idx);
	}
	int16 GetManagedObjectIndex()
	{
		return GetOwnerIndex();
	}

	FTIHMngObj* GetOwnerManagedObject()
	{
		return FTIHMngObjPoolCenter::GetSingle().GetManagedObjectPool(GetManagedObjectComponentHeader().AllocationSpace)->GetWholeManagedObjectArray()[GetOwnerIndex()];


		return nullptr;
	}

	void SetIndexInManagedObjectCompositeArray(int16 index)
	{
		SetSelfIndex(index);
	}
	int16 GetIndexInManagedObjectCompositeArray()
	{
		return GetSelfIndex();
	}

	const TSet<TIHHash64>& GetManagedObjectCompositeTagTable()
	{
		TSet<TIHHash64> reValue;
		mLeafMap.GetKeys(reValue);
		return reValue;
	}

	void SetTargetUeSceneComponent(USceneComponent* targetScene)
	{
		mUESceneComponent = targetScene;
		UEObjectHash64 ueHash = FTIHMngObjGenerateHelper::GetSingle().GetUESceneComponentHashByUClass(targetScene->StaticClass());
		SetHashValue(ueHash);
	}
	USceneComponent* GetTargetUeSceneComponent()
	{
		return mUESceneComponent;
	}
	void InitSetting() override
	{
		ChainManagedObjectComponentHeader().
			SetProtocol((int8)ETIHMngObjComponentHeaderProtocols::EComposite).
			SetProtocolOption(0);
	}
	/*
		여기에서 allocation space 와 타겟 씬을 설정해주고
		타겟씬의 해쉬코드도 등록한다.
	*/
	void InitMngObjComposite(int8 allocationSpace, USceneComponent* targetScene, int16 parentIndex, int16 stepValue)
	{
		ChainManagedObjectComponentHeader()
			.SetAllocationSpace(allocationSpace);

		SetTargetUeSceneComponent(targetScene);
		SetManagedObjectCompositeParent(parentIndex);
		SetManagedObjectCompositeStep(stepValue);
	}
	void SetManagedObjectCompositeParent(int16 parent)
	{
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
			*/
		}
		mParentIndex = parent;
	}
	int16 GetManagedObjectCompositeParent()
	{
		return mParentIndex;
	}
	void SetManagedObjectCompositeStep(int16 steps)
	{
		mStep = steps;
	}
	int16 GetManagedObjectCompositeStep()
	{
		return mStep;
	}
	void TransmissionHashSetToManagedObject()
	{
		GetOwnerManagedObject();

	}

protected:
	int16 mParentIndex;
	int16 mStep;

	TMap<TIHHash64, FTIHMngObjLeaf*> mLeafMap;
	USceneComponent* mUESceneComponent;
};

class FTIHMngObjLeaf :public FTIHMngObjComponent
{
public:
	/*
		이녀석의 selfHash 는 typeEraser 로 만들어진 Node 들의 clssHash 이다.
	*/
	void SetManagedObjectCompositeIndex(int16 index)
	{
		SetOwnerIndex(index);
	}
	int16 GetManagedObjectCompositeIndex()
	{
		return GetOwnerIndex();
	}
	const TSet<TIHHash64>& GetLeafTags()
	{
		//	FTIHTAgHelper
	}
	virtual void SetManagedSceneComponentAndCasting(USceneComponent* targetScene) = 0;
	virtual USceneComponent* GetManagedSceneComponent()
	{
		/*
			반드시 구현을 해야한다
		*/
		check(false);
		return nullptr;
	}
	void InitDefaultLeaf()
	{

	}

protected:
	int16 mCompositeIndexInManagedObjectArray;
	//	이걸 넣으면 tagHelper 에서 여기에 관련된 배열을 넘겨준
};



template<typename TIHTemplateType>
class TTIManagedObjectLeaf : public FTIHMngObjLeaf
{
public:
	void SetManagedSceneComponentAndCasting(USceneComponent* targetScene) override
	{
		mCastedComponent = Cast<TIHTemplateType>(targetScene);
	}

	USceneComponent* GetManagedSceneComponent() override
	{
		return mCastedComponent;
	}

	TIHTemplateType* GetManagedSceneComponentCastedScene()
	{
		return mCastedComponent;
	}
protected:
	TIHTemplateType* mCastedComponent;
};



class FTIHMngObjLeafMovement : public TTIManagedObjectLeaf<USceneComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafMovement)
public:
	void InitSetting() override;

	void SetWorldLocation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetWorldLocation(value);
	}
	void SetWorldRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetWorldRotation(value.ToOrientationQuat());
	}
	void SetWorldTransform(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetWorldTransform(value);
	}
	void SetRelativeLocation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetRelativeLocation(value);
	}
	void SetRelativeRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetRelativeRotation(value.ToOrientationQuat());
	}
	void SetRelativeTransform(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetRelativeTransform(value);
	}
	void SetAddLocalOffset(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalOffset(value);
	}
	void SetAddLocalRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalRotation(value.ToOrientationQuat());
	}
	void SetAddLocalRotation(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalTransform(value);
	}
	void SetAddRelativeLocation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddRelativeLocation(value);
	}
	void SetAddRelativeRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddRelativeRotation(value.ToOrientationQuat());
	}
};
class FTIHMngObjLeafPretty : public TTIManagedObjectLeaf<UMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafMovement)
public:
	void InitSetting() override;

	void SetMaterial(const FString& path)
	{

	}
};
class FTIHMngObjLeafStMesh : public TTIManagedObjectLeaf<UStaticMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafStMesh)
public:
	void InitSetting() override;

	void SetStMesh(const FString& path)
	{
		TSoftObjectPtr<UStaticMesh> stMeshPtr = FTIHMeshPool::GetSingle()->GetStaticMeshByPath(path);
		//	여기에서 stmeshPool 을 들고온다. 
		mCastedComponent->SetStaticMesh(stMeshPtr.Get());
	}
};
class FTIHMngObjLeafSkMesh : public TTIManagedObjectLeaf<USkeletalMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafStMesh)
public:
	void InitSetting() override;

	void SetSkMesh(const FString& path)
	{
		TSoftObjectPtr<USkeletalMesh> skMeshPtr = FTIHMeshPool::GetSingle()->GetSkeletalMeshByPath(path);
		//	여기에서 stmeshPool 을 들고온다. 
		mCastedComponent->SetSkeletalMesh(skMeshPtr.Get());
	}
};

struct FTIHManagedObjectGenerateCompositeOutData
{
	USceneComponent* UESceneComponent;
	FTIHMngObj* TIHManagedObject;

	FTIHManagedObjectGenerateCompositeOutData()
		:
		UESceneComponent(nullptr), TIHManagedObject(nullptr)
	{}

	FTIHManagedObjectGenerateCompositeOutData(USceneComponent* uESceneComponent,
		FTIHMngObj* tIHManagedObject)
		:
		UESceneComponent(uESceneComponent), TIHManagedObject(tIHManagedObject)
	{}
	FTIHManagedObjectGenerateCompositeOutData(const FTIHManagedObjectGenerateCompositeOutData& copyCtor)
		:
		UESceneComponent(copyCtor.UESceneComponent), TIHManagedObject(copyCtor.TIHManagedObject)
	{}
	FTIHManagedObjectGenerateCompositeOutData(FTIHManagedObjectGenerateCompositeOutData&& moveCtor)
		:
		UESceneComponent(moveCtor.UESceneComponent), TIHManagedObject(moveCtor.TIHManagedObject)
	{
		moveCtor.UESceneComponent = nullptr;
		moveCtor.TIHManagedObject = nullptr;
	}

	FTIHManagedObjectGenerateCompositeOutData& operator=(const FTIHManagedObjectGenerateCompositeOutData& copyOper)
	{
		UESceneComponent = copyOper.UESceneComponent;
		TIHManagedObject = copyOper.TIHManagedObject;
		return *this;
	}
	FTIHManagedObjectGenerateCompositeOutData& operator=(FTIHManagedObjectGenerateCompositeOutData&& moveOper)
	{
		UESceneComponent = moveOper.UESceneComponent;
		TIHManagedObject = moveOper.TIHManagedObject;
		//	std::move(moveOper);
		moveOper.UESceneComponent = nullptr;
		moveOper.TIHManagedObject = nullptr;
		return *this;
	}
};
struct FTIHGenerateCandidateLeaves
{
	TSet<TIHObjectHash64> GenerateTags;

	FTIHGenerateCandidateLeaves() {}
	FTIHGenerateCandidateLeaves(const FTIHGenerateCandidateLeaves& copyCtor)
		: GenerateTags(copyCtor.GenerateTags)
	{}
	FTIHGenerateCandidateLeaves(FTIHGenerateCandidateLeaves&& moveCtor)
		:GenerateTags(moveCtor.GenerateTags)
	{}
	//template<typename... TIHTemplateTypeManyArg>
	//FTIHGenerateCandidateLeaves(TIHTemplateTypeManyArg&&... manyArgs)
	//	:
	//	GenerateTags(std::forward<TIHTemplateTypeManyArg>(manyArgs)... ) 
	//{
	//}
	FTIHGenerateCandidateLeaves(std::initializer_list<TIHHash64> list)
		:GenerateTags(list)
	{}

	FTIHGenerateCandidateLeaves& operator=(const FTIHGenerateCandidateLeaves& copyOper)
	{
		GenerateTags = copyOper.GenerateTags;
	}
	FTIHGenerateCandidateLeaves& operator=(const TSet<TIHObjectHash64>& copyOper)
	{
		GenerateTags = copyOper;
	}
	FTIHGenerateCandidateLeaves& operator=(FTIHGenerateCandidateLeaves&& moveOper)
	{
		GenerateTags = moveOper.GenerateTags;
	}
	FTIHGenerateCandidateLeaves& operator=(TSet<TIHObjectHash64>&& moveOper)
	{
		GenerateTags = moveOper;
	}
};
template<typename TIHTemplateTypeA, typename TIHTemplateTypeB>
struct TTIHMngObjTempDataPair
{
	TIHTemplateTypeA HashValueType;
	TIHTemplateTypeB UEValueType;

	TTIHMngObjTempDataPair() {}
	TTIHMngObjTempDataPair(TIHTemplateTypeA hashValueType, TIHTemplateTypeB ueValueType)
		:
		HashValueType(hashValueType), UEValueType(ueValueType)
	{}
	TTIHMngObjTempDataPair(const TTIHMngObjTempDataPair& copyCtor)
		:
		HashValueType(copyCtor.hashValueType), UEValueType(copyCtor.ueValueType)
	{}

	TTIHMngObjTempDataPair(TTIHMngObjTempDataPair&& moveCtor)
		:
		HashValueType(moveCtor.hashValueType), UEValueType(moveCtor.ueValueType)
	{}

	TTIHMngObjTempDataPair& operator=(const TTIHMngObjTempDataPair& copyOper)
	{
		HashValueType = copyOper.HashValueType;
		UEValueType = copyOper.UEValueType;
		return *this;
	}
	TTIHMngObjTempDataPair& operator=(TTIHMngObjTempDataPair&& moveOper)
	{
		std::move(moveOper);
		return *this;
	}
};

struct FTIHMngObjGenerateCompositeBFSData
{
	int16 StepValue;
	int16 ParentCompositeIndex;

	USceneComponent* UESceneComponent;
	FTIHMngObj* TIHManagedObject;

	FTIHMngObjGenerateCompositeBFSData()
		:
		StepValue(-1),
		ParentCompositeIndex(-1),
		UESceneComponent(nullptr),
		TIHManagedObject(nullptr)
	{
	}


	FTIHMngObjGenerateCompositeBFSData
	(
		int16 stepValue,
		int16 parentCompositeIndex,
		USceneComponent* ueSceneComponent,
		FTIHMngObj* tihManagedObject
	)
		:
		StepValue(stepValue),
		ParentCompositeIndex(parentCompositeIndex),
		UESceneComponent(ueSceneComponent),
		TIHManagedObject(tihManagedObject)
	{
	}
	FTIHMngObjGenerateCompositeBFSData
	(
		int16 stepValue,
		int16 parentCompositeIndex,
		const FTIHManagedObjectGenerateCompositeOutData& prepareDataForComposite
	)
		:
		StepValue(stepValue),
		ParentCompositeIndex(parentCompositeIndex),
		UESceneComponent(prepareDataForComposite.UESceneComponent),
		TIHManagedObject(prepareDataForComposite.TIHManagedObject)
	{
	}
	FTIHMngObjGenerateCompositeBFSData(const FTIHMngObjGenerateCompositeBFSData& copyCtor)
		:
		StepValue(copyCtor.StepValue),
		ParentCompositeIndex(copyCtor.ParentCompositeIndex),
		UESceneComponent(copyCtor.UESceneComponent),
		TIHManagedObject(copyCtor.TIHManagedObject)
	{
	}
	FTIHMngObjGenerateCompositeBFSData(FTIHMngObjGenerateCompositeBFSData&& moveCtor)
	{
		std::move(moveCtor);
		moveCtor.UESceneComponent = nullptr;
		moveCtor.TIHManagedObject = nullptr;
	}

	FTIHMngObjGenerateCompositeBFSData& operator=(const FTIHMngObjGenerateCompositeBFSData& assignValue)
	{
		StepValue = assignValue.StepValue;
		ParentCompositeIndex = assignValue.ParentCompositeIndex;
		UESceneComponent = assignValue.UESceneComponent;
		TIHManagedObject = assignValue.TIHManagedObject;
		return *this;
	}

	FTIHMngObjGenerateCompositeBFSData& operator=(FTIHMngObjGenerateCompositeBFSData&& moveValue)
	{
		StepValue = moveValue.StepValue;
		ParentCompositeIndex = moveValue.ParentCompositeIndex;
		UESceneComponent = moveValue.UESceneComponent;
		TIHManagedObject = moveValue.TIHManagedObject;
		moveValue.UESceneComponent = nullptr;
		moveValue.TIHManagedObject = nullptr;
		return *this;
	}
};
class FTIHMngObjTempDatas
{
public:

	/*
		reset
		clear
		pushBacks
		getTop
		getElementNums
		getCapacityMaxs
		isEmpties

	*/
	void ResetAllQueue()
	{
		mActorQueue.Reset();
		mPrepareDatasForComposite.Reset();
		mEmptyComposites.Reset();
	}
	void ClearCapacityAllQueue()
	{
		mActorQueue.Empty();
		mPrepareDatasForComposite.Empty();
		mEmptyComposites.Empty();
	}

	void PushBackActor(AActor* actor, UEObjectHash64 ueObjHash)
	{
		TTIHMngObjTempDataPair<UEObjectHash64, AActor*> copyValue(ueObjHash, actor);
		mActorQueue.PushLast(copyValue);
	}
	void PushBackPrepareDataForComposite(FTIHMngObjGenerateCompositeBFSData&& prepareData)
	{
		mPrepareDatasForComposite.PushLast(prepareData);
	}
	void PushBackEmptyComposite(FTIHMngObjComposite* composite)
	{
		mEmptyComposites.PushLast(composite);
	}

	int16 GetNumInActorQueue()
	{
		int16 reValue = mActorQueue.Num();
		return reValue;
	}
	int16 GetNumInPrepareDataForCompositeQueue()
	{
		int16 reValue = mPrepareDatasForComposite.Num();
		return reValue;
	}
	int16 GetNumInEmptyCompositeQueue()
	{
		int16 reValue = mPrepareDatasForComposite.Num();
		return reValue;
	}

	int16 GetCapacityInActorQueue()
	{
		int16 reValue = mActorQueue.Max();
		return reValue;
	}
	int16 GetCapacityInPrepareDataForCompositeQueue()
	{
		int16 reValue = mPrepareDatasForComposite.Max();
		return reValue;
	}
	int16 GetCapacityInEmptyCompositeQueue()
	{
		int16 reValue = mPrepareDatasForComposite.Max();
		return reValue;
	}


	bool IsEmptyActorQueue()
	{
		bool reValue = mActorQueue.IsEmpty();
		return reValue;
	}
	bool IsEmptyPrepareDataForCompositeQueue()
	{
		bool reValue = mPrepareDatasForComposite.IsEmpty();
		return reValue;
	}
	bool IsEmptyEmptyCompositeQueue()
	{
		bool reValue = mEmptyComposites.IsEmpty();
		return reValue;
	}
	bool IsEmpties()
	{
		bool reValue = (IsEmptyActorQueue() && IsEmptyPrepareDataForCompositeQueue() && IsEmptyEmptyCompositeQueue());
		return reValue;
	}

	AActor* GetTopAndPopActorQueue()
	{
		AActor* reValue = mActorQueue.First().UEValueType;
		mActorQueue.PopFirst();
		return reValue;
	}

	TTIHMngObjTempDataPair<UEObjectHash64, AActor*> GetTopAndPopActorPairQueue()
	{
		TTIHMngObjTempDataPair<UEObjectHash64, AActor*> reValue = mActorQueue.First();
		return reValue;
	}

	FTIHMngObjGenerateCompositeBFSData GetTopAndPopPrepareDataForCompositeQueue()
	{
		FTIHMngObjGenerateCompositeBFSData reValue = mPrepareDatasForComposite.First();
		mPrepareDatasForComposite.PopFirst();
		return reValue;
	}

	FTIHMngObjComposite* GetTopAndPopEmptyCompositeQueue()
	{
		FTIHMngObjComposite* reValue = mEmptyComposites.First();
		mEmptyComposites.PopFirst();
		return reValue;
	}

	void Reserve(int16 forActorQueue, int16 forComposite, int16 forLeaf)
	{
		mActorQueue.Reserve(forActorQueue);
		mPrepareDatasForComposite.Reserve(forComposite);
		mEmptyComposites.Reserve(forLeaf);
	}

private:

	TDeque<TTIHMngObjTempDataPair<UEObjectHash64, AActor*>> mActorQueue;
	TDeque< FTIHMngObjGenerateCompositeBFSData> mPrepareDatasForComposite;

	TDeque< FTIHMngObjComposite*> mEmptyComposites;
};
class FTIHMngObjFactory
{
	/*
		매니지드 오브젝트는 무조건 tickable 로 만든다.
	*/
public:
	
	FTIHMngObjPool* GetCurrentManagedObjectPool()
	{
		return mCurrManagedObjectPool;
	}
	void SetManagedObjectPool(FTIHMngObjPool* managedPool)
	{
		mCurrManagedObjectPool = managedPool;
	}

	AActor* ConvertPoolableActor(AActor* actor)
	{
		actor->SetActorHiddenInGame(true);
		actor->SetActorEnableCollision(false);
		actor->SetActorTickEnabled(false);
		return actor;
	}
	void OnGeneratePipeLining(FTIHMngObjPool* targetPool);
	//	
	void GenerateUEActorBaseByPrepareData(int16 allocount, UEObjectHash64 ueObjHash, FTIHMngObjTempDatas& tempDatas, bool isChild);

	void GenerateManagedObjectByActorArray(FTIHMngObjTempDatas& tempDatas, int16 parentData);

	void GenerateManagedObjectCompositeArray(FTIHMngObjTempDatas& tempDatas);

	void GenerateUEChildActorBy(UChildActorComponent* childActorScene, FTIHMngObj* currManagedObject, FTIHMngObjTempDatas& tempDatas);

	void GenerateManagedObjectLeafArray(FTIHMngObjTempDatas& tempDatas);
private:
	FTIHMngObjPool* mCurrManagedObjectPool;
	
};



USTRUCT()
struct FTIHMngObjHeader
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Protocol;

	UPROPERTY()
	int8 ManagedObjectState;
	UPROPERTY()
	int8 AllocationSpace;

	UPROPERTY()
	int8 Padding;

	TIHMACRO_CHAINBUILDER_SETTER(Protocol);
	TIHMACRO_CHAINBUILDER_SETTER(ManagedObjectState);
	TIHMACRO_CHAINBUILDER_SETTER(AllocationSpace);
};

class FTIHMngObjPoolCenter;

class FTIHMngObj
{
	static FTIHMngObjPoolCenter* gPoolCenter;
public:
	static void SetManagedObjectPoolCenter(FTIHMngObjPoolCenter* poolCenter)
	{
		gPoolCenter = poolCenter;
	}
	FTIHMngObjHeader GetManagedObjectHeader()
	{
		return mManagedObjectHeader;
	}
	void SetManagedObjectHeader(FTIHMngObjHeader objHeader)
	{
		mManagedObjectHeader = objHeader;
	}
	const int8 GetManagedObjectAlloactionSpace()
	{
		return mManagedObjectHeader.AllocationSpace;
	}
	int8 GetManagedObjectUEObjectBase()
	{
		return mManagedObjectHeader.Protocol;
	}

	FTIHMngObjHeader& ChainManagedObjectHeader()
	{
		return mManagedObjectHeader;
	}
	//	여기에서 SetSelfIndex 와 SetManagedObjectIndex 를해준다. 
	int16 AddComposite(FTIHMngObjComposite* composite)
	{
		int16 reValue = 0;
		reValue = mCompositeArray.Add(composite);
		composite->SetIndexInManagedObjectCompositeArray(reValue);
		composite->SetManagedObjectIndex(mSelfIndexInWholeArray);
		return reValue;
	}

	void SetManagedUObject(UObject* target)
	{
		mManagedUEObect = target;
	}
	UObject* GetManagedUObject()
	{
		return mManagedUEObect;
	}

	void SetSelfIndexInWholeArray(int16 index)
	{
		mSelfIndexInWholeArray = index;
	}
	int16 GetSelfIndexInWholeArray()
	{
		return mSelfIndexInWholeArray;
	}
	void UpdateStateByManagedObjectHeader()
	{
		GetManagedObjectHeader().ManagedObjectState;
		mStateDetail.StartStateTracing();
	}
	void SetManagedObjectParent(int16 parentIndex)
	{
		static FTIHMngObjGenerateHelper& tagHelper = FTIHMngObjGenerateHelper::GetSingle();
		mParentIndexInWholeArray = parentIndex;
		if (-1 < parentIndex)
		{
			//mHashTable.Add(HasParent);
			//GetParent()->HasChild
		}
		else
		{
			//mHashTable.Add(Root);
		}
	}
	void SetAllocSpace(int8 allocationSpace)
	{
		mManagedObjectHeader.AllocationSpace = allocationSpace;
	}
	void InitMngObj(AActor* targetActor,int16 parentIndex,int8 allocationSpace)
	{
		SetManagedUObject(targetActor);
		SetManagedObjectParent(parentIndex);
		ChainManagedObjectHeader()
			.SetProtocol((int8)ETIHManagedObjectHeaderProtocols::EActorBase)
			.SetManagedObjectState((int8)ETIHManagedObjectStepState::ENotUse);
		SetAllocSpace(allocationSpace);
		//mStateDetail.StartStateTracing();
	}
	void UnionHashTable(const TSet<TIHHash64>& otherSet)
	{
		mHashTable.Union(otherSet);
	}
	FTIHMngObjPool* GetMyManagedPool()
	{
		static FTIHMngObjPoolCenter& poolCenter = TIHSTATION.GetManagedObjectPoolCenter();

		FTIHMngObjPool* reValue = nullptr;
		reValue = poolCenter.GetManagedObjectPool(mManagedObjectHeader.AllocationSpace);
		check(reValue != nullptr);

		return reValue;
	}
	FTIHState& GetStateNonConst()
	{
		return mStateDetail;
	}
	const FTIHState& GetState()
	{
		return mStateDetail;
	}
	
	TIHReturn64 TryPooling()
	{
		TIHReturn64 reValue = 0;
		if(mStateDetail.IsStateReady() == true)
		{
			mStateDetail.ChangeStateReadyToRunning();
		}
		return reValue;
	}

	
	void SetUEObjectHash(UEObjectHash64 value)
	{
		mManagedUEObjectHash = value;
	}
	UEObjectHash64 GetUEObjectHash()
	{
		return mManagedUEObjectHash;
	}

private:
	FTIHMngObjHeader mManagedObjectHeader;//	get set
	UObject* mManagedUEObect;				//	get set
	TIHHash64 mManagedUEObjectHash;			//	get set
	
	FTIHState mStateDetail;					//	interface	get

	int16 mParentIndexInWholeArray;		//	-1 is rootManagedObject  
	int16 mSelfIndexInWholeArray;		//	in wholeDatas in objectPool

	TArray<FTIHMngObjComposite*> mCompositeArray;	//	add
	TSet<TIHHash64> mHashTable;

	
};
FTIHMngObjPoolCenter* FTIHMngObj::gPoolCenter = nullptr;