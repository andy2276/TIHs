#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
//#include "TIHStationCoreDefines.generated.h"
//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										Read_Me_Template								   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Read_Me_Template
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Summary
└──────────────────────────────────────────────────────────────────────────────────────────┘
# Summary


*/
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Index
└──────────────────────────────────────────────────────────────────────────────────────────┘
## Header
	+ Summary
	+ Index
	+ Coding Rule
		+ Naming Rule
	+ Template For Copy
## Contents
	+ TIH Type Defines
	+ Helper Declares
	+ TIH Macro
	+ TIH Enums
	+ Helper Implements
	+ TIH System
	+ Forward Declares for Build

┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Coding Rule
└──────────────────────────────────────────────────────────────────────────────────────────┘
	┌──────────────────────────────────────────────────────────────────────────────────┐
											Naming Rule
	└──────────────────────────────────────────────────────────────────────────────────┘
	## Naming Rule
	+ 최대 32자를 넘지 말아야한다
		+ 축약형은 되도록이면 지양한다.
			+ 가독성과 유지보수성이 떨어지기 때문이다.
			+ 하지만 32자를 넘을거 같으면 공통되어진 내용을 축약형으로 만든다.
			+ 그리고 그것에 대한 내용을 꼭 기록한다
				+ 기록 한 곳은 '' 에 있다
				+ 만약 해당 경로에 없다면 여기 아래를 본다. 물론 최신화는 잘안된다.
			+ 축약형은 무조건 정말 무조건 필요한 경우에만 사용을 한다.
			+ 그리고 축약형을 사용했을 시에는 공통되어진 모든것들을 축약형으로 바꿔준다. 
	+ 앞에 TIH 를 꼭 붙여야한다
		+ 언리얼의 규칙을 제일 앞에 둔다.
			+ actor 베이스면 A
			+ template 베이스면 T
				+ 템플릿을 인스턴스화 했으면 F 로 써준다.
				+ 템플릿의 인자는 In 을 앞에 써준다. 그리고 끝에 type 을써준다.
			+ 언리얼 메크로를 연동할거면 UE_ 를 써준다.
			+ sWidget 베이스면 S
			+ 인터페이스 베이스면 I
			+ 열거형은 E
			+ bool 변수면 b 인데 함수면 Is 를 써준다. 근데 b 안써도 is 써주자

			+ struct 베이스면 F 및 기타
	+ 클래스 이름은 카멜표기법으로 작성한다.
	+ 언리얼의 이름 규칙을 되도록이면 따르도록 한다.
	## 축약된 이름들
		+ ManagedObject == MngObj

*/
#pragma endregion Read_Me_Template
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Read_Me_Template									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Template_For_Copy									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Read_Me_Template
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Sub_Title
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
#pragma endregion Read_Me_Template
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Template_For_Copy									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Forward Declare										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Forward Declare
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Sub_Title
└──────────────────────────────────────────────────────────────────────────────────────────┘
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
#pragma endregion Forward Declare
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Template_For_Copy									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/
//--	----	----	----	----	----	----	----	----	----	----	----
//
/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									TIH Type Defines									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Type Defines
typedef int32 TIHReturn32;
typedef uint32 TIHTick32;

typedef signed long long TIHReturn64;
typedef signed long long TIHSummary64;

typedef signed long long TIHHash64 ;
typedef signed long long UEObjectHash64 ;
typedef signed long long TIHObjectHash64 ;

extern const uint32 TIHYear = 3784320000;


#pragma endregion Type Defines
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									TIH Type Defines									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Helper Declares										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Helper Declares

class FTIHHashClass;


template<typename TIHTemplateType>
TIHTemplateType FastAbsIntTemplate(TIHTemplateType x)
{
	TIHTemplateType reValue;
	const int32 bitCount = (sizeof(TIHTemplateType) * 8) - 1;
	TIHTemplateType y = (x >> bitCount);
	reValue = (x + y) ^ y;
	return reValue;
}

int8 FastAbs8(int8 x)
{
	return FastAbsIntTemplate(x);
}
int16 FastAbs16(int16 x)
{
	return FastAbsIntTemplate(x);
}
int32 FastAbs32(int32 x)
{
	return FastAbsIntTemplate(x);
}
int64 FastAbs64(int64 x)
{
	return FastAbsIntTemplate(x);
}


#pragma endregion Helper Declares
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Helper Declares										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										TIH Macro										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region TIH Macro

#define TIHVALUE_MAX_HASH_COUNT 64

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


#define TIHMACRO_CLASS_STATIC_NAME_HASH( thisClass )\
public:\
static TIHReturn64 TIHClassNameHash()\
{ \
static TIHReturn64 reValue = ClassNameHashImplement(TEXT( #thisClass ) ); \
return reValue; }

#define TIHMACRO_MANAGED_LEAF_FEATURES( thisClass )\
TIHMACRO_CLASS_STATIC_NAME_HASH( thisClass )\
static FTIHMngObjLeaf* GenerateLeaf()\
{ \
	FTIHMngObjLeaf* reValue = new thisClass(); \
	reValue->SetHashValue(thisClass::TIHClassNameHash());\
	reValue->InitSetting();\
	return reValue;\
}\
void InitSetting() override;\
void PostLinkTargetImplement();\
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

#pragma endregion TIH Macro
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										TIH Macro										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										TIH Enums										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region TIH Enums
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


enum class ETIHCommandFunctorProtocols
{
	EManagedObjectMemberFunction = 0,
	ECommanderFunction,
};
enum class ETIHCommandFunctorProtocolOptions
{
	ECallingCompleteFunction = 0,
	ECallingErrorFunction,
};




/*!
*	@brief 이거는 커맨드 헤더에 대한 타입들을 모아놓은곳
*	@detail
*/
enum class ETIHCommandHeaderProtocols : int8
{
	ECommandUnknown = 0,

	EManagedObject,
	EMeshLoad,

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
	EMultiThreading,
	ESelfFunction,
};
/*!
*	@brief 커맨드의 진행 방법에 대한 프로토콜
*	@detail 해당 커맨드를 진행하는데 있어서 어떻게 할것인가.
*/
enum class ETIHCommandMethodProgressionProtocols : int8
{
	EContinue = 0,	//	하나 실행하고 다음 커맨드 실행
	ETickable,		//	하나 실행하고 나갔다가 다음 틱에 다음 커맨드 실행
	EReapeate,		//	complete 든 error 든 나올때까지 계속 해당 커맨드를 반복
	EAsyncDonCare,
};
enum class ETIHCommandResultBitMask : int8
{
	EOnExecuteLoop = 1 << 0,
	EOnNext = 1 << 2,
	EOnPopFornt = 1 << 3,
	EOnPopBack = 1 << 4,
	ECallingCompleteFunction = 1 << 6,
	ECallingErrorFunction = -2,
	EAsyncTask = -1 //이거 - 일거라 그냥 확인만 하면 됨.
};
const int8 MaxObjectPoolSlotCount = 8;
enum class ETIHManagedObjectSpace : int8
{
	ENotRegistSpace = -1,
	EAbsoluteSpace = 0,
	ELoaclSpace = 1,//1~8
	ESharedSpace = (int8)ELoaclSpace + MaxObjectPoolSlotCount,//9~16
	EGlobalSpace = (int8)ESharedSpace + MaxObjectPoolSlotCount,//17~24
	ESystemSpace = (int8)EGlobalSpace + MaxObjectPoolSlotCount,//25
};
enum class ETIHManagedObjectHeaderProtocols
{
	ENotUse,
	EActorBase,
	EWidgetBase,
	ESystem,
	EAuto,
};
enum class ETIHManagedObjectStepState : int16
{
	ENotUse = 0b0000000000000000,		//	0
	ETraceFail = 0b0000000000000001,	//	1
	EAllocated = 0b0000000100000001,	//	257
	EReady = 0b0000001000000001,		//	513
	ERunning = 0b0000001100000001,		//	769
	EWaiting = 0b0000010000000001,		//	1025
	ETermination = 0b0000010100000001,	//	1281
};
//
//namespace TIHNameSpaceCommandType
//{
//	namespace HeaderProtocol
//	{
//		extern const int8 UnknownType;
//		extern const int8 ManagedObjectType;
//		extern const int8 MeshLoadType;
//		extern const int8 DefaultMaxCount;
//	};
//	namespace OptionManagedObject
//	{
//		extern const int8 UnknownType;
//		extern const int8 PoolCenterSetConfigure;
//		extern const int8 PoolReserve;
//		extern const int8 PrepareDatas;
//		extern const int8 OnGenerate;
//		extern const int8 DefaultMaxCount;
//	};
//	namespace OptionMeshLoad
//	{
//		extern const int8 UnknownType;
//		extern const int8 MeshPoolSetConfigure;
//		extern const int8 StMeshPathListLoadByServer;
//		extern const int8 StMeshPathListLoadByConfigObject;
//		extern const int8 StMeshPathListLoadBySpecial;
//		extern const int8 StMeshesLoadBySlidingWindow;
//		extern const int8 StMeshesLoadByList;
//		extern const int8 StMeshesLoadAll;
//		extern const int8 StMeshQuery;
//		extern const int8 StMeshModifyMeshes;
//		extern const int8 DefaultMaxCount;
//	};
//	namespace MethodProcessingProtocol
//	{
//		extern const int8 UnknownType;
//		extern const int8 UseStrategy;
//		extern const int8 UseDelegate;
//		extern const int8 UseMultiThread;
//		extern const int8 UseCommandSelfFunction;
//		extern const int8 DefaultMaxCount;
//	};
//	namespace MethodProgessionProtocol
//	{
//		extern const int8 UnknownType;
//		extern const int8 RunContinue;
//		extern const int8 RunTickable;
//		extern const int8 RunRepeate;
//		extern const int8 RunAsyncDontCare;
//		extern const int8 DefaultMaxCount;
//	};
//	namespace MethodResultBitMask
//	{
//		extern const int8 OnAsyncTask;
//		extern const int8 ResetZero;
//		extern const int8 OnLoop;
//		extern const int8 OnNext;
//		extern const int8 OnPopFront;
//		extern const int8 OnPopBack;
//		extern const int8 CallingCompleteFunction;
//		extern const int8 CallingErrorFunction;
//	}
//};
//namespace TIHNameSpaceManagedObject
//{
//	namespace AllocationSpaceValue
//	{
//		extern const int8 MaxObjectPoolSlotCount;
//	}
//	namespace AllocationSpaceType
//	{
//		extern const int8 UnknownSpace;
//		extern const int8 AdminSpace;
//		extern const int8 SystemSpace;
//		extern const int8 GlobalSpace;
//		extern const int8 SharedSpace;
//		extern const int8 LocalSpace;
//	}
//	namespace UEClassBaseType
//	{
//		extern const int8 UnknownBase;
//		extern const int8 ActorBase;
//		extern const int8 WidgetBase;
//		extern const int8 SystemBase;
//		extern const int8 AnyObject;
//	}
//	namespace UEClassBaseType
//	{
//		extern const int8 UnknownBase;
//		extern const int8 ActorBase;
//		extern const int8 WidgetBase;
//		extern const int8 SystemBase;
//		extern const int8 AnyObject;
//	}
//}
//enum class ETIHManagedObjectStepState : int16
//{
//	ENotUse = 0b0000000000000000,		//	0
//	ETraceFail = 0b0000000000000001,	//	1
//	EAllocated = 0b0000000100000001,	//	257
//	EReady = 0b0000001000000001,		//	513
//	ERunning = 0b0000001100000001,		//	769
//	EWaiting = 0b0000010000000001,		//	1025
//	ETermination = 0b0000010100000001,	//	1281
//};
namespace TIHNameSpaceCommon
{
	namespace QueryType
	{
		const int8 UnknownType = 0;
		const int8 StartEnd = 1;
		const int8 PerElement = 2;
	}
	namespace Common
	{
		namespace Int8s
		{
			const int8 MinValue = -127;
			const int8 ErrorValue = -1;
			const int8 UnknownValue= 0;
			const int8 NotYetValue = 0;
			const int8 ZeroValue = 0;
			const int8 FalseValue = 0;
			const int8 TrueValue = 1;
			const int8 MaxValue = 127;
		}
	}
}
namespace TIHNameSpaceCommandType
{
	namespace HeaderProtocol
	{
		const int8 UnknownType = 0;
		const int8 ManagedObjectType = 1;
		const int8 MeshLoadType = 2;
		const int8 DefaultMaxCount = MeshLoadType + 1;
	};
	namespace OptionManagedObject
	{
		const int8 UnknownType = 0;
		const int8 PoolCenterSetConfigure = 1;
		const int8 PoolReserve = 2;
		const int8 PrepareDatas = 3;
		const int8 OnGenerate = 4;
		const int8 DefaultMaxCount = OnGenerate + 1;
	}
	namespace OptionMeshLoad
	{
		const int8 UnknownType = 0;
		const int8 MeshPoolSetConfigure = UnknownType + 1;
		const int8 StMeshPathListLoadByServer = MeshPoolSetConfigure + 1;
		const int8 StMeshPathListLoadByConfigObject = StMeshPathListLoadByServer + 1;
		const int8 StMeshPathListLoadBySpecial = StMeshPathListLoadByConfigObject + 1;
		const int8 StMeshPathListLoadByImbeding = StMeshPathListLoadBySpecial + 1;
		const int8 StMeshesLoadBySlidingWindow = StMeshPathListLoadByImbeding + 1;
		const int8 StMeshesLoadByList = StMeshesLoadBySlidingWindow + 1;
		const int8 StMeshesLoadByCategory = StMeshesLoadByList + 1;
		const int8 StMeshesLoadAll = StMeshesLoadByCategory + 1;
		const int8 StMeshQuery = StMeshesLoadAll + 1;
		const int8 StMeshModifyMeshes = StMeshQuery + 1;
		const int8 DefaultMaxCount = StMeshModifyMeshes + 1;
	}
	namespace MethodProcessingProtocol
	{
		const int8 UnknownType = 0;
		const int8 UseStrategy = 1;
		const int8 UseDelegate = 2;
		const int8 UseMultiThread = 3;
		const int8 UseCommandSelfFunction = 4;
		const int8 DefaultMaxCount = UseCommandSelfFunction + 1;
	}
	namespace MethodProgessionProtocol
	{
		const int8 UnknownType = 0;
		const int8 RunContinue = UnknownType + 1;
		const int8 RunTickable = RunContinue + 1;
		const int8 RunRepeate = RunTickable + 1;
		const int8 RunAsyncDontCare = RunRepeate + 1;
		const int8 DefaultMaxCount = RunAsyncDontCare + 1;
	}
	namespace MethodResultBitMask
	{
		const int8 CallingErrorFunction = -2;
		const int8 OnAsyncTask = -1;
		const int8 ResetZero = 0;
		const int8 OnLoop = 1 << 0;
		const int8 OnNext = 1 << 1;
		const int8 OnPopFront = 1 << 2;
		const int8 OnPopBack = 1 << 3;
		const int8 CallingCompleteFunction = 1 << 4;
	}
};
namespace TIHNameSpaceManagedObject
{
	namespace AllocationSpaceValue
	{
		const int8 MaxObjectPoolSlotCount = 8;
	}
	namespace AllocationSpaceType
	{
		const int8 UnknownSpace = 0;
		const int8 AdminSpace = 1;
		const int8 SystemSpace = 2;
		const int8 GlobalSpace = SystemSpace + 1;//3~10
		const int8 SharedSpace = GlobalSpace + AllocationSpaceValue::MaxObjectPoolSlotCount;//11~18
		const int8 LocalSpace = SharedSpace + AllocationSpaceValue::MaxObjectPoolSlotCount;//19~26
	}
	namespace UEClassBaseType
	{
		const int8 UnknownBase = 0;
		const int8 ActorBase = 1;
		const int8 WidgetBase = 2;
		const int8 SystemBase = 3;
		const int8 AnyObject = 4;
	}
}
namespace TIHNameSpaceMesh
{
	namespace MeshPoolQueryStateBitMask
	{
		const int8 ResetZero = 0;
		const int8 LoadedPath = 1 << 0;
		const int8 LoadedMesh = 1 << 1;
		const int8 HasCategory = 1 << 2;
		const int8 HasTickTime = 1 << 3;
	}
}


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
enum class EPrepareClassType : int8
{
	EActorBase,
	EWidgetBase,
	ESystem,
	EAuto,
};
#pragma endregion TIH Enums
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										TIH Enums										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃									Helper Implements									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Helper Implements
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
									General Helpers
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

class FTIHHashClass
{
public:
	static int64 FNV1aHash54Signed(const TCHAR* clsName)
	{
		const uint64 FNV_prime = 1099511628211u;
		const uint64 offset_basis = 14695981039346656037u;
		
		int32 clsNameIndex = 0;
		uint64 hashValue = offset_basis;
		FString originValue(clsName);

		bool isError = false;
		while(true)
		{
			if(clsName == nullptr ||TIHVALUE_MAX_HASH_COUNT <= clsNameIndex )
			{
				isError = true;
				break;
			}
			else if (clsName[clsNameIndex] == '\0' || clsName[clsNameIndex] == '\n')
			{
				isError = true;
				break;
			}
			hashValue ^= (uint64)clsName[clsNameIndex];
			hashValue *= FNV_prime;
			++clsNameIndex;
		}
		int64 reValue = static_cast<int64>(hashValue);
		
		//	베제고릴라
		//if(IsCollision(reValue) == true)
		//{
		//}
		return reValue;
	}
	bool IsCollision(int64 value)
	{
		return false;
	}
	
private:

};
inline TIHReturn64 ClassNameHashImplement(const TCHAR* clsName)
{
	static FTIHHashClass hashCls;
	TIHReturn64 reValue = hashCls.FNV1aHash54Signed(clsName);
	return reValue;
}

/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
									template Helpers
└──────────────────────────────────────────────────────────────────────────────────────────┘
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
#pragma endregion Helper Implements
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃									Helper Implements									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										TIH System										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region TIH Systems
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										FTIHSate
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHMngObjPoolCenter;
class FTIHState
{
	static FTIHMngObjPoolCenter* gPoolCenter;
public:
	FTIHState()
	{
		mStateValueDetail.WholeData = 0;
	}
	FTIHState(int32 turnValue)
	{
		mStateValueDetail.WholeData = turnValue;
	}
	FTIHState(FUnionTIHStateValue unionStateValue)
		:
		mStateValueDetail(unionStateValue)
	{}
	FTIHState(const FTIHState& copyCtor)
		:
		mStateValueDetail(copyCtor.mStateValueDetail)
	{}
	FTIHState(FTIHState&& moveCtor)
		:
		mStateValueDetail(std::move(moveCtor.mStateValueDetail))
	{}

	FTIHState& operator=(const FTIHState& copyOper)
	{
		mStateValueDetail.WholeData = copyOper.mStateValueDetail.WholeData;
	}
	FTIHState& operator=(FTIHState&& moveOper)
	{
		mStateValueDetail.WholeData = std::move(moveOper.mStateValueDetail.WholeData);
	}

	virtual ~FTIHState() {}

	static void SetManagedObjectPoolCenter(FTIHMngObjPoolCenter* poolCenter)
	{
		gPoolCenter = poolCenter;
	}

	ETIHManagedObjectStepState GetStateStepEnum() const
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
	int16 GetStateStepInt8() const
	{
		int16 reValue = (int16)ETIHManagedObjectStepState::ETraceFail;
		switch (mStateValueDetail.Datas.Details.LifeCycle)
		{
		case (int16)ETIHManagedObjectStepState::EAllocated:
			reValue = (int16)ETIHManagedObjectStepState::EAllocated;
			break;
		case (int16)ETIHManagedObjectStepState::EReady:
			reValue = (int16)ETIHManagedObjectStepState::EReady;
			break;
		case (int16)ETIHManagedObjectStepState::ERunning:
			reValue = (int16)ETIHManagedObjectStepState::ERunning;
			break;
		case (int16)ETIHManagedObjectStepState::EWaiting:
			reValue = (int16)ETIHManagedObjectStepState::EWaiting;
			break;
		case (int16)ETIHManagedObjectStepState::ETermination:
			reValue = (int16)ETIHManagedObjectStepState::ETermination;
			break;
		default:
			break;
		}
		return reValue;
	}
	void StartStateTracing()
	{
		if (mStateValueDetail.Datas.Details.LifeCycle == (int16)ETIHManagedObjectStepState::ENotUse)
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
	
	bool IsStateAllocated() const
	{
		bool reValue = false;
		if ((int16)ETIHManagedObjectStepState::EAllocated != mStateValueDetail.Datas.Details.LifeCycle)
		{
			reValue = true;
		}
		return reValue;
	}
	bool IsStateReady() const
	{
		bool reValue = false;
		if ((int16)ETIHManagedObjectStepState::EReady != mStateValueDetail.Datas.Details.LifeCycle)
		{
			reValue = true;
		}
		return reValue;
	}
	bool IsRunning() const
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
FTIHMngObjPoolCenter* FTIHState::gPoolCenter = nullptr;
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
									TTIHChainBuilder
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

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

		if (mTempChainBuilderData != nullptr)
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

class FTIHLogSystem
{
public:
	static void RegistLog();

};


#pragma endregion TIH Systems
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										TIH System										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										Structures										   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Structures
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										Union
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/

#pragma endregion Structures
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										Structures										   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃										TTIHStationCRTP									   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
class FTIHNetwork;
class FTIHMngObjPool;
class FTIHMngObjPoolCenter;
class FTIHCommandShareBoard;
class FTIHCommander;
class FTIHMngObjGenerateHelper;
class FTIHSettingHelper;
class FTIHCommandFactory;
class FTIHCommandResultBoard;
class FTIHCommandPathBoard;
class FTIHPathCenter;
class FTIHMeshPool;

class FTIHTickTock
{
public:
	void UpdataTick()
	{
		++mTickTime;
		if(TIHYear < mTickTime)
		{
			mTickTime = 0;
		}
	}
	TIHTick32 GetTick() const
	{
		return mTickTime;
	}
private:
	TIHTick32 mTickTime;
};
class ATIHPakBase;
class FTIHStationBase
{
public:
	FTIHStationBase();
	virtual ~FTIHStationBase();
	FTIHCommandFactory& GetCommandFactory()
	{
		return *mCommandFactory;
	}
	void SetCommandFactory(FTIHCommandFactory* cmdFactory);

	FTIHCommander& GetCommander()
	{
		return *mCommander;
	}

	FTIHMngObjPoolCenter& GetManagedObjectPoolCenter()
	{
		return *mPoolCenter;
	}
	FTIHPathCenter& GetPathCenter()
	{
		return *mPathCenter;
	}
	FTIHMngObjGenerateHelper& GetGenerateHelper()
	{
		return *mMngObjGenerateHelper;
	}
	FTIHTickTock& GetTickTock()
	{
		return mTickTock;
	}
	FTIHMeshPool& GetMeshPool()
	{
		return *mMeshPool;
	}
	void UpdateTickTock()
	{
		mTickTock.UpdataTick();
	}
	TIHTick32 GetTickCount() const
	{
		return mTickTock.GetTick();
	}
	/*
		스테이션에서 
		애초에 다른 팩이 추가되면 그 팩에 있는 오브젝트에 접근을 해야하는데 어떻게 하지?
		
	*/
	

protected:
	FTIHNetwork* mNetwork;
	/*!
	*	@brief 명령을 위한
	*	@detail
	*/
	

	int64 mTickTime;
	int64 mTickTimeRunning;
	int64 mTickTimeStarted;

	//FTIHCommandFactory* mCommandFactory;

	//	시발 이거 합칠까
	//TUniquePtr<FTIHMngObjGenerateHelper> mMngObjGenerateHelper;
	//TUniquePtr<FTIHSettingHelper> mSettingHelper;

	FTIHTickTock mTickTock;

	class FTIHMngObjGenerateHelper* mMngObjGenerateHelper;
	class FTIHSettingHelper* mSettingHelper;

	class FTIHCommandFactory* mCommandFactory;
	class FTIHCommander* mCommander;
	class FTIHMngObjPoolCenter* mPoolCenter;
	class FTIHPathCenter* mPathCenter;

	TMap<FString, ATIHPakBase*> mPakBox;
	class ATIHPakBase* mCurrPak;

	class FTIHMeshPool* mMeshPool;
	//TMap <FString, FTIHPakInfra* > mPaks;
private:
};


template<typename TIHTemplateType>
class TTIHStationCRTP : public FTIHStationBase
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

	FTIHStationBase* mSelfPointer;

	TIHTemplateType* GetSelfPtr()
	{
		return static_cast<TIHTemplateType*>(mSelfPointer);
	}

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
};


TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_InstantiateStation, InstantiateStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_PrepareStation, PrepareStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_InitializeStation, InitializeStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_RefreshStation, RefreshStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_ExecuteStation, ExecuteStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_WaitStation, WaitStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_SuspendStation, SuspendStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_FinalizeStation, FinalizeStation);
TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE(TTIH_Has_Func_DestroyStation, DestroyStation);

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

#define TIHMACRO_STATION_HELPER_LIFECYCLE_FUNCTIONS( className ) \
public:\
static className& GetSingle(){ static className singleTone; return singleTone;}\
TIHReturn64 InstantiateStation();\
TIHReturn64 PrepareStation();\
TIHReturn64 InitializeStation();\
TIHReturn64 RefreshStation();\
TIHReturn64 ExecuteStation();\
TIHReturn64 SuspendStation();\
TIHReturn64 WaitStation();\
TIHReturn64 FinalizeStation();\
TIHReturn64 DestroyStation()\

/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃										TTIHStationCRTP									   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/


//--	----	----	----	----	----	----	----	----	----	----	----

/*
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃																						   ┃
┃								Forward Declares for Build								   ┃
┃																						   ┃
┃▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼┃
*/
#pragma region Forward Declares for Build
/*
┌──────────────────────────────────────────────────────────────────────────────────────────┐
										For Strategy
└──────────────────────────────────────────────────────────────────────────────────────────┘
*/
class FTIHCommandBase;
template<typename TIHTemplateType>
class TTIHCommandStrategyCRTP
{
public:
	TTIHCommandStrategyCRTP() : mSelfCRTP(static_cast<TTIHCommandStrategyCRTP*>(this))
	{}
	virtual ~TTIHCommandStrategyCRTP()
	{
		SafeDeletePtr(mSelfCRTP);
	};

	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase)
	{
		TIHReturn64 reValue = 0;
		reValue = static_cast<TTIHCommandStrategyCRTP*>(this)->ExecuteCommandStaticPolymorph(cmdBase);
		return reValue;
	}
	TIHTemplateType* GetSelfPtr()
	{
		return mSelfCRTP;
	}
protected:
	TIHTemplateType* mSelfCRTP;
};
#pragma endregion Forward Declares for Build
/*
┃▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲┃
┃								Forward Declares for Build								   ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

class FTIHPathCenter
{
public:
	static FTIHPathCenter& GetSingle();

	void ReserveUrlArray(int16 value)
	{
		if (mUrlArray.Max() < value)
		{
			mUrlArray.Reserve(value);
			mUrlArray.Reserve(value);
		}
	}
	void ReservePathArray(int16 value)
	{
		if (mPathArray.Max() < value)
		{
			mPathArray.Reserve(value);
			mPathTable.Reserve(value);
		}
	}

	int16 RegistUrl(const FString& value)
	{
		int16 reValue = -1;
		if (mUrlTable.Contains(value) == false)
		{
			reValue = mUrlArray.Add(value);
			mUrlTable.Add(value, reValue);
		}
		return reValue;
	}
	int16 RegistPath(const FString& value)
	{
		int16 reValue = -1;
		if (mPathTable.Contains(value) == false)
		{
			reValue = mUrlArray.Add(value);
			mPathTable.Add(value, reValue);
		}
		return reValue;
	}
private:
	TMap<FString, int16> mUrlTable;
	TArray<FString> mUrlArray;

	TMap<FString, int16> mPathTable;
	TArray<FString> mPathArray;
};
//	차라리 레벨에 넣어놓자.
//	station 은 만들어진 상태일거고
//	
//UCLASS(Blueprintable)
//class ATIHPakBase : public AActor
//{
//	GENERATED_BODY()
//
//public:
//	UFUNCTION(BlueprintCallable)
//	void ConnectingStation() {};
//
//	UFUNCTION(BlueprintCallable)
//	virtual void InsertThisPak() {};	//	팩을 낄때 사용. 사용하면 station을 콜하고 
//	UFUNCTION(BlueprintCallable)
//	virtual void DropThisPak() {};	//	팩을 뺄때 사용.
//};


class FTIHPakStaticPolymorphInterface
{
public:
	template<typename TIHTemplateType>
	void PreparePakCarryOut(TIHTemplateType* value)
	{
	
	}

};