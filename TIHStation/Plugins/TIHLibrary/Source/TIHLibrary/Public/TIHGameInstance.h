// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TIHGameInstance.generated.h"

class FTIHDefaultStation;

/**
 * 
 */
UCLASS()
class TIHLIBRARYENTRY_API UTIHGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	//FTIHDefaultStation* mTIHStation;


private:
	FTIHDefaultStation* mTIHStation;
	//	여기에 TIHStationCore 가 들어갈것이다.
	//	빠른접근을 위해서 내부의 기능들을 저장해놓을것이다.
	//	어차피 게임인스턴스는 무조건 1개만 존재할것이므로 중복을 생각하지 않아도 된다.
	//	어차피 로컬유저가 서버로부터 데이터를 받는것으로 구현되므로 해당부분만 신경쓰면 된다.

	void Init() override;

};
