// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "GameFramework/SpringArmComponent.h"
#include "BarbarianPawn.generated.h"


class UCapsuleComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UCharacterMovementComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class CL231228_CHARACTER_API ABarbarianPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABarbarianPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<UCapsuleComponent> BarbarianCapsule;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<USkeletalMeshComponent> BarbarianBody;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<USpringArmComponent> BarbarianSpringArm;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<UCameraComponent> BarbarianCamera;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Inputs")
	TObjectPtr<UCharacterMovementComponent> BarbarianMovement;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Animations")
	TObjectPtr<UInputAction> BarbarianWalkForward;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Animations")
	TObjectPtr<UInputAction> BarbarianRunForward;

	void BarbarianLook(const FInputActionValue& Value);
};
