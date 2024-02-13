// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "TIHCommands.h"
#include "TIHStrategies.h"
#include "TIHStationCore.generated.h"


#pragma region Forward Declare
//	enum	ETIHAsyncType
//	enum	ETIHMainState

union	FUnionTIHStateValue;
struct	FTIHStateValueDetail;
struct	FTIHServerConfigure;

class	FTIHState;
class	FTIHTagWrapper;
class	FTIHCommand;
class	FTIHCommandList;
class	FTIHCommander;
class	FTIHPakInfra;


class	FTIHMngObj;
class	FTIHMngObjPool;
class	FTIHServer;
class	FTIHNetwork;

template<typename TIHTemplateType> class TTIHStationCRTP;

class	FTIHStationPolymorphInterface;
class	FTIHDefaultStation;


#pragma endregion

#pragma region TIH Miscellaneous

#pragma region Macros_bases



class FTIHProtocolHelper
{
public:
	static FTIHProtocolHelper& GetSingle()
	{
		static FTIHProtocolHelper helper;
		return helper;
	}

	const FTIHMngObjHeader& GetManagedObjectHeaderForInit()
	{
		return FTIHProtocolHelper::GetSingle().mManagedObjectHeaderForInit;
	}
private:

	FTIHProtocolHelper()
	{
		mManagedObjectHeaderForInit.Protocol = (int8)ETIHManagedObjectHeaderProtocols::ENotUse;
		//mManagedObjectHeaderForInit.ProtocolOption = (int8)ETIHManagedObjectHeaderProtocolOptions::ENotUse;
		//mManagedObjectHeaderForInit.ComponentProtocol = (int8)ETIHManagedObjectHeaderComponentProtocols::ENotUse;
		//mManagedObjectHeaderForInit.AllocatedSpace = (int8)ETIHManagedObjectSpace::ELoaclSpace;
	};

	FTIHMngObjHeader mManagedObjectHeaderForInit;
};

class FTIHResultHelper
{
public:
	static FTIHResultHelper& GetSingle()
	{
		static FTIHResultHelper helper;
		return helper;
	}

private:
	FTIHResultHelper()
	{

	};

};
//sc e



/*!
*	@brief 
*	@detail 
*/
union FUnionTIHStateValue
{
	struct FTIHStateData
	{
		int8 Protocol;
		int8 ProtocolOption;
		union FUnionStateDetail
		{
			struct FTIHStateObjectLifeCycleDetail
			{
				/*!
				*	@brief 
				*	@detail 
				*/
				int8 Step;
				int8 StepOption;//{Used}
			}LifeCycleDetail;

			int16 LifeCycle;
		}Details;

	}Datas;
	int32 WholeData;
};
//sc s


//sc e


#pragma endregion
#pragma region Commands
/*
	commander : 커맨드를 실행시키고 여러 도움이 되는 기능을 담고있는녀석
	commandList : 커맨드 목록이다. 목록을 컨트롤 하기위해 만든 인터페이스
	commandShaerBoard : 커맨드 쉐어보드. 데이터를 담고있다.이거는 dynamicPolymorphism 을 사용하자.
	commandState : 커맨드의 상태를 담고있다.
	command : 명령을 담고있다.
	commandHeaer : 구체적인 카테고리가 적혀있다. 로딩 혹은 할당,삭제같은게 여기에있다.
					커맨드 자체가 해야할 행동인 wait 라든지 그런것도 여기있음.
	commandAction : 내부에 사용할 함수가 들어가있다.
	commandParam :커맨드파라미터를 정의한다. ->이걸 만들어야하나
	commandBuilder

*/

class FTIHCommand;
class FTIHCommandList;
class FTIHCommandDataShareBoard;
class FTIHCommandState;
class FTIHCommander;

struct FTIHCommandDataRefParameter;
struct FTIHCommandHeader;
struct FTIHCommandMethod;

/*
	커맨드 헤더와 커맨드 액션은 언리얼에서 사용할 수 있게 만든다.
	구성을 전달할때는 레퍼런스를 사용한다. 읽기 전용이 빠르기는한데, 솔직히 변경이 불가능한게 좀 애바다.


	커맨드는 상속으로 구현한다.
		커맨드는 버추얼테이블이 호출되기전에 처리할 수 있도록한다.
		

*/

USTRUCT()
struct FTIHCommandDataRefParameter
{
	GENERATED_BODY()

	UPROPERTY()
	int16 DataRefType;
	UPROPERTY()
	int16 DataRefIndex;
};
/*
	빌더를 만들어야한다.->만듬

	결과를 통합해야한다 자꾸 이거 다른곳으로 뻗는거같음
		생성
			assign : pooled
			malloc
		변경
			Modify
		삭제
			reject : pooled
			destory : 진짜삭제
		IO
			리드세이브 == assign + IO
			라이트
		서버
			커넥트 {샌드 + 값대기 + 샌드 + 값대기}
			샌드	{샌드 + 값대기== requese }
			값대기	== receive
			디스커넥트
*/


/*
	command state 가 필요할까?
	이게 있으면 좋은점
		상태에 대한 추적이 가능하다
		상태에 따른 다른 처리가 가능하다.
*/

class FTIHCommandMethodAdditionalManager
{
public:

private:
	/*
		TMap<uint32,FTIHCommandDelegateFuncs> mDelegateFunctions;
		struct FTIHCommandDelegateFuncs
		{
		TFunction<TIHReturn64()> ExecuteFunc;
		TFunction<TIHReturn64()> DoneFunc;
	
	*/

};


USTRUCT()
struct FTIHCommandReferenceData
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<int32> Int32Array;
	UPROPERTY()
	TArray<int64> Int64Array;
	UPROPERTY()
	TArray<float> FloatArray;
	UPROPERTY()
	TArray<double> DoubleArray;
	UPROPERTY()
	TArray<FVector> VectorArray;
	UPROPERTY()
	TArray<FTransform> TransformArray;
	UPROPERTY()
	TArray<FString> StringArray;
};
/*!
*	@brief 이거 커맨드 오더id 를 위한거임. 나중에 만들자.
*	@detail 
*/
class FTIHCommandOrder
{
public:
	FTIHCommandOrder() :
		mCommandGenerateOrderId(FTIHCommandOrder::GetGenerateCommandOrderID())
	{
	}
	~FTIHCommandOrder();
private:
	static int32 GetGenerateCommandOrderID()
	{
		static const uint32 IdMax = std::numeric_limits<int32>::max();
		static int32 reValue = 0;
		if(GenerateOrderID < IdMax)
		{
			++GenerateOrderID;
		}
		else
		{
			GenerateOrderID = 0;
		}
		reValue = GenerateOrderID;
		return reValue;
	}
	static int32 GenerateOrderID;
	int32 mCommandGenerateOrderId;
	
};
int32 FTIHCommandOrder::GenerateOrderID = std::numeric_limits<int32>::max();
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commander Base

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/


/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	
																	Command Data Board
	 
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/

union FUnionTIHDataBoardResult
{
	struct FTIHDataBoardReserveResultDetail
	{
		int8 Protocol;
		int8 Padding;
		int16 PreMax;
		TIHReturn32 SimpleResult;
	}ReserveDetail;
	struct FTIHDataBoardRegisterResultDetail
	{
		int8 Protocol;
		int8 Padding;
		int16 RegistedIndex;
		TIHReturn32 SimpleResult;
	}RegisterDetail;
	struct FTIHDataBoardRegisterRangeResultDetail
	{
		int8 Protocol;
		int8 Padding;
		int16 StartIndex0;

		int16 StartIndex1;
		int16 RegistCount;
	}RegisterRangeDetail;

	TIHReturn64 WholeData;
};

class FTIHCommandDataBoard
{
public:

#pragma region Reserve
/*

	나중에 이전의 데이터가 있으면 어떻게 할지에 대해 처리하자
		1안은 이동
		2안은 삭제

			TArray<int8> mInt8Array;
	TArray<int16> mInt16Array;
*/
	TIHReturn64 ReserveForArrayInt8ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int8>>(size, mInt8Array);
	}
	TIHReturn64 ReserveForArrayInt16ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int16>>(size, mInt16Array);
	}
	TIHReturn64 ReserveForArrayInt32ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int32>>(size, mInt32Array);
	}
	TIHReturn64 ReserveForArrayInt64ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int64>>(size, mInt64Array);
	}
	TIHReturn64 ReserveForArrayFloatByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<float>>(size, mFloatArray);
	}
	TIHReturn64 ReserveForArrayDoubleByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<double>>(size, mDoubleArray);
	}
	TIHReturn64 ReserveForArrayVector3fByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FVector>>(size, mVectorArray);
	}
	TIHReturn64 ReserveForArrayTransformByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FTransform>>(size, mTransformArray);
	}
	TIHReturn64 ReserveForArrayStringByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FString>>(size, mStringArray);
	}
#pragma endregion

#pragma region Register
	TIHReturn64 RegisterToArrayAsInt8(const int8& value)
	{
		return RegisterToArray<int8, TArray<int8>>(value, mInt8Array);
	}
	TIHReturn64 RegisterToArrayAsInt16(const int16& value)
	{
		return RegisterToArray<int16, TArray<int16>>(value, mInt16Array);
	}
	TIHReturn64 RegisterToArrayAsInt32(const int32& value)
	{
		return RegisterToArray<int32, TArray<int32>>(value, mInt32Array);
	}
	TIHReturn64 RegisterToArrayAsInt64(const int64& value)
	{
		return RegisterToArray<int64, TArray<int64>>(value, mInt64Array);
	}
	TIHReturn64 RegisterToArrayAsFloat(const float& value)
	{
		return RegisterToArray<float, TArray<float>>(value, mFloatArray);
	}
	TIHReturn64 RegisterToArrayAsDouble(const double& value)
	{
		return RegisterToArray<double, TArray<double>>(value, mDoubleArray);
	}
	TIHReturn64 RegisterToArrayAsVector(const FVector& value)
	{
		return RegisterToArray<FVector, TArray<FVector>>(value, mVectorArray);
	}
	TIHReturn64 RegisterToArrayAsTransform(const FTransform& value)
	{
		return RegisterToArray<FTransform, TArray<FTransform>>(value, mTransformArray);
	}
	TIHReturn64 RegisterToArrayAsString(const FString& value)
	{
		return RegisterToArray<FString, TArray<FString>>(value, mStringArray);
	}

#pragma endregion
#pragma region Ref
	const int32 GetDataInInt8Array(int32 index)
	{
		return mInt8Array[index];
	}
	const int64 GetDataInInt16Array(int32 index)
	{
		return mInt16Array[index];
	}

	const int32 GetDataInInt32Array(int32 index)
	{
		return mInt32Array[index];
	}
	const int64 GetDataInInt64Array(int32 index)
	{
		return mInt64Array[index];
	}
	const float GetDataInFloatArray(int32 index)
	{
		return mFloatArray[index];
	}
	const double GetDataInDoubleArray(int32 index)
	{
		return mDoubleArray[index];
	}
	const FVector& GetDataInVectorArray(int32 index)
	{
		return mVectorArray[index];
	}
	const FTransform& GetDataInTransformArray(int32 index)
	{
		return mTransformArray[index];
	}
	const FString& GetDataInStringArray(int32 index)
	{
		return mStringArray[index];
	}

#pragma endregion

private:
	TArray<int8> mInt8Array;
	TArray<int16> mInt16Array;
	TArray<int32> mInt32Array;
	TArray<int64> mInt64Array;
	TArray<float> mFloatArray;
	TArray<double> mDoubleArray;
	TArray<FVector> mVectorArray;
	TArray<FTransform> mTransformArray;
	TArray<FString> mStringArray;
	template<typename TIHTemplateType = TArray<int32>>
	TIHReturn64 ReserveForArrayByGrowing(int32 size, TIHTemplateType& memeberArray)
	{
		FUnionTIHDataBoardResult reValue;
		reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::EReserve;
		reValue.ReserveDetail.PreMax = memeberArray.Max();

		int16 reserveValue = size - reValue.ReserveDetail.PreMax;
		if (reserveValue < 1)
		{
			if (reserveValue == 0)
			{
				reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Void;
			}
			else
			{
				reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
			}
		}
		else
		{
			reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Success;
			memeberArray.Reserve(size);
			//reValue.ReserveDetail.CurMax = memeberArray.Max();
		}
		return reValue.WholeData;
	}

	template<typename TIHTemplateValueType = int32 ,typename TIHTemplateArrayType = TArray<int32>>
	TIHReturn64 RegisterToArray(const TIHTemplateValueType& value, TIHTemplateArrayType& memberArray)
	{
		FUnionTIHDataBoardResult reValue;
		reValue.RegisterDetail.Protocol = (int8)ETIHResultDetailProtocols::ERegister;
		reValue.RegisterDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
		int32 curPushIndex = memberArray.Num();
		if(curPushIndex < memberArray.Max() )
		{
			reValue.RegisterDetail.RegistedIndex = memberArray.Add(value);
		}
		return reValue.WholeData;
	}

};
#pragma region CommandReferenceBoards

/*
	여기에 빠르게 접근할 수 있게 CRTP나 staticPolymorph 를 적용한 클래스를 통해 만들던가
	인터페이스 정도는 만들어주자.

*/
class FTIHMeshPool
{
public:
	static FTIHMeshPool* GetSingle()
	{
		static FTIHMeshPool meshPool;
		return &meshPool;
	}
	TSoftObjectPtr<UStaticMesh> GetStaticMeshByPath(const FString& meshPath);
	TSoftObjectPtr<USkeletalMesh> GetSkeletalMeshByPath(const FString& meshPath);
private:


};

class FTIHCommandShareBoard
{
public:
	FTIHCommandShareBoard() {};
	~FTIHCommandShareBoard() {};
	
//	샤딩을 넣는다면 여기에 넣어야겠지?

	FTIHCommandDataBoard mBoard;
};

class FTIHCommandResultBoard
{
public:
	FTIHCommandResultBoard() {};
	~FTIHCommandResultBoard() {};
		
	

	FTIHCommandDataBoard mBoard;
};

class FTIHCommandPathBoard
{
public:
	FTIHCommandPathBoard() {};
	~FTIHCommandPathBoard() {};

	TMap<FName, FString> mPathAddtions;

	FTIHCommandDataBoard mBoard;
};
#pragma endregion

/*
	그전에 
	이제 이걸 담은 녀석을 만들어야한다.
	또 담는녀석을 또 한번에 만들 수 있는 래퍼도 필요하다.
	커맨더


*/
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command Chain Builder

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/

struct FTIHCommandCallBack
{
	int8 Protocol;
	int8 CallBackType;
	int16 DelegateIndex;
	TFunction<void()> Functor;
	
	void operator()()
	{
		Functor();
	}
};
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command 

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/


/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandTestDelayDatas
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

USTRUCT()
struct FTIHCommandTestDelayDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Test00;
	UPROPERTY()
	int8 Test01;
	UPROPERTY()
	int8 Test02;
	UPROPERTY()
	int8 Test03;
	

	TIHMACRO_CHAINBUILDER_SETTER(Test00);
	TIHMACRO_CHAINBUILDER_SETTER(Test01);
	TIHMACRO_CHAINBUILDER_SETTER(Test02);
	TIHMACRO_CHAINBUILDER_SETTER(Test03);

};
class FTIHCommandTestDelay : public TTIHCommand<FTIHCommandTestDelayDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandTestDelay);
public:
	FTIHCommandTestDelay() {};
	virtual ~FTIHCommandTestDelay() {};
};




/*
	leaf 만들기
	command datas 정의 및 command 만들기
	strategy 설정
	
	leaf 는 단순하게 설정을 하고 하는 역할만 하는거임
	command 데이터는 커맨더가 참조할 데이터를 담고있는 녀석임. 만약 set mesh 를 할거면
		참조할 영역은 무엇인지. 그 영역에서 뭐를 들고와야하는지
		대상은 어느 매니지드 오브젝트의 몇번째에 있는 것인지 2차원으로 찾는다라고 생각하면됨
			그러면 어떤 오브젝트를 변경할건지는 그냥 커맨더에 넣어서 해주면됨
	gpu 에 빗대어서 생각하면편함
	자원의 메모리는 board 에 기록이 된다. r 인지 w 인지
	쉐이더는 strategy 를 사용한다.
	명령은 command 로 하고 기능은 leaf 로 처리한다.
	더 정확하게는
		특정 컴포지트에 명령을 내기러가 매니지드 오브젝트에 명령을 내리면

*/

class FTIHCommandFactoryForDefaultStation : public FTIHCommandFactory
{
public:
	TIHReturn64 InstantiateCommandsInMetaArray(FTIHCommander& commander) override;
};

#pragma region Command Strategy



class FTIHCommanderStrategyTestDelay :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyTestDelay>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};
/*
	0 == Pooling
	return 의 결과가 result 보드에 들어간다. 즉 그냥 결정되어있는거임.
	1 == Reject
*/

#pragma endregion


enum class ETIHCommandFunctorProtocols
{
	EManagedObjectMemberFunction = 0,
	ECommanderFunction,
};
enum class ETIHCommandFunctorProtocolOptions
{
	ECallingCompleteFunction = 0,
	ECallingErrorFunction ,
};

USTRUCT()
struct FTIHCommandFunctorHeader
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Protocol;
	UPROPERTY()
	int8 ProtocolOption;

	/*!
	*	@brief 이거의 목적은 다용도이긴한데 일단 managedOBject 의 인덱스로 사용.
	*	@detail 
	*/
	UPROPERTY()
	int16 ReferenceIndex;	//	이게 16비트였나 기억이안남
							//	참조할 영역이 managedOBject 또는 커맨드 내부에 있는 내부 콜백의 인덱스
							//	이제 이걸 가지고 결정을 한 결과를 기록해놓으면 된다.
};

/*!
*	@brief 
*	@detail 
*/


/*!
*	@brief 
*	@detail https://benui.ca/unreal/tickable-object/
*/
class FTIHCommandTickableScheduler : public FTickableGameObject
{
public:
	// FTickableGameObject Begin
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override
	{
		return ETickableTickType::Always;
	}
	virtual TStatId GetStatId() const override
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FTIHCommandTickableScheduler, STATGROUP_Tickables);
	}
	virtual bool IsTickableWhenPaused() const
	{
		return true;
	}
	virtual bool IsTickableInEditor() const
	{
		return false;
	}
private:
	uint32 LastFrameNumberWeTicked = INDEX_NONE;
};

/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commander

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
class FTIHCommanderExtentionForExeCmdStrategy
{
public:
	virtual TIHReturn64 ExecuteCommandInheritance(FTIHCommandBase* primitiveCmd) = 0;
};


#pragma endregion 
/*
=================================================================================================================================================
										 여기 아래서 부터 다시한다
=================================================================================================================================================
*/


class FTIHMngObjLeafTestDelay : public TTIManagedObjectLeaf<UStaticMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafTestDelay)
public:
	void InitSetting() override;
};

/*
	이제 좀 나눠놓고 변경을 하자.
*/


class FTIHSettingHelper
{
	class FTIHManagedObjectSettings;
public:
	FTIHManagedObjectSettings& MngObjSetting()
	{
		return mManagedObjectSettingHelper;
	}

	FTIHManagedObjectSettings& GetManagedObjectSettingHelper()
	{
		return mManagedObjectSettingHelper;
	}
private:
	class FTIHManagedObjectSettings
	{
	public:
		void RegistUEActorByUEHash(UClass* ueActorUcls);
		template<typename TIHTemplateType = AActor>
		void RegistUEActorTemplate()
		{
			RegistUEActorByUEHash(TIHTemplateType::StaticClass());
		}

		void RegistTIHMngObjLeafGenerateFunc(TIHHash64 tihHash, TFunction < FTIHMngObjLeaf* ()> generateFunc);
		template<typename TIHTemplateType = FTIHMngObjLeafTestDelay>
		void RegistTIHMngObjLeafGenerateFuncTemplate()
		{
			RegistTIHMngObjLeafGenerateFunc(TIHTemplateType::TIHClassNameHash(), &TIHTemplateType::GenerateLeaf);
		}
		void RegistUESceneAndTIHMngObjLeafList(UClass* ueSceneCls, const FTIHGenerateCandidateLeaves& tihLeafList);
		template<typename TIHTemplateType = USceneComponent>
		void RegistUESceneAndTIHMngObjLeafListTemplate(const FTIHGenerateCandidateLeaves& tihLeafList)
		{
			RegistUESceneAndTIHMngObjLeafList(TIHTemplateType::StaticClass(), tihLeafList);
		}
		void RegistPrepareDataForNewAlloc(ETIHMngObjHeaderProcotols targetClsType, UClass* targetCls, int16 allocCount);
		template<typename TIHTemplateType = AActor>
		void RegistPrepareDataForNewAllocTemplateActorBase(int16 allocCount)
		{
			RegistPrepareDataForNewAlloc(ETIHMngObjHeaderProcotols::EActorBase, TIHTemplateType::StaticClass(), allocCount);
		}
	};
	FTIHManagedObjectSettings mManagedObjectSettingHelper;
};
class FTIHManagedObjectGenerateCompositeOutData;




/*
=================================================================================================================================================
										여기 위부터 다시한다
=================================================================================================================================================
*/


/*!
*	@brief 여기에 들어갈것은 클래스 타입같은거임 그게 128개를 넘지는 않을거니깐 ㅎㅎ
*	@detail 진짜 정안되면 -1 가지 쓰고 거기에 곱셈하지뭐 ㅎㅎ
*/
enum class ETIHManagedObjectProtocolOptions
{
	EEmpty
};
enum class ETIHManagedObjectHeaderComponentProtocols
{
	ENotUse = 0,
};

/*!
*	@brief 
*	@detail 
*/


/*
	아이디어
	tag base 보다 더좋은건데 언리얼 오브젝트 즉 대부분 매쉬관련이겠지? 그것들의 태그를 읽고
	그 태그에 맞는 정보로 컨버팅하는 파서를 만들어서 Header 를 기록하게 만들자

	그럼 태그wrapper 는 없어도 무방해짐
	그리고 상태. 이게 좀 문제인데 상태라 함은 추적을 해야함. 예를 들어 생성된 타이밍의 상태는 생성된상태고
	한틱이 지나면 다시 돌아감
	다행히도 actor 클래스를 상속받은게 있다면 해당 액터에서 이런 기초적인 작업을 해줄 수 잇다는건데
	스스로 상태를 업데이트 하지만 그게 매번이루어지면 사실 의미가 좀 없음. 비 정기적이여야 한다는거임
	비정기적인것은 상태를 추적하는데 나쁘지는 않지만 대상이 스스로 업데이트 해야하는 문제가 있음
*/

class FTIHManagedObjectNode
{
public:

};


/*
	이녀석이 중간재라 이걸 흠...타입을 들고오고 데이터를 들고와야하는데
	공통으로 사용되는 녀석을 위에다 인터페이스 넣어놓고
*/


UCLASS()
class ATIHTestPawn : public APawn
{
	GENERATED_BODY()

};


/*!
*	@brief 메모리를 할당하고 삭제하는 역할을 한다. 
*	@detail 가상 트리구조뿐만 아니라 오브젝트의 ref 를 가지는데 흠...타입이 없는걸로 가야한다. 이때 command 패턴을 사용하는거지
*/

enum class EPrepareClassType : int8
{
	EActorBase,
	EWidgetBase,
	ESystem,
	EAuto,
};
//	이걸 같이쓰자.



int16 FTIHNewAllocPrepareData::StaticPrepareAddOrder = -1;


struct FTIHManagedObjectClassStatus
{
	TDeque<int16> RejectedManagedObjectIndices;
	TDeque<int16> UsingManagedObjectIndices;
};
struct FTIHManagedObjectComponentStatus
{
	TDeque<int16> RejectedManagedObjectComponentIndices;
	TDeque<int16> UsingManagedObjectComponentIndices;
};

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
		if(reValue != parentIndex)
		{
			mParentArray[reValue] = FindParent(parentIndex);
			reValue = mParentArray[reValue];
		}
		return reValue;
	}
	void UnionIndex(int16 leftIndex,int16 rightIndex)
	{
		leftIndex = FindParent(leftIndex);
		rightIndex = FindParent(rightIndex);

		if(leftIndex != rightIndex)
		{
			if(mRankArray[leftIndex] < mRankArray[rightIndex])
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
	int16 UnionAndElementCount(int16 leftIndex,int16 rightIndex)
	{
		leftIndex = FindParent(leftIndex);
		rightIndex = FindParent(rightIndex);

		if(leftIndex != rightIndex)
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

struct FTIHManagedObjectPoolingData
{
	int8 Protocol;			//	{actorBase,widgetBase,system}
	int8 ProtocolOption;	//

	int16 AllocateCount;

	UClass* TargetUObject;
};

class FTIHMngObjPoolCenter;





/*!
*	@brief 오브젝트 풀을 생성하거나 관리하는 클래스
*	@detail 오브젝트 풀이 공유해야하는 데이터들을 들고있다.
*/


#pragma endregion





#pragma region TIHSever

/*!
*	@brief 서버에 대한 환경설정이다. 기타 세부적인것은 해당 서버를 구현해야 존재함
*	@detail 
*/
struct FTIHServerConfigure
{
	FString FullUrl;
	FString Protocol;
	FString Url;
	int32 PortNumber;
	TMap<FName, FString> UserInfo;
	TMap<FName, FString> Token;
	TMap<FName, FString> QueryParams;
	TMap<FName, FString> Options;
};
/*!
*	@brief 서버는 이제 이걸 모두 상속받아서 만드는 것이다. 이것도 CRTP 로 만들어야하나?
*	@detail 
*/

template<typename TIHTempateType>
class FTIHServer
{
public:
	TIHReturn64 PrepareServer();
	TIHReturn64 StartServer();
	TIHReturn64 StopServer();
	TIHReturn64 AcceptConnectionServer();
	TIHReturn64 ReceiveDataServer();
	TIHReturn64 SendDataServer();
protected:
	TIHTempateType* mSelfPointer;
private:


};

class FTIHNetwork
{
public:
	template<typename TIHTemplateType>
	TIHReturn64 PrepareServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->PrepareServer();
		return reValue;
	}

	template<typename TIHTemplateType>
	TIHReturn64 StartServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->StartServer();
		return reValue;
	}
	template<typename TIHTemplateType>
	TIHReturn64 StopServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->StopServer();
		return reValue;
	}
	
	template<typename TIHTemplateType>
	TIHReturn64 AcceptConnectionServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->AcceptConnectionServer();
		return reValue;
	}
	template<typename TIHTemplateType>
	TIHReturn64 ReceiveDataServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->ReceiveDataServer();
		return reValue;
	}
	template<typename TIHTemplateType>
	TIHReturn64 SendDataServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->SendDataServer();
		return reValue;
	}

protected:

private:

protected:
	//TMap<FName, FTIHNetworkConfigure> mNetworks;
private:

};  

class FTIHCommandHelper
{
public:
	void DictateCommandCreateNewAllocPrepare();
	void DictateCommandCreateNewAllocOnGenerate();

	void DictateCommandCreatePooling();
	void DictateCommandCreateReject();

	void DictateCommandLoadMesh();
};


#pragma endregion
#pragma region TIH CRTP
template<typename TIHTemplateType>
class TTIHStationCRTP
{

public:
	TTIHStationCRTP()
		: mSelfPointer(this)
	{}
	virtual ~TTIHStationCRTP() {};

	virtual TIHReturn64 InitDefaultFunc() 
	{
		return 0;
	};

	TIHTemplateType* mSelfPointer;

	static TIHTemplateType& GetSingle()
	{
		static TIHTemplateType self;
		return self;
	}

	

#pragma region LifeCycle Functions
	TIHReturn64 InstantiateStation()
	{
		return 0;
	}
	TIHReturn64 PrepareStation()
	{
		return 0;
	}
	TIHReturn64 InitializeStation()
	{
		return 0;
	}
	TIHReturn64 RefreshStation()
	{
		return 0;
	}
	TIHReturn64 ExecuteStation()
	{
		return 0;
	}
	TIHReturn64 SuspendStation()
	{
		return 0;
	}
	TIHReturn64 WaitStation()
	{
		return 0;
	}
	TIHReturn64 FinalizeStation()
	{
		return 0;
	}
	TIHReturn64 DestroyStation()
	{
		return 0;
	}
#pragma endregion
#pragma region Network Functions
	TIHReturn64 CreateServer()
	{
		return 0;
	}
	TIHReturn64 PrepareServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 InitServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 ConnectServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 WaitServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 CheckServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 DisConnectServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 RequestServer(const TArray<FString>& params)
	{
		return 0;
	}
	TIHReturn64 ReceiveServer(const TArray<FString>& params)
	{
		return 0;
	}
#pragma endregion

	FTIHCommandFactory& GetCommandFactory()
	{
		return *mCommandFactory;
	}
	void SetCommandFactory(FTIHCommandFactory* cmdFactory);

	FTIHCommandBase* GenerateCommandByCommandHeader(const FTIHCommandHeader cmdHeader);

	FTIHCommandShareBoard& GetCommandShaderBoard()
	{
		return *mShareBoard;
	}
	FTIHCommandShareBoard& GetCommandResultBoard()
	{
		return *mResultBoard;
	}
	FTIHCommandShareBoard& GetCommandPathBoard()
	{
		return *mPathBoard;
	}
	FTIHMngObjPool& GetObjectPool()
	{
		return *mGlobalObjectPool;
	}

	FTIHCommander& GetCommander()
	{
		return *mCommander;
	}

	FTIHMngObjPoolCenter& GetManagedObjectPoolCenter()
	{
		return *mObjectPoolCenter;
	}
	FTIHMngObjGenerateHelper& GetGenerateHelper()
	{
		return *mMngObjGenerateHelper;
	}

protected:

	/*!
	*	@brief 서버접속을 하기위한
	*	@detail 
	*/
	FTIHNetwork* mNetwork;
	/*!
	*	@brief 명령을 위한
	*	@detail 
	*/
	//FTIHManagedObjectPool* mGlobalObjectPool;
	//FTIHManagedObjectPool* mLocalObjectPool;

	TUniquePtr<FTIHMngObjPool> mGlobalObjectPool;
	TUniquePtr<FTIHMngObjPool> mLocalObjectPool;

	TUniquePtr< FTIHMngObjPoolCenter> mObjectPoolCenter;

	//FTIHCommandShareBoard mShareBoard;
	//FTIHCommandResultBoard mResultBoard;
	//FTIHCommandPathBoard mPathBoard;

	TUniquePtr<FTIHCommandShareBoard> mShareBoard;
	TUniquePtr<FTIHCommandResultBoard> mResultBoard;
	TUniquePtr<FTIHCommandPathBoard> mPathBoard;

	//FTIHCommander mCommander;

	TUniquePtr<FTIHCommander> mCommander;

	int64 mTickTime;
	int64 mTickTimeRunning;
	int64 mTickTimeStarted;

	FTIHCommandFactory* mCommandFactory;

	//	시발 이거 합칠까
	TUniquePtr<FTIHMngObjGenerateHelper> mMngObjGenerateHelper;
	FTIHSettingHelper mSettingHelper;

private:

};
#pragma endregion




#pragma region Macros_CRTP_CheckFunctions
/*
----	----	----	----	----	----	----	----	----	----
								Prepare
								Init
								Execute
								Refresh
								Wait
								Clearance
								Destroy
	----	----	----	----	----	----	----	----	----
*/
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_InstantiateStation, InstantiateStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_PrepareStation, PrepareStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_InitializeStation, InitializeStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_RefreshStation, RefreshStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_ExecuteStation, ExecuteStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_WaitStation, WaitStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_SuspendStation, SuspendStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_FinalizeStation, FinalizeStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_DestroyStation, DestroyStation);

#pragma endregion

class FTIHStationPolymorphInterface
{
public:
	static TIHReturn64 TIHErrEmplementFunc();

	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_InstantiateStation, InstantiateStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_PrepareStation, PrepareStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_InitializeStation, InitializeStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_RefreshStation, RefreshStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_ExecuteStation, ExecuteStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_WaitStation, WaitStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_SuspendStation, SuspendStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_FinalizeStation, FinalizeStation);
	TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(TTIH_Has_Func_DestroyStation, DestroyStation);

};

/*!
*	@brief station 에 필요한 함수들을 한번에 선언 할 수 있는 매크로
*	@detail 일부러 마지막의 함수에 ; 를 빼서 매크로로 인한 에러가 안나도록함
*/
#define TIHMACRO_STATION_HELPER_LIFECYCLE_FUNCTIONS \
public:\
TIHReturn64 InstantiateStation();\
TIHReturn64 PrepareStation();\
TIHReturn64 InitializeStation();\
TIHReturn64 RefreshStation();\
TIHReturn64 ExecuteStation();\
TIHReturn64 SuspendStation();\
TIHReturn64 WaitStation();\
TIHReturn64 FinalizeStation();\
TIHReturn64 DestroyStation()

/**
 * 
 */
class TIHLIBRARYENTRY_API FTIHDefaultStation : public TTIHStationCRTP<FTIHDefaultStation>
{
public:
	FTIHDefaultStation();
	virtual ~FTIHDefaultStation();

	TIHMACRO_STATION_HELPER_LIFECYCLE_FUNCTIONS;
};



//#define TIHTEMPLATE_POLYMORPH_FUNC_CRPT_CARRYOUT(checkFuncName,targetFunc)\
//template<typename TIHTemplateType>\
//std::enable_if_t< checkFuncName < TTIHStationCRTP<TIHTemplateType> >::value,TIHReturn64 >\
//CarryOut##targetFunc(const  TTIHStationCRTP<TIHTemplateType>& station)\
//{\
//	return station.targetFunc();\
//};\
//template<typename TIHTemplateType>\
//std::enable_if_t<!checkFuncName < TTIHStationCRTP<TIHTemplateType> >::value, TIHReturn64 >\
//CarryOut##targetFunc(const  TTIHStationCRTP<TIHTemplateType>& station)\
//{\
//	return FTIHStationPolymorphInterface::TIHErrEmplementFunc(); \
//};


/*!
	*	@brief TIHTemplateType 에 구현되어있지않는다면 == 는 구현되지 않음
	*	@detail
	*/
	//bool operator==(const TIHCommandShareResource< TIHTemplateType>& rhs)
	//{
	//	if constexpr (TTIH_Has_Func_CommandShareResource_Equal<TIHTemplateType>::value == true)
	//	{
	//		return (this->ShareData == rhs.ShareData);
	//	}
	//	else	//	false type
	//	{
	//		return TIHCommandShareResource<TIHTemplateType>::ErrDefaultFunc_Bool();
	//	}
	//}
	/*!
	*	@brief TIHTemplateType 에 구현되어있지않는다면 != 는 구현되지 않음
	*	@detail
	*/
	//bool operator!=(const TIHCommandShareResource< TIHTemplateType>& rhs)
	//{
	//	if constexpr (TTIH_Has_Func_CommandShareResource_NotEqual<TIHTemplateType>::value == true)
	//	{
	//		return (this->ShareData != rhs.ShareData);
	//	}
	//	else	//	false type
	//	{
	//		return TIHCommandShareResource<TIHTemplateType>::ErrDefaultFunc_Bool()
	//	}
	//}
	/*!
	*	@brief TIHTemplateType 에 구현되어있지않는다면 = 는 구현되지 않음
	*	@detail
	*/
	//TIHCommandShareResource<TIHTemplateType>& operator=(const TIHCommandShareResource< TIHTemplateType>& rhs)
	//{
	//	if constexpr (TTIH_Has_Func_CommandShareResource_ASsign<TIHTemplateType>::value == true)
	//	{
	//		this->Tag32 = rhs.Tag32;
	//		this->ShareData = rhs.ShareData;
	//		return *this;
	//	}
	//	else	//	false type
	//	{
	//		return *this;
	//	}
	//}
	/*!
	*	@brief TIHTemplateType 에 구현되어있지않는다면 + 는 구현되지 않음
	*	@detail
	*/
	//TIHCommandShareResource< TIHTemplateType> operator+(const TIHCommandShareResource< TIHTemplateType>& rhs)
	//{
	//	if constexpr (TTIH_Has_Func_CommandShareResource_Add<TIHTemplateType>::value == true)
	//	{
	//		return TIHCommandShareResource< TIHTemplateType>(this->Tag32, this->ShareData + rhs.ShareData);
	//	}
	//	else	//	false type
	//	{
	//		return TIHCommandShareResource< TIHTemplateType>();
	//	}
	//}
	/*!
	*	@brief TIHTemplateType 에 구현되어있지않는다면 - 는 구현되지 않음
	*	@detail
	*/
	//TIHCommandShareResource< TIHTemplateType> operator-(const TIHCommandShareResource< TIHTemplateType>& rhs)
	//{
	//	if constexpr (TTIH_Has_Func_CommandShareResource_Minus<TIHTemplateType>::value == true)
	//	{
	//		return TIHCommandShareResource< TIHTemplateType>(this->Tag32, this->ShareData - rhs.ShareData);
	//	}
	//	else	//	false type
	//	{
	//		return TIHCommandShareResource< TIHTemplateType>();
	//	}
	//}
	/*!
	*	@brief TIHTemplateType 에 구현되어있지않는다면 * 는 구현되지 않음
	*	@detail
	*/
	//TIHCommandShareResource< TIHTemplateType> operator*(const TIHCommandShareResource< TIHTemplateType>& rhs)
	//{
	//	if constexpr (TTIH_Has_Func_CommandShareResource_Add<TIHTemplateType>::value == true)
	//	{
	//		return TIHCommandShareResource< TIHTemplateType>(this->Tag32, this->ShareData * rhs.ShareData);
	//	}
	//	else	//	false type
	//	{
	//		return TIHCommandShareResource< TIHTemplateType>();
	//	}
	//}

//	참고용
class FTIHTagHelperssss
{
public:

	static FTIHTagHelperssss& GetSingle()
	{
		static FTIHTagHelperssss helper;
		return helper;
	}
	/*
		static const 목록을 작성한다
			해당 부분은 정해진 쿼리다

		해당 정해진 쿼리에 바로 접근할 수 있는 것을 만든다
		쿼리를 등록할 수 있게 만든다.
			접근 경로는 무조건 이름으로 시작한다
		얻을 수 있는 방법은 2가지로한다. 해쉬와 쿼리로

			TEXT("NoRegistedTag"),
	`		TEXT("UnknownTag"),
	`		TEXT("Root"),
	`		TEXT("System"),
	`		TEXT("ActorBase"),
	`		TEXT("HasChildren"),
	`		TEXT("HasParent"),
	`		TEXT("MovePossible"),
	`		TEXT("Render3dPossible"),
	`		TEXT("MaterialSetPossible"),

	*/

	TIHHash64 GetHashNoRegistedTag()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["NoRegistedTag"];
		return reValue;
	}
	TIHHash64 GetHashUnknownTag()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["UnknownTag"];
		return reValue;
	}
	TIHHash64 GetHashRoot()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["Root"];
		return reValue;
	}
	TIHHash64 GetHashSystem()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["System"];
		return reValue;
	}
	TIHHash64 GetHashActorBase()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["ActorBase"];
		return reValue;
	}
	TIHHash64 GetHashHasChildren()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["HasChildren"];
		return reValue;
	}
	TIHHash64 GetHashHasParent()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["HasParent"];
		return reValue;
	}
	TIHHash64 GetHashMovePossible()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["MovePossible"];
		return reValue;
	}
	TIHHash64 GetHashRender3dPossible()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["Render3dPossible"];
		return reValue;
	}
	TIHHash64 GetHashMaterialSetPossible()
	{
		TIHReturn64 reValue = mRegistedHashsByTag["MaterialSetPossible"];
		return reValue;
	}

	const FName& GetQueryNoRegistedTag()
	{
		FName reValue = mRegistedTagsByHash[GetHashNoRegistedTag()];
		return reValue;
	}
	const FName& GetQueryUnknownTag()
	{
		FName reValue = mRegistedTagsByHash[GetHashUnknownTag()];
		return reValue;
	}
	const FName& GetQueryRoot()
	{
		FName reValue = mRegistedTagsByHash[GetHashRoot()];
		return reValue;
	}
	const FName& GetQuerySystem()
	{
		FName reValue = mRegistedTagsByHash[GetHashSystem()];
		return reValue;
	}
	const FName& GetQueryActorBase()
	{
		FName reValue = mRegistedTagsByHash[GetHashActorBase()];
		return reValue;
	}
	const FName& GetQueryHasChildren()
	{
		FName reValue = mRegistedTagsByHash[GetHashHasChildren()];
		return reValue;
	}
	const FName& GetQueryHasParent()
	{
		FName reValue = mRegistedTagsByHash[GetHashHasParent()];
		return reValue;
	}
	const FName& GetQueryMovePossible()
	{
		FName reValue = mRegistedTagsByHash[GetHashMovePossible()];
		return reValue;
	}
	const FName& GetQueryRender3dPossible()
	{
		FName reValue = mRegistedTagsByHash[GetHashRender3dPossible()];
		return reValue;
	}
	const FName& GetQueryMaterialSetPossible()
	{
		FName reValue = mRegistedTagsByHash[GetHashMaterialSetPossible()];
		return reValue;
	}


	TIHHash64 GetHashByQuery(const FName& queryName)
	{
		TIHHash64 reValue = GetHashNoRegistedTag();
		if (mRegistedHashsByTag.Contains(queryName) == true)
		{
			reValue = mRegistedHashsByTag[queryName];
		}
		return reValue;
	}
	const FName& GetQueryByHash(TIHHash64 tihHash)
	{
		FName reValue = GetQueryNoRegistedTag();
		if (mRegistedTagsByHash.Contains(tihHash) == true)
		{
			reValue = mRegistedTagsByHash[tihHash];
		}
		return reValue;
	}
	const FTIHGenerateCandidateLeaves& GetComponentHashs(TIHHash64 compHash)
	{
		if (mRegistedHashForManagedComponent.Contains(compHash) == true)
		{
			return mRegistedHashForManagedComponent[compHash];
		}
		return FTIHGenerateCandidateLeaves();
	}

	const int32 StaticQueryListNum = 10;
	static const FName StaticQueryList[];


private:
	FTIHTagHelperssss()
	{
		for (int32 i = 0; i < StaticQueryListNum; ++i)
		{
			FName queryName = FTIHTagHelperssss::StaticQueryList[i];
			FString nameToString = queryName.ToString();
			TIHHash64 tihHash = ClassNameHashImplement(*nameToString);
			mRegistedHashsByTag.Add(queryName, tihHash);
			mRegistedTagsByHash.Add(tihHash, queryName);
		}
	}
	/*
		query 와 hash 를 맞춰준다
		hash 를 넣으면 query 가 나오고 query 를 넣으면 해쉬가 나온다.

		해당 클래스가 하는건 query 들을 등록하고 hash 로 뽑아서 managed오브젝트의 태그를 만들어주는거임
		그리고 컴포넌트 들의 태그를 받아서 해쉬로 뽑아서 저장시키는것이 주된 목표임.
		혹은 정해진 역할을 써 넣어놓는게 목표임
		그럼 커스텀 컴포넌트를 만들때 해야할일은?
		연결되어진 컴포넌트를 컨트롤 하는 함수만들기
		태그 만들어서 해당 컴포넌트가 뭐하는 녀석인지 넣어주기
			그럼 매니지드 오브젝트만 보더라도 간략한 메타정보는 얻을 수 잇고,
				랜더가 가능한지 아닌지 확인하는 것도 깊게 들어가지 않더라도 확인이 가능함.
	*/
	TMap<FName, TIHHash64> mRegistedHashsByTag;
	TMap<TIHHash64, FName> mRegistedTagsByHash;
	TMap<UEObjectHash64, FTIHGenerateCandidateLeaves> mRegistedHashForManagedComponent;
};
const FName FTIHTagHelperssss::StaticQueryList[] =
{
	TEXT("NoRegistedTag"),
	TEXT("UnknownTag"),
	TEXT("Root"),
	TEXT("System"),
	TEXT("ActorBase"),
	TEXT("HasChildren"),
	TEXT("HasParent"),
	TEXT("MovePossible"),
	TEXT("Render3dPossible"),
	TEXT("MaterialSetPossible"),
};