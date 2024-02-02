// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCore.generated.h"

#pragma region Typedefs

typedef int32 TIHReturn32;
typedef signed long long TIHReturn64;
typedef signed long long TIHSummary64;

using TIHHash64 = TIHReturn64;
using UEObjectHash64 = TIHReturn64;
using TIHObjectHash64 = TIHReturn64;

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


class	FTIHMngObj;
class	FTIHMngObjPool;
class	FTIHServer;
class	FTIHNetwork;

template<typename TIHTemplateType> class TTIHStationCRTP;

class	FTIHStationPolymorphInterface;
class	FTIHDefaultStation;


/*

# Naming Rule
+ 최대 32자를 넘지 말아야한다
	+ 축약형은 되도록이면 지양한다.
		+ 가독성과 유지보수성이 떨어지기 때문이다.
		+ 하지만 32자를 넘을거 같으면 공통되어진 내용을 축약형으로 만든다.
		+ 그리고 그것에 대한 내용을 꼭 기록한다
		+ 축약형은 무조건 정말 무조건 필요한 경우에만 사용을 한다.
		+ 그리고 축약형을 사용했을 시에는 공통되어진 모든것들을 축약형으로 바꿔준다. 
+ 앞에 TIH 를 꼭 붙여야한다
	+ 언리얼의 규칙을 제일 앞에 둔다.
		+ actor 베이스면 A
+ 클래스 이름은 카멜표기법으로 작성한다.
+ 언리얼의 이름 규칙을 되도록이면 따르도록 한다.
## 축약된 이름들
+ ManagedObject == MngObj

*/


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

//	이거 나중에 맨처음 include 하는 곳에 넣어서 변경을 하자. 
//어차피 헤더가 컴파일될때 변경이 될거니깐 reaverse oop 이거 패턴사용할거임. 
//지금은 좀 나중에 일단 형태만
#define TIHSETTING_STATION_IS_DEFAULT

#ifdef TIHSETTING_STATION_IS_NOT_DEFAULT

#define TIHSETTING_CURRURNT_STATION FTIHDefaultStation

#else TIHSETTING_STATION_IS_DEFAULT

#define TIHSETTING_CURRURNT_STATION FTIHDefaultStation

#endif

#define TIH_CURRURNT_STATION_CLASS \
TIHSETTING_CURRURNT_STATION

#define TIHSTATION_TYPE TIHSETTING_CURRURNT_STATION
#define TIHSTATION TIHSETTING_CURRURNT_STATION::GetSingle()

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

#define TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME( MemFuncName, MemberVarName )\
TIHMACRO_CHAINBUILDER_SETTER_BASE(*this,TIHTemplateType , MemFuncName, MemberVarName)

#define TIHMACRO_CHAINBUILDER_COMMAND_CAST( castTemplateType, cmdTarget )\
cmdTarget = new castTemplateType();\
static_cast<castTemplateType*>(cmdBase)->SetCommandFeature(GetCastedBuildersCommandData< castTemplateType##Datas >())

/*!
*	@brief 간단한 해쉬
*	@detail https://withhamit.tistory.com/401
*/
TIHReturn64 ClassNameHashImplement(const TCHAR* clsName)
{
	//	충돌 검사를 해야한다....시발거
	//	

	TIHReturn64 reValue = -1;
	if(clsName != nullptr )
	{
		const int p = 53;
		const int m = 1e9 + 9; // 10^9 +9 == 1'000`000`009 < 2`147`000`000 == int32 max

		int hash_val = 0;
		int pow_p = 1;

		for (int i = 0; (clsName[i] != '\0' && clsName + i != nullptr); ++i)
		{
			hash_val = (hash_val + (clsName[i] - 'a' + 1) * pow_p) % m;
			pow_p = (p + pow_p) % m;
		}
		reValue = hash_val;
	}
	
	return reValue;
}

#define TIHMACRO_CLASS_STATIC_NAME_HASH( thisClass )\
public:\
static TIHReturn64 TIHClassNameHash()\
{ \
static TIHReturn64 reValue = ClassNameHashImplement(TEXT( #thisClass ) ); \
return reValue; }

//	반드시 InitSetting 을 구현해야한다
#define TIHMACRO_MANAGED_LEAF_FEATURES( thisClass )\
TIHMACRO_CLASS_STATIC_NAME_HASH( thisClass )\
static FTIHMngObjLeaf* GenerateLeaf()\
{ \
	FTIHMngObjLeaf* reValue = new thisClass(); \
	reValue->SetHashValue(thisClass::TIHClassNameHash());\
	reValue->InitSetting();\
	return reValue;\
}\
private:

#define TIHMACRO_MANAGEDOBJECT_COMPONENT_GENERATE_FUNCTION( thisClass )\
TIHMACRO_CLASS_STATIC_NAME_HASH( thisClass )\
static FTIHManagedObjectComponentBase* GenerateManagedObjectComponent()\
{\
	FTIHManagedObjectComponentBase* reValue = new thisClass();\
	reValue->SetHashValue(thisClass::TIHClassNameHash());\
	return reValue;\
}\


#define TIHMACRO_CLASS_STATIC_GENERIC_GENERATE_THIS( returnType , thisClass )\
static returnType GenerateThisClass(){ return GenerateTemplateThisClass<thisClass>(); }




#define TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS( thisClass )\
public:\
TIHMACRO_CLASS_STATIC_NAME_HASH( thisClass );\
TIHMACRO_CLASS_STATIC_GENERIC_GENERATE_THIS( FTIHCommandBase* , thisClass )



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
enum class ETIHReturn8Semantic : int8
{
	Error = -1,
	False = 0,
	True = 1,
};



enum class ETIHManagedObjectStepState : int16
{
	ENotUse			=	0b0000'0000'0000'0000,
	ETraceFail		=	0b0000'0000'0000'0001,
	EAllocated		=	0b0000'0001'0000'0001,
	EReady			=	0b0000'0010'0000'0001,
	ERunning		=	0b0000'0011'0000'0001,
	EWaiting		=	0b0000'0100'0000'0001,
	ETermination	=	0b0000'0101'0000'0001,
};


/*!
*	@brief 이거는 커맨드 헤더에 대한 타입들을 모아놓은곳
*	@detail
*/
enum class ETIHCommandHeaderProtocols : int8
{
	ETestDelay = 0, 

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
	ECallingCompleteFunction = 1 << 6,
	ECallingErrorFunction = 1 << 7,
	EAsyncTask = -1 //이거 - 일거라 그냥 확인만 하면 됨.
};
const int8 MaxObjectPoolSlotCount = 8;
enum class ETIHManagedObjectSpace : int8
{
	ENotRegistSpace = -1,
	EAbsoluteSpace = 0,
	ELoaclSpace = 1,//1~8
	ESharedSpace = (int8)ELoaclSpace + MaxObjectPoolSlotCount,//9~16
	EGlobalSpace = (int8)ESharedSpace + MaxObjectPoolSlotCount,
	ESystemSpace = (int8)EGlobalSpace + MaxObjectPoolSlotCount,
};
enum class ETIHManagedObjectHeaderProtocols
{
	ENotUse,
	EActorBase,
	EWidgetBase,
	ESystem,
	EAuto,
};
enum class ETIHMngObjHeaderProcotols
{
	ENotUse,
	EActorBase,
	EWidgetBase,
	ESystem,
	EAuto,
};

enum class ETIHMngObjComponentHeaderProtocols
{
	EComposite,
	ELeaf,
};
enum class ETIHManagedObjectHeaderProtocolOptions
{
	ENotUse,
	EStaticMesh,
	ESkeletalMesh,
	EUI,
	ESound,
	ESystem,
	ECustom,
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

class FTIHLogSystem
{
public:
	static void RegistLog();

};


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

struct FTIHGenerateCandidateLeaves
{
	TSet<TIHObjectHash64> GenerateTags;

	FTIHGenerateCandidateLeaves(){}
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


class FTIHManagedObjectComponentHelper
{
public:
	
};

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
		if(mRegistedHashsByTag.Contains(queryName)==true)
		{
			reValue = mRegistedHashsByTag[queryName];
		}
		return reValue;
	}
	const FName& GetQueryByHash(TIHHash64 tihHash)
	{
		FName reValue = GetQueryNoRegistedTag();
		if(mRegistedTagsByHash.Contains(tihHash) == true)
		{
			reValue = mRegistedTagsByHash[tihHash];
		}
		return reValue;
	}
	const FTIHGenerateCandidateLeaves& GetComponentHashs(TIHHash64 compHash)
	{
		if(mRegistedHashForManagedComponent.Contains(compHash) == true)
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
		for(int32 i = 0; i < StaticQueryListNum; ++i)
		{
			FName queryName = FTIHTagHelperssss::StaticQueryList[i];
			FString nameToString = queryName.ToString();
			TIHHash64 tihHash = ClassNameHashImplement(*nameToString);
			mRegistedHashsByTag.Add(queryName,tihHash);
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

/*!
*	@brief 
*	@detail 
*/
class FTIHState
{
public:
	FTIHState()
	{
		mStateValueDetail.WholeData = 0;
	}
	virtual ~FTIHState(){}

	ETIHManagedObjectStepState GetStateStepEnum()
	{
		ETIHManagedObjectStepState reValue = ETIHManagedObjectStepState::ETraceFail; 
		switch (mStateValueDetail.Datas.Details.LifeCycle)
		{
		case (int16)ETIHManagedObjectStepState::EAllocated:
			reValue = ETIHManagedObjectStepState::EAllocated;
			break;
		case (int16)ETIHManagedObjectStepState::EReady:
			reValue = ETIHManagedObjectStepState::EReady;
			break;
		case (int16)ETIHManagedObjectStepState::ERunning:
			reValue = ETIHManagedObjectStepState::ERunning;
			break;
		case (int16)ETIHManagedObjectStepState::EWaiting:
			reValue = ETIHManagedObjectStepState::EWaiting;
			break;
		case (int16)ETIHManagedObjectStepState::ETermination:
			reValue = ETIHManagedObjectStepState::ETermination;
			break;
		default:
			break;
		}
		return reValue;
	}
	void StartStateTracing()
	{
		if(mStateValueDetail.Datas.Details.LifeCycle == (int16)ETIHManagedObjectStepState::ENotUse)
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::EAllocated;
		}
		else
		{
			/*
				이미 초기화가 이루어졌다라고 콜링한다.
			*/
		}
	}

	bool IsInitPossible()
	{
		bool reValue = false;
		if ((int16)ETIHManagedObjectStepState::EAllocated != mStateValueDetail.Datas.Details.LifeCycle)
		{
			reValue = true;
		}
		return reValue;
	}
	bool IsAssginPossible()
	{
		bool reValue = false;
		if((int16)ETIHManagedObjectStepState::EReady != mStateValueDetail.Datas.Details.LifeCycle)
		{
			reValue = true;
		}
		return reValue;
	}
	bool IsRunning()
	{
		bool reValue = false;
		if ((int16)ETIHManagedObjectStepState::ERunning == mStateValueDetail.Datas.Details.LifeCycle)
		{
			reValue = true;
		}
		return reValue;
	}

	bool ChangeStateAllocatedToReady()
	{
		bool reValue = false;
		if (ETIHManagedObjectStepState::EAllocated == GetStateStepEnum())
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::EReady;
			reValue = true;
		}
		/*
			비운상태에서 init 를 하는것이다. 여기서 지워주거나 하지않는다. 즉 순환이 깨지면 에러다.
			그래서 에러가 나면 해당 사유를 로그로 발사해준다.
		*/
		return reValue;
	}
	bool ChangeStateReadyToRunning()
	{
		bool reValue = false;
		if (ETIHManagedObjectStepState::EReady == GetStateStepEnum())
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::ERunning;
			reValue = true;
		}
		/*
			비운상태에서 init 를 하는것이다. 여기서 지워주거나 하지않는다. 즉 순환이 깨지면 에러다.
			그래서 에러가 나면 해당 사유를 로그로 발사해준다.
		*/
		return reValue;
	}
	bool ChangeStateRunningToWaiting()
	{
		bool reValue = false;
		if (ETIHManagedObjectStepState::ERunning == GetStateStepEnum())
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::EWaiting;
			reValue = true;
		}
		/*
			비운상태에서 init 를 하는것이다. 여기서 지워주거나 하지않는다. 즉 순환이 깨지면 에러다.
			그래서 에러가 나면 해당 사유를 로그로 발사해준다.
		*/
		return reValue;
	}
	bool ChangeStateRunningToTermination()
	{
		bool reValue = false;
		if (ETIHManagedObjectStepState::ERunning == GetStateStepEnum())
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::ETermination;
			reValue = true;
		}
		/*
			비운상태에서 init 를 하는것이다. 여기서 지워주거나 하지않는다. 즉 순환이 깨지면 에러다.
			그래서 에러가 나면 해당 사유를 로그로 발사해준다.
		*/
		return reValue;
	}
	bool ChangeStateTerminationToAllocated()
	{
		bool reValue = false;
		if (ETIHManagedObjectStepState::ETermination == GetStateStepEnum())
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::EAllocated;
			reValue = true;
		}
		/*
			비운상태에서 init 를 하는것이다. 여기서 지워주거나 하지않는다. 즉 순환이 깨지면 에러다.
			그래서 에러가 나면 해당 사유를 로그로 발사해준다.
		*/
		return reValue;
	}
	void ChangeErrorState()
	{
		if (ETIHManagedObjectStepState::ENotUse != GetStateStepEnum())
		{
			mStateValueDetail.Datas.Details.LifeCycle = (int16)ETIHManagedObjectStepState::ETraceFail;
			/*
				이전의 상태가 무엇이었는지에 따라서 로그를 출력하는 코드를 넣자.
			*/
		}
		else
		{
			/*
				아주 아주 큰 에러임. 그래서 log.BigError 이렇게 콜링해야함.
			*/
		}
	}
protected:
	FUnionTIHStateValue mStateValueDetail;
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

	void RefreshForReuse()
	{
		Protocol = (int8)ETIHCommandHeaderProtocols::ETestDelay;
		ProtocolOption = 0;
		Option0 = 0;
		Option1 = 0;
	};

	TIHMACRO_CHAINBUILDER_SETTER(Protocol);
	TIHMACRO_CHAINBUILDER_SETTER(ProtocolOption);
	TIHMACRO_CHAINBUILDER_SETTER(Option0);
	TIHMACRO_CHAINBUILDER_SETTER(Option1);

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
	
	UPROPERTY()
	int8 CommandProcessingProtocol;			//	{Strategies,Delegates,MultiThreading}
	UPROPERTY()
	int8 CommandProgressionProtocol;			//	{Continue,Reapeate,Async}
	UPROPERTY()
	int16 CompleteFunctorIndex;
	

	FTIHCommandMethod() :
		CommandProcessingProtocol( (int8)ETIHCommandHeaderProtocols::ETestDelay),
		CompleteFunctorIndex(-1),
		CommandProgressionProtocol(-1)
		
	{
	};
	void RefreshForReuse()
	{
		CommandProcessingProtocol = (int8)ETIHCommandHeaderProtocols::ETestDelay;
		CompleteFunctorIndex = -1;
		CommandProgressionProtocol = -1;
	};
	
	TIHMACRO_CHAINBUILDER_SETTER(CommandProcessingProtocol);
	TIHMACRO_CHAINBUILDER_SETTER(CompleteFunctorIndex);
	TIHMACRO_CHAINBUILDER_SETTER(CommandProgressionProtocol);
};
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
class FTIHCommandBase
{
	TIHMACRO_CLASS_STATIC_NAME_HASH(FTIHCommandBase)
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

	template<typename TIHTemplateType>
	TIHTemplateType* GenerateThisCastedClass()
	{
		return TIHTemplateType::GenerateThisClass();
	}

	FTIHCommandBase() 
	{};
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
	TIHMACRO_CLASS_STATIC_NAME_HASH(TTIHCommand);
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

template<typename TIHTemplateType>
TIHTemplateType* GenerateTemplateThisClass()
{
	return new TIHTemplateType();
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
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandTestDelay);
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
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateAssignPool);

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
	int8 TargetClassType;
	UPROPERTY()
	int8 Padding0;
	UPROPERTY()
	int16 AllocateCount;
	
	UPROPERTY()
	UEObjectHash64 TargetClassHash;

	TIHMACRO_CHAINBUILDER_SETTER(TargetClassType);
	TIHMACRO_CHAINBUILDER_SETTER(AllocateCount);
	
	TIHMACRO_CHAINBUILDER_SETTER(TargetClassHash);
};
class FTIHCommandCreateNewAlloc : public TTIHCommand<FTIHCommandCreateNewAllocDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAlloc);
public:
	FTIHCommandCreateNewAlloc();
	virtual ~FTIHCommandCreateNewAlloc();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerConnect
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandServerConnectDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerConnect : public TTIHCommand<FTIHCommandServerConnectDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerConnect);
public:
	FTIHCommandServerConnect();
	virtual ~FTIHCommandServerConnect();
};





/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerSend
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandServerSendDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerSend : public TTIHCommand<FTIHCommandServerSendDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerSend);
public:
	FTIHCommandServerSend();
	virtual ~FTIHCommandServerSend();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerListen
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandServerListenDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerListen : public TTIHCommand<FTIHCommandServerListenDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerListen);
public:
	FTIHCommandServerListen();
	virtual ~FTIHCommandServerListen();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandServerDisConnect
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandServerDisConnectDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerDisConnect : public TTIHCommand<FTIHCommandServerDisConnectDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerDisConnect);
public:
	FTIHCommandServerDisConnect();
	virtual ~FTIHCommandServerDisConnect();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandDeleteRejectPool
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandDeleteRejectPoolDatas
{
	GENERATED_BODY()

};
class FTIHCommandDeleteRejectPool : public TTIHCommand<FTIHCommandDeleteRejectPoolDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandDeleteRejectPool);
public:
	FTIHCommandDeleteRejectPool();
	virtual ~FTIHCommandDeleteRejectPool();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommanEDeleteDestory
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommanEDeleteDestoryDatas
{
	GENERATED_BODY()

};
class FTIHCommanEDeleteDestory : public TTIHCommand<FTIHCommanEDeleteDestoryDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommanEDeleteDestory);
public:
	FTIHCommanEDeleteDestory();
	virtual ~FTIHCommanEDeleteDestory();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandModifyTransform
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandModifyTransformDatas
{
	GENERATED_BODY()

};
class FTIHCommandModifyTransform : public TTIHCommand<FTIHCommandModifyTransformDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyTransform);
public:
	FTIHCommandModifyTransform();
	virtual ~FTIHCommandModifyTransform();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandModifyValue
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandModifyValueDatas
{
	GENERATED_BODY()

};
class FTIHCommandModifyValue : public TTIHCommand<FTIHCommandModifyValueDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyValue);
public:
	FTIHCommandModifyValue();
	virtual ~FTIHCommandModifyValue();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandInOutReadAndSave
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandInOutReadAndSaveDatas
{
	GENERATED_BODY()

};
class FTIHCommandInOutReadAndSave : public TTIHCommand<FTIHCommandInOutReadAndSaveDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutReadAndSave);
public:
	FTIHCommandInOutReadAndSave();
	virtual ~FTIHCommandInOutReadAndSave();
};

/*
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
													FTIHCommandInOutWriteAndModify
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
*/
USTRUCT()
struct FTIHCommandInOutWriteAndModifyDatas
{
	GENERATED_BODY()

};
class FTIHCommandInOutWriteAndModify : public TTIHCommand<FTIHCommandInOutWriteAndModifyDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutWriteAndModify);
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
class FTIHChainBuilderPool
{
public:
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
		struct FTIHCommandFactoryInstantiateResultDetail
		{
			int8 Protocol;
			int8 ProtocolOption;

			int16 SuccessCount;
			int16 FailCount;

			int16 Padding;
		}InstantiateDetail;

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
	const FTIHCommandMethod GetCastedBuildersCommandMethod(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(mBuildersArray[index].CommandMethodBuilder)).GetGenrateChain();
	}
	const FTIHCommandMethod GetCurrBuildersCommandMethod()
	{
		return GetCastedBuildersCommandMethod(mCurrBuilderIndex);
	}
	
	template<typename TIHTemplateType>
	const TIHTemplateType GetCastedBuildersCommandData(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<TIHTemplateType>*>(mBuildersArray[index].CommandDataBuilder)).GetGenrateChain();
	}
	template<typename TIHTemplateType>
	const TIHTemplateType GetCurrBuildersCommandData()
	{
		return GetCastedBuildersCommandData(mCurrBuilderIndex);
	}

	template<typename TIHTemplate>
	FTIHCommandBase* GenerateCommand(int32 index)
	{
		FTIHCommandBase* reValue = nullptr;
		TIHTemplate* target = TIHTemplate::GenerateThisClass();

		if (target != nullptr)
		{
			target->SetCommandFeature(GetCastedBuildersCommandData<TIHTemplate>(index));
		}

		return target;
	};
	TArray<FName> mClassNamesForCreateCommand;
	TMap<FName, TIHReturn64> mClassNameHashsForCreateCommand;
	TMap<TIHReturn64, TFunction<FTIHCommandBase*()>> mGenerateCommandFunctions;

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
	
	TMap<TIHReturn64, FTIHCommandBase*> mGenerateHash;
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
/*
	선택이 어렵거든 표시를 해놓자
	통일성을 고려해야한다면 고려하는 요소를 써놓자
	일단 만들고 최적화 생각

	이름 규약을 만들어놔야겠다
*/
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
template<typename TIHTemplateType>
class TTIHCommandFunctorWrapper
{
public:
	bool IsValidFunctor()
	{
		static FTIHCommander& commander = TIHSTATION.GetCommander();
		static FTIHMngObjPool& objectPool = TIHSTATION.GetObjectPool();
		bool reValue = false;
		if((int8)ETIHCommandFunctorProtocols::EManagedObjectMemberFunction==mFunctorHeader.Protocol)
		{
			//	이걸 safety 하게 만들어야함
			int32 objectRef = mFunctorHeader.ReferenceIndex;
			reValue = objectPool.GetManagedObject(objectRef)->IsValidManagedTarget();
		}
		else if((int8)ETIHCommandFunctorProtocols::ECommanderFunction== mFunctorHeader.Protocol)
		{

		}
		return reValue;
	}
	TFunction<TIHTemplateType>& GetFunction()
	{
		return mContents;
	}
private:
	FTIHCommandFunctorHeader mFunctorHeader;
	TFunction<TIHTemplateType> mContents;
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


class FTIHCommander
{
public:
	
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


	//	이거 리절브 해야함.
	TArray<TTIHCommandFunctorWrapper< TIHReturn64(FTIHCommandBase*) > > mCompleteFunctions;



	TIHReturn64 ExecuteCommandStaticPolymorphs(FTIHCommandBase* primitiveCmd);
	TIHReturn64 SequenceCommand(TIHReturn64 result,FTIHCommandBase* primitiveCmd);

	/*!
	*	@brief 이거 만약 실행할 call back 함수가 있으면 해당 인덱스안에 있는 
	*	@detail 
	*/
	TIHReturn64 CheckCallingCompleteFunctions(FTIHCommandBase* primitiveCmd);

	TIHReturn64 CheckCallingErrorFunctions(FTIHCommandBase* primitiveCmd);


	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyTestDelay, mStrategyTestDelay);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyCreateNewAlloc, mStrategyCreateNewAlloc);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyCreateAssignPool, mStrategyCreateAssignPool);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerConnect, mStrategyServerConnect);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerSend, mStrategyServerSend);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerListen, mStrategyServerListen);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerDisConnect, mStrategyServerDisConnect);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyDeleteRejectPool, mStrategyDeleteRejectPool);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyDeleteDestory, mStrategyDeleteDestory);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyModifyTransform, mStrategyModifyTransform);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyModifyValue, mStrategyModifyValue);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyInOutReadAndSave, mStrategyInOutReadAndSave);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyInOutWriteAndModify, mStrategyInOutWriteAndModify);

	decltype(auto) SetStrategyTestDelay(auto value)
	{
		SafeDeletePtr(mStrategyTestDelay);
		mStrategyTestDelay = value;
		return *this;
	}
	decltype(auto) SetStrategyCreateNewAlloc(auto value)
	{
		SafeDeletePtr(mStrategyCreateNewAlloc);
		mStrategyCreateNewAlloc = value;
		return *this;
	}
	decltype(auto) SetStrategyCreateAssignPool(auto value)
	{
		SafeDeletePtr(mStrategyCreateAssignPool);
		mStrategyCreateAssignPool = value;
		return *this;
	}
	decltype(auto) SetStrategyServerConnect(auto value)
	{
		SafeDeletePtr(mStrategyServerConnect);
		mStrategyServerConnect = value;
		return *this;
	}
	decltype(auto) SetStrategyServerSend(auto value)
	{
		SafeDeletePtr(mStrategyServerSend);
		mStrategyServerSend = value;
		return *this;
	}
	decltype(auto) SetStrategyServerListen(auto value)
	{
		SafeDeletePtr(mStrategyServerListen);
		mStrategyServerListen = value;
		return *this;
	}
	decltype(auto) SetStrategyServerDisConnect(auto value)
	{
		SafeDeletePtr(mStrategyServerDisConnect);
		mStrategyServerDisConnect = value;
		return *this;
	}
	decltype(auto) SetStrategyDeleteDestory(auto value)
	{
		SafeDeletePtr(mStrategyDeleteRejectPool);
		mStrategyDeleteRejectPool = value;
		return *this;
	}
	decltype(auto) SetStrategyModifyTransform(auto value)
	{
		SafeDeletePtr(mStrategyModifyTransform);
		mStrategyModifyTransform = value;
		return *this;
	}
	decltype(auto) SetStrategyModifyValue(auto value)
	{
		SafeDeletePtr(mStrategyModifyValue);
		mStrategyModifyValue = value;
		return *this;
	}
	decltype(auto) SetStrategyInOutReadAndSave(auto value)
	{
		SafeDeletePtr(mStrategyInOutReadAndSave);
		mStrategyInOutReadAndSave = value;
		return *this;
	}
	decltype(auto) SetStrategyInOutWriteAndModify(auto value)
	{
		SafeDeletePtr(mStrategyInOutWriteAndModify);
		mStrategyInOutWriteAndModify = value;
		return *this;
	}


	/*
		
	
	
	*/

private:
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

	FTIHCommanderExtentionForExeCmdStrategy* mStrategyExention;
};


#pragma endregion 
/*
	============================================================================================================================================================
	============================================================================================================================================================
	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----

																	Managed Object

	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----	----
	============================================================================================================================================================
	============================================================================================================================================================
*/


/*
=================================================================================================================================================
										 여기 아래서 부터 다시한다
=================================================================================================================================================
*/
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
			mRegistedActorByUEHash[ueHash] = ueActorUcls;
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
		if(mLeafMap.Contains(tihHash) == true)
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
	void InitMngObjComposite(int8 allocationSpace,USceneComponent* targetScene,int16 parentIndex,int16 stepValue)
	{
		ChainManagedObjectComponentHeader()
			.SetAllocationSpace(allocationSpace);

		SetTargetUeSceneComponent(targetScene);
		SetManagedObjectCompositeParent(parentIndex);
		SetManagedObjectCompositeStep(stepValue);
	}
	void SetManagedObjectCompositeParent(int16 parent)
	{
		if(-1< parent)
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
	void TransmissionHashSetToManagedObject(FTIHMngObj* mngObj)
	{
		
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



class FTIHMngObjLeafTestDelay : public TTIManagedObjectLeaf<UStaticMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafTestDelay)
public:
	void InitSetting() override;
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
		//	여기에서 stmeshPool 을 들고온다. 
		mCastedComponent->SetStaticMesh();
	}
};
class FTIHMngObjLeafSkMesh : public TTIManagedObjectLeaf<UStaticMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafStMesh)
public:
	void InitSetting() override;

	void SetMaterial(const FString& path)
	{

	}
};
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
	void GenerateUEActorBaseByPrepareData(int16 allocount, UEObjectHash64 ueObjHash, TDeque<AActor*>& actorArray, bool isChild);

	void GenerateManagedObjectByActorArray(TDeque<AActor*>& actorQueue, int16 parentData, TArray<FTIHManagedObjectGenerateCompositeOutData>& outData);

	void GenerateManagedObjectCompositeArray(TArray<FTIHManagedObjectGenerateCompositeOutData>& inData, TDeque<AActor*>& actorQueue, TArray< FTIHMngObjComposite*>& outData);

	void GenerateUEChildActorBy(UChildActorComponent* childActorScene, FTIHMngObj* currManagedObject, TDeque<AActor*>& actorQueue);

	void GenerateManagedObjectLeafArray(TArray< FTIHMngObjComposite*>& inData);
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


class FTIHMngObj
{
public:
	FTIHMngObjHeader GetManagedObjectHeader()
	{
		return mManagedObjectHeader;
	}
	void SetManagedObjectHeader(FTIHMngObjHeader objHeader)
	{
		mManagedObjectHeader = objHeader;
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
/*
=================================================================================================================================================
										여기 위부터 다시한다
=================================================================================================================================================
*/
/*!
*	@brief 
*	@detail 
*/
template<typename TIHTemplateType = USceneComponent>
class TTIHManagedObjectComponentsss : public FTIHManagedObjectComponentBasesss
{
	
public:
	void LinkingManagedComponentAtActor(AActor* actor) override
	{
		mTargetComponent = actor->GetComponentByClass<TIHTemplateType>();
	}
	
	void LinkingManagedCompoentBySceneComponent(USceneComponent* target) final
	{
		mTargetComponent = Cast<TIHTemplateType>(target);
		
		PostLinkingSettingFunction();
	}
protected:
	TArray<int32> mLinkedComponents;
	TIHTemplateType* mTargetComponent;
};



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


USTRUCT()
struct FTIHManangedObjectPoolStorageDatas
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Protocol;//	range, separated
	UPROPERTY()
	int8 ProtocolOption;
	UPROPERTY()
	int16 RecentIndex;

	UPROPERTY()
	TArray<int16> Indecies;
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

USTRUCT()
struct FTIHNewAllocPrepareData
{
	GENERATED_BODY()

	UPROPERTY()
	int8 TargetClassType;

	UPROPERTY()
	int8 Padding0;

	UPROPERTY()
	int16 AllocateCount;

	UPROPERTY()
	int16 CallParentIndex;

	UPROPERTY()
	int16 Padding1;
	
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
		Padding0(rvalue.Padding0),
		Padding1(rvalue.Padding1)
	{
	}
	FTIHNewAllocPrepareData(FTIHNewAllocPrepareData&& rvalue) :
		TargetClassType(rvalue.TargetClassType),
		AllocateCount(rvalue.AllocateCount),
		CallParentIndex(rvalue.CallParentIndex),
		TargetClassHash(rvalue.TargetClassHash),
		Padding0(rvalue.Padding0),
		Padding1(rvalue.Padding1)
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
		Padding0 = rvalue.Padding0;
		Padding1 = rvalue.Padding1;
		return *this;
	}

	FTIHNewAllocPrepareData& operator=(FTIHNewAllocPrepareData&& rvalue)
	{
		*this = std::move(rvalue);
		return *this;
	}
};


USTRUCT()
struct FTIHMngObjConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	int16 WholeManagedObjectMaxCount;

	UPROPERTY()
	int8 IsNewAllocateWhenCapacityMax;
	
	UPROPERTY()
	int8 AllocationSpace;

	UPROPERTY()
	int16 CurrentCreateAllocPhase;

	UPROPERTY()
	int16 EndCreateAllocCount;

	UPROPERTY()
	UWorld* SpawnSpace;

	UPROPERTY()
	AActor* OwnerActor;

	UPROPERTY()
	FTransform DefaultTransform;


};

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

struct FTIHManagedObjectGenerateCompositeOutData
{
	USceneComponent* UESceneComponent;
	FTIHMngObj* TIHManagedObject;
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

class FTIHMngObjPool
{
public:
	FTIHMngObjPool(FTIHMngObjPoolCenter& center)
		: mPoolCenter(center)
	{};
	~FTIHMngObjPool() {};

	TIHReturn64 ReserveWholeObjectPool(int16 maxCount);
	void ReserveObjectPool(SIZE_T targetCls, int16 maxCount);//	차라리 명세서를 작성하자/

	FTIHUnionFind& GetUnionFind()
	{
		return mUnionFind;
	}

	FTIHMngObjPoolCenter& GetManagedObjectPoolCenter()
	{
		return mPoolCenter;
	}
	


#pragma region Object Assgin and NewAlloc
public:
	void SetManagedPoolSpace(int8 managedSpace)
	{

		mManagedObjectPoolConfigure.AllocationSpace = managedSpace;
	}

	const FTIHMngObjConfigure& GetConfigure()
	{
		return mManagedObjectPoolConfigure;
	}
	FTIHMngObjConfigure& GetConfigureNoConst()
	{
		return mManagedObjectPoolConfigure;
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
	FTIHMngObjConfigure mManagedObjectPoolConfigure;

#pragma endregion

	TDeque< FTIHNewAllocPrepareData> mPrepareManagedObjects;

	TMap<int8,TMap<int8, TMap<int8,TArray<int16>>>> mManagedObjectStateBaseTypeIndices;
	/*
		State {idle,running,clearance}
			base {actor,widget,system...}
				Type {render,move,...}
			
	*/

};
/*!
*	@brief 오브젝트 풀을 생성하거나 관리하는 클래스
*	@detail 오브젝트 풀이 공유해야하는 데이터들을 들고있다.
*/
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
		UEObjectHash64 TargetClassHash,int16 CallParentIndex
	)
	{
		EmplaceAddMngObjPrepareData((int8)ETIHMngObjHeaderProcotols::EActorBase, TargetClassHash, CallParentIndex, -1 );
	}


	int8 RegistManagedObjectPool(ETIHManagedObjectSpace managedObjectSpace ,FTIHMngObjPool* managedObjectPool)
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

	

private:
	TMap<FName, UEObjectHash64> mClassNameToUeClassHash;
	TDeque<const FTIHNewAllocPrepareData> mPrepareDatas;

	TMap<TIHObjectHash64, TFunction< FTIHMngObjLeaf* ()>> mTIHClassHashToGenerateFunction;
	TMap<UEObjectHash64, FTIHGenerateCandidateLeaves> mUClassToClassHashs;// ForManagedComponent	ue컴포넌트로 해당하는 해쉬찾는거임
	TMap<UEObjectHash64, UClass*> mUeClassHashToUClass;

	TMap<int8, FTIHMngObjPool*> mManagedObjectPools;

	FTIHMngObjFactory mManagedObjectFactory;
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