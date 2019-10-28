// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParallaxSpawner.generated.h"

UCLASS()
class FURIORSHOOTER_API AParallaxSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParallaxSpawner();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ASpawnElement> Spawnable;

	UPROPERTY(EditAnywhere)
	float PerspectiveSizeMultiplier;

	UPROPERTY(EditAnywhere)
	float MinPeriod;

	UPROPERTY(EditAnywhere)
	float MaxPeriod;

protected:
	// Time passed sin last spawn
	float TimeSinceLastSpawn;

	// Random generated period, between Min and Max periods
	float ActualPeriod;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Spawn the spawnable at the right place
	virtual void SpawnWithScale();
/*
	template< class T >
	T* SpawnActor(const FTransform& Transform, AActor* Owner = NULL, APawn* Instigator = NULL)
	{
		
	}
	*/

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
