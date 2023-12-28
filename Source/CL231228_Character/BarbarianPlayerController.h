// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BarbarianPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CL231228_CHARACTER_API ABarbarianPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Input")
	TObjectPtr<class UInputMappingContext> InputMappingContext;
};
