// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TIHChildrenActorComponent.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TIHLIBRARYENTRY_API UTIHChildrenActorComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTIHChildrenActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	/*
		
	
	*/
	TArray<int16> mMngObjIndex;
	/*
		이거는 onregist 에서 해주면 된다.
	*/
	int16 mSelfMngObjectIndex;
public:

};
