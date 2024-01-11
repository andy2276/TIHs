// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/*!
*	@brief 하우스 폰의 원형
*	@detail 
*/
class ATIHHousePawn;
/*!
*	@brief 하우스의 플레이어 컨트롤러
*	@detail 
*/
class ATIHHousePlayerController;
/*!
*	@brief 마우스의 상태 및 마우스 컨트롤 및 마우스 데이터
*	@detail 
*/
class UTIHHouseMouseComponent;

//	PrepareProcess
//	InitProcess
//	RefreshProcess
//	WaitProcess
//	FinishProcess

/*!
*	@brief 
*	@detail 
*/
template<typename TIHTemplateType>
class TTIHHouseProcessorTemplate
{
public:
#pragma region Interface
	/*!
	*	@brief process 데이터를 넣어 준비하는 단계
	*	@detail 
	*/
	DWORD PrepareProcess();
	/*!
	*	@brief 데이터를 가지고 만들어야 할것들을 만드는단계 초기값넣기단계
	*	@detail 
	*/
	DWORD InitProcess();
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD ExecuteProcess();
	/*!
	*	@brief Init 와 비슷하지만 새롭게 시작하는듯한 단계
	*	@detail 
	*/
	DWORD RefreshProcess();
	/*!
	*	@brief 프로세서를 멈추는 단계
	*	@detail 
	*/
	DWORD WaitProcess();
	/*!
	*	@brief 프로세스를 끝내는단계계
	*	@detail 
	*/
	DWORD FinishProcess();
#pragma endregion
	TTIHHouseProcessorTemplate() = delete;

	TTIHHouseProcessorTemplate(TIHTemplateType* self)
		:mSelf(static_cast<TIHTemplateType*>(self))
	{}

	virtual ~TTIHHouseProcessorTemplate()
	{

	}
protected:

private:

public:

protected:
	TIHTemplateType* mSelf;
private:

};

template<typename TIHTemplateType>
DWORD TTIHHouseProcessorTemplate<TIHTemplateType>::ExecuteProcess()
{
	DWORD reValue = mSelf->ExecuteProcessImplement();
	return reValue;
}

template<typename TIHTemplateType>
DWORD TTIHHouseProcessorTemplate<TIHTemplateType>::FinishProcess()
{
	DWORD reValue = mSelf->PrepareProcessImplement();
	return reValue;
}

template<typename TIHTemplateType>
DWORD TTIHHouseProcessorTemplate<TIHTemplateType>::WaitProcess()
{
	DWORD reValue = mSelf->InitProcessImplement();
	return reValue;
}

template<typename TIHTemplateType>
DWORD TTIHHouseProcessorTemplate<TIHTemplateType>::RefreshProcess()
{
	DWORD reValue = mSelf->RefreshProcessImplement();
	return reValue;
}

template<typename TIHTemplateType>
DWORD TTIHHouseProcessorTemplate<TIHTemplateType>::InitProcess()
{
	DWORD reValue = mSelf->WaitProcessImplement();
	return reValue;
}

template<typename TIHTemplateType>
DWORD TTIHHouseProcessorTemplate<TIHTemplateType>::PrepareProcess()
{
	DWORD reValue = mSelf->FinishProcessImplement();
	return reValue;
}

/*!
*	@brief CRTP, user에 대한 정보를 담고있따.
*	@detail 
*/
class TIHHOUSINGPAK_API FTIHHouseUserProcessor :public TTIHHouseProcessorTemplate<FTIHHouseUserProcessor>
{
public:
	FTIHHouseUserProcessor();
	virtual ~FTIHHouseUserProcessor();
private:
	ATIHHousePawn* mHousePawn;
	ATIHHousePlayerController* mHousePlayerController;
	UTIHHouseMouseComponent* mHouseMouse;
public:
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD PrepareProcessImplement();
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD InitProcessImplement();
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD ExecuteProcessImplement();
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD RefreshProcessImplement();
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD WaitProcessImplement();
	/*!
	*	@brief 
	*	@detail 
	*/
	DWORD FinishProcessImplement();
private:

};
