// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "../../../../../../../Source/Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "TIHThumnailPrompter.generated.h"

class ATIHThumnail;
class UTIHHouseBuildPromptUI;

UCLASS()
class TIHHOUSINGPAK_API ATIHThumnailPrompter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATIHThumnailPrompter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
protected:
private:

protected:
	UPROPERTY()
	TArray< ATIHThumnail*> mContainerThumnails;

	UPROPERTY(EditAnywhere, Category = "TIHThumnail")
	TSubclassOf<UTIHHouseBuildPromptUI> mUIThumnailPrompt;
private:
};
