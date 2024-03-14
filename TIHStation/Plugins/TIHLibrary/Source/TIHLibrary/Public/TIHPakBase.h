// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TIHPakBase.generated.h"

class FTIHStationBase;

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
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
