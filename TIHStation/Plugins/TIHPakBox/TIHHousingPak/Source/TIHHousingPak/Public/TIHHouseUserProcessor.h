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
*	@brief CRTP, user에 대한 정보를 담고있따.
*	@detail 
*/
class TIHHOUSINGPAK_API FTIHHouseUserProcessor 
{
public:
	FTIHHouseUserProcessor();
	virtual ~FTIHHouseUserProcessor() {};
private:
	ATIHHousePawn* mHousePawn;
	ATIHHousePlayerController* mHousePlayerController;
	UTIHHouseMouseComponent* mHouseMouse;
public:

private:

};
