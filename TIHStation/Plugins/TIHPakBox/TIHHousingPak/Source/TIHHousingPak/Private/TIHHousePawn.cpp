// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHousePawn.h"
#include "TIHHousePlayerController.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"

#include "EnhancedInputSubsystems.h"


// Sets default values
ATIHHousePawn::ATIHHousePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

 void ATIHHousePawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
}

// Called when the game starts or when spawned
void ATIHHousePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATIHHousePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ATIHHousePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* input = nullptr;
	PlayerInputComponent->BindAction(TEXT("RightMouseButton"), EInputEvent::IE_Pressed, this, &ATIHHousePawn::MouseButtonCallBackMain);
	
	return;
	AController* controller = nullptr;
	APlayerController* playerController = nullptr;
	ULocalPlayer* localPlayer = nullptr;
	UEnhancedInputLocalPlayerSubsystem* inputLocalSubSystem = nullptr;

	//UEnhancedInputComponent* input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	controller = GetController();
	if(controller == nullptr)
	{

		return;
	}
	playerController = Cast<APlayerController>(controller);
	if (playerController == nullptr)
	{
		return;
	}
	 localPlayer = playerController->GetLocalPlayer();
	if (localPlayer == nullptr)
	{
		return;
	}

	inputLocalSubSystem = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if(inputLocalSubSystem == nullptr)
	{
		return;
	}
	inputLocalSubSystem->AddMappingContext(mInputMapping.LoadSynchronous(), 1);

	UEnhancedInputComponent* inputBind = Cast< UEnhancedInputComponent>(PlayerInputComponent);
	inputBind->BindAction(mInputAction, ETriggerEvent::Triggered, this, &ATIHHousePawn::MouseButtonCallBackEnhancedWarp);
	UE_LOG(LogTemp, Warning, TEXT("Enhanced Input??"));
	
}

void ATIHHousePawn::MouseButtonCallBackMain()
{
	UE_LOG(LogTemp, Warning, TEXT("Input boom boom"));
	ATIHHousePlayerController* currController = GetController<ATIHHousePlayerController>();
	FVector2d currMousePos;
	FVector currWorldPos;
	FVector currWorldDirection;

	bool checkFuncProcess = false;
	const float rayLength = 1000.f;

	checkFuncProcess = currController->GetMousePosition(currMousePos.X, currMousePos.Y);
	if(checkFuncProcess == false)
	{
		TIHDEBUG_LOG("log");
		return;
	}
	checkFuncProcess = currController->DeprojectScreenPositionToWorld(currMousePos.X, currMousePos.Y,currWorldPos,currWorldDirection);
	if(checkFuncProcess == false)
	{
		TIHDEBUG_LOG("log");
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("position %f %f %f"),currWorldPos.X, currWorldPos.Y, currWorldPos.Z);

	FCollisionQueryParams collisionParams;

	collisionParams.AddIgnoredActor(this);

	FHitResult hitResult;
	FVector endRay;
	endRay = currWorldPos + (currWorldDirection * rayLength);

	if(GetWorld()->LineTraceSingleByChannel(
		hitResult,
		currWorldPos,
		endRay,
		ECollisionChannel::ECC_Visibility,
		collisionParams))
	{
		AActor* selectActor = hitResult.GetActor();
		if(selectActor != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("select"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("nonSelect"));

		}

	}

	

}

void ATIHHousePawn::MouseButtonCallBackEnhancedWarp(const FInputActionInstance& Instance)
{
	UE_LOG(LogTemp, Warning, TEXT("Enhanced Input boom boom"));
	MouseButtonCallBackMain();
	
}

