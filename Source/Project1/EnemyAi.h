// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "EnemyAi.generated.h"


UCLASS()
class PROJECT1_API AEnemyAi : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyAi();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly)
	UActorComponent* EnemyCharacter;

	UCapsuleComponent* CollisionCapsule;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
