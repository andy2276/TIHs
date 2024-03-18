// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TIHPakBase.generated.h"

class FTIHStationBase;

class FTIHIntellisense : public FTickableGameObject
{
public:
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
