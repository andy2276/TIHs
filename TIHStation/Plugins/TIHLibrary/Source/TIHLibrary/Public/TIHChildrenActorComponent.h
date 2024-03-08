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


	UFUNCTION(BlueprintCallable, Category=TIHComponent)
	void AddChildActorClass(TSubclassOf<AActor> InClass)
	{
		AddChildActorClass(InClass, nullptr);
	}
	void AddChildActorClass(TSubclassOf<AActor> InClass, AActor* NewChildActorTemplate);
	
	TSubclassOf<AActor> GetChildActorClass(int32 index) const 
	{ 
		return mChildrenActorClassArray[index];
	}
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=ChildActorComponent, meta=(OnlyPlaceable, AllowPrivateAccess="true", ForceRebuildProperty="ChildActorTemplate"))
	TArray<TSubclassOf<AActor>> mChildrenActorClassArray;

	//UPROPERTY(Replicated, BlueprintReadOnly, ReplicatedUsing=OnRep_ChildActor, Category=ChildActorComponent, TextExportTransient, NonPIEDuplicateTransient, meta=(AllowPrivateAccess="true"))
	//TObjectPtr<AActor>	ChildActor;

};
