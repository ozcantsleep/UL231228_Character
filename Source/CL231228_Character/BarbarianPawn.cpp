// Fill out your copyright notice in the Description page of Project Settings.


#include "BarbarianPawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABarbarianPawn::ABarbarianPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BarbarianCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Barbarian Capsule"));
	RootComponent = BarbarianCapsule;

	BarbarianBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Barbarian Body"));
	BarbarianBody->SetupAttachment(BarbarianCapsule);

	BarbarianSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Barbarian SpringArm"));
	BarbarianSpringArm->SetupAttachment(BarbarianCapsule);

	BarbarianCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Barbarian Camera"));
	BarbarianCamera->SetupAttachment(BarbarianSpringArm);

	BarbarianMovement = CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("Barbarian Movement"));
}

// Called when the game starts or when spawned
void ABarbarianPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarbarianPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABarbarianPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABarbarianPawn::BarbarianLook(const FInputActionValue& Value)
{
}

