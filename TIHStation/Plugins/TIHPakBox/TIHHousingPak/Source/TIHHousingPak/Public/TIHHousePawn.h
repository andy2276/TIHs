// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "TIHTempLibrary.h"
#include "TIHHousePawn.generated.h"

class UInputMappingContext;


UCLASS()
class TIHHOUSINGPAK_API ATIHHousePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATIHHousePawn();

	void PossessedBy(AController* NewController) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MouseButtonCallBackMain();
	void MouseButtonCallBackEnhancedWarp(const FInputActionInstance& Instance);
protected:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UInputMappingContext> mInputMapping;

	UPROPERTY()
	TObjectPtr<const UInputAction> mInputAction;
private:

};
