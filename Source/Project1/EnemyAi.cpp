// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAi.h"

// Sets default values
AEnemyAi::AEnemyAi()
{
 
	EnemyCharacter = CreateDefaultSubobject<UActorComponent>(TEXT("Enemy"));
	SetRootComponent(EnemyCharacter);
	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	CollisionCapsule->SetupAttachment(EnemyCharacter);

}

// Called when the game starts or when spawned
void AEnemyAi::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyAi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

