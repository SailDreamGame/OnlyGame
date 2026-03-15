// Fill out your copyright notice in the Description page of Project Settings.


#include "OnlyGameCaracterBase.h"

// Sets default values
AOnlyGameCaracterBase::AOnlyGameCaracterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOnlyGameCaracterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOnlyGameCaracterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOnlyGameCaracterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

