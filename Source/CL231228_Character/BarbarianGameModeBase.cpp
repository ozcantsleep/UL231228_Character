// Fill out your copyright notice in the Description page of Project Settings.


#include "BarbarianGameModeBase.h"

ABarbarianGameModeBase::ABarbarianGameModeBase()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("GameMode Debug"));
	}
	UE_LOG(LogTemp, Warning, TEXT("GameMode Log"));

	DefaultPawnClass = ABarbarianCharacter::StaticClass();
}
