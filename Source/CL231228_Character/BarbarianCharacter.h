// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BarbarianCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class CL231228_CHARACTER_API ABarbarianCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABarbarianCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<USpringArmComponent> BarbarianSpringArm;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<UCameraComponent> BarbarianCamera;


	void BarbarianLook(const FInputActionValue& Value);


};
