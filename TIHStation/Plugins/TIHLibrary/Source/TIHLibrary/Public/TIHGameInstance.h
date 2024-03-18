// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TIHGameInstance.generated.h"

class FTIHDefaultStation;

/**
 * to-do
	여기에다가 초기화 시켜야하는데 흠...
 */
UCLASS()
class TIHLIBRARYENTRY_API UTIHGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	//FTIHDefaultStation* mTIHStation;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> mTest;
private:
	FTIHDefaultStation* mTIHStation;
	/*
		스테이션에 팩을 갈아끼는 기능이 있어야함.
		팩인서트 같은 함수를 만들고 해당 함수가 호출이 되면 해당 팩을 생성하는 함수를 호출
		어차피 그 팩은 에디터에서 호출하는걸로.

		그리고 게임 팩을 인서트 하는 거는 언리얼 오브젝트로 만들어서 실행하는걸로하자.
		그럼 순환 참조 비슷하게 될거같긴한데 그럼 해당 레벨로할까? 레벨의 시작에서 팩에 대한 정보를 들고오고
		그 정보를 가진 게임오브젝트를 생성-> 그럼 그 게임 오브젝트에서 station 을 불러서 station 에 
		자신이 가진 팩을 실행. 이럼 에디터상에서 만들어지기는 하는데, 
		해당 레벨에서 스타트 함수에 해당 팩 스타터 언리얼오브젝트 생성. 
		해당 언리얼 오브젝트의 인서트 팩실행
		인서트 팩에는 station 에게 지금 자신이 가지고 있는 pack 을 전달하는역할. 그럼 인서터는 무조건 팩마다하나.

		-> 이거 정리해서 팩은 액터로 만들고, 그 액터는 레벨에서 호출이 되게 했음. 
	*/
	

	void Init() override;

};
