// Fill out your copyright notice in the Description page of Project Settings.


#include "BarbarianCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABarbarianCharacter::ABarbarianCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BarbarianSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Barbarian SpringArm"));
	BarbarianSpringArm->SetupAttachment(RootComponent);
	BarbarianCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Barbarian Camera"));
	BarbarianCamera->SetupAttachment(BarbarianSpringArm);

}

// Called when the game starts or when spawned
void ABarbarianCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarbarianCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABarbarianCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABarbarianCharacter::BarbarianLook(const FInputActionValue& Value)
{
}

