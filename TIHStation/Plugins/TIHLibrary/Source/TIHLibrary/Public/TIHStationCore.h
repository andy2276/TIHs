// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCore.generated.h"

#pragma region Typedefs

typedef int32 TIHReturn32;
typedef signed long long TIHReturn64;
typedef signed long long TIHSummary64;


#pragma endregion


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
class	FTIHManagedObjectComponent;
class	FTIHManagedObjectComposite;
class	FTIHManagedObject;
class	FTIHManagedObjectPool;
class	FTIHServer;
class	FTIHNetwork;

template<typename TIHTemplateType> class TTIHStationCRTP;

class	FTIHStationPolymorphInterface;
class	FTIHDefaultStation;

#pragma endregion




#pragma region TIH Miscellaneous

#pragma region Macros_bases
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																		MACROs

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
/*!
*	@brief Type Traits 과 SFINAE 를 사용한 check 구조체 정의
*	@detail CRTP 에서 함수가 정의되지 않았을경우 true 타입과 false 타입을 나누기 위한것
*/
#define TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(_checkFuncName, _checkTargetFunc)\
template<typename TIHTemplateType,typename = void>\
struct _checkFuncName : std::false_type{};\
template<typename TIHTemplateType>\
struct _checkFuncName<TIHTemplateType,std::void_t<decltype(std::declval<TIHTemplateType>()._checkTargetFunc())>> : std::true_type{};

/*!
*	@brief Type Traits Implement 
*	@detail  Type Traits Check 에서 설정되어진 type traits 를 구현하기 위한 body 위의 내용과 _checkFuncName 과 _checkTargetFunc 가 일치해야한다
*			또한 CRTP 의 함수가 정의 되어있어야한다. 물론 사용안할거면 안써도 되지만 해당 이름이 있어야 컴파일 에러가 안남
*/
#define TIHMACRO_GENERIC_TYPE_CHECK_CRPT_CARRYOUT(_checkFuncName, _targetTemplateClass, _returnType, _checkTargetFunc, _errFunc) \
template<typename TIHTemplateType>\
std::enable_if_t<_checkFuncName<_targetTemplateClass<TIHTemplateType>>::value, _returnType>\
CarryOut##_checkTargetFunc(_targetTemplateClass<TIHTemplateType>& target)\
{\
    return target._checkTargetFunc(); \
}\
template<typename TIHTemplateType>\
std::enable_if_t<!_checkFuncName<_targetTemplateClass<TIHTemplateType>>::value, _returnType>\
CarryOut##_checkTargetFunc(_targetTemplateClass<TIHTemplateType>& target)\
{\
    return _errFunc(); \
}

/*!
*	@brief Type Traits Implement Short cut
*	@detail TIHStation 에서 사용할 것의 코드 가독성을 위해 사용한 매크로 함수
*/
#define TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT(_checkFuncName, _checkTargetFunc) \
TIHMACRO_GENERIC_TYPE_CHECK_CRPT_CARRYOUT(_checkFuncName, TTIHStationCRTP, TIHReturn64, _checkTargetFunc, FTIHStationPolymorphInterface::TIHErrEmplementFunc)

#pragma endregion

/*!
*	@brief ChainBuilder 를 위한 메크로 함수 의 원형
*	@detail 템플릿의 유추 기능을 활용하기 위한 함수이다
*/
#define TIHMACRO_CHAINBUILDER_SETTER_BASE(TargetReturn, BaseParamType, MemFuncName, MemberVarName)\
template<typename TIHTemplateType>\
decltype(auto) Set##MemFuncName (BaseParamType value){ MemberVarName = static_cast<TIHTemplateType>(value); return TargetReturn;}

/*!
*	@brief ChainBuilder 를 위한 메크로 함수
*	@detail 타겟리턴을 변경할 수 있다.
*/
#define TIHMACRO_CHAINBUILDER_SETTER_BASE_TARGETRETURN( TargetReturn, MemberVarName  ) \
TIHMACRO_CHAINBUILDER_SETTER_BASE(TargetReturn,const TIHTemplateType& ,MemberVarName,MemberVarName)

/*!
*	@brief ChainBuilder 를 위한 메크로 함수
*	@detail 변수만 넣어도 알아서 유추한다
*/
#define TIHMACRO_CHAINBUILDER_SETTER( MemberVarName  ) \
TIHMACRO_CHAINBUILDER_SETTER_BASE_TARGETRETURN(*this, MemberVarName )

/*!
*	@brief ChainBuilder 를 위한 메크로 함수
*	@detail 함수이름을 변경할 수 있다.
*/
#define TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME( MemFuncName, MemberVarName  )\
TIHMACRO_CHAINBUILDER_SETTER_BASE(*this, const TIHTemplateType& ,MemFuncName, MemberVarName)

/*!
*	@brief ChainBuilder 를 위한 메크로 함수
*	@detail const 를 제거하고 리턴하게 해주는 변수이다. 
*/
#define TIHMACRO_CHAINBUILDER_SETTER_NONCONST( MemberVarName )\
TIHMACRO_CHAINBUILDER_SETTER_BASE(*this,TIHTemplateType& , MemberVarName, MemberVarName)

/*!
*	@brief ChainBuilder 를 위한 메크로 함수
*	@detail const 를 제거하고 함수이름도 변경할 수 있는 메크로
*/
#define TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME_NONCONST( MemFuncName, MemberVarName )\
TIHMACRO_CHAINBUILDER_SETTER_BASE(*this,TIHTemplateType& , MemFuncName, MemberVarName)

/*!
*	@brief ChainBuilder 를 위한 메크로 함수
*	@detail 자동으로 자료형을 추측해주는 녀석, 참고로 변수 자료형을 복사형이든 뭐든 만들어주는데 주로 복사형으로 만들듯
*/
#define TIHMACRO_CHAINBUILDER_SETTER_AUTO( MemberVarName )\
TIHMACRO_CHAINBUILDER_SETTER_BASE(*this,TIHTemplateType , MemberVarName, MemberVarName)


#define TIHMACRO_CHAINBUILDER_COMMAND_CAST( castTemplateType, cmdTarget )\
cmdTarget = new castTemplateType();\
static_cast<castTemplateType*>(cmdBase)->SetCommandFeature(GetCastedBuildersCommandData< castTemplateType##Datas >())

/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Template Macros

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
template<typename TIHTemplateType>
bool SafeDeletePtr(TIHTemplateType*& ptr)
{
	bool reValue = false;
	if (ptr != nullptr)
	{
		reValue = true;
		delete ptr;
		ptr = nullptr;
	}
	return reValue;
}
template<typename TIHTemplateType>
bool SafeDeletePtrArray(TIHTemplateType*& ptrArray)
{
	bool reValue = false;
	if (ptrArray != nullptr)
	{
		reValue = true;
		delete[] ptrArray;
		ptrArray = nullptr;
	}
	return reValue;
}
template<typename TIHTemplateType>
bool SafeDeletePtrConst(const TIHTemplateType*& ptrConst)
{
	bool reValue = false;
	TIHTemplateType* target = const_cast<TIHTemplateType*>(ptrConst);
	reValue = SafeDeletePtr(target);
	ptrConst = static_cast<const TIHTemplateType*>(0);
	return reValue;
}
template<typename TIHTemplateType>
bool SafeDeletePtrArrayConst(const TIHTemplateType*& ptrConst)
{
	bool reValue = false;
	TIHTemplateType* target = const_cast<TIHTemplateType*>(ptrConst);
	reValue = SafeDeletePtrArray(target);
	ptrConst = static_cast<const TIHTemplateType*>(0);
	return reValue;
}



/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Enums

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
/*!
*	@brief 
*	@detail 
*/
enum ETIHAsyncType : int8
{
	ETickPerFrame,			//	틱별로 나눠서 실행	
	ETaskOnMultiThread,		//	멀티쓰레드 별로 실행
};

/*!
*	@brief 
*	@detail 
*/
enum class ETIHMainState : int8
{
	EEmpty = 0,
	EInstantiated,
	EPooled,
	EInitialized,
	EExecuting,
	ESuspended,
	EWaiting,
	EFinalizing,
	EDestroyed,
	StateLength
};

enum ETIHReturn64Semantic : int64
{
	


};
enum class ETIHReturn32Semantic : int32
{
	Fail = -1,
	Void = 0,
	Success = 1,
};

/*!
*	@brief 이거는 커맨드 헤더에 대한 타입들을 모아놓은곳
*	@detail
*/
enum class ETIHCommandHeaderProtocols : int8
{
	ENotAssign = 0,

	ECreateAssignPool,
	ECreateNewAlloc,

	EServerConnect,
	EServerSend,
	EServerListen,
	EServerDisConnect,

	EDeleteRejectPool,
	EDeleteDestory,

	EModifyTransform,
	EModifyValue,

	EInOutReadAndSave,
	EInOutWriteAndModify,

	ETestDelay,

	MaxLength,
};
/*!
*	@brief 커맨드의 처리 방법에 대한 프로토콜
*	@detail 해당 커맨드를 어떤 함수를 사용해서 처리할것인가
*/
enum class ETIHCommandMethodProcessingProtocols : int8
{
	EStrategies = 0,
	EDelegates,
	EMultiThreading ,
};
/*!
*	@brief 커맨드의 진행 방법에 대한 프로토콜
*	@detail 해당 커맨드를 진행하는데 있어서 어떻게 할것인가.
*/
enum class ETIHCommandMethodProgressionProtocols : int8
{
	EContinue = 0,	//	하나 실행하고 다음 커맨드 실행
	ETickable,		//	하나 실행하고 나갔다가 다음 틱에 다음 커맨드 실행
	EReapeate ,		//	complete 든 error 든 나올때까지 계속 해당 커맨드를 반복
	EAsyncDonCare ,
};
enum class ETIHResultDetailProtocols : int8
{
	EEmpty = 0,
	EVoid,//= (int8)ETIHResultDetailProtocols::EEmpty,
	ENull,// = (int8)ETIHResultDetailProtocols::EEmpty,
	ENothing,// = (int8)ETIHResultDetailProtocols::EEmpty,

	ERegister,// = (int8)ETIHResultDetailProtocols::EEmpty + 1,//1

	ECheckAdd,
	EAdd,// = (int8)ETIHResultDetailProtocols::ERegister+1,//2
	EPush,// = (int8)ETIHResultDetailProtocols::EAdd,

	EInsert,// = (int8)ETIHResultDetailProtocols::EAdd + 1,//3

	EAssign,// = (int8)ETIHResultDetailProtocols::EInsert + 1,//4

	EPushBack,// = (int8)ETIHResultDetailProtocols::EAssign + 1,//5

	EPushFront,// = (int8)ETIHResultDetailProtocols::EPushBack + 1,//6

	EReserve,// = (int8)ETIHResultDetailProtocols::EPushFront + 1,//7
	EResize,// = (int8)ETIHResultDetailProtocols::EReserve,//7

	EContains,// = (int8)ETIHResultDetailProtocols::EReserve + 1,//8

	ETop,// = (int8)ETIHResultDetailProtocols::EContains + 1,//9
	EFront,// = (int8)ETIHResultDetailProtocols::ETop,

	EBack,// = (int8)ETIHResultDetailProtocols::ETop + 1,//10
	EBottom,// = (int8)ETIHResultDetailProtocols::EBack,

	EMax,// = (int8)ETIHResultDetailProtocols::EBottom + 1,//11
	ECapacity,// = (int8)ETIHResultDetailProtocols::EMax,

	ESize,//= (int8)ETIHResultDetailProtocols::EMax + 1,//12
	ENum,//= (int8)ETIHResultDetailProtocols::ESize,

	EPopFront,//= (int8)ETIHResultDetailProtocols::ESize + 1,//13

	EPopBack,//= (int8)ETIHResultDetailProtocols::EPopFront + 1,//14

	EClear,//= (int8)ETIHResultDetailProtocols::EPopBack + 1,//15

	EDestory,//= (int8)ETIHResultDetailProtocols::EClear + 1,//16

	ESearch,//= (int8)ETIHResultDetailProtocols::EDestory + 1,//17
	EFind,//= (int8)ETIHResultDetailProtocols::ESearch,

	MaxLength
};

enum class ETIHCommandResultBitMask : int8
{
	EOnExecuteLoop = 1 << 0,
	EOnNext = 1 << 2,
	EOnPopFornt = 1 << 3,
	EOnPopBack = 1 << 4,
	ECallingErrorFunction = 1 << 5,
	ECallingCompleteFunction = 1 << 6,
	EAsyncTask = -1 //이거 - 일거라 그냥 확인만 하면 됨.
};



union FUnionTIHCommandResult
{
	struct FTIHCommandResultDetail
	{
		int8 CommandResult0;
		int8 CommandResult1;

		int8 ProcessingResult0;//{NextCommand,PopFornt,ErrorCall}
		int8 ProcessingResult1;
		
		int32 SimpleResult;
	}ResultDetail;
	TIHReturn64 WholeData;
};


/*!
*	@brief 
*	@detail 
*/
union FUnionTIHStateValue
{
	struct FTIHStateValueDetail
	{
		char MainState;
		char SubState;
		char StateOption0;
		char StateOption1;
	}Detail;
	char ByteArray[4];
	int32 WholeThings;
};

/*!
*	@brief 
*	@detail 
*/
class FTIHState
{
public:
	FTIHState() :mStateValueDetail(0) {}
	~FTIHState(){}

	int32 mStateValueDetail;
protected:

private:
};
/*!
*	@brief AActor 의 Tag 와 호환이 되지만 wrap 을 한것뿐임
*	@detail 
*/
class FTIHTagWrapper
{
public:
	int32 AddTag(const FName& tag)
	{
		return mTags.Add(tag);
	};
	const TArray<FName>& GetArray()
	{
		return mTags;
	};
	void RemoveTagByIndex(int32 index)
	{
		mTags.RemoveAt(index);
	};


protected:

private:
	TMap<FName, int> mTagHashs;
	TArray<FName> mTags;
};
#pragma region TIHMeta

template<typename TIHTemplateType = int64>
class TTIHMetaWrapper
{
public:

private:
	
	
};

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
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commander Header

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
USTRUCT()
struct FTIHCommandHeader
{
	GENERATED_BODY()

	using CmdProtocolType = ETIHCommandHeaderProtocols;

	UPROPERTY()
	int8 Protocol;

	UPROPERTY()
	int8 ProtocolOption;

	UPROPERTY()
	int8 Option0;
	UPROPERTY()
	int8 Option1;

	TIHMACRO_CHAINBUILDER_SETTER(Protocol);
	TIHMACRO_CHAINBUILDER_SETTER(ProtocolOption);
	TIHMACRO_CHAINBUILDER_SETTER(Option0);
	TIHMACRO_CHAINBUILDER_SETTER(Option1);


	void RefreshForReuse()
	{
		Protocol = (int8)ETIHCommandHeaderProtocols::ENotAssign;
		ProtocolOption = 0;
		Option0 = 0;
		Option1 = 0;
	};
};



/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commander Method

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
USTRUCT()
struct FTIHCommandMethod
{
	GENERATED_BODY()
	/*

	*/
	UPROPERTY()
	int8 CommandExecutionProtocol;			//	{Strategies,Delegates,MultiThreading}
	UPROPERTY()
	int8 CommandSequenceProtocol;			//	{Continue,Reapeate,Async}
	UPROPERTY()
	int8 CommandCompleteIndex;
	UPROPERTY()
	int8 CommandAdditionalInfoIndex;

	FTIHCommandMethod() :
		CommandExecutionProtocol( (int8)ETIHCommandHeaderProtocols::ENotAssign ),
		CommandCompleteIndex(-1),
		CommandSequenceProtocol(-1),
		CommandAdditionalInfoIndex(-1)
	{
	};
	void RefreshForReuse()
	{
		CommandExecutionProtocol = (int8)ETIHCommandHeaderProtocols::ENotAssign;
		CommandCompleteIndex = -1;
		CommandSequenceProtocol = -1;
		CommandAdditionalInfoIndex = -1;
	};
	
	
	TIHMACRO_CHAINBUILDER_SETTER(CommandExecutionProtocol);
	TIHMACRO_CHAINBUILDER_SETTER(CommandCompleteIndex);
	TIHMACRO_CHAINBUILDER_SETTER(CommandSequenceProtocol);
	TIHMACRO_CHAINBUILDER_SETTER(CommandAdditionalInfoIndex);

	
};

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
class FTIHCommandBase
{
public:
	const FTIHCommandHeader& GetCommandHeader()
	{
		return mCmdHeader;
	}
	const FTIHCommandMethod& GetCommandMethod()
	{
		return mCmdMethod;
	}

	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CommandHeader,mCmdHeader);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CommandMethod, mCmdMethod);

	FTIHCommandBase() {};

	virtual ~FTIHCommandBase() = 0 
	{}

	/*
		strategy 에 데이터를 넣고 이걸 처리할거임. 
		단순하게 header 와 method 만 보고 해당 부분으로 데이터를 넘길거고
		strategy 에서 
	*/
protected:
	FTIHCommandHeader mCmdHeader;
	FTIHCommandMethod mCmdMethod;
private:

};

/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command Data Board

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
class FTIHCommandDataBoard
{
public:

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
		TIHReturn64 WholeData;
	};

#pragma region Reserve
/*

	나중에 이전의 데이터가 있으면 어떻게 할지에 대해 처리하자
		1안은 이동
		2안은 삭제
*/
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

class FTIHChainBuilderBase
{
public:
	void SetRWState(bool rwState)
	{
		mRWState = rwState;
	}
	void OnToggleRWState()
	{
		mRWState = !mRWState;
	}
	bool GetRWState()
	{
		return mRWState;
	}
private:
	bool mRWState;
};

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
template<typename TIHTemplateType>
class TTIHChainBuilder : public FTIHChainBuilderBase
{
public:
	union FUnionTIHChainBuilderLog
	{
		struct FTIHChainBuilderLogDetail
		{
			int8 CreateResult;
			int8 SetResult0;
			int8 SetResult1;
			int8 SetResult2;

			int8 SetResult3;
			int8 SetResult4;
			int8 SetResult5;
			int8 SetResult6;
		}LogDetail;
		TIHReturn64 WholeData;
	};
	enum ETIHChainBuilderLogResultMask : int8
	{
		EVoid = 0,
		ECreateChain_Success = 1 << 0,
		ECreateChain_PrevDataExist = 1 << 1,
	};

	TIHTemplateType& GenerateChain()
	{
		FUnionTIHChainBuilderLog reusltLog;
		reusltLog.WholeData = 0;

		if(mTempChainBuilderData != nullptr)
		{
			reusltLog.LogDetail.CreateResult |= (int8)ETIHChainBuilderLogResultMask::ECreateChain_PrevDataExist;
			SafeDeletePtr(mTempChainBuilderData);
		}
		
		mTempChainBuilderData = new TIHTemplateType();
		mMakeLog |= (int8)ETIHChainBuilderLogResultMask::ECreateChain_Success;//	이거를 통합할 생각을 하자.
		return *mTempChainBuilderData;
	}
	TIHTemplateType& BeginChain()
	{
		return GenerateChain();
	}
	
	/*!
	*	@brief 일반적인 상태에서 들고오는것
	*	@detail 
	*/
	TIHTemplateType* GetGenrateChain()
	{
		return mTempChainBuilderData;
	}
	/*!
	*	@brief chain 종료시 호출하는것
	*	@detail 
	*/
	TIHTemplateType* EndGenerateChain()
	{
		TIHTemplateType* temp = mTempChainBuilderData;
		mTempChainBuilderData = nullptr;
		return temp;
	}
	
	
	//	chain 자료형을 cmdBase 에 넣는 방법을 연구하자.
public:
	TIHReturn64 mMakeLog;
	TIHTemplateType* mTempChainBuilderData;
};

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
template<typename TIHTemplateType>
class TTIHCommand : public FTIHCommandBase
{
public:
	TTIHCommand();
	virtual ~TTIHCommand();

	TIHTemplateType& GetCommandFeature()
	{
		return mCmdFeature;
	}
	
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME( CommandFeature, mCmdFeature);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME( CompleteCallBack, mCompleteCallBack);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME( ErrorCallBack, mErrorCallBack);

private:
	//	이걸 왜 포인터로 했더라...
	//	포인터 제거
	TIHTemplateType mCmdFeature;
	
	FTIHCommandCallBack mCompleteCallBack;
	FTIHCommandCallBack mErrorCallBack;
};

template<typename TIHTemplateType>
TTIHCommand<TIHTemplateType>::~TTIHCommand()
{
	//SafeDeletePtr(mCmdFeature);
}

template<typename TIHTemplateType>
TTIHCommand<TIHTemplateType>::TTIHCommand()
{
	
}
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
public:
	FTIHCommandTestDelay() {};
	virtual ~FTIHCommandTestDelay() {};
};
/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandCreateAssignPoolDatas
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
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
class FTIHCommandCreateAssignPool : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandCreateAssignPool();
	virtual ~FTIHCommandCreateAssignPool();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandCreateNewAllocDatas
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandCreateNewAllocDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int8 CreateType;
	UPROPERTY()
	int8 NewAllocType;
	UPROPERTY()
	int8 NewAllocOption0;
	UPROPERTY()
	int8 NewAllocOption1;

	UPROPERTY()
	int16 NewAllocCount;
	UPROPERTY()
	int16 NewAllocOption;

	TIHMACRO_CHAINBUILDER_SETTER(CreateType);
	TIHMACRO_CHAINBUILDER_SETTER(NewAllocType);
	TIHMACRO_CHAINBUILDER_SETTER(NewAllocOption0);
	TIHMACRO_CHAINBUILDER_SETTER(NewAllocOption1);
	TIHMACRO_CHAINBUILDER_SETTER(NewAllocCount);
	TIHMACRO_CHAINBUILDER_SETTER(NewAllocOption);
};
class FTIHCommandCreateNewAlloc : public TTIHCommand<FTIHCommandCreateNewAllocDatas>
{
public:
	FTIHCommandCreateNewAlloc();
	virtual ~FTIHCommandCreateNewAlloc();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerConnect
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandServerConnect : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandServerConnect();
	virtual ~FTIHCommandServerConnect();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerSend
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
class FTIHCommandServerSend : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandServerSend();
	virtual ~FTIHCommandServerSend();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerListen
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandServerListen : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandServerListen();
	virtual ~FTIHCommandServerListen();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerDisConnect
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandServerDisConnect : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandServerDisConnect();
	virtual ~FTIHCommandServerDisConnect();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandDeleteRejectPool
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandDeleteRejectPool : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandDeleteRejectPool();
	virtual ~FTIHCommandDeleteRejectPool();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommanEDeleteDestory
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommanEDeleteDestory : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommanEDeleteDestory();
	virtual ~FTIHCommanEDeleteDestory();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandModifyTransform
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandModifyTransform : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandModifyTransform();
	virtual ~FTIHCommandModifyTransform();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandModifyValue
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandModifyValue : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandModifyValue();
	virtual ~FTIHCommandModifyValue();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandInOutReadAndSave
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandInOutReadAndSave : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandInOutReadAndSave();
	virtual ~FTIHCommandInOutReadAndSave();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandInOutWriteAndModify
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/

class FTIHCommandInOutWriteAndModify : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
public:
	FTIHCommandInOutWriteAndModify();
	virtual ~FTIHCommandInOutWriteAndModify();
};

/*!
	*	@brief commandFactoryConfigure
	*	@detail 언리얼 시스템중 하나인 configure 시스템을 사용하기위한 클래스 나중에 설정해주자,
	*/


	/*
		============================================================================================================================================================
		============================================================================================================================================================
		----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																		Command Factory Configure

		----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
		============================================================================================================================================================
		============================================================================================================================================================
	*/
UCLASS()
class UTIHCommandFactoryConfigure : public UObject
{
	GENERATED_BODY()
public:
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(FactorySettingType, mFactorySettingType);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(FactorySettingTypeOption, mFactorySettingTypeOption);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(FactoryReserveSize, mFactoryReserveSize);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRogginEnabledOnRuntime, mIsRogginEnabledOnRuntime);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRoggingEnabledOnSaveing, mIsRoggingEnabledOnSaveing);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRoggingEnabledPassToServer, mIsRoggingEnabledPassToServer);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRoggingEnabledForDebuging, mIsRoggingEnabledForDebuging);

	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(RoggingSavePath, mRoggingSavePath);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(RoggingServerUrl, mRoggingServerUrl);

	int16 GetCommandFactoryReserveSize()
	{
		return mFactoryReserveSize;
	}
	/*!
	*	@brief 이걸 거치면 최소한의 크기나 뭐 그런것들이 아무리 config 셋팅을 하더라도 돌아온다. 
	*	@detail 컨스트로 셋팅하는것임.
	*/
	virtual TIHReturn64 CheckConstantSetting();
	bool IsChangePossibleConfig()
	{
		return mIsPossibleChangeConfig;
	}

private:
	UPROPERTY()
	int8 mFactorySettingType;

	UPROPERTY()
	int8 mFactorySettingTypeOption;

	UPROPERTY()
	int16 mFactoryReserveSize;

	UPROPERTY()
	bool mIsRogginEnabledOnRuntime;
	UPROPERTY()
	bool mIsRoggingEnabledOnSaveing;
	UPROPERTY()
	bool mIsRoggingEnabledPassToServer;
	UPROPERTY()
	bool mIsRoggingEnabledForDebuging;

	UPROPERTY()
	FString mRoggingSavePath;
	UPROPERTY()
	FString mRoggingServerUrl;

	bool mIsPossibleChangeConfig;
};
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command Factory Builders

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
struct FTIHCommandFactoryBuilders
{
	FTIHChainBuilderBase* CommandHeaderBuilder;
	FTIHChainBuilderBase* CommandMethodBuilder;
	FTIHChainBuilderBase* CommandDataBuilder;

	TIHMACRO_CHAINBUILDER_SETTER_AUTO(CommandHeaderBuilder);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(CommandMethodBuilder);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(CommandDataBuilder);

	FTIHCommandFactoryBuilders():
		CommandHeaderBuilder(nullptr),
		CommandMethodBuilder(nullptr),
		CommandDataBuilder(nullptr)
	{
	}
	FTIHCommandFactoryBuilders
	(
		FTIHChainBuilderBase* commanHeader,
		FTIHChainBuilderBase* commandMethod,
		FTIHChainBuilderBase* commandData
	):
		
		CommandHeaderBuilder(commanHeader),
		CommandMethodBuilder(commandMethod),
		CommandDataBuilder(commandData)
	{
	}
	void SetRWStates(bool rwState)
	{
		if (CommandHeaderBuilder != nullptr)
		{
			CommandHeaderBuilder->SetRWState(rwState);
		}
		if (CommandMethodBuilder != nullptr)
		{
			CommandMethodBuilder->SetRWState(rwState);
		}
		if (CommandDataBuilder != nullptr)
		{
			CommandDataBuilder->SetRWState(rwState);
		}
	}

	void RefreshForCommandHeaderBuilderReuse()
	{
		if(CommandHeaderBuilder != nullptr)
		{
			TTIHChainBuilder<FTIHCommandHeader>* castData = static_cast<TTIHChainBuilder<FTIHCommandHeader>*>(CommandHeaderBuilder);
			if(castData != nullptr && castData->GetGenrateChain() != nullptr)
			{
				castData->GetGenrateChain()->RefreshForReuse();
			}
		}
	}
	void RefreshForCommandMethodBuilderReuse()
	{
		if (CommandHeaderBuilder != nullptr)
		{
			TTIHChainBuilder<FTIHCommandMethod>* castData = static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(CommandHeaderBuilder);
			if (castData != nullptr && castData->GetGenrateChain() != nullptr)
			{
				castData->GetGenrateChain()->RefreshForReuse();
			}
		}
	}
	void ReallocForCommandDataBuilderReuse()
	{
		SafeDeletePtr(CommandDataBuilder);
	}

	void RefreshForCommandBuilders()
	{
		RefreshForCommandHeaderBuilderReuse();
		RefreshForCommandMethodBuilderReuse();
		ReallocForCommandDataBuilderReuse();
	}

	bool IsNewAllocDone()
	{
		if (CommandHeaderBuilder == nullptr)
		{
			return false;
		}
		if (CommandMethodBuilder == nullptr)
		{
			return false;
		}
		if (CommandDataBuilder == nullptr)
		{
			return false;
		}
		return true;
	}

	const bool ClearBuilderPtrs()
	{
		bool reValue[3] = {};
		SafeDeletePtr(CommandHeaderBuilder);
		SafeDeletePtr(CommandMethodBuilder);
		SafeDeletePtr(CommandDataBuilder);
		return ((reValue[0] == true) && (reValue[1] == true) && (reValue[2] == true));
	}

	~FTIHCommandFactoryBuilders()
	{
		SafeDeletePtr(CommandHeaderBuilder);
		SafeDeletePtr(CommandMethodBuilder);
		SafeDeletePtr(CommandDataBuilder);
	}
};

/*!
*	@brief 이거 그냥 큐로 바꿀까....
*	@detail 
*/
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command Factory Chain Builder Pool

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
struct FTIHChainBuilderPool
{
	TDeque< FTIHChainBuilderBase*> ChainPtrsQueue;
	FTIHChainBuilderPool();
	~FTIHChainBuilderPool()
	{
		int32 queNum = ChainPtrsQueue.Num();
		for(int32 i = queNum-1 ; -1 < i; --i)
		{
			SafeDeletePtr(ChainPtrsQueue[i]);
		}
		ChainPtrsQueue.Empty();
	}
};
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Command Factory

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
class FTIHCommandFactory
{
public:
	union FUnionTIHCommandFactoryResult
	{
		struct FTIHCommandFactoryResultDetail
		{
			int8 Protocol;
			int8 ProtocolOption;
			int16 SaveIndex;

			TIHReturn32 SimpleResult;
		}ResultDetail;
		struct FTIHCommandFactoryAssignResultDetail
		{
			int8 Protocol;
			int8 AssignSemantic;
			int16 AssignIndex;
			TIHReturn32 SimpleResult;
		}AssignDetail;

		struct FTIHCommandFactoryReserveResultDetail
		{
			int8 Protocol;
			int8 Padding;
			int16 PreMax;
			TIHReturn32 SimpleResult;
		}ReserveDetail;
		struct FTIHCommandFactoryRegistResultDetail
		{
			int8 Protocol;		
			int8 ProtocolOption;
			int8 RegistResult;
			int8 RegistResultOption;

			int16 RegistIndex;
			int16 Padding;

		}RegistDetail;

		TIHReturn64 WholeData;
	};

	/*
		HelperFunc
	
	
	*/

	void CopyBuilderToCommandHeader(const FTIHCommandHeader& source, FTIHCommandBase* target)
	{
		target->SetCommandHeader(source);
	}
	void CopyBuilderToCommandMethod(const FTIHCommandMethod& source, FTIHCommandBase* target)
	{
		target->SetCommandMethod(source);
	}
	void CopyBuilderToCommand(const FTIHCommandHeader& headerSource,const FTIHCommandMethod& methodSource, FTIHCommandBase* target)
	{
		CopyBuilderToCommandHeader(headerSource,target);
		CopyBuilderToCommandMethod(methodSource,target);
	}

	TTIHChainBuilder<FTIHCommandHeader>& SetCommanHeaderMetaDataBuilder()
	{
		return *static_cast<TTIHChainBuilder<FTIHCommandHeader>*>(mBuildersArray[mCurrBuilderIndex].CommandHeaderBuilder);
	}
	FTIHCommandHeader& ChainBuildCommandHeader()
	{
		return SetCommanHeaderMetaDataBuilder().BeginChain();
	}
	TTIHChainBuilder<FTIHCommandMethod>& SetCommandMethodMetaDataBuilder()
	{
		return *static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(mBuildersArray[mCurrBuilderIndex].CommandMethodBuilder);
	}
	FTIHCommandMethod&  ChainBuildCommandMethod()
	{
		return SetCommandMethodMetaDataBuilder().BeginChain();
	}
	template<typename TIHTemplateCmdDataType >
	TTIHChainBuilder<TIHTemplateCmdDataType>& SetCommandDataMetaDataBuilderTemplate()
	{
		uint32 typeHash = typeid(TIHTemplateCmdDataType).hash_code();
		FTIHChainBuilderBase* target = nullptr;
		if(mCommandDataBuilderPool.Contains(typeHash) == false)
		{
			mCommandDataBuilderPool.Add(typeHash, FTIHChainBuilderPool());
		}

		TDeque<FTIHChainBuilderBase*>& builderQue = mCommandDataBuilderPool[typeHash].ChainPtrsQueue;
		int32 queNum = builderQue.Num();

		if(queNum ==0)
		{
			mCommandDataBuilderPool[typeHash].ChainPtrsQueue.PushLast(CreateChainBuilderPtrCommandData<TIHTemplateCmdDataType>());
		}
		
		target = builderQue.Last();
		builderQue.PopLast();

		mBuildersArray[mCurrBuilderIndex].CommandDataBuilder = target;

		return *static_cast<TTIHChainBuilder<TIHTemplateCmdDataType>*>(mBuildersArray[mCurrBuilderIndex].CommandDataBuilder);
	}
	template<typename TIHTemplateCmdDataType >
	TIHTemplateCmdDataType& ChainBuildCommandData()
	{
		return SetCommandDataMetaDataBuilderTemplate<TIHTemplateCmdDataType>().BegineChain();
	}

#pragma region Generate CommandMetaData

	//	만약 새롭게 할당해야하면 할당하고 아니면 다음으로 넘어가는 기능이지 


	//template<typename TIHTemplateType>
	//TIHReturn64 BeginRegistCommandMetaDataUseTemp();
	/*
			지금 인덱스의 builders 가 유효한지확인
				지금 용량이 config안의 용량보다 보다 작은가?
					작다면 아직 용량이 다찬게 아니기때문에 재사용하지 않는다!!(중요)
			접근했을때 생기는 에러
			인덱스오버이슈
			초기화 이슈
				reserve 를 먼저했을때 생기는 이슈이다.
				언리얼에서는 add 로 해결한다
				해결방법
					reserve 를 하고 add 를 전부해준다
						이거는 처음만 힘들지 사실은 제일 좋음, 이게 오브젝트 풀링임.
							정	어차피 header 든 data 든 모두 빈상태라 한번더 만들어야 되는거임
							반	근데 reserve 는 메모리 영역을 초기화 하는거라면 이건 직접 만들어야하고 구지 add 를 모두해줘야함
							합	그렇지만 reserve 는 매번이루어지는게 아닌 factoryConfig 의 설정이 변경되었을때만 이루어진다
								그래서 매번 add 를 돌려줘도 상관없을거 같다. 무엇보다 어차피 data 때문이라도 매번 new 를 하는게 생길텐데
								그냥 그렇게 하자. 그럼 config 를 셋팅하고 거기에 실행기능을 만들자. 즉 명시적으로 ReSetting 을 해야하게 하자
					결과를 토대로 설계를 하자면
						reserve 가 이루어지면 해당 양만큼 add 를 진행해준다
						이제 모든 접근이 자유로워졌다.
						커맨더 헤더와 메소드는 여러개 만들어 놓고 다른곳에서 관리 안해도 괜찮다.
						data 도 만약 해당 typeid 에해당하는 hash 가 없을경우 

			rw이슈
	*/
	TIHReturn64 BeginChainBuild();
	TIHReturn64 PrevBuilders();
	TIHReturn64 JumpBuilders(int32 index);
	TIHReturn64 NextBuilders();
	TIHReturn64 EndChainBuild();

	const FTIHCommandHeader GetCurrBuildersCommandHeader()
	{
		return GetCastedBuildersCommandHeader(mCurrBuilderIndex);
	}
	const FTIHCommandHeader GetCastedBuildersCommandHeader(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<FTIHCommandHeader>*>(mBuildersArray[index].CommandHeaderBuilder)).GetGenrateChain();
	}
	const FTIHCommandMethod GetCurrBuildersCommandMethod()
	{
		return GetCastedBuildersCommandMethod(mCurrBuilderIndex);
	}
	const FTIHCommandMethod GetCastedBuildersCommandMethod(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(mBuildersArray[index].CommandMethodBuilder)).GetGenrateChain();
	}
	
	template<typename TIHTemplateType>
	const TIHTemplateType GetCastedBuildersCommandData()
	{
		return *(*static_cast<TTIHChainBuilder<TIHTemplateType>*>(mBuildersArray[index].CommandDataBuilder)).GetGenrateChain();
	}


	/*
		GetCurrBuildersCommandHeader
		GetCurrBuildersCommandMethod
		GetCurrBuildersCommandData
	
	*/

	



#pragma endregion
	TIHReturn64 ReserveArrayForCommandMetaDatasByGrowing();
	//	이거는 제거를 하자.
	TIHReturn64 AssignToArrayForCommandMetaData(FTIHChainBuilderBase* data);

	void RejectCommandData(FTIHChainBuilderBase*& data);

	virtual TIHReturn64 PrepareCommandFactory();

	//	사전설정
	virtual TIHReturn64 PrevRegistCommand();

	//	생성시 전략
	virtual TIHReturn64 InstantiateCommandsInMetaArray(FTIHCommander& commander) = 0;
	
	 

	FTIHCommandFactory();
	virtual ~FTIHCommandFactory() = 0
	{

	};

	FTIHChainBuilderBase* CreateChainBuilderPtrCommandHeader()
	{
		return new TTIHChainBuilder<FTIHCommandHeader>();
	}
	FTIHChainBuilderBase* CreateChainBuilderPtrCommandMethod()
	{
		return new TTIHChainBuilder<FTIHCommandMethod>();
	}
	template<typename TIHTemplateType>
	FTIHChainBuilderBase* CreateChainBuilderPtrCommandData()
	{
		return new TTIHChainBuilder<TIHTemplateType>();
	}
	UTIHCommandFactoryConfigure& CommandFactoryConfig()
	{
		return *mFactoryConfigObject.Get();
	}

	int16 GetCommandFactoryReserveSize()
	{
		return mFactoryConfigObject.Get()->GetCommandFactoryReserveSize();
	}
	bool IsChangePossibleConfig()
	{
		return mFactoryConfigObject.Get()->IsChangePossibleConfig();
	}

	TIHReturn64 SearchReserveIndex();

protected:

	int32 mCurrBuilderIndex;
	int32 mCurrBuilderMoveIndex;
	TArray< FTIHCommandFactoryBuilders> mBuildersArray;

	int32 mCurrTempBuilderIndex;
	TArray< FTIHChainBuilderBase*> mTempBuilders;
	TUniquePtr<UTIHCommandFactoryConfigure> mFactoryConfigObject;

	TMap<uint32, FTIHChainBuilderPool> mCommandDataBuilderPool;
	
private:
	//template<typename TIHTemplateCmdBuilder>
	//TTIHChainBuilder<TIHTemplateCmdBuilder>& SetCommandBuilder(FTIHChainBuilderBase*& builderPtr)
	//{
	//	TTIHChainBuilder<TIHTemplateCmdBuilder>* chainBuilder = new TTIHChainBuilder<TIHTemplateCmdBuilder>();
	//	SafeDeletePtr(builderPtr);//	이거는 아예 처음부터 만든다는건데, 만약 커맨드가 락이 안걸렸다면?
	//	builderPtr = chainBuilder;	//	downCast
	//	return *static_cast< TTIHChainBuilder<TIHTemplateCmdBuilder>* >(builderPtr);
	//}
};


class FTIHCommandFactoryForDefaultStation : public FTIHCommandFactory
{
public:
	TIHReturn64 InstantiateCommandsInMetaArray(FTIHCommander& commander) override;
};

class FTIHCommandList
{
public:
	int32 mCurCommandQueueIndex;
	
	TDeque<FTIHCommandBase*> mCommandQueue;

	TArray< FTIHCommandBase*> mDeleteCandidates;

	union FUnionTIHCommandListResult
	{
		struct FTIHCommandListClearResultDetail 
		{
			int8 Protocol;
			int8 Padding;
			int16 NullCount;

			int16 DeleteCount;
			int16 EndIndex;
		}ClearDetail;
		struct FTIHCommandListReserveResultDetail
		{
			int8 Protocol;
			int8 Padding;
			int16 PreMax;
			TIHReturn32 SimpleResult;
		}ReserveDetail;
		TIHReturn64 WholeData;
	};


	FTIHCommandBase* operator[](int32 index)
	{
		return mCommandQueue[index];
	}

	TIHReturn64 ReserveCommandQueue(int32 size)
	{
		FUnionTIHCommandListResult reValue;

		reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::EReserve;
		reValue.ReserveDetail.PreMax = mCommandQueue.Max();


		return reValue.WholeData;
	}
	TIHReturn64 ClearCommandForcefully(int32 itorIndex)
	{
		FUnionTIHCommandListResult reValue;
		reValue.WholeData = 0;
		FTIHCommandBase* target = mCommandQueue[itorIndex];
		if(target != nullptr)
		{
			reValue.ClearDetail.DeleteCount = 1;
			delete target;
		}
		else
		{
			reValue.ClearDetail.NullCount = 1;
		}
		return reValue.WholeData;
	}
	/*!
	*	@brief 모든 리스트를 삭제하는 작업
	*	@detail 
	*/
	TIHReturn64 ClearCommandQueuefully()
	{
		//TIHReturn64 reValue = 0;
		FUnionTIHCommandListResult reValue;
		FUnionTIHCommandListResult temp;
		int32 itorIndex = mCommandQueue.Num();
		for(; -1 < itorIndex; --itorIndex)
		{
			temp.WholeData = ClearCommandForcefully(itorIndex);
			reValue.ClearDetail.NullCount += temp.ClearDetail.NullCount;
			reValue.ClearDetail.DeleteCount += temp.ClearDetail.DeleteCount;
		}
		
		if(itorIndex < 0)
		{
			//	여기는 수정을 해야한다. 왜냐하면 여기가 잘못되어진 에러처리를 하는 곳이기 때문이다.
			reValue.ClearDetail.EndIndex = itorIndex + 1;
		}
		mCommandQueue.Reset();
		mCurCommandQueueIndex = 0;
		return reValue.WholeData;
	}
	FTIHCommandBase* GetCurrentCommand()
	{
		FTIHCommandBase* cmdData = nullptr;
		if (mCurCommandQueueIndex < mCommandQueue.Num())
		{
			cmdData = mCommandQueue[mCurCommandQueueIndex];
		}
		return cmdData;
	}
	FTIHCommandBase* NextCommand()
	{
		FTIHCommandBase* cmdData = nullptr;
		if(mCurCommandQueueIndex < mCommandQueue.Num())
		{
			cmdData = mCommandQueue[mCurCommandQueueIndex];
			++mCurCommandQueueIndex;
		}
		return cmdData;
	}
	TIHReturn64 PopFrontCommand()
	{
		FUnionTIHCommandListResult reValue;
		
		mDeleteCandidates.Add(mCommandQueue[mCurCommandQueueIndex]);
		mCommandQueue[mCurCommandQueueIndex] = nullptr;

		if(mCommandListClearanceCount <= mDeleteCandidates.Num())
		{
			ClearanceCommandQueue();
		}
		return reValue.WholeData;
	}
	TIHReturn64 PopBackCommand()
	{
		return 0;
	}

	int32 PushBackCommandPtr(FTIHCommandBase* cmdPtr)
	{
		//	여기에 이제 max 가 찼을때 어떻게 할지 선택해야함.
		int32 reValue = mCommandQueue.Num();
		mCommandQueue.PushLast(cmdPtr);
		return reValue;
	}
	int32 GetCurrentCommandQueueIndex()
	{
		return mCurCommandQueueIndex;
	}

	bool IsLastCommand()
	{
		bool reValue = (mCommandQueue.Num() == mCurCommandQueueIndex);
		return reValue;
	}
private:
	int32 mCommandListClearanceCount;
	/*!
	*	@brief 삭제목록이 꽉차면 그걸 정해진 수만큼 제거한다.
	*	@detail 
	*/
	void ClearanceCommandQueue()
	{
		int32 lastIndex = mDeleteCandidates.Num() - 1;
		int32 deleteCount = 0;
		for(;-1 < lastIndex && deleteCount < mCommandListClearanceCount; --lastIndex,++deleteCount)
		{
			FTIHCommandBase* target = mDeleteCandidates[lastIndex];
			SafeDeletePtr(target);
			target = nullptr;
			mDeleteCandidates.RemoveAt(lastIndex);
		}
	}

};
#pragma region Command Strategy

template<typename TIHTemplateType>
class FTIHCommandStrategyCRTP
{
public:
	FTIHCommandStrategyCRTP() : mSelfCRTP(this)
	{}
	virtual ~FTIHCommandStrategyCRTP();
protected:
	TIHTemplateType* mSelfCRTP;
};


class FTIHCommanderStrategyTestDelay :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyTestDelay>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};
class FTIHCommanderStrategyCreateAssignPool :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyCreateAssignPool>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};
class FTIHCommanderStrategyCreateNewAlloc :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyCreateNewAlloc>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerConnect :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerConnect>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerSend :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerSend>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerListen :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerListen>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerDisConnect :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerDisConnect>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyDeleteRejectPool :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyDeleteRejectPool>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyDeleteDestory :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyDeleteDestory>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyModifyTransform :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyModifyTransform>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyModifyValue :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyModifyValue>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyInOutReadAndSave :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyInOutReadAndSave>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyInOutWriteAndModify :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyInOutWriteAndModify>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};





#pragma endregion
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Commanderer

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/
/*!
*	@brief 커맨드 의 진행에 대한 정보를 담고있는 클래스
*	@detail 
*/
class FTIHCommandExecutionState
{
public:

	const bool& CheckExecuteCommanderLoop()
	{
		return mExecuteCommaderLoop;
	}
	void StopCommaderLoop()
	{
		mExecuteCommaderLoop = false;
	}
	void StartCommanderLoop()
	{
		mExecuteCommaderLoop = true;
	}

private:
	bool mExecuteCommaderLoop;

	int32 mPrevCommandIndex;

	int32 mCurrCommandState;


};

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


class FTIHCommander
{
public:
	int32 mCurrentCommandListIndex;
	int32 mCurrMainCmdListIndex;
	TArray<FTIHCommandList> mCommandLists;

	FTIHCommandShareBoard mShareBoard;
	//TUniquePtr<FTIHCommandShareBoard> mShareBoard;

	FTIHCommandResultBoard mResultBoard;

	// cmd state 로 빼야함.
	bool mIsCommandExecuteLoop; 
	int32 mCurrCommandState;
	int32 mCurrCommandListIndex;
	int32 mCurrCommandQueueIndex;

	FTIHCommandExecutionState mCommaderExecutionState;

	FTIHCommanderStrategyTestDelay* mStrategyTestDelay;
	FTIHCommanderStrategyCreateNewAlloc* mStrategyCreateNewAlloc;
	FTIHCommanderStrategyCreateAssignPool* mStrategyCreateAssignPool;
	FTIHCommanderStrategyServerConnect* mStrategyServerConnect;
	FTIHCommanderStrategyServerSend* mStrategyServerSend;
	FTIHCommanderStrategyServerListen* mStrategyServerListen;
	FTIHCommanderStrategyServerDisConnect* mStrategyServerDisConnect;
	FTIHCommanderStrategyDeleteRejectPool* mStrategyDeleteRejectPool;
	FTIHCommanderStrategyDeleteDestory* mStrategyDeleteDestory;
	FTIHCommanderStrategyModifyTransform* mStrategyModifyTransform;
	FTIHCommanderStrategyModifyValue* mStrategyModifyValue;
	FTIHCommanderStrategyInOutReadAndSave* mStrategyInOutReadAndSave;
	FTIHCommanderStrategyInOutWriteAndModify* mStrategyInOutWriteAndModify;

	void TestSettingCommandList();

	FTIHCommandExecutionState& GetCommandExecutionState()
	{
		return mCommaderExecutionState;
	}

	FTIHCommandList& GetCommandList()
	{
		return mCommandLists[mCurrMainCmdListIndex];
	}

	TIHReturn64 ExecuteCommands();
	TIHReturn64 ExecuteCommandDirect(FTIHCommandBase* curCommand);

	template<typename TIHTemplateType>
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandStrategyCRTP<TIHTemplateType>& target, FTIHCommandBase* cmdBase)
	{
		return target.ExecuteStrategy(cmdBase);
	}
	//
	TArray<TFunction<TIHReturn64(FTIHCommandBase* )>> mCompleteFunctions;

	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* primitiveCmd);
	TIHReturn64 SequenceCommand(TIHReturn64 result,FTIHCommandBase* primitiveCmd);

	/*!
	*	@brief 이거 만약 실행할 call back 함수가 있으면 해당 인덱스안에 있는 
	*	@detail 
	*/
	TIHReturn64 CheckCallingCompleteFunctions(FTIHCommandBase* primitiveCmd);

	TIHReturn64 CheckCallingErrorFunctions(FTIHCommandBase* primitiveCmd);
	
};



#pragma endregion 
//-------
class FTIHManagedObjectComposite
{
public:
	FTIHManagedObjectComposite() {};
	virtual ~FTIHManagedObjectComposite() {};

	FTIHManagedObjectComponent* operator[](int32 index)
	{
		if(-1 < index && index < mComponentArray.Num())
		{
			return mComponentArray[index].Get();
		}
		return nullptr;
	}
	FTIHManagedObjectComponent* operator[](FName index)
	{
		bool isContain = mComponentHash.Contains(index);
		if(isContain == true)
		{
			int32 arrayIndex = mComponentHash[index];
			return this->operator[](arrayIndex);
		}
		else
		{
			return nullptr;
		}
	}
	template<typename TIHTemplateType>
	TIHReturn64 AddComponet();

protected:
	
private:
	TMap<FName, int32> mComponentHash;
	TArray< TUniquePtr<FTIHManagedObjectComponent>> mComponentArray;
};

class FTIHManagedObjectComponent : public FTIHManagedObjectComposite
{

};


/*!
*	@brief 
*	@detail 
*/
class FTIHManagedObjectBase
{
public:

	FTIHManagedObjectBase() {};
	virtual ~FTIHManagedObjectBase() {};

	FTIHState mObjectState;
	FTIHTagWrapper mManagedTag;
	FTIHManagedObjectComposite mManagedComposite;
private:
};

template<typename TIHTemplateType = FTIHManagedObjectBase>
class TTIHManagedObject
{
public:
	TTIHManagedObject() {};
	virtual ~TTIHManagedObject() {};

	TSharedPtr< TIHTemplateType> mManagedTarget;

	TSharedPtr< TIHTemplateType> GetManagedTarget()
	{
		return mManagedTarget;
	}
};

/*!
*	@brief 메모리를 할당하고 삭제하는 역할을 한다. 
*	@detail 가상 트리구조뿐만 아니라 오브젝트의 ref 를 가지는데 흠...타입이 없는걸로 가야한다. 이때 command 패턴을 사용하는거지
*/
class FTIHManagedObjectPool
{
public:
	FTIHManagedObjectPool() {};
	~FTIHManagedObjectPool() {};

	//	일단은 여기에 전부 넣고 나중에 생각한다.
	TArray< FTIHManagedObjectBase*> mWholeManagedObjectIndices;
	TArray<int32> mStaticMeshManagedObjectIndices;
	TArray<int32> mSkeletalMeshManagedObjectstIndices;
	TArray<int32> mUIManagedObjecttIndices;
	
protected:

private:

};

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
class FTIHServer
{
public:

protected:

private:

protected:

private:

};

class FTIHNetwork
{
public:

	TIHReturn64 PrepareNetwork();

protected:

private:

protected:
	//TMap<FName, FTIHNetworkConfigure> mNetworks;
private:

};  



#pragma endregion
#pragma region TIH CRTP
template<typename TIHTemplateType>
class TTIHStationCRTP
{

public:
	TTIHStationCRTP(){}
	virtual ~TTIHStationCRTP() {};

	virtual TIHReturn64 InitDefaultFunc() 
	{
		return 0;
	};

	TIHTemplateType* mSelfPointer;

	static TIHTemplateType* SingleTone()
	{
		static TIHTemplateType* self = new TIHTemplateType();
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
	FTIHManagedObjectPool& GetObjectPool()
	{
		return *mGlobalObjectPool;
	}

protected:
	
private:

	

public:
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

	TUniquePtr<FTIHManagedObjectPool> mGlobalObjectPool;
	TUniquePtr<FTIHManagedObjectPool> mLocalObjectPool;

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