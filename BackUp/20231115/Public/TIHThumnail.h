// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TIHThumnail.generated.h"

class UTIHHouseThumnailUI;
UCLASS()
class TIHHOUSINGPAK_API ATIHThumnail : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATIHThumnail();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(EditAnywhere, Category = "TIHThumnail")
	//TSubclassOf<UUserWidget> TIH

	UPROPERTY(EditAnywhere, Category = "TIHThumnail")
	UTexture2D* mThumnailImage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
