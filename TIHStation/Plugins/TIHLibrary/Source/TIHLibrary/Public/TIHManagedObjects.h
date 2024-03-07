#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.generated.h"
//--	----	----	----	----	----	----	----	----	----	----	----
/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Forward Declares									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Forward Declares
/*

┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Structures
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
struct FTIHMngObjHeader;
struct FTIHMngObjPoolConfigureDatas;
struct FTIHMngObjPoolConfigure;
struct FTIHNewAllocPrepareData;
struct FTIHCommandCreateAssignPoolDatas;
struct FTIHMngObjComponentHeader;
struct FTIHGenerateDataPairForManagedObjectLeaf;
struct FTIHManagedObjectGenerateCompositeOutData;
struct FTIHGenerateCandidateLeaves;
template<typename TIHTemplateTypeA, typename TIHTemplateTypeB>struct TTIHMngObjTempDataPair;
struct FTIHMngObjGenerateCompositeBFSData;

/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Class
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

class FTIHUnionFind;
class FTIHMngObjPool;
class FTIHMngObjPoolCenter;
class FTIHMngObjGenerateHelper;
class FTIHMngObjComponent;
class FTIHMngObjLeaf;
class FTIHMngObjComposite;

template<typename TIHTemplateType>class TTIManagedObjectLeaf;
class FTIHMngObjLeafMovement;
class FTIHMngObjLeafPretty;
class FTIHMngObjLeafStMesh;
class FTIHMngObjLeafSkMesh;
class FTIHMngObjGenerateQueues;
class FTIHMngObj;
class FTIHMngObjFactory;
#pragma endregion Forward Declares
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Forward Declares									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										Miscellaneous									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Miscellaneous
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Algorithm
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHUnionFind
{
public:
	void ReserveArray(int16 size)
	{
		mParentArray.Reserve(size);
		mRankArray.Reserve(size);
		mElementCountArray.Reserve(size);
	}


	void InitUnionFind()
	{
		mParentArray.Reset();
		mRankArray.Reset();

		int32 arraiesMax = mParentArray.Max();

		for (int32 i = 0; i < arraiesMax; ++i)
		{
			mParentArray.Add(i);
			mRankArray.Add(0);
			mElementCountArray.Add(1);
		}
	}

	int16 FindParent(int16 checkIndex)
	{
		int16 reValue = checkIndex;
		int16 parentIndex = mParentArray[reValue];
		if (reValue != parentIndex)
		{
			mParentArray[reValue] = FindParent(parentIndex);
			reValue = mParentArray[reValue];
		}
		return reValue;
	}
	void UnionIndex(int16 leftIndex, int16 rightIndex)
	{
		leftIndex = FindParent(leftIndex);
		rightIndex = FindParent(rightIndex);

		if (leftIndex != rightIndex)
		{
			if (mRankArray[leftIndex] < mRankArray[rightIndex])
			{
				mParentArray[leftIndex] = rightIndex;
			}
			else
			{
				mParentArray[rightIndex] = leftIndex;

				if (mRankArray[leftIndex] == mRankArray[rightIndex])
				{
					++mRankArray[leftIndex];
				}
			}
		}
	}
	int16 UnionAndElementCount(int16 leftIndex, int16 rightIndex)
	{
		leftIndex = FindParent(leftIndex);
		rightIndex = FindParent(rightIndex);

		if (leftIndex != rightIndex)
		{
			mParentArray[rightIndex] = leftIndex;
			mElementCountArray[leftIndex] += mElementCountArray[rightIndex];
			mElementCountArray[rightIndex] = 1;
		}
		return mElementCountArray[leftIndex];
	}

private:
	TArray<int16> mParentArray;
	TArray<int16> mRankArray;
	TArray<int16> mElementCountArray;
};


union FUnionTIHSlidingPointer
{
	struct FTIHSlidingPointerDetail
	{
		int16 LeftIndex;
		int16 RightIndex;

	}Detail;

	int32 WholeData;
};
enum class ETIHSlidingWindowTypes : int8
{
	EStuckEnd,	//	option is Direction
	EInfiniteEnd,//	option is Direction	
	ESlackEnd,//	option is Direction
	ECircling,//	option is not
};
enum class ETIHSlidingWindowDoneStateTypes : int8
{
	ENotDone = 0,
	EStuckEndDone =1 << 0,
	EInfiniteEndDone = 1<<1,
	ESlackEndDone = 1 << 2,
	ECircleEndDone = 1 <<3,
	EWhenRightAdd = 1 <<4,
	EWhenLeftAdd = 1<< 5
};

void DefalutRightOverFunction()
{

}
void DefaultLeftOverFunction()
{

}
class FTIHSlidingWindowBase
{
public:
	FTIHSlidingWindowBase();

	virtual void SlidingRight(int16 value) = 0;
	virtual void SlidingLeft(int16 value) = 0;
	virtual bool IsInIndex(int16 index) = 0;
	virtual int32 GetIndexArray(TArray<int16>& arr) = 0;

	int8 GetSlidingWindowTypeInt8()
	{
		return mSlidingWindowType;
	}
	ETIHSlidingWindowTypes GetSlidingWindowTypeEnum()
	{
		ETIHSlidingWindowTypes reValue = ETIHSlidingWindowTypes::EStuckEnd;

		switch (mSlidingWindowType)
		{
		case (int8)ETIHSlidingWindowTypes::EStuckEnd:
			reValue = ETIHSlidingWindowTypes::EStuckEnd;
			break;
		case (int8)ETIHSlidingWindowTypes::EInfiniteEnd:
			reValue = ETIHSlidingWindowTypes::EInfiniteEnd;
			break;
		case (int8)ETIHSlidingWindowTypes::ESlackEnd:
			reValue = ETIHSlidingWindowTypes::ESlackEnd;
			break;
		case (int8)ETIHSlidingWindowTypes::ECircling:
			reValue = ETIHSlidingWindowTypes::ECircling;
			break;
		}
		return reValue;
	}
	int8 GetSlidingWindowDoneState()
	{
		return mSlidingWindowDoneState;
	}
	int16 GetRangeCount()
	{
		return mRangeCount;
	}

	void SetSlidingWindowTypeEnum(ETIHSlidingWindowTypes value)
	{
		switch (value)
		{
		case ETIHSlidingWindowTypes::EStuckEnd:
			mSlidingWindowType = (int8)ETIHSlidingWindowTypes::EStuckEnd;
			break;
		case ETIHSlidingWindowTypes::EInfiniteEnd:
			mSlidingWindowType = (int8)ETIHSlidingWindowTypes::EInfiniteEnd;
			break;
		case ETIHSlidingWindowTypes::ESlackEnd:
			mSlidingWindowType = (int8)ETIHSlidingWindowTypes::ESlackEnd;
			break;
		case ETIHSlidingWindowTypes::ECircling:
			mSlidingWindowType = (int8)ETIHSlidingWindowTypes::ECircling;
			break;
		}
	}
	void SetSlidingWindowType(int8 value)
	{
		mSlidingWindowType = value;
	}
	void SetSlidingWindowDoneState(int8 value)
	{
		mSlidingWindowDoneState = value;
	}
	void SetSlidingWindowDoneStateStuckEnd()
	{
		mSlidingWindowDoneState |= (int8)ETIHSlidingWindowDoneStateTypes::EStuckEndDone;
	}
	void SetSlidingWindowDoneStateInfiniteEnd()
	{
		mSlidingWindowDoneState |= (int8)ETIHSlidingWindowDoneStateTypes::EInfiniteEndDone;
	}
	void SetSlidingWindowDoneStateSlackEnd()
	{
		mSlidingWindowDoneState |= (int8)ETIHSlidingWindowDoneStateTypes::ESlackEndDone;
	}
	void SetSlidingWindowDoneStateCircleEnd()
	{
		mSlidingWindowDoneState |= (int8)ETIHSlidingWindowDoneStateTypes::ECircleEndDone;
	}
	void SetSlidingWindowDoneStateWhenRightAdd()
	{
		mSlidingWindowDoneState |= (int8)ETIHSlidingWindowDoneStateTypes::EWhenRightAdd;
	}
	void SetSlidingWindowDoneStateWhenLeftAdd()
	{
		mSlidingWindowDoneState |= (int8)ETIHSlidingWindowDoneStateTypes::EWhenLeftAdd;
	}
	void SetSlidingWindowDoneStateReset()
	{
		mSlidingWindowDoneState = (int8)ETIHSlidingWindowDoneStateTypes::ENotDone;
	}
	bool IsSlidingWindowDone()
	{
		bool reValue = false;
		if((int8)ETIHSlidingWindowDoneStateTypes::ENotDone < mSlidingWindowDoneState )
		{
			reValue = true;
		}
		return reValue;
	}
	void SetRangeCount(int16 value)
	{
		if( mRangeCount < value)
		{
			mRangeCount = value;
		}
	}
	void SetStartIndex(int16 value)
	{
		if (value < mRangeEndIndex)
		{
			mRangeStartIndex = value;
		}
	}
	void SetEndIndex(int16 value)
	{
		if ( mRangeStartIndex < value)
		{
			mRangeEndIndex = value;
		}
	}
	int16 GetRangeStartIndex()
	{
		return mRangeStartIndex;
	}
	int16 GetRangeEndIndex()
	{
		return mRangeEndIndex;
	}
	void AddSlidingWindow(int16 value)
	{
		
			mSlidingPointer.Detail.LeftIndex += value;
			mSlidingPointer.Detail.RightIndex += value;
		
	}
	void MinusSlidingWindow(int16 value)
	{
		
			mSlidingPointer.Detail.LeftIndex -= value;
			mSlidingPointer.Detail.RightIndex -= value;
		
	}
	FUnionTIHSlidingPointer GetCurSlidingPointer()
	{
		return mSlidingPointer;
	}
	void InitSlidingWindow(int8 slidingWindowType,int16 startIndex,int16 rangeCount)
	{
		mSlidingWindowType = slidingWindowType;
		mRangeStartIndex = startIndex;
		mRangeCount = rangeCount;

		mRangeEndIndex = mRangeStartIndex + mRangeCount - 1;
	}
	void SetCallBackRightAdd(TFunction<void()> func)
	{
		mOverCallBackRightAdd = func;
	}
	void SetCallBackLeftAdd(TFunction<void()> func)
	{
		mOverCallBackLeftAdd = func;
	}

	void CallBackRightAdd()
	{
		mOverCallBackRightAdd();
	}
	void CallBackLeftAdd()
	{
		mOverCallBackLeftAdd();
	}
	bool IsDone()
	{
		bool reValue = true;
		if(mSlidingWindowDoneState == (int8)ETIHSlidingWindowDoneStateTypes::ENotDone)
		{
			reValue = false;
		}
		return reValue;
	}
private:
	int8 mSlidingWindowType;
	int8 mSlidingWindowDoneState;//{}
	int16 mRangeCount;
	
	int16 mRangeStartIndex;
	int16 mRangeEndIndex;

	TFunction<void()> mOverCallBackRightAdd;
	TFunction<void()> mOverCallBackLeftAdd;
protected:
	FUnionTIHSlidingPointer mSlidingPointer;

	bool IsInIndexFunc(const int16 leftEndIndex,const int16 index,const int16 rightEndIndex)
	{
		bool reValue = not(index < leftEndIndex || rightEndIndex < index);
		return reValue;
	}
};
class FTIHSlidingWindowStuck : public FTIHSlidingWindowBase
{
public:
	void SlidingRight(int16 value) override;
	void SlidingLeft(int16 value) override;
	bool IsInIndex(int16 index) override
	{
		bool reValue = false;
		if(IsInIndexFunc(mSlidingPointer.Detail.LeftIndex,index,mSlidingPointer.Detail.RightIndex) == true)
		{
			reValue = true;
		}
		return reValue;
	}

	int32 GetIndexArray(TArray<int16>& arr) override
	{
		int32 lastIndex = -1;
		if( GetRangeCount() <= arr.Num())
		{
			for (int16 i = mSlidingPointer.Detail.LeftIndex; i <= mSlidingPointer.Detail.RightIndex; ++i)
			{
				++lastIndex;
				arr[lastIndex] = i;
			}
		}
		return lastIndex;
	}
};
class FTIHSlidingWindowInfinite : public FTIHSlidingWindowBase
{

};
class FTIHSlidingWindowSlack : public FTIHSlidingWindowBase
{

public:
	void SlidingRight(int16 value) override;

	void SlidingLeft(int16 value) override;

	bool IsInIndex(int16 index) override;

	int32 GetIndexArray(TArray<int16>& arr) override;


};

class FTIHSlidingWindowCircling : public FTIHSlidingWindowBase
{

public:
	void SlidingRight(int16 value) override
	{
		int16 endRangeIndex = GetRangeEndIndex();
		const int16 rangeCount = GetRangeCount();

		int16 changeValue = value% GetRangeCount();

		//mSlidingPointer.Detail.LeftIndex += changeValue;
		//mSlidingPointer.Detail.RightIndex += changeValue;
		AddSlidingWindow(changeValue);

		if(endRangeIndex < mSlidingPointer.Detail.RightIndex)
		{
			
			mIsCircling = true;
			mSlidingPointer.Detail.RightIndex = endRangeIndex;
			int16 mainSlideCount = mSlidingPointer.Detail.RightIndex - mSlidingPointer.Detail.LeftIndex + 1;
			int16 subSlideCountAdd = rangeCount - mainSlideCount;

			mDoublePointer.Detail.LeftIndex = GetRangeStartIndex();
			mDoublePointer.Detail.RightIndex = mDoublePointer.Detail.LeftIndex + (subSlideCountAdd - 1);

			
			if (mSlidingPointer.Detail.RightIndex < mSlidingPointer.Detail.LeftIndex)
			{
				mIsCircling = false;
				mSlidingPointer.WholeData = mDoublePointer.WholeData;
			}
			else
			{
				CallBackRightAdd();
			}
		}
	}
	void SlidingLeft(int16 value) override
	{
		int16 startRangeIndex = GetRangeStartIndex();
		const int16 rangeCount = GetRangeCount();

		int16 changeValue = value % rangeCount;

		//mSlidingPointer.Detail.LeftIndex -= changeValue;
		//mSlidingPointer.Detail.RightIndex -= changeValue;
		MinusSlidingWindow(changeValue);

		if (mSlidingPointer.Detail.LeftIndex < startRangeIndex )
		{
			mIsCircling = true;
			mSlidingPointer.Detail.LeftIndex = startRangeIndex;
			int16 mainSlideCount = mSlidingPointer.Detail.RightIndex - mSlidingPointer.Detail.LeftIndex + 1;
			int16 subSlideCountAdd = rangeCount - mainSlideCount;

			mDoublePointer.Detail.RightIndex = GetRangeEndIndex();
			mDoublePointer.Detail.LeftIndex = mDoublePointer.Detail.RightIndex - (subSlideCountAdd-1);

			
			if (mSlidingPointer.Detail.RightIndex < mSlidingPointer.Detail.LeftIndex)
			{
				mIsCircling = false;
				mSlidingPointer.WholeData = mDoublePointer.WholeData;
			}
			else
			{
				CallBackLeftAdd();
			}
		}
	}
	bool IsInIndex(int16 index) override
	{
		bool reValue = false;
		if(IsInIndexFunc(mSlidingPointer.Detail.LeftIndex, index, mSlidingPointer.Detail.RightIndex) == true
			|| IsInIndexFunc(mDoublePointer.Detail.LeftIndex, index, mDoublePointer.Detail.RightIndex) == true)
		{
			reValue = true;
		}
		return reValue;
	}
	//	must reseved array
	int32 GetIndexArray(TArray<int16>& arr) override
	{
		int32 outArrIndex = -1;
		if(GetRangeCount() <= arr.Num())
		{
			for (int16 i = mSlidingPointer.Detail.LeftIndex; i <= mSlidingPointer.Detail.RightIndex; ++i)
			{
				++outArrIndex;
				arr[outArrIndex] = i;
			}
			if (mIsCircling == true)
			{
				for (int16 i = mDoublePointer.Detail.LeftIndex; i <= mDoublePointer.Detail.RightIndex; ++i)
				{
					++outArrIndex;
					arr[outArrIndex] = i;
				}
			}
		}
		return outArrIndex;
	}

	bool IsCircling()
	{
		return mIsCircling;
	}

private:
	bool mIsCircling;
	FUnionTIHSlidingPointer mDoublePointer;
};
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Helper
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
template<typename TIHTemplateType>
class TTIHMeshCapsule
{
public:
	TTIHMeshCapsule() = delete;
	TTIHMeshCapsule(TIHTick32 tick)
		:
		mSelfTick(tick)
	{}
	TTIHMeshCapsule(TIHTick32 tick,const FString& path)
		:
		mSelfTick(tick),
		mMeshPathData(path)
	{}
	void SetSelfTick(TIHTick32 tick)
	{
		mSelfTick = tick;
	}
	const TIHTick32 GetSelfTick()
	{
		return mSelfTick;
	}
	TSoftObjectPtr<TIHTemplateType>& GetMeshPathData()
	{
		return mMeshPathData;
	}
	void SetMeshPathData(TSoftObjectPtr<TIHTemplateType> meshData)
	{
		mMeshPathData = meshData;
	}
	TIHTemplateType* GetMeshData()
	{
		return mMeshData;
	}
	void SyncLoad()
	{
		if(mMeshPathData.IsValid() == true)
		{
			mMeshData = mMeshPathData.LoadSynchronous();
		}
	}
	bool IsLoadedMesh()
	{
		bool reValue = false;
		if (mMeshData != nullptr)
		{
			reValue = true;
		}
		return reValue;
	}
private:
	TIHTick32 mSelfTick;
	TIHTemplateType* mMeshData;
	TSoftObjectPtr<TIHTemplateType> mMeshPathData;
}; 

USTRUCT()
struct FTIHMeshPoolConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	int8 SlidingWindowType;
	UPROPERTY()
	int8 SlidingWindowSplitType;
	UPROPERTY()
	int16 SlidingWindowSplitValue;

	UPROPERTY()
	int8 SlindingWindowDirection;
	UPROPERTY()
	int8 PrepareLoadPathType;
	UPROPERTY()
	int16 PrepareLoadPathDataIndex;
};

USTRUCT()
struct FTIHMeshPoolCenterConfigure	//	이거는 결국 매쉬풀을 만들기위한 정보가 들어가야한다.
{
	GENERATED_BODY()

	UPROPERTY()
	int8 OrderType;//{CreateMeshPool,}
};

//class FTIHMeshPoolConfigure
//{
//public:
//	int8 GetSlidingWindowType()
//	{
//		return mSlidingWindowType;
//	}
//	int8 GetSlidingWindowSplitType()
//	{
//		return mSlidingWindowSplitType;
//	}
//	int16 GetSlidingWindowSplitValue()
//	{
//		return mSlidingWindowSplitValue;
//	}
//
//	int8 GetSlindingWindowDirection()
//	{
//		return mSlindingWindowDirection;
//	}
//	int8 GetPrepareLoadPathType()
//	{
//		return mPrepareLoadPathType;
//	}
//	int8 GetPrepareLoadPathDataIndex()
//	{
//		return mPrepareLoadPathDataIndex;
//	}
//
//	void SetSlidingWindowType(int8 slidingWindowType)
//	{
//		mSlidingWindowType = slidingWindowType;
//	}
//	void SetSlidingWindowSplitType(int8 slidingWindowSplitType)
//	{
//		mSlidingWindowSplitType = slidingWindowSplitType;
//	}
//	void SetSlidingWindowSplitValue(int16 slidingWindowSplitValue)
//	{
//		mSlidingWindowSplitValue = slidingWindowSplitValue;
//	}
//
//	void SetSlindingWindowDirection(int8 dir)
//	{
//		mSlindingWindowDirection = dir;
//	}
//	void SetPrepareLoadPathType(int8 loadPathType)
//	{
//		mPrepareLoadPathType = loadPathType;
//	}
//	void SetPrepareLoadPathDataIndex(int16 index)
//	{
//		mPrepareLoadPathDataIndex = index;
//	}
//private:
//	/*
//		무슨 슬라이딩 윈도우를 쓸건지
//		나누는 방법은 무엇인지
//			균등하게 나눈다
//			그냥 정적 숫자로 나눈다.
//			다이나믹으로 만든다.
//			오토 == 한번에 설정하는곳에서 설정한다.
//		어디서 프리페어를 불러올지
//		불러올곳의 위치는 어디인가.
//	*/
//	int8 mSlidingWindowType;
//	int8 mSlidingWindowSplitType;
//	int16 mSlidingWindowSplitValue;
//
//	int8 mSlindingWindowDirection;
//	int8 mPrepareLoadPathType;
//	int16 mPrepareLoadPathDataIndex;
//};

class FTIHMeshPool
{
public:
	static FTIHMeshPool* GetSingle()
	{
		static FTIHMeshPool meshPool;
		return &meshPool;
	}
	TTIHMeshCapsule<UStaticMesh>* GenerateStaticMeshCapsules(const FString& path);

	void PrepareStaticMeshDataByPath(const FString& meshPath)
	{

		if (mStagingStMeshTable.Contains(meshPath) == false)
		{
			TTIHMeshCapsule<UStaticMesh>* capsule = GenerateStaticMeshCapsules(meshPath);
			int16 index = mStagingStMeshs.Add(MakeShareable(capsule));
			mStagingStMeshTable.Add(meshPath, index);
		}
	}

	void PrepareStMeshDatasByList(const TArray<FString>& stMeshList);//	이거도 스테이션의prepare 부분에서 해주자.
	void PrepareStMeshDatasByLocal();
	void PrepareStMeshDatasByServer();

	void OnLoadStMeshsBySlidingWindow();
	
	UStaticMesh* GetLoadedStaticMeshByIndex(int16 index)
	{
		UStaticMesh* reValue = nullptr;
		if (mStagingStMeshs.IsValidIndex(index) == true)
		{
			if (mStagingStMeshs[index]->IsLoadedMesh() == true)
			{
				reValue = mStagingStMeshs[index]->GetMeshData();
			}
		}
		return reValue;
	}
	UStaticMesh* GetLoadedStaticMeshByPath(const FString& meshPath)
	{
		UStaticMesh* reValue = nullptr;
		if(mStagingStMeshTable.Contains(meshPath) == true)
		{
			reValue = GetLoadedStaticMeshByIndex(mStagingStMeshTable[meshPath]);
		}
		return reValue;
	}

	UStaticMesh* GetTryLoadedStaticMeshByPath(const FString& meshPath)
	{
		UStaticMesh* reValue = nullptr;
		
		if (mStagingStMeshTable.Contains(meshPath) == false)
		{
			PrepareStaticMeshDataByPath(meshPath);
		}
		reValue = GetLoadedStaticMeshByIndex(mStagingStMeshTable[meshPath]);
		return reValue;
	}


	void GetPrepareSkeletalMeshByPath(const FString& meshPath);
	FTIHMeshPoolConfigure& GetMeshPoolConfig()
	{
		return mMeshPoolConfig;
	}
	/*
		PrepareStMeshDatasByList 는 단순하게 리스트에서 메쉬캡슐을 로드하는 녀석이다.
		PrepareStMeshDatasByConfiguParser 는 외부의 데이터를 읽어와서 메쉬캡슐을 로드하는 녀석이다.
			이녀석은 로컬에서 자료를 저장해서 로드하는것임
		PrepareStMeshDatasByServer 는 서버에서 불러와서 로드하는것이다.
			이녀석은 외부에서 자료를 저장해서 로드하는것임
		근데 모두 공통적으로 PrepareStMeshDatasByList 를 통해서만 캡슐의 제작이 가능하다.
		즉 접근 통로가 직접이냐 하나를 거쳐가느냐이다.

		GenerateMeshCapsules 는 직접적으로 캡슐을 만드는 녀석이다.
		이녀석은 내부에 tick 을 불러오고 만드는데, 해당 틱은 관리에 사용이 되며 id 로 사용되는게 아니다.
		그러므로 구지 외부로 호출할 필요가 없다. 근데도 32로 한이유는 내부에 저장할때 용량을 좀 줄이고싶어서.
		그럼 이제 station 에 get
	*/

private:
	/*
		1.  요청이 들어오면 그걸 전부 스테이징 테이블에 넣는다
		2.	넣으면서 해당 경로를 저장해놓는다
		3.	
	*/

	struct InnerQuery
	{
		int16 InnerQueryType; // {}
		int16 IntDataType;//{startEndIndex,PerIndex}
		TArray<int16> IntData;
	};

	TMap<FString, int16> mStagingStMeshTable;
	TArray< TSharedPtr< TTIHMeshCapsule<UStaticMesh>>> mStagingStMeshs;
	
	TMap<FString, int16> mStagingSkMeshTable;
	TArray< TSharedPtr<TTIHMeshCapsule<USkeletalMesh>>> mStagingSkMeshs;

	FTIHSlidingWindowBase* mSlidingWindow;
	TArray<int16> mCandidateArray;

	FTIHMeshPoolConfigure mMeshPoolConfig;


	/*
		category 단위로 저장을 한다면
			1. 키만알면 사실 load 하기 편하다.
				그럼 staging 된것들만 
	*/

	TFunction<void()> mMeshLoadingDone;
	/*
		그니깐 지금 어떻게 하고 싶은가.
		매쉬를 많이 로드해놓으면 그만큼 데이터를 많이 먹는다. 
		그래서 스테이징 되어있는 것과 아닌것을 구분해야한다.
		필요한 메쉬를 요청하면 그게 있는지 확인하고 올려주는데, 시간별로 쪼개서 해당 메쉬가 사용되는지
		아닌지 확인해야한다.
		내가 지금 메쉬의 근처에 있는것이 호출될것이다라는걸 알 방법은 없다.,
		근데 메쉬들의 목록을 스트링으로 받아오는게 맞는가? 메쉬들의 목록을 장전시켜놓고 만약
		사용하지 않는다든가(몇틱 혹은 몇시간?)그러면 로드 스테이지에서 내리는 것을 해야한다.
		즉 바로 찾게끔 메모리에 올려주는 녀석(메모리에 로드된걸 올려주는 녀석)
		과 해당 메모리에 물체를 탐색하는 녀석이 필요하다.
		그럼 TArray 로 전체를 탐색하는것이 필요할 거 같은데, 로드 된타이밍의 틱번호를 가져와야한다.
	
		이거를 스테이션에 넣어놓고
		커맨더에서 해당 부분에 해당 녀석들의 path 들을 들고와라라고 명령을 내리고
		load 는 tickable 이나 뭐 그런걸로 처리하는 커맨드도 만들고,
		어디서 무엇을 해야하는지를 좀있다 쓰자
	*/
};

#pragma endregion Miscellaneous
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Miscellaneous										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
//--	----	----	----	----	----	----	----	----	----	----	----


/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Struct Implements									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Struct Implements
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								ManagedObject Meta Infos 
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
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
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								ManagedObject Configures
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
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
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								For Generate Structure
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
struct FTIHGenerateDataPairForManagedObjectLeaf
{
	TIHHash64 TihHash;
	TFunction<FTIHMngObjLeaf* ()> GenerateFunction;
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
		HashValueType(copyCtor.HashValueType), UEValueType(copyCtor.UEValueType)
	{}

	TTIHMngObjTempDataPair(TTIHMngObjTempDataPair&& moveCtor)
		:
		HashValueType(std::move(moveCtor.HashValueType)), UEValueType(std::move(moveCtor.UEValueType))
	{}

	TTIHMngObjTempDataPair& operator=(const TTIHMngObjTempDataPair& copyOper)
	{
		HashValueType = copyOper.HashValueType;
		UEValueType = copyOper.UEValueType;
		return *this;
	}
	TTIHMngObjTempDataPair& operator=(TTIHMngObjTempDataPair&& moveOper)
	{
		HashValueType = std::move(moveOper.HashValueType);
		UEValueType = std::move(moveOper.UEValueType);
		return *this;
	}
};
struct FTIHGenerateCandidateLeaves
{
	static FTIHGenerateCandidateLeaves gErrorReference;
	TSet<TIHObjectHash64> GenerateTags;

	FTIHGenerateCandidateLeaves() {}
	FTIHGenerateCandidateLeaves(const FTIHGenerateCandidateLeaves& copyCtor)
		: GenerateTags(copyCtor.GenerateTags)
	{}
	FTIHGenerateCandidateLeaves(FTIHGenerateCandidateLeaves&& moveCtor)
		:GenerateTags(moveCtor.GenerateTags)
	{}

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
		GenerateTags = std::move(moveOper.GenerateTags);
	}
	FTIHGenerateCandidateLeaves& operator=(TSet<TIHObjectHash64>&& moveOper)
	{
		GenerateTags = moveOper;
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

		UESceneComponent = std::move(moveOper.UESceneComponent);
		TIHManagedObject = std::move(moveOper.TIHManagedObject);
		
		moveOper.UESceneComponent = nullptr;
		moveOper.TIHManagedObject = nullptr;
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
		StepValue = std::move(moveCtor.StepValue);
		ParentCompositeIndex = std::move(moveCtor.ParentCompositeIndex);
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
		StepValue = std::move(moveValue.StepValue);
		ParentCompositeIndex = std::move(moveValue.ParentCompositeIndex);
		UESceneComponent = std::move(moveValue.UESceneComponent);
		TIHManagedObject = std::move(moveValue.TIHManagedObject);
		moveValue.UESceneComponent = nullptr;
		moveValue.TIHManagedObject = nullptr;
		return *this;
	}
};
#pragma endregion Struct Implements
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Struct Implements									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
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

		if (mRegistedUESceneComponenBytUEHash.Contains(reValue) == false)
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

		if (mRegistedUESceneComponenBytUEHash.Contains(ueHash) == true)
		{
			reValue = mRegistedUESceneComponenBytUEHash[ueHash];
		}
		return reValue;
	}
	UEObjectHash64 GetUESceneComponentHashByUClass(UClass* ucls)
	{
		UEObjectHash64 reValue = 0;//	noRegist
		if (mRegistedSwapUESceneToUEHash.Contains(ucls) == true)
		{
			reValue = mRegistedSwapUESceneToUEHash[ucls];
		}
		return reValue;
	}

	UClass* GetUEActorClassByUEHash(UEObjectHash64 ueHash)
	{
		UClass* reValue = nullptr;
		if (mRegistedActorByUEHash.Contains(ueHash) == true)
		{
			reValue = mRegistedActorByUEHash[ueHash];
		}
		return reValue;
	}

	void RegistUEActorByUClass(UEObjectHash64 ueHash, UClass* ueActorUcls)
	{
		mRegistedActorByUEHash;

		if (mRegistedActorByUEHash.Contains(ueHash) == false)
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
		if (mRegistedGenerateFuncByTIHHash.Contains(tihHash) == false)
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
		if (mRegistedGenerateFuncByTIHHash.Contains(tihHash) == true)
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
	void RegistGenerateCandidateHashArrayByUEHash(UEObjectHash64 ueHash, const FTIHGenerateCandidateLeaves& hashArray)
	{
		if (mRegistedGenCandidates.Contains(ueHash) == false)
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
	void GenerateLeavesByUEHash(UEObjectHash64 ueHash, FTIHMngObjComposite& out);

	const FTIHGenerateCandidateLeaves& GetCandidateForManagedLeafByUEComponentHash(UEObjectHash64 ueHash);

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
		if (mSwapActorHashByUClass.Contains(ucls) == true)
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
//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										Command Datas									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Command Datas
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										NewAlloc Prepare
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

USTRUCT()
struct FTIHNewAllocPrepareData
{
	GENERATED_BODY()

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
	int64 TargetClassHash;

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
		TargetClassType = std::move(rvalue.TargetClassType);
		AllocationSpace = std::move(rvalue.AllocationSpace);
		AllocateCount = std::move(rvalue.AllocateCount);
		CallParentIndex = std::move(rvalue.CallParentIndex);
		AddOrder = std::move(rvalue.AddOrder);
		TargetClassHash = std::move(rvalue.TargetClassHash);
		
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
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
									Assign Pool
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
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
#pragma endregion Command Datas
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										Command Datas									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/


class FTIHMngObjGenerateQueues
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

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃								ManagedObject Components								   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region ManagedObject Components
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								managedObject Component base
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
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
	virtual void OnGeneratePipeLining(FTIHMngObjPool* targetPool);
	//	
	virtual void GenerateUEActorBaseByPrepareData(int16 allocount, UEObjectHash64 ueObjHash, FTIHMngObjGenerateQueues& tempDatas, bool isChild);

	virtual void GenerateManagedObjectByActorArray(FTIHMngObjGenerateQueues& generateQueues, int16 parentData);

	virtual void GenerateManagedObjectCompositeArray(FTIHMngObjGenerateQueues& genereteQueues);

	virtual void GenerateUEChildActorBy(UChildActorComponent* childActorScene, FTIHMngObj* currManagedObject, FTIHMngObjGenerateQueues& tempDatas);

	virtual void GenerateManagedObjectLeafArray(FTIHMngObjGenerateQueues& genereteQueues);
private:


	FTIHMngObjPool* mCurrManagedObjectPool;

};
/*
	GenerateManagedObjectCompositeArray 의 237 라인에서 특수처리할건지 선택하게 하는 코드를 넣을것이다.
		넣을땐 FTIHMngObjTempDatas& 를 자료형으로 넣는데, 중요한건 이걸 composite 에서 처리하게 만들면 된다는것이다.
		즉 composite 를 상속받게 만들거나 혹은 음...아 시발 아니면 팩토리를 새롭게 만들까?
		그게 더 빠를거 같기도 한데 어차피 시발 virtual 해도 이게 매번 불리는게 아니잖아. 그럼 배제 배제고릴라.
		이거 custom component 를 만들면 하자.

*/


/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								managedObject Composite base
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
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

		AddLeaf
		GetLeaf
		GetOwnerManagedObject
	*/
	void AddLeaf(FTIHMngObjLeaf* leaf);
	FTIHMngObjLeaf* GetLeaf(TIHHash64 tihHash);
	void SetManagedObjectIndex(int16 idx)
	{
		SetOwnerIndex(idx);
	}
	int16 GetManagedObjectIndex()
	{
		return GetOwnerIndex();
	}

	FTIHMngObj* GetOwnerManagedObject();

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
	/*
		1안 전략에서 수정
			그럼  composite 든 mngObj 든 해당 기능을 try 로 가져올 수 있어야함.
			근데 나는 composite 를 추천 근데 접근 인터페이스는 mng  에 있어야함.,

	*/
	//template<typename TIHTemplateType>
	//TIHTemplateType* TryGetCastedLeaf()
	//{
	//	TIHTemplateType* reValue = nullptr;
	//	TIHHash64 checkHash = TIHTemplateType::TIHClassNameHash();
	//	if(mLeafMap.Contains(checkHash) == true)
	//	{
	//		reValue = static_cast<TIHTemplateType*>(mLeafMap[checkHash]);
	//	}
	//	return reValue;
	//}
	FTIHMngObjLeaf* TryGetLeafByHash(TIHHash64 checkHash)
	{
		FTIHMngObjLeaf* reValue = nullptr;
		if (mLeafMap.Contains(checkHash) == true)
		{
			reValue = mLeafMap[checkHash];
		}
		return reValue;
	}
	FTIHMngObjLeafMovement* TryGetLeafForMovement();
	FTIHMngObjLeafPretty* TryGetLeafForPretty();
	FTIHMngObjLeafStMesh* TryGetLeafForStMesh();
	FTIHMngObjLeafSkMesh* TryGetLeafForSkMesh();
	/*
		그냥 결정하다
		한번 물어봤으면 캐싱을 하자. 
		그니깐 Query 를 할건데 컴포지트에서 리프들에게 물어볼거임. 해당 기능이 되는가?
		그럼 query 를 좀더 상세히 해야함. 즉 처음에 물어보고 배치할때만 좀 버벅이면된다.

	*/
protected:
	int16 mParentIndex;
	int16 mStep;

	TMap<TIHHash64, FTIHMngObjLeaf*> mLeafMap;
	USceneComponent* mUESceneComponent;
};

/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								managedObject Leaf base
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
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
		PostLinkTargetImplement();
	}

	USceneComponent* GetManagedSceneComponent() override
	{
		return mCastedComponent;
	}

	TIHTemplateType* GetManagedSceneComponentCastedScene()
	{
		return mCastedComponent;
	}	
	void PostLinkTargetImplement()
	{
	}
protected:
	TIHTemplateType* mCastedComponent;
private:
};
#pragma endregion ManagedObject Components
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃								ManagedObject Components								   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Managed Object										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Managed Object


class FTIHMngObj
{
	static FTIHMngObjPoolCenter* gPoolCenter;
public:
	/*
	┌──────────────────────────────────────────────────────────────────────────────────────────┐
											Sub_Title
	└──────────────────────────────────────────────────────────────────────────────────────────┘
	*/
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
	void InitMngObj(AActor* targetActor, int16 parentIndex, int8 allocationSpace)
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
	FTIHMngObjPool* GetMyManagedPool();
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
		if (mStateDetail.IsStateReady() == true)
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
	
	int16 QueryExistedCompositeFirstMatch(TIHHash64 clsHash)
	{
		int16 reValue = -1;
		for (FTIHMngObjComposite* compo : mCompositeArray)
		{
			if (compo->GetHashValue() == clsHash)
			{
				reValue = compo->GetIndexInManagedObjectCompositeArray();
				break;
			}
		}
		return reValue;
	}


	template<typename TIHTemplateType>
	TIHTemplateType* TryGetCastedLeaf(int16 compositeIndex)
	{
		TIHTemplateType* reValue = nullptr;
		if(mCompositeArray.IsValidIndex(compositeIndex) == true)
		{
			FTIHMngObjLeaf* leaf = mCompositeArray[compositeIndex]->TryGetLeafByHash(TIHTemplateType::TIHClassNameHash());
			reValue = static_cast<TIHTemplateType*>(leaf);
		}
		return reValue;
	}

private:
	FTIHMngObjHeader mManagedObjectHeader;
	UObject* mManagedUEObect;				
	TIHHash64 mManagedUEObjectHash;			
	
	FTIHState mStateDetail;					//	interface	get

	int16 mParentIndexInWholeArray;		//	-1 is rootManagedObject  
	int16 mSelfIndexInWholeArray;		//	in wholeDatas in objectPool

	TArray<FTIHMngObjComposite*> mCompositeArray;	//	add
	TSet<TIHHash64> mHashTable;
};
FTIHMngObjPoolCenter* FTIHMngObj::gPoolCenter = nullptr;
#pragma endregion Managed Object
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Managed Object										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
//--	----	----	----	----	----	----	----	----	----	----	----

class FTIHPathPool
{
public:

private:

};


/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃								Managed Object Pools									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Managed Object Pools
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								Managed Object Pool
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHMngObjPool
{
/*
		PoolingManagedObject 로 대표가 된다.
		영역과 오브젝트 base, 그리고 연결된 오브젝트 해쉬를 넣어주면 지금 상태가 올바른
		것만을 리턴한다

		내부에 좀 복잡하게 되어있지만 사용하기 위해서는 config 만을 설정해주면 된다.
		그럼 내부에서 reserve 가 자동으로 이루어지고,
*/
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
	void AddNewManagedObject(FTIHMngObj* newManagedObject);


	TArray<FTIHMngObj*>& GetWholeManagedObjectArray()
	{
		return mWholeManagedObjects;
	}
	FTIHMngObjGenerateQueues& GetTempDatas()
	{
		return mTempDatasForNewAlloc;
	}

	void OnSortManagedStates();

	void PushBackReadyMngObj(FTIHMngObj* target);
	FTIHMngObj* GetAnyReadyMngObj(int8 base, TIHHash64 ueHash);

	void OnChangeStateAllocateToReady();
	void OnCompleteCreateNewAlloc();

	void OnRepeatCreateNewAlloc(int32 currPhase);
	void OnErrorCallCreateNewAlloc(TIHReturn64 errCode);

	/*
		개별 매니지드 오브젝트 가져오는 함수만들기
		매니지드 오브젝트 상태확인을 바로하는 거 만들기
	
	*/

	FTIHMngObj* GetMngObj(int16 index)
	{
		FTIHMngObj* reValue = nullptr;
		reValue = mWholeManagedObjects[index];
		return reValue;
	}

	FTIHMngObj* GetMngObjFaster(int16 index)
	{
		FTIHMngObj* reValue = nullptr;
		reValue = *(mWholeManagedObjects.GetData() + (int32)index);
		return reValue;
	}

	FTIHMngObj* GetMngObjFast(int16 index)
	{
		FTIHMngObj* reValue = nullptr;
		if (index < mWholeManagedObjects.Num())
		{
			reValue = GetMngObjFaster(index);
		}
		return reValue;
	}

	const FTIHState& GetMngObjState(int16 index)
	{
		FTIHMngObj* target = GetMngObjFast(index);
		check(target != nullptr);
		return target->GetState();
	}

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



	TDeque< FTIHNewAllocPrepareData> mPrepareManagedObjects;

	//TMap<int8,TMap<int8, TMap<TIHHash64,TSet<int16>>>> mManagedObjectStateBaseTypeIndices;

	TMap<int8, TMap< TIHHash64, TSet<int16> > > mManagedObjectStateRunningIndices;
	/*
		base
			managedHash
					selfIndex
	*/
	TMap<int8, TMap< TIHHash64, TDeque<int16>>> mManagedObjectStateReadyIndices;

	FTIHMngObjGenerateQueues mTempDatasForNewAlloc;
};
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								Managed Object Pool Center
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHMngObjPoolCenter
{
	/*
		사실 여기서 하고싶은건 ObjectPool 의 공통기능 및 공유 기능을 만드는건데,
		특히 prepare 이거를 하는거다.
	*/
public:
	static FTIHMngObjPoolCenter& GetSingle();
	void MergeSamePrepareDatas();

	TDeque<FTIHNewAllocPrepareData>& GetPrepareDataQueue()
	{
		return mPrepareDatas;
	}
	void EmplaceAddMngObjPrepareData
	(
		int8 TargetClassType, UEObjectHash64 TargetClassHash,
		int16 CallParentIndex, int16 AllocateCount
	);
	void EmplaceAddMngObjPrepareDataForChildActor
	(
		UEObjectHash64 TargetClassHash, int16 CallParentIndex
	);


	int8 RegistManagedObjectPool(ETIHManagedObjectSpace managedObjectSpace, FTIHMngObjPool* managedObjectPool);

	FTIHMngObjPool* GetManagedObjectPool(int8 objectPoolSpace);

	void RegistUEClassForGenerate(UClass* ucls);
	void RegistFunctionForManagedComponentGeneration(TIHReturn64 managedCompHash, TFunction< FTIHMngObjLeaf* ()> func);
	/*void RegistLinkUEClassAndManagedComponentByUEClass(UClass* ucls, const TArray<TIHReturn64>& tihHashs)
	{

	}*/
	
	FTIHMngObjFactory& GetFactory();
	void OnGeneratePipeLining(int8 allocationSpace);
	void OnSetObjectPoolConfigure(const FTIHMngObjPoolConfigureDatas& data);
	const FTIHGenerateCandidateLeaves& GenerateManagedObjectComponentByUClass(UClass* ucls);
	UEObjectHash64 GetUeHashByUClassInUEComponent(UClass* ucls);
	bool IsUeHashValid(UEObjectHash64 ueHash);
	const FTIHGenerateCandidateLeaves& GetTIHHashArrayByUEHash(UEObjectHash64 ueHash);
	FTIHMngObjLeaf* GenerateManagedComponentByTIHHash(TIHObjectHash64 ueHash);
	/*
		
	*/
	FTIHMngObjPool* CreateManagedObjectPool(
		int8 allocationSpace,
		int16 wholeMngObjCapacity,
		int16 processingPhaseCount,
		UWorld* spawnSpace,
		AActor* ownerActor,
		const FTransform& defaultTransform = FTransform::Identity,
		const int8 ifAddCapacityCount = int8(127)
	);
	FTIHMngObj* PoolingManagedObject(int8 allocationSpace, int8 ueObjBase, TIHObjectHash64 ueObjHash);

private:
	FTIHMngObjFactory* mManagedObjectFactory;
	TMap<FName, UEObjectHash64> mClassNameToUeClassHash;
	TDeque<FTIHNewAllocPrepareData> mPrepareDatas;

	TMap<TIHObjectHash64, TFunction< FTIHMngObjLeaf* ()>> mTIHClassHashToGenerateFunction;
	TMap<UEObjectHash64, FTIHGenerateCandidateLeaves> mUClassToClassHashs;// ForManagedComponent	ue컴포넌트로 해당하는 해쉬찾는거임
	TMap<UEObjectHash64, UClass*> mUeClassHashToUClass;

	TMap<int8, FTIHMngObjPool*> mManagedObjectPools;
};
#pragma endregion Managed Object Pools
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃								Managed Object Pools									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/