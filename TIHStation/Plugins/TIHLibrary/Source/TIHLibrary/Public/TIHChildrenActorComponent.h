// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TIHStationCore.h"
#include "TIHChildrenActorComponent.generated.h"
class FTIHMngObj;


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

	void AddChildMngObj(int16 childIndex)
	{
		mMngObjIndices.Add(childIndex);
	}
	void PopChildMngObj(int16 childIndex)
	{
		int32 index = mMngObjIndices.Find(childIndex);
		mMngObjIndices.RemoveAt(index);
	}
	int16 PoolingChildMngObj();
	FTIHMngObj* GetChildMngObjByIndex(int16 mngObjIndex);

	void UpdateTransformToChild();

private:
	/*
		AttachOther(AActor* other)
		{
			other->GetTIHIndex
			AddChildMngObj()
		}
	*/
	TArray<int16> mMngObjIndices;
	/*
		이거는 onregist 에서 해주면 된다.
	*/
	int8 mMngObjPoolAllocSpace;
	int8 mPadding;
	int16 mSelfMngObjectIndex;

public:
	void OnRegister() override;

};
