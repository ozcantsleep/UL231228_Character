// Fill out your copyright notice in the Description page of Project Settings.


#include "BarbarianPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void ABarbarianPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (SubSystem && InputMappingContext)
	{
		SubSystem->AddMappingContext(InputMappingContext, 0);
	}
}