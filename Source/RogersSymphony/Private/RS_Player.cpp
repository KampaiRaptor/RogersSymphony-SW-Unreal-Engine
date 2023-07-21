// Fill out your copyright notice in the Description page of Project Settings.


#include "RS_Player.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ARS_Player::ARS_Player()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom -> SetupAttachment(RootComponent);
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera -> SetupAttachment(CameraBoom);
	
}

// Called when the game starts or when spawned
void ARS_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARS_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CameraBoom -> AddLocalRotation(AddedRotation);

}

// Called to bind functionality to input
void ARS_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

