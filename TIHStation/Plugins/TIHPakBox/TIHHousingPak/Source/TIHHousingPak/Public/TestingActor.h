// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestingActor.generated.h"

UCLASS()
class TIHHOUSINGPAK_API ATestingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, CallInEditor)
	void OnTestingButton();
	
	/*
		to-do
		이걸 어디서 하냐인데, 이거 인텔리 센스로 옮기자.
		어차피 인텔리 센스는 아무곳에서나 호출하니까
	*/
	UFUNCTION(BlueprintCallable, CallInEditor)
	void On00StationInstantiate();

	/*
		to-do
		이거는 팩이 실행되면 하자.
	*/
	UFUNCTION(BlueprintCallable, CallInEditor)
	void On01StationPrepare();

	/*
		to-do
		이거도 팩이 실행되면 하는건데 모두 인텔리 센스에서 해주자.
	*/
	UFUNCTION(BlueprintCallable, CallInEditor)
	void On01StationInit();
};
