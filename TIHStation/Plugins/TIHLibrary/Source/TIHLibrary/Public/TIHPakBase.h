// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TIHStationCore.h"
#include "TIHStationCoreDefines.h"

#include "TIHPakBase.generated.h"

class FTIHStationBase;

class FTIHIntellisense : public FTickableGameObject
{
public:
	FTIHIntellisense();
	virtual ~FTIHIntellisense();

	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override
	{
		return ETickableTickType::Always;
	}
	virtual TStatId GetStatId() const override
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FTIHIntellisense, STATGROUP_Tickables);
	}
	virtual bool IsTickableWhenPaused() const
	{
		return true;
	}
	virtual bool IsTickableInEditor() const
	{
		return false;
	}

	bool CheckTimeCommandList();
	void OnExecuteTimeCommandList();

	bool CheckNormalCommandList();
	void OnExecuteNormalCommandList();

	void InstantiateThis();
	void InitiateThis();

protected:
	TIHSTATION_TYPE* mStation;
	FTIHMngObjPoolCenter* mMngObjCenter;
	FTIHMeshPool* mMeshPool;
	FTIHTickTock* mTickTock;
	FTIHCommander* mCommander;
	FTIHCommandList* mCommandList;
	/*
		to-do
		if(timeQueue.NotEmpty && timeQueue.)
	
	*/
	FTIHTickableScheduler* mTickableScheduler;

	uint32 LastFrameNumberWeTicked;
	/*
		일단 hash 는 잘작동함
		그럼 이제 커맨드를 실행해줘야하는데, 여기서 해야하거든. 어떻게 할까/
	
	*/

private:
};




UCLASS()
class TIHLIBRARYENTRY_API ATIHPakBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATIHPakBase();

	UFUNCTION(BlueprintCallable)
	void ConnectingStation();

	UFUNCTION(BlueprintCallable)
	virtual void InsertPak() {};

	UFUNCTION(BlueprintCallable)
	virtual void DropPak() {};
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTIHStationBase* mStation;
	FTIHIntellisense* mIntellisense;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void BeginDestroy() override;

};
