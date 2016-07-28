// Fill out your copyright notice in the Description page of Project Settings.

#include "BIO_RUBE_V1.h"
#include "NuclearPorePawn.h"


// Sets default values
ANuclearPorePawn::ANuclearPorePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANuclearPorePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANuclearPorePawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ANuclearPorePawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

