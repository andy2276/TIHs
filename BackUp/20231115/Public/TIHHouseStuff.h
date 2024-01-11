// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TIHHouseStuff.generated.h"

class UTIHHouseLayerLinker;
class ATIHThumnail;	//	이거 렌더 될 필요가 있나? 정보일뿐인데. 그냥 함수만 실행하는데 수정해보자.
class FTIHHouseNode;

UCLASS()
class TIHHOUSINGPAK_API ATIHHouseStuff : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATIHHouseStuff();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY()
	TArray<UTIHHouseLayerLinker*> mContainerHouseLayers;

	FTIHHouseNode* mTIHNode;
};
