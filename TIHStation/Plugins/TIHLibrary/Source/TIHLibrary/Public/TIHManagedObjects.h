#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "../../../../../../../Source/Runtime/UMG/Public/Blueprint/UserWidget.h"
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

class ATIHMeshPoolPathLoadImbeding;
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
	EStuckEndDone = 1 << 0,
	EInfiniteEndDone = 1 << 1,
	ESlackEndDone = 1 << 2,
	ECircleEndDone = 1 << 3,
	EWhenRightAdd = 1 << 4,
	EWhenLeftAdd = 1 << 5
};



void DefalutRightOverFunction();
void DefaultLeftOverFunction();

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
		if ((int8)ETIHSlidingWindowDoneStateTypes::ENotDone < mSlidingWindowDoneState)
		{
			reValue = true;
		}
		return reValue;
	}
	void SetRangeCount(int16 value)
	{
		if (mRangeCount < value)
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
		if (mRangeStartIndex < value)
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
	void InitSlidingWindow(int8 slidingWindowType, int16 startIndex, int16 rangeCount)
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
		if (mSlidingWindowDoneState == (int8)ETIHSlidingWindowDoneStateTypes::ENotDone)
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

	bool IsInIndexFunc(const int16 leftEndIndex, const int16 index, const int16 rightEndIndex)
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
		if (IsInIndexFunc(mSlidingPointer.Detail.LeftIndex, index, mSlidingPointer.Detail.RightIndex) == true)
		{
			reValue = true;
		}
		return reValue;
	}

	int32 GetIndexArray(TArray<int16>& arr) override
	{
		int32 lastIndex = -1;
		if (GetRangeCount() <= arr.Num())
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

		int16 changeValue = value % GetRangeCount();

		//mSlidingPointer.Detail.LeftIndex += changeValue;
		//mSlidingPointer.Detail.RightIndex += changeValue;
		AddSlidingWindow(changeValue);

		if (endRangeIndex < mSlidingPointer.Detail.RightIndex)
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

		if (mSlidingPointer.Detail.LeftIndex < startRangeIndex)
		{
			mIsCircling = true;
			mSlidingPointer.Detail.LeftIndex = startRangeIndex;
			int16 mainSlideCount = mSlidingPointer.Detail.RightIndex - mSlidingPointer.Detail.LeftIndex + 1;
			int16 subSlideCountAdd = rangeCount - mainSlideCount;

			mDoublePointer.Detail.RightIndex = GetRangeEndIndex();
			mDoublePointer.Detail.LeftIndex = mDoublePointer.Detail.RightIndex - (subSlideCountAdd - 1);


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
		if (IsInIndexFunc(mSlidingPointer.Detail.LeftIndex, index, mSlidingPointer.Detail.RightIndex) == true
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
		if (GetRangeCount() <= arr.Num())
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
	TTIHMeshCapsule(TIHTick32 tick, const FString& path)
		:
		mSelfTick(tick),
		mMeshPathData(path),
		mMeshData(nullptr)
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
		if (mMeshPathData.IsValid() == true)
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

	/*
		슬라이딩 윈도우 타입이다.
		EStuckEnd,	EInfiniteEnd,ESlackEnd,ECircling,
	*/
	UPROPERTY()
	int8 SlidingWindowType;
	/*

	*/
	UPROPERTY()
	int8 SlidingWindowSplitType;
	/*
		한번에 얼마씩 슬라이딩을 할지를 정한다. 즉 한번의 범위이며, count 이다.
	*/
	UPROPERTY()
	int16 SlidingWindowSplitValue;
	/*
		슬라이딩 방향 left = -1 , right = 1
	*/
	UPROPERTY()
	int8 SlindingWindowDirection;
	/*
		매쉬를 얻어낼때 어떻게 얻어낼지를 정한다.
		startEnd 는 0 과 1 이 범위를 뜻하며
		perElement 는 그냥 각 인덱스이다.
		UnknownType = 0,StartEnd = 1,PerElement = 2
	*/
	UPROPERTY()
	int8 PrepareLoadPathType;
	/*
		to-do
		이거 사용하는곳 차기 만든 이유는 있는데 기억이 안남.
	*/
	UPROPERTY()
	int16 PrepareLoadPathDataIndex;
	/*
		startEnd 는 0 과 1 이 범위를 뜻하며
		perElement 는 그냥 각 인덱스이다.
		UnknownType = 0,StartEnd = 1,PerElement = 2
	*/
	UPROPERTY()
	int8 CreateInnerQueryType;
	/*
		카테고리 큐를 팝할건지 아닌지를 정한다.
		보통 하나의 카테고리가 하나의 매쉬를 뜻하는지 아니면 범위를 정하는지를 정할때 사용한다.
	*/
	UPROPERTY()
	int8 CreateCategoryPop;
	/*
		mDefaultCategories.Add(0, TEXT("NotAllocCategory"));
		mDefaultCategories.Add(1, TEXT("Default0"));
		mDefaultCategories.Add(2, TEXT("Default1"));
		mDefaultCategories.Add(3, TEXT("Default2"));
		mDefaultCategories.Add(4, TEXT("Default3"));
		mDefaultCategories.Add(5, TEXT("StMeshDefault"));
		mDefaultCategories.Add(6, TEXT("SkMeshDefault"));
		이게 디폴트 카테고리임.
	*/
	UPROPERTY()
	int16 CreateCategoryHashDefaultIndex;

	FTIHMeshPoolConfigure()
		:
		SlidingWindowType((int8)ETIHSlidingWindowTypes::ESlackEnd),//	slidingWindowType 필요
		SlidingWindowSplitType(TIHNameSpaceCommon::Common::Int8s::NotYetValue),
		SlidingWindowSplitValue(TIHNameSpaceCommon::Common::Int8s::NotYetValue),
		SlindingWindowDirection(1),
		PrepareLoadPathType(TIHNameSpaceCommon::Common::Int8s::NotYetValue),
		PrepareLoadPathDataIndex(TIHNameSpaceCommon::Common::Int8s::NotYetValue),
		CreateInnerQueryType(TIHNameSpaceCommon::QueryType::UnknownType),
		CreateCategoryPop(TIHNameSpaceCommon::Common::Int8s::TrueValue),
		CreateCategoryHashDefaultIndex(TIHNameSpaceCommon::Common::Int8s::ZeroValue)
	{}
	FTIHMeshPoolConfigure(const FTIHMeshPoolConfigure& copyCtor)
		:
		SlidingWindowType(copyCtor.SlidingWindowType),
		SlidingWindowSplitType(copyCtor.SlidingWindowSplitType),
		SlidingWindowSplitValue(copyCtor.SlidingWindowSplitValue),
		SlindingWindowDirection(copyCtor.SlindingWindowDirection),
		PrepareLoadPathType(copyCtor.PrepareLoadPathType),
		PrepareLoadPathDataIndex(copyCtor.PrepareLoadPathDataIndex),
		CreateInnerQueryType(copyCtor.CreateInnerQueryType),
		CreateCategoryPop(copyCtor.CreateCategoryPop),
		CreateCategoryHashDefaultIndex(copyCtor.CreateCategoryHashDefaultIndex)
	{
	}
	FTIHMeshPoolConfigure(FTIHMeshPoolConfigure&& moveCtor) noexcept
		:
		SlidingWindowType(std::move(moveCtor.SlidingWindowType)),
		SlidingWindowSplitType(std::move(moveCtor.SlidingWindowSplitType)),
		SlidingWindowSplitValue(std::move(moveCtor.SlidingWindowSplitValue)),
		SlindingWindowDirection(std::move(moveCtor.SlindingWindowDirection)),
		PrepareLoadPathType(std::move(moveCtor.PrepareLoadPathType)),
		PrepareLoadPathDataIndex(std::move(moveCtor.PrepareLoadPathDataIndex)),
		CreateInnerQueryType(std::move(moveCtor.CreateInnerQueryType)),
		CreateCategoryPop(std::move(moveCtor.CreateCategoryPop)),
		CreateCategoryHashDefaultIndex(std::move(moveCtor.CreateCategoryHashDefaultIndex))
	{
	}
	FTIHMeshPoolConfigure& operator=(const FTIHMeshPoolConfigure& copyOper)
	{
		SlidingWindowType = copyOper.SlidingWindowType;
		SlidingWindowSplitType = copyOper.SlidingWindowSplitType;
		SlidingWindowSplitValue = copyOper.SlidingWindowSplitValue;
		SlindingWindowDirection = copyOper.SlindingWindowDirection;
		PrepareLoadPathType = copyOper.PrepareLoadPathType;
		PrepareLoadPathDataIndex = copyOper.PrepareLoadPathDataIndex;
		CreateInnerQueryType = copyOper.CreateInnerQueryType;
		CreateCategoryPop = copyOper.CreateCategoryPop;
		CreateCategoryHashDefaultIndex = copyOper.CreateCategoryHashDefaultIndex;
		return *this;
	}
	FTIHMeshPoolConfigure& operator=(FTIHMeshPoolConfigure&& moveOper) noexcept
	{
		SlidingWindowType = std::move(moveOper.SlidingWindowType);
		SlidingWindowSplitType=std::move(moveOper.SlidingWindowSplitType);
		SlidingWindowSplitValue=std::move(moveOper.SlidingWindowSplitValue);
		SlindingWindowDirection=std::move(moveOper.SlindingWindowDirection);
		PrepareLoadPathType=std::move(moveOper.PrepareLoadPathType);
		PrepareLoadPathDataIndex=std::move(moveOper.PrepareLoadPathDataIndex);
		CreateInnerQueryType=std::move(moveOper.CreateInnerQueryType);
		CreateCategoryPop=std::move(moveOper.CreateCategoryPop);
		CreateCategoryHashDefaultIndex=std::move(moveOper.CreateCategoryHashDefaultIndex);
		return *this;
	}

	FTIHMeshPoolConfigure& SetCreateCategoryProperties(const FTIHMeshPoolConfigure& copyValue)
	{
		CreateInnerQueryType = copyValue.CreateInnerQueryType;
		CreateCategoryPop = copyValue.CreateCategoryPop;
		CreateCategoryHashDefaultIndex = copyValue.CreateCategoryHashDefaultIndex;
	}

};

//	?? 이거 왜만들엇지?
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

/*
	query 에 대한 정보를 담고있고, 
	내부에 해당 매쉬캡슐에 대한 인덱스를 담고있다.

*/
struct FTIHQueryMeshPool
{
	/*
		startEnd 는 0 과 1 이 범위를 뜻하며
		perElement 는 그냥 각 인덱스이다.
		UnknownType = 0,StartEnd = 1,PerElement = 2
	*/
	int8 InnerQueryType;
	int8 LoadState;
	int16 Padding0;
	TArray<int16> IntData;

	FTIHQueryMeshPool()
		:
		InnerQueryType(TIHNameSpaceCommon::QueryType::UnknownType),
		LoadState(TIHNameSpaceMesh::MeshPoolQueryStateBitMask::ResetZero),
		Padding0(0)
	{
		IntData.Reserve(8);
	}

	FTIHQueryMeshPool
	(
		int16 innerQueryType,
		int8 loadState = 0,
		int16 padding0 = 0
	)
		:
		InnerQueryType(innerQueryType),
		LoadState(loadState),
		Padding0(padding0)
	{
	}

	FTIHQueryMeshPool(const FTIHQueryMeshPool& copyCtor)
		:
		InnerQueryType(copyCtor.InnerQueryType),
		LoadState(copyCtor.LoadState),
		Padding0(copyCtor.Padding0),
		IntData(copyCtor.IntData)
	{
	}
	FTIHQueryMeshPool(FTIHQueryMeshPool&& moveCtor) noexcept
		:
		InnerQueryType(moveCtor.InnerQueryType),
		LoadState(moveCtor.LoadState),
		Padding0(moveCtor.Padding0),
		IntData(moveCtor.IntData)
	{
	}
	~FTIHQueryMeshPool()
	{
	}
	FTIHQueryMeshPool& operator=(const FTIHQueryMeshPool& copyOper)
	{
		InnerQueryType = copyOper.InnerQueryType;
		LoadState = copyOper.LoadState;
		Padding0 = copyOper.Padding0;
		IntData = copyOper.IntData;
		return *this;
	}
	FTIHQueryMeshPool& operator=(FTIHQueryMeshPool&& moveOper) noexcept
	{
		InnerQueryType = std::move(moveOper.InnerQueryType);
		LoadState = std::move(moveOper.LoadState);
		Padding0 = std::move(moveOper.Padding0);
		IntData = std::move(moveOper.IntData);
		return *this;
	}
};


class FTIHMeshPool
{
public:
	/*
		to-do
	*/
	static FTIHMeshPool* GetSingle();
	
	TTIHMeshCapsule<UStaticMesh>* GenerateStaticMeshCapsules(const FString& path);

	void InstantiateThis() {};

	void InitiateThis();



	void PrepareStaticMeshDataByPath(const FString& meshPath)
	{
		using namespace TIHNameSpaceCommon;
		using namespace TIHNameSpaceMesh;
		if (mStagingStMeshTable.Contains(meshPath) == false)
		{
			TTIHMeshCapsule<UStaticMesh>* capsule = GenerateStaticMeshCapsules(meshPath);
			int16 index = mStagingStMeshs.Add(MakeShareable(capsule));
			mStagingStMeshTable.Add(meshPath, index);
			const TIHTick32 curTick = capsule->GetSelfTick();
			if (LoadQueryByTick.Contains(curTick) == false)
			{
				LoadQueryByTick.Add(curTick,
					FTIHQueryMeshPool
					(
						QueryType::StartEnd,
						MeshPoolQueryStateBitMask::LoadedPath |
						MeshPoolQueryStateBitMask::HasTickTime
					)
				);
			}
		}
	}
	TSharedPtr< TTIHMeshCapsule<UStaticMesh>> GetMeshCapsuleByMeshPath(const FString& meshPath)
	{
		TSharedPtr< TTIHMeshCapsule<UStaticMesh>> reValue = nullptr;
		if (mStagingStMeshTable.Contains(meshPath) == true)
		{
			int16 findIndex = mStagingStMeshTable[meshPath];
			reValue = mStagingStMeshs[findIndex];
		}
		return reValue;
	}

	int16 GetMeshCapsuleIndexByMeshPath(const FString& meshPath)
	{
		int16 reValue = -1;
		if (mStagingStMeshTable.Contains(meshPath) == true)
		{
			reValue = mStagingStMeshTable[meshPath];
		}
		return reValue;
	}
	void PushBackCategory(const FString& cat)
	{
		mCategoryQueue.PushLast(cat);
	}
	//	내가 로드 하고싶은 것에 대한 카테고리를 해당 팩이 알고있어야한다.
	//	그리고 나서 해당 팩의 내용을 써줘야하는데, 이거는 단일이다.
	//	그럼 리스트를 짜고 카테고리를 넣고 돌리면 된다.
	void PrepareStaticMeshPathsByCategory(const FString& cat, const FString& meshPath);

	void PrepareStMeshPathsByList(const TArray<FString>& stMeshList);//	이거도 스테이션의prepare 부분에서 해주자.

	void PrepareStMeshDatasByLocal();
	void PrepareStMeshDatasByServer();

	void OnLoadStMeshsBySlidingWindow();



	UStaticMesh* GetLoadedStaticMeshByIndex(int16 index)
	{
		UStaticMesh* reValue = nullptr;
		// 이거 어떻게 하지. 2번검사하는데.
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
		if (mStagingStMeshTable.Contains(meshPath) == true)
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
	void SetMeshPoolConfig(const FTIHMeshPoolConfigure& meshPoolConfig)
	{
		mMeshPoolConfig = meshPoolConfig;
	}

	FTIHMeshPoolConfigure& GetMeshPoolConfig()
	{
		return mMeshPoolConfig;
	}
	
	/*
		SetMeshPoolPathLoadImbeding 
		GetMeshPoolPathLoadImbeding
		는 자동화가 안된다. 직접 pak 에서 설정해줘야함.
	*/
	void SetMeshPoolPathLoadImbeding(ATIHMeshPoolPathLoadImbeding* imbeding)
	{
		SafeDeletePtr(mMeshPoolImbeding);
		mMeshPoolImbeding = imbeding;
	}

	ATIHMeshPoolPathLoadImbeding* GetMeshPoolPathLoadImbeding();


	/*
		어떻게 만들까. 
		만들고 보니깐
		메쉬 경로를 로드하고
			개별로드와 리스트 로드
		메쉬를 로드하고
		카테고리로 저장하고

		메쉬들을 들고있다.

		st나 sk 매쉬를 저장하고있는 캡슐이 필요하다.
		매쉬가 로드되어진 상태인지 아닌지 확인하는 게 필요하다.

		카테고리로 검색하는 것은 애초에 리스트를 얻어내는것이라 생각하자.
		경로로 검색하는 것은 개별을 가져온다 생각하자.
		
		경로를 검색하면 해당 캡슐의 인덱스가 나오고
		카테고리를 검색하면 해당캡슐들의 인덱스들이 나온다.

		인덱스를 가지고 st메쉬를 로드하는기능이 있어야한다.

		지금 생각하는게 해당 캡슐은 인덱스를 가지는데 해당 캡슐가지고 경로를 검색할 수 잇을까?
	*/
	//void StoreStMeshPath(const FString& cat, const FString& path);
	//void StoreStMeshPathList(const FString& cat, const TArray<FString>& pathList);
	//
	//void LoadStMeshByPath(const FString& path);
	//void LoadStMeshesByCategory(const FString& cat);
	//
	//UStaticMesh* QueryGetStMeshByPath(const FString& path);
	//TArray<UStaticMesh*> QueryGetStMeshesByCategory(const FString& cat);
	

private:
	TArray< TSharedPtr< TTIHMeshCapsule<UStaticMesh>>> mStMeshArray;
	
	/*
		1.  요청이 들어오면 그걸 전부 스테이징 테이블에 넣는다
		2.	넣으면서 해당 경로를 저장해놓는다
		3.
	*/
	TMap<int16, FString> mDefaultCategories;

	TDeque<FString> mCategoryQueue;
	TArray< TSharedPtr< TTIHMeshCapsule<UStaticMesh>>> mStagingStMeshs;
	TMap<FString, int16> mStagingStMeshTable;//	특정 path 가 있는지 확인하는 곳
	TMap<TIHTick32, FTIHQueryMeshPool> LoadQueryByTick;	//	틱으로 검색하는부분
	TMap<FString, FTIHQueryMeshPool> LoadQueryByCategory;	//	category를 검색하는 부분

	ATIHMeshPoolPathLoadImbeding* mMeshPoolImbeding;

	TMap<FString, int16> mStagingSkMeshTable;
	TArray< TSharedPtr<TTIHMeshCapsule<USkeletalMesh>>> mStagingSkMeshs;

	FTIHSlidingWindowBase* mSlidingWindow;
	TArray<int16> mCandidateArray;

	FTIHMeshPoolConfigure mMeshPoolConfig;

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
UCLASS(Config = "Game")
class UTIHMeshPoolConfigObject : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY(Config)
	FString mMeshDefaultPath;

	UPROPERTY(Config)
	int32 mMeshPathCount;
};


class ATIHMeshPoolPathLoadImbeding 
{
public:
	virtual void InitImbeding() {};
	virtual const TArray<FString>& GetMeshPathList() { return mPathList; };
	void PushBackPath(const FString& path)
	{
		mPathList.Add(path);
	}
protected:
	TArray<FString> mPathList;
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

/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								ManagedObject Configures
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
/*
	to-do
	무조건 스테이션을 시작하기전에 설정해줘야한다.
*/


/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								For Generate Structure
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

#pragma endregion Struct Implements
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Struct Implements									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

/*
	to-do
	{0,12}
	반드시 사용할 uobject 를 pool 에 등록시켜놔야한다.
*/



class FTIHMngObjGenerateHelper
{
public:

private:

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
union FUnionTIHCompositeHeaderHash
{
	struct FTIHCompositeHeaderHaseDetail
	{
		int16 CompositeType;
		int16 CompositeOption0;
		int16 CompositeOption1;
		int16 CompositeOption2;
	}Detail;

	FUnionTIHCompositeHeaderHash& operator=(const FTIHMngObjCompositeHeader& compHeader)
	{
		Detail.CompositeType = compHeader.CompositeType;
		Detail.CompositeOption0 = compHeader.CompositeOption0;
		Detail.CompositeOption1 = compHeader.CompositeOption1;
		Detail.CompositeOption2 = compHeader.CompositeOption2;
	}

	TIHHash64 WholeData;
};

/*
	setSelf
	setOwner
*/
class FTIHMngObjComponent
{
public:
	void SetSelfIndex(int16 value)
	{
		mSelfIndex = value;
	}
	int16 GetSelfIndex()
	{
		return mSelfIndex;
	}

	void SetOwnerIndex(int16 value)
	{
		mOwnerIndex = value;
	}
	int16 GetOwnerIndex()
	{
		return mOwnerIndex;
	}


protected:
	int16 mSelfIndex;	
	int16 mOwnerIndex;
};

USTRUCT()
struct FTIHMngObjFactoryConfigure
{
	GENERATED_BODY()
	
	UPROPERTY()
	int8 AlloactionSpace;
	UPROPERTY()
	int8 PipeliningState;
	/*
		한번에 진행할 수 있는 processing 의 수이다.
		종류는 가리지 않으며 
	*/
	UPROPERTY()
	int16 ProcessingMax;

	UPROPERTY()
	int16 ProcessingCurrCount;
	UPROPERTY()
	int16 Padding0;

	UPROPERTY()
	UWorld* SpawnWorld;	//	null 불가능

	UPROPERTY()
	AActor* DefaultOwnerActor;	//	null 가능

	UPROPERTY()
	ULevel* SpawnOverrideLevel;//	null가능

	UPROPERTY()
	FTransform DefaultSpawnTransform;

	UPROPERTY()
	TFunction<TIHReturn64()> StartPipeliningCallBack;

	UPROPERTY()
	TFunction<TIHReturn64()> EndPipeliningCallBack;
};

class FTIHMngObjFactory
{
public:
	void SetMngObjPoolCenter(FTIHMngObjPoolCenter* center)
	{
		mPoolCenter = center;
	}

	void SetFactoryConfig(const FTIHMngObjFactoryConfigure& config)
	{
		mFactoryConfig = config;
	}
	FTIHMngObjFactoryConfigure& GetFactoryConfig()
	{
		return mFactoryConfig;
	}
	
	bool CheckFactoryConfigure()
	{
		bool reValue = true;
		if(mPoolCenter == nullptr)
		{
			reValue = false;
		}
		else if(mPoolCenter->IsValidObjectPool(mFactoryConfig.AlloactionSpace) == false)
		{
			reValue = false;
		}
		else if(mFactoryConfig.SpawnWorld == nullptr)
		{
			reValue = false;
		}
		return reValue;
	}
	void GenerateActorBaseMngObjRootComposite
	(
		USceneComponent* rootComp,
		FTIHMngObj* mngObj
	);
	TTIHMngObjActorComposite<USceneComponent>* GenerateActorBaseMngObjComposite
	(
		USceneComponent* childComp,
		FTIHMngObj* mngObj
	);
	virtual void CheckFactoryState();

	//	EntryPoint
	virtual void OnPipelining();

	FTIHMngObj* CreateActorBaseMngObj(FTIHMngObjPool* objPool,AActor* actor, FTIHMngObjHeader& objHeader);
	TIHReturn64 GetCurrentCallbackReturn()
	{
		return mCurrReturnValue;
	}
protected:

	void SettingPoolingStateActor(AActor* spawndActor)
	{
		spawndActor->SetActorHiddenInGame(true);
		spawndActor->SetActorEnableCollision(false);
	}
	virtual void SpawnActors();
	/*
		이거 내부에서 FTIHMngObjPool 이거 호출하는데 가져오자.
	*/
	virtual void GenerateActorBaseMngObjs();

	virtual void GenerateMngObjBasedActor();

	TDeque<UObject*> mCreatedUEObjects;
	TIHReturn64 mCurrReturnValue;
	FTIHMngObjFactoryConfigure mFactoryConfig;
	FTIHMngObjPoolCenter* mPoolCenter;
	int32 mPhaseMax;
	int32 mPhaseCount;
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

USTRUCT()
struct FTIHMngObjCompositeHeader
{
	GENERATED_BODY()
	
	/*
		{SceneComponent,UserWidget}
	*/
	UPROPERTY()
	int16 CompositeType;

	/*
		if SceneComponent 
			해당 씬 컴포넌트의 16 해쉬
		if UserWidget
			
	*/
	UPROPERTY()
	int16 CompositeOption0;

	/*
		if SceneComponent 
			해당 컴포넌트에 기본적으로 달린 리프수
		if UserWidget

	*/
	UPROPERTY()
	int16 CompositeOption1;
	/*
		if SceneComponent 
			버전
		if UserWidget
			
	*/
	UPROPERTY()
	int16 CompositeOption2;
};
/*
	이 구조는 레지스트 되어있는 UE 컴포턴트

*/
USTRUCT()
struct FTIHMngObjActorStructureNode
{
	UPROPERTY()
	int16 RegistedUEComponentIndex;

	UPROPERTY()
	int16 TreeStep;

	UPROPERTY()
	TArray<int16> ChildStructureNodeArray;
};
//	


/*
	이녀석 
	셀프인덱스 설정해주고,
	만약 특정 씬을 만났다면 
*/
class FTIHMngObjComposite :public FTIHMngObjComponent
{
public:
	/*
		여기에서 leafTable 설정과
		owner,selfIndex,view(castedComponent) 를 설정해준다.
	*/
	int16 PushBackLeaf(FTIHMngObjLeaf* value);
	
	FTIHMngObjLeaf* GetLeafByIndex(int16 index)
	{
		FTIHMngObjLeaf* reValue = nullptr;
		reValue = mLeafs[index];
		return reValue;
	}
	TArray< FTIHMngObjLeaf*> GetLeafArray()
	{
		return mLeafs;
	}

	virtual void SetUEObject(UObject* obj) = 0;
	virtual UObject* GetUEObject() = 0;
	/*
		composite hash 를 업데이트 한다
	*/
	void SetCompositeHeader(const FTIHMngObjCompositeHeader& value)
	{
		mCompositeHeader = value;
		UpdateMngObjHash();
	}
	const FTIHMngObjCompositeHeader& GetCompositeHeader()
	{
		return mCompositeHeader;
	}
	virtual void PostRegistCallBack(FTIHMngObj* owner);

	void UpdateMngObjHash()
	{
		FUnionTIHCompositeHeaderHash headerHash;
		headerHash = mCompositeHeader;
		mMngObjCompositeHash = headerHash.WholeData;
	}
	TIHHash64 GetMngObjCompositeHash()
	{
		return mMngObjCompositeHash;
	}

	void SetOwnerAllocationSpace(int8 value)
	{
		mAllocationSpace = value;
	}
	int8 GetOwnerAllocationSpace()
	{
		return mAllocationSpace;
	}
	FTIHMngObj* GetOwnerMngObj();
	
	FTIHMngObjComposite* QueryGetParentComposite()
	{
		FTIHMngObjComposite* reValue = nullptr;
		reValue = GetOwnerMngObj()->GetCompositeByIndex(mParentIndex);
		return reValue;
	}

	void SetParentIndex(int16 index)
	{
		mParentIndex = index;
	}
	int16 GetParentIndex() const
	{
		return mParentIndex;
	}
	void AddChildCompositeIndex(int16 index)
	{
		if (mParentIndex != index)
		{
			mChildIndices.Add(index);
		}
	}
	
	void DisConnectParent()
	{
		FTIHMngObjComposite* target = QueryGetParentComposite();
		if(target != nullptr)
		{
			target->RemoveChildComposite(GetSelfIndex());
		}
		SetParentIndex(-1);
	}
	void RemoveChildComposite(int16 index)
	{
		mChildIndices.Remove(index);
	}
	static void ConnectComposite(FTIHMngObjComposite* parent, FTIHMngObjComposite* child)
	{
		check
		(
			parent != nullptr && child != nullptr && parent != child
		);
		int16 parentIdx = parent->GetSelfIndex();
		int16 childIdx = child->GetSelfIndex();

		child->DisConnectParent();
		child->SetParentIndex(parentIdx);
		parent->AddChildCompositeIndex(childIdx);
	}
	void GenerateUESceneLeaves();

protected:
	TArray< FTIHMngObjLeaf*> mLeafs;
	TMap<TIHHash64, TArray<int16>> mLeafTable;

	FTIHMngObjCompositeHeader mCompositeHeader;
	TIHHash64 mMngObjCompositeHash;

	int8 mAllocationSpace;
	int8 mCompositeState;

	int16 mParentIndex;
	TSet<int16> mChildIndices;
};

template<typename TIHTemplatType = USceneComponent>
class TTIHMngObjActorComposite :public FTIHMngObjComposite
{
public:
	/*
		여기에서 sceneComponent 의 data0 에 selfIndex
		data1 에 GetAllocationSpace 를 넣어서 자신의 부모를 찾을 수 있게 해준다.
	*/
	void SetUESceneComponent(TIHTemplatType* sceneComponent)
	{
		mUESceneComponent = sceneComponent;
		GetUEObject()->SetTIHData0(GetSelfIndex());
		GetUEObject()->SetTIHData1(GetAllocationSpace());
	}
	TIHTemplatType* GetUESceneComponent()
	{
		return mUESceneComponent;
	}

	void SetUEObject(UObject* obj) override final
	{
		mUESceneComponent = static_cast<TIHTemplatType*>(obj);
	}
	UObject* GetUEObject() override final
	{
		return mUESceneComponent;
	}
	void SetRootMovementLeafIndex(int16 index)
	{
		mRootMovementLeaf = index;
	}
	int16 GetRootMovementLeafIndex()
	{
		return mRootMovementLeaf;
	}
private:
	TIHTemplatType* mUESceneComponent;
	int16 mRootMovementLeaf;
	int16 mPadding;
};




/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								managedObject Leaf base
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHMngObjLeaf :public FTIHMngObjComponent
{
public:
	virtual void InstantiateThis();
	virtual void InitiateThis();

	void SetLeafHash(const TIHHash64& value)
	{
		mLeafHash = value;
	}
	TIHHash64 GetLeafHash()
	{
		return mLeafHash;
	}
	virtual void SetUEObjectView(UObject* otherView) = 0;
	virtual UObject* GetUEObjectView() = 0;
	
private:

	TIHHash64 mLeafHash;
};

template<typename TIHTemplateType = USceneComponent>
class TTIManagedObjectActorLeaf : public FTIHMngObjLeaf
{
public:
	TIHTemplateType* GetUEObjectView()
	{
		return mUEObjectView;
	}
	
	void SetUEObjectView(UObject* otherView) override
	{
		mUEObjectView = Cast<TIHTemplateType>(otherView);
	}
	UObject* GetUEObjectView() override final
	{
		return mUEObjectView;
	}

protected:
	TIHTemplateType* mUEObjectView;
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

USTRUCT()
struct FTIHMngObjState
{
	GENERATED_BODY()

	UPROPERTY()
	int32 MngObjState;

	FTIHMngObjState()
		:
		MngObjState(0)
	{}
	FTIHMngObjState(int32 value)
		:
		MngObjState(value)
	{}
	FTIHMngObjState(const FTIHMngObjState& copyCtor)
		:
		MngObjState(copyCtor.MngObjState)
	{}
	FTIHMngObjState(FTIHMngObjState&& moveCtor) noexcept
		:
		MngObjState(std::move(moveCtor.MngObjState))
	{}
	~FTIHMngObjState()
	{
		MngObjState = -1;
	}
	FTIHMngObjState& operator=(const FTIHMngObjState& copyOper)
	{
		MngObjState = copyOper.MngObjState;
		return *this;
	}
	FTIHMngObjState& operator=(FTIHMngObjState&& moveOper) noexcept
	{
		MngObjState = std::move(moveOper.MngObjState);
		return *this;
	}
	FTIHMngObjState& operator=(int32 valueOper)
	{
		MngObjState = valueOper;
		return *this;
	}

	void SetState(int32 value)
	{
		MngObjState = value;
	}
	void OnReset()
	{
		MngObjState = 0;
	}
	//	content
	void OnContent()
	{
		MngObjState |= TIHNameSpaceManagedObject::MngObjState::OnContent;
	}
	void OffContent()
	{
		MngObjState &= ~TIHNameSpaceManagedObject::MngObjState::OnContent;
	}
	void ToggleContent()
	{
		MngObjState = MngObjState xor TIHNameSpaceManagedObject::MngObjState::OnContent;
	}
	bool IsOnContent()
	{
		return (MngObjState & TIHNameSpaceManagedObject::MngObjState::OnContent);;
	}

	//	Init
	void OnInitate()
	{
		MngObjState |= TIHNameSpaceManagedObject::MngObjState::OnInitate;
	}
	void OffInitate()
	{
		MngObjState &= ~TIHNameSpaceManagedObject::MngObjState::OnInitate;
	}
	void ToggleInitate()
	{
		MngObjState = MngObjState xor TIHNameSpaceManagedObject::MngObjState::OnInitate;
	}
	bool IsOnInitate()
	{
		return (MngObjState & TIHNameSpaceManagedObject::MngObjState::OnInitate);;
	}

	//	Staging
	void OnStaging()
	{
		MngObjState |= TIHNameSpaceManagedObject::MngObjState::OnStaging;
	}
	void OffStaging()
	{
		MngObjState &= ~TIHNameSpaceManagedObject::MngObjState::OnStaging;
	}
	void ToggleStaging()
	{
		MngObjState = MngObjState xor TIHNameSpaceManagedObject::MngObjState::OnStaging;
	}
	bool IsOnStaging()
	{
		return (MngObjState & TIHNameSpaceManagedObject::MngObjState::OnStaging);;
	}

	//	Using
	void OnUsing()
	{
		MngObjState |= TIHNameSpaceManagedObject::MngObjState::OnUsing;
	}
	void OffUsing()
	{
		MngObjState &= ~TIHNameSpaceManagedObject::MngObjState::OnUsing;
	}
	void ToggleUsing()
	{
		MngObjState = MngObjState xor TIHNameSpaceManagedObject::MngObjState::OnUsing;
	}
	bool IsOnUsing()
	{
		return (MngObjState & TIHNameSpaceManagedObject::MngObjState::OnUsing);;
	}

	//	Dirty
	void OnDirty()
	{
		MngObjState |= TIHNameSpaceManagedObject::MngObjState::OnDirty;
	}
	void OffDirty()
	{
		MngObjState &= ~TIHNameSpaceManagedObject::MngObjState::OnDirty;
	}
	void ToggleDirty()
	{
		MngObjState = MngObjState xor TIHNameSpaceManagedObject::MngObjState::OnDirty;
	}
	bool IsOnDirty()
	{
		return (MngObjState & TIHNameSpaceManagedObject::MngObjState::OnDirty);
	}

	//	check
	bool IsGenerating()
	{
		int32 chValue =
			(
				TIHNameSpaceManagedObject::MngObjState::OnContent
			);
		return (MngObjState & chValue);
	}
	bool IsRunning()
	{
		int32 chValue =
			(
				TIHNameSpaceManagedObject::MngObjState::OnContent |
				TIHNameSpaceManagedObject::MngObjState::OnStaging |
				TIHNameSpaceManagedObject::MngObjState::OnUsing 
			);
		return (MngObjState & chValue);
	}
	bool IsValidPooling()
	{
		int32 chValue =
			(
				TIHNameSpaceManagedObject::MngObjState::OnContent |
				TIHNameSpaceManagedObject::MngObjState::OnStaging 
			);
		return (MngObjState & chValue);
	}
	bool IsModifyContent()
	{
		/*
			to-do
			이거 함수호출이 아닌 비트마스크로 바꾸기
		*/

		return (IsOnDirty() == true && not IsOnStaging() && not IsOnUsing());
	}
	bool IsReGeneratePossible()
	{
		return (not IsOnStaging() && not IsOnUsing());
	}
	bool IsPoolingPossible()
	{
		return (IsOnContent() && IsOnInitate());
	}

	
};

USTRUCT()
struct FTIHMngObjHeader
{
	GENERATED_BODY()

	/*
		actor 인지,ui 인지,시스템인지, 더생길수있음
	*/
	UPROPERTY()
	int8 UObjectType;
	/*
		스스로가 어디들어가있는지 알려주는것
		AllocationSpace
		IndexInPool
	*/
	UPROPERTY()
	int8 AllocationSpace;	//	이건 factory 에 있는걸 가져오는거임.
	
	UPROPERTY()
	int16 IndexInPool;	//	이건 나중에 설정되는거임.
	/*
		mngobj 를 만들기 위한 해쉬임.
		해당 해쉬는 필요한가? 아니지 이건 공용이니깐 필요없나?
		아니면 구조때문이라도 필요한가? 시발 어렵네 구조를 해쉬로 저장해야하는데 어케하지?
		일단 보류
			사유는 컴포지트로 만든 해쉬는 너무 큼.
			그래서 UClass 로 했음
			
	*/
	UPROPERTY()
	UClass* UEClass; 


	/*
		default ctor
		param ctor
		copy ctor
		move ctor

		operator= copy
		operator= move


	*/
	FTIHMngObjHeader():
		UObjectType(TIHNameSpaceManagedObject::UEClassBaseType::UnknownBase),
		AllocationSpace(TIHNameSpaceManagedObject::AllocationSpaceType::UnknownSpace),
		IndexInPool(-1),
		UEClass(nullptr)
	{}
	FTIHMngObjHeader(
		int8 uobjectType,
		int8 allocationSpaceType,
		int8 indexInPool,
		UClass* ueClass
	) :
		UObjectType(uobjectType),
		AllocationSpace(allocationSpaceType),
		IndexInPool(indexInPool),
		UEClass(ueClass)
	{}
	FTIHMngObjHeader(
		const FTIHMngObjHeader& copyCtor
	) :
		UObjectType(copyCtor.UObjectType),
		AllocationSpace(copyCtor.AllocationSpace),
		IndexInPool(copyCtor.IndexInPool),
		UEClass(copyCtor.UEClass)
	{}
	FTIHMngObjHeader(
		const FTIHMngObjHeader& moveCtor
	) noexcept :
		UObjectType(std::move(moveCtor.UObjectType)),
		AllocationSpace(std::move(moveCtor.AllocationSpace)),
		IndexInPool(std::move(moveCtor.IndexInPool)),
		UEClass(std::move(moveCtor.UEClass))
	{}

	FTIHMngObjHeader& operator=(const FTIHMngObjHeader& copyOper)
	{
		UObjectType=copyOper.UObjectType;
		AllocationSpace=copyOper.AllocationSpace;
		IndexInPool=copyOper.IndexInPool;
		UEClass=copyOper.UEClass;
		return *this;
	}
	FTIHMngObjHeader& operator=(FTIHMngObjHeader&& moveOper) noexcept
	{
		UObjectType = std::move(moveOper.UObjectType);
		AllocationSpace = std::move(moveOper.AllocationSpace);
		IndexInPool = std::move(moveOper.IndexInPool);
		UEClass = std::move(moveOper.UEClass);
		return *this;
	}
};
/*
	만들어야하는 목록이며 명령이다.

*/
USTRUCT()
struct FTIHMngObjPrepareData
{
	GENERATED_BODY()

	UPROPERTY()
	int16 UEClassIndex;

	UPROPERTY()
	int16 MngObjCount;


};

/*
	이제 mngobj 의 상태를 만들어야한다.
	복잡하게 나누지말자
	+ uobject 할당이 안됨
	+ 할당과 초기화가 완료됨
	+ 스테이지에 올라가 있음

*/

/*
	to-do
	uobject 를 관리하는 메타 정보이면서 실제로 해당 uobject 를 만들수도 있는 거임.
	그래서 그러한 정보가 들어가 있어야함.
	해당 정보의 구조는 변경이 불가능. -> 이걸토대로 해쉬만들기
	잠시 머리를 쉬고, 이제 해야할 일을 생각해보자. 어떤걸 해야하냐면 일단
	여기에 들어가야하는 기능들을 써보는거임.
	인터페이스든 스스로 기능이든 말이지.
	
	이걸 만들때 해야할일
	1. 헤더를 먼저 지정해줘야한다.
		1. 지정할 uobject 가 있는가
		2. 지정할 uobject 가 없다.
	1.1 의 경우는 특수한 경우로, 한번 풀링 되고 나서는 내부의 데이터를 재사용하는거지
	일반적인 경우에는 사용하지 않는다.애초에 헤더를 새롭게 지정하는 일은 없어야한다.
	1.2 가 기본적인 경우인데, 이 경우에는 uclass 를 토대로 직접 생성한다.
	2. 지금 고려하고 있는건데, mCompositeArray 이게 구조이다.근데 이게 문제가 하나있는데, 
	자식의 구조가 제대로 표현되려면 저장을 해야한다는것이다.
	

*/

class FTIHMngObj
{
public:
	/*
		인터페이스
		리드온리는 만들면서 추가

		여기서 가장 치명적인것부터하자면
		uclass 를 중간에 바꾸는건 안된다.
		만약 바꾸는거면 진짜 다바꾼다 생각해야한다.
		그다음 중요한건 content 이다.
		하지만 중간에 refresh 가 가능하다.

		부모 자식을 자주 변경해야할일이 생길거임
		그럴땐 방향을 어떻게 해야할까.
		1. 호출한 자가 호출 대상까지 책임
		2. 중간자를 놓아서 그걸로 전파

		1번의 경우에는 더 빠르긴한데, 만약 다른사람이 모르고 다시 등록을하면
		그거대로 처리를 또해줘야함.
		2번의 경우에는 뎁스자체가 늘어나는데 확실함.
	*/

	
	/*
		memo
		내부에선 table 과 composite 의 selfindex 와 ownerIndex,AllocationSpace 를 설정해준다.
		warnning
		이것 이전에 compositeHeader 를 설정해줘야한다.
	*/
	int16 PushBackComposite(FTIHMngObjComposite* composite);
	
	FTIHMngObjComposite* GetCompositeByIndex(int16 index)
	{
		FTIHMngObjComposite* reValue = nullptr;
		reValue = mCompositeArray[index];
		return reValue;
	}
	TArray< FTIHMngObjComposite*>& GetCompositeArray()
	{
		return mCompositeArray;
	}
	void ReserveCompositeArray(int32 size)
	{
		if(mCompositeArray.Max()<size)
		{
			mCompositeArray.Reserve(size);
		}
	}
	/*
		memo
		기존의 컨텐츠를 지우는 기능이다. 그리고 nullptr 로바꿔준다.
	*/
	void DeleteContent();
	/*
		컨텐츠에 스스로의 인덱스(0) 와 스페이스를 set 해준다.
	*/
	void SetContents(UObject* ueobj);
	
	UObject* GetContents()
	{
		return mContents;
	}
	/*
		자신 내부의 컨텐츠를 확인하고 
		그 컨텐츠에 맞게 구성을 하는데
		만약 이전에 저장해둔 구조가 있다면 그 구조에 맞춰서 짜게 만듬
		참
	*/
	void GenerateContentByHeader();

	void SetMngObjHeader(const FTIHMngObjHeader& mngObjHeader);
	const FTIHMngObjHeader& GetMngObjHeader()
	{
		return mMngObjHeader;
	}
	void SetMngObjState(const FTIHMngObjState& value)
	{
		mMngObjState = value;
	}
	FTIHMngObjState& GetMngObjState()
	{
		return mMngObjState;
	}
	/*
		이거는 말그대로 진짜 인덱스만을 설정하는곳임.
	*/
	void SetParentIndex(int16 parentIndex)
	{
		mParentIndex = parentIndex;
	}
	/*
		이거는 말그대로 자식을 추가하는건데,
		자신과 같은것만 피하고 중복을 피함
	*/
	void AddChildIndex(int16 childIndex)
	{
		if(mParentIndex != childIndex)
		{
			mChildMngObjIndices.Add(childIndex);
		}
	}
	void RemoveChildIndex(int16 childIndex)
	{
		mChildMngObjIndices.Remove(childIndex);
	}
	/*
		부모를 호출하여 끊고 자기자신의 parent 내용을 -1 로 바꾼다.
	*/
	void DisConnectParent()
	{
		FTIHMngObj* target = QueryGetParent();
		if(target != nullptr)
		{
			target->RemoveChildIndex(GetSelfIndex());
		}
		SetParentIndex(-1);
	}

	static void ConnectMngObj(FTIHMngObj* parent, FTIHMngObj* child)
	{
		check
		(
			parent != nullptr && child != nullptr && parent != child
		);
		int16 parentIdx = parent->GetSelfIndex();
		int16 childIdx = child->GetSelfIndex();

		child->DisConnectParent();
		child->SetParentIndex(parentIdx);
		parent->AddChildIndex(childIdx);
	}
	
	int16 GetParentIndex()
	{
		return mParentIndex;
	}
	FTIHMngObj* QueryGetParent();

	void SetAllocationSpace(int8 allocationSpace)
	{
		mMngObjHeader.AllocationSpace = allocationSpace;
	}
	int8 GetAllocationSpace()
	{
		return mMngObjHeader.AllocationSpace;
	}
	void SetSelfIndex(int16 index)
	{
		mMngObjHeader.IndexInPool = index;
	}
	int16 GetSelfIndex() const
	{
		return mMngObjHeader.IndexInPool;
	}
	/*
		이거는 factory 나 이녀석을 생성해준곳에서 호출해주는 것이다. 
		생성후에 initThis 를 호출후
		add 를 한후에
		PostRegistCallBack 를 호출해준다. 그때 넣는 인덱스는 이녀석의 인덱스
	*/
	void PostRegistCallBack(int16 index);
	void ResetMngObj();
	

	/*
		state
	*/
	void ChangeStateGenerateing()
	{
		mMngObjState.OnContent();
	}
	void ChangeStateIniniating()
	{
		mMngObjState.OnInitate();
	}
	void ChangeStateStaging()
	{
		mMngObjState.OnStaging();
	}

private:
	/*
		composite 들을 모아두는곳
		순서대로 들어가 있으며 구조를 뜻함
		이거는 실질적 자료와 구조. 

	*/
	TArray<FTIHMngObjComposite*> mCompositeArray;
	/*
		composite 가 존재하는지, 그게 몇개 존재하는지(num 으로 확인), 어디에 존재하는지. 
		이거는 찾기위한것
		이거 해줄곳찾기
	*/
	TMap<TIHHash64, TArray<int16> > mCompositeTable;
	/*
		uobject 를 담아야한다. 근데 해당 정보가 무슨정보인지 알아야한다.
	*/
	UObject* mContents;
	/*
		이 녀석을 이해하기위한 기본정보임. 근데 어떤 uclass 가 들어가 있는지는 모름.
	*/
	FTIHMngObjHeader mMngObjHeader;
	FTIHMngObjState mMngObjState;

	int16 mParentIndex;
	int16 Padding0;

	TSet<int16> mChildMngObjIndices;

	void DeleteActorBase(AActor* value)
	{
		check(value != nullptr);
		value->Destroy();
	}
	void DeleteWidgetBase(UWidget* value)
	{
		check(value != nullptr);
		value->RemoveFromParent();
	}
	void GenerateActorByUclass();
	void GenerateWidgetByUclass();

	/*
		to-do
		이거 옮기자.
	*/

};

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
/*
	memo
	### 사전에 설정해야하는 
	TArray< FTIHMngObj*> mWholeManagedObjects;
	mGenerateTargetWorld
	mGenerateOwner
	FTIHMngObjPool::mPrepareManagedObjects

*/
USTRUCT()
struct FTIHMngObjPoolConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	int8 AllocationSpace;

	/*
		0 이 기본이고 추가가 필요할경우 추가됨
	*/
	UPROPERTY()
	int8 AllocationSpaceAdd;

	UPROPERTY()
	int16 AllocateCapacity;
	
	/*
		이하는 팩토리컨피규어로 이관할예정
	*/
	

	int8 GetRealAllocationType()
	{
		return AllocationSpace + AllocationSpaceAdd;
	}
};


class FTIHMngObjPool
{
public:
	//void GenerateMngObjByPrepareData(const )

	FTIHMngObj* GenerateMngObjByConfig(const FTIHMngObjHeader& config);

	void SetMngObjPoolConfig(const FTIHMngObjPoolConfigure& config)
	{
		mMngObjPoolConfig = config;
	}

	const FTIHMngObjPoolConfigure& GetMngObjPoolConfig()
	{
		return mMngObjPoolConfig;
	}
	FTIHMngObj* QueryGetMngObj(int16 mngObjIndex)
	{
		FTIHMngObj* reValue = nullptr;
		if(mMngObjArray.Contains(mngObjIndex) == true)
		{
			reValue = mMngObjArray[mngObjIndex];
		}
		return reValue;
	}
	void ReserveMngObjPool(int32 size)
	{
		if(mMngObjArray.Max() < size)
		{
			mMngObjArray.reserve(size);
		}
	}
	/*
		selfIndex 와 AllocationSpace 를 설정해준다.
	*/
	int16 PushBackMngObj(FTIHMngObj* mngObj);

protected:
	TArray<FTIHMngObj*> mMngObjArray;
	
	FTIHMngObjPoolConfigure mMngObjPoolConfig;
};
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
								Managed Object Pool Center
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

/*
	memo
	### 사전에 미리 해야하는일
	- [ ] mManagedObjectFactory 이거 생성
	- [ ] mPrepareDatas 이거 reserve
	- [-] FTIHMngObjFactory 의 mGenStartCallBack 를 설정 -> 델리게이트화 하면서 변경
	- [-] FTIHMngObjFactory 의 mGenEndCallBack 를 설정 -> 델리게이트화 하면서 변경
	- [v] FTIHMngObjFactory 이거를 위해서 차라리 델리게이트쓸까? ->완료
	- [ ] FTIHMngObjGenerateQueues 이거 늘리는 reserve 써야함. -> 이거 factory 에서 해주는데, 이거 어케하지 config 만들어야할듯
*/

USTRUCT()
struct FTIHMngObjPoolCenterConfigure
{
	GENERATED_BODY()
};

class FTIHMngObjPoolCenter
{
public:
	void InstantiateThis();
	void InitiateThis();

	int16 RegistUEObjectByMngObjHeader(const FTIHMngObjHeader& value)
	{
		int16 reValue = -1;
		if (mRegistedUEObjectTable.Contains(value.UEClass) == false)
		{
			reValue = mRegistedUEObjectArray.Add(value);
			mRegistedUEObjectTable.Add(value.UEClass, reValue);
		}
		return reValue;
	}
	int16 RegistUEObjectByParams(int8 uObjectType, int8 allocationSpace,
		int16 indexInPool, UClass* ueClass)
	{
		int16 reValue = -1;
		if (mRegistedUEObjectTable.Contains(ueClass) == false)
		{
			reValue = mRegistedUEObjectArray.Add(
				FTIHMngObjHeader(uObjectType,allocationSpace,indexInPool,ueClass)
			);
			mRegistedUEObjectTable.Add(ueClass, reValue);
		}
		return reValue;
	}

	int16 RegistUEComponent(UClass* ueScene)
	{
		int16 reValue = -1;
		if(mUEComponentTable.Contains(ueScene) == false)
		{
			reValue = mUEComponentArray.Add(ueScene);
			mUEComponentTable.Add(ueScene, reValue);
			mTIHCompositeTableForStruct.Add(reValue, ueScene);
		}
		return reValue;
	}
	void RegistUEComponentBindTIHLeaves(UClass* ueScene,const TArray<TIHHash64>& leaves)
	{
		int16 ueCompHash = mUEComponentTable.Contains(ueScene) ? 
			mUEComponentTable[ueScene] : -1;

		if(-1 < ueCompHash)
		{
			if(mUECompositeBindTIHLeaves.Contains(ueCompHash) == false)
			{
				mUECompositeBindTIHLeaves.Add(ueCompHash, TArray<TIHHash64>());
			}
			for(const TIHHash64& src : leaves)
			{
				mUECompositeBindTIHLeaves.Add(src);
			}
		}
	}
	void RegistTIHLeafGenerateFunc(const TIHHash64& leafHash, TFunction<FTIHMngObjLeaf* ()> genFunc)
	{
		if(mTIHLeafGenerateFuncTable.Contains(leafHash) == false)
		{
			mTIHLeafGenerateFuncTable.Add(leafHash, genFunc);
		}
		else
		{
			mTIHLeafGenerateFuncTable[leafHash] = genFunc;
		}
	}

	/*
		to-do
		일단 보류
	*/
	void RegistMngObjSettings(
		UClass* ueScene,
		const TArray<TIHHash64>& leaves,
		TArray< TFunction<FTIHMngObjLeaf* ()> > genFuncs 
	);

	int16 QueryUECompositeHash(UClass* ueCls)
	{
		int16 reValue = -1;
		if(mUEComponentTable.Contains(ueCls) == true)
		{
			reValue = mUEComponentTable[ueCls];
		}
		return reValue;
	}
	const TArray<TIHHash64>& QueryUECompositeBindTIHLeavesByIndex(int16 index)
	{
		static TArray< TIHHash64> wrongAns;
		TArray< TIHHash64>* reValue = &wrongAns;
		if(mUECompositeBindTIHLeaves.Contains(index)== true)
		{
			reValue = &mUECompositeBindTIHLeaves[index];
		}
		return *reValue;
	}

	const TArray<TIHHash64>& QueryUECompositeBindTIHLeavesByUClass(UClass* ueCls)
	{
		int16 ans = QueryUECompositeHash(ueCls);
		if (-1 < ans)
		{
			/*
				to-do
				log.등록된 ue컴포넌트가 없음
			*/
		}
		return QueryUECompositeBindTIHLeavesByIndex(ans);
	}
	FTIHMngObjLeaf* QueryGenerateLeafByLeafHash(TIHHash64 leafHash)
	{
		FTIHMngObjLeaf* reValue = nullptr;
		if(mTIHLeafGenerateFuncTable.Contains(leafHash) == true)
		{
			reValue = mTIHLeafGenerateFuncTable[leafHash]();
		}
		return reValue;
	}
	TArray<FTIHMngObjLeaf*> QueryGenerateLeavesByLeafHash(int16 ueCompHash16)
	{
		TArray<FTIHMngObjLeaf*> reValue;
		const TArray<TIHHash64>& leafHashs = 
			QueryUECompositeBindTIHLeavesByIndex(ueCompHash16);
		reValue.Reserve(leafHashs.Num());

		for (const TIHHash64& leafHash : leafHashs)
		{
			FTIHMngObjLeaf* temp = nullptr;
			temp = QueryGenerateLeafByLeafHash(leafHash);
			if(temp != nullptr)
			{
				reValue.Add(temp);
			}
		}
		return reValue;
	}
	TArray<FTIHMngObjLeaf*> QueryGenerateLeavesByUClass(UClass* ueCls)
	{
		TArray<FTIHMngObjLeaf*> reValue;
		const TArray<TIHHash64>& leafHashs =
			QueryUECompositeBindTIHLeavesByUClass(ueCls);
		reValue.Reserve(leafHashs.Num());

		for (const TIHHash64& leafHash : leafHashs)
		{
			FTIHMngObjLeaf* temp = nullptr;
			temp = QueryGenerateLeafByLeafHash(leafHash);
			if (temp != nullptr)
			{
				reValue.Add(temp);
			}
		}
		return reValue;
	}
	FTIHMngObj* QueryGetMngObj(int8 allocationSpace,int16 mngObjIndex)
	{
		FTIHMngObj* reValue = nullptr;
		FTIHMngObjPool* mngObjPool = GetMngObjPoolByIndex(allocationSpace);
		if(mngObjPool != nullptr)
		{
			reValue = mngObjPool->QueryGetMngObj(mngObjIndex);
		}
		return reValue;
	}

	/*
		to-do
		특수한 경우에만 사용하는걸로 한다. 
		왜냐하면 이미 정해진 영역이 존재하기때문에 늘리는것이다.
	*/
	void ReserveMngObjPoolArray(int32 size)
	{
		if(mMngObjPoolArray.Max() < size)
		{
			mMngObjPoolArray.Reserve(size);
		}
	}
	FTIHMngObjPool* GetMngObjPoolByIndex(int32 index)
	{
		FTIHMngObjPool* reValue = nullptr;
		reValue = mMngObjPoolArray[index];
		return reValue;
	}
	FTIHMngObjPool* GetCurrentMngObjPool(int32 index)
	{
		FTIHMngObjPool* reValue = nullptr;
		reValue = mMngObjPoolArray[mCurrentMngObjPoolIndex];
		return reValue;
	}
	

	/*
		to-do
		이거 만들어야함!
	*/
	FTIHMngObjPool* CreateAdminSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig);
	FTIHMngObjPool* CreateSystemSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig);
	FTIHMngObjPool* CreateGlobalSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig);
	FTIHMngObjPool* CreateShareSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig);
	FTIHMngObjPool* CreateLocalSpaceMngObjPool(const FTIHMngObjPoolConfigure& poolConfig);

	void GenerateMngObjPool(const FTIHMngObjPoolConfigure& poolConfig);

	
	TDeque<FTIHMngObjPrepareData>& GetPrepareDataActorBaseQueue()
	{
		return mPrepareDataActorBaseQueue;
	}
	TDeque<FTIHMngObjPrepareData>& GetPrepareDataWidgetBaseQueue()
	{
		return mPrepareDataWidgetBaseQueue;
	}
	
	void ReservePrepareDataActorBaseQueue(int32 size)
	{
		if (mPrepareDataActorBaseQueue.Max() < size)
		{
			mPrepareDataActorBaseQueue.Reserve(size);
		}
	}
	void ReservePrepareDataWidgetBaseQueue(int32 size)
	{
		if (mPrepareDataWidgetBaseQueue.Max() < size)
		{
			mPrepareDataWidgetBaseQueue.Reserve(size);
		}
	}
	void RegistPrepareData(const FTIHMngObjPrepareData& value)
	{
		const FTIHMngObjHeader* objHeader = &mRegistedUEObjectArray[value.UEClassIndex];
		check(objHeader != nullptr);

		switch (objHeader->UObjectType)
		{
		case TIHNameSpaceManagedObject::UEClassBaseType::ActorBase:
			mPrepareDataActorBaseQueue.PushLast(value);
			break;
		case TIHNameSpaceManagedObject::UEClassBaseType::WidgetBase:
			mPrepareDataWidgetBaseQueue.PushLast(value);
			break;
		default:
			break;
		}
	}
	int16 GetRegistedUEObjectByUClass(UClass* ueClass)
	{
		int16 reValue = -1;
		if (mRegistedUEObjectTable.Contains(ueClass) == false)
		{
			reValue = mRegistedUEObjectTable[ueClass];
		}
		return reValue;
	}
	int16 GetRegistedUEObjectByMngObjHeader(const FTIHMngObjHeader& mngHeader)
	{
		return GetRegistedUEObjectByUClass(mngHeader.UEClass);
	}
	/*
		오브젝트 풀을 확인해줌
	*/
	bool IsValidObjectPool(int8 allocationSpace)
	{
		bool reValue = true;
		if(allocationSpace == 0 
			|| mMngObjPoolArray.IsValidIndex(allocationSpace) == false
			|| mMngObjPoolArray[allocationSpace] == nullptr
			)
		{
			reValue = false;
		}
		return reValue;
	}
	TArray< FTIHMngObjActorStructureNode*>& GetMngObjActorStructNodes()
	{
		return mStructureNodeArray;
	}
	FTIHMngObjActorStructureNode* GetMngObjActorStructNode(UClass* actorCls)
	{
		FTIHMngObjActorStructureNode* reValue = nullptr;
		if(mUEActorsStructureActorRootTable.Contains(actorCls) == true)
		{
			int16 idx = mUEActorsStructureActorRootTable[actorCls];
			reValue = mStructureNodeArray[idx];
		}
		return reValue;
	}
	bool IsExistMngObjActorStructNode(UClass* uclss)
	{
		bool reValue = true;
		if(mUEActorsStructureActorRootTable.Contains(uclss) == false)
		{
			reValue = false;
		}
		return reValue;
	}
	UClass* GetRegistedUEComponentByIndex(int16 index)
	{
		UClass* reValue = nullptr;
		/*
			to-do
			만약 에러가 난다면 여기에 if 를 추가해주자.
		*/
		reValue = mUEComponentArray[index];
		return reValue;
	}
	const TArray<TIHHash64>& GetUECompositeBindTIHLeaves(int16 ueCompIndex)
	{
		/*
			to-do
			방어적으로 만들어야하는데 일단은 대충
		*/
		return mUECompositeBindTIHLeaves[ueCompIndex];
	}
	const TArray<TIHHash64>& GetUECompositeBindTIHLeavesByUEClass(UClass* ueCls)
	{
		/*
			to-do
			방어적으로 만들어야하는데 일단은 대충
		*/
		return mUECompositeBindTIHLeaves[mUEComponentTable[ueCls]];
	}
	int16 GetRegistedUEComponentHash16ByUEClass(UClass* ueCls)
	{
		return mUEComponentTable[ueCls];
	}
	FTIHMngObjHeader& GetRegistedUEObjectByIndex(int16 index)
	{
		/*
			to-do
			방어적으로 만들어야하는데 일단은 대충
		*/
		return mRegistedUEObjectArray[index];
	}
	FTIHMngObjHeader& GetRegistedUEObjectByUEClass(UClass* ueCls)
	{
		int16 idx = mRegistedUEObjectTable[ueCls];
		return mRegistedUEObjectArray[idx];
	}

private:
	/*
		Uclass 를 composite 를 위해 등록해야하고
		그 composite 에 leaf 들의 생성 함수를 등록해야하고
		액터는 안해도 되던가? 근데 하나 더 추가된건데, 구조
		음...액터는 그냥 uclass 로 처리하나
		아니지 컴포지트의 구조로 판단하지
		컴포지트 구조를 어떻게 해쉬화 하지?
	
	*/

	TArray<FTIHMngObjHeader> mRegistedUEObjectArray;
	TMap<UClass*,int16> mRegistedUEObjectTable;

	TArray<UClass*> mUEComponentArray;
	TMap < UClass*, int16> mUEComponentTable;
	TMap<int16, UClass*> mTIHCompositeTableForStruct;

	TMap<int16, TArray<TIHHash64>> mUECompositeBindTIHLeaves;
	TMap < TIHHash64, TFunction<FTIHMngObjLeaf* ()> > mTIHLeafGenerateFuncTable;

	int32 mCurrentMngObjPoolIndex;
	TArray< FTIHMngObjPool*> mMngObjPoolArray;

	FTIHMngObjPoolCenterConfigure mMngObjCenterConfig;

	//TDeque<FTIHMngObjPrepareData> mPrepareDataQueue;
	TDeque<FTIHMngObjPrepareData> mPrepareDataActorBaseQueue;
	TDeque<FTIHMngObjPrepareData> mPrepareDataWidgetBaseQueue;
	/*
		
	*/
	TArray< FTIHMngObjActorStructureNode*> mStructureNodeArray;
	/*
		대용량을 만들땐 지정되어진 설정(facotryConfig 에 있음)대로 만들거고
		그게 아닐땐 넣은 prepare 에 의해서 만들거임.
		->그게 더 복잡할거 같음. 그냥 무조건 factory 의 config 를 통해서 
		allocation 과 world 같은걸 지정해야함
	*/
	TMap<UClass*, int16> mUEActorsStructureActorRootTable;
};
#pragma endregion Managed Object Pools
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃								Managed Object Pools									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/