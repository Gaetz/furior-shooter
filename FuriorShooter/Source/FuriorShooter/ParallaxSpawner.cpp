// Fill out your copyright notice in the Description page of Project Settings.


#include "ParallaxSpawner.h"
#include "SpawnElement.h"

#include "Math/Range.h"
#include "Engine/World.h"

// Sets default values
AParallaxSpawner::AParallaxSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AParallaxSpawner::BeginPlay()
{
	Super::BeginPlay();
	TimeSinceLastSpawn = 0.0f;
	ActualPeriod = FMath::FRandRange(MinPeriod, MaxPeriod);
}

void AParallaxSpawner::SpawnWithScale()
{
	FVector SpawnerLocation = GetActorLocation();
	FRotator SpawnerRotator = GetActorQuat().Rotator();

	float Y = SpawnerLocation.Y;
	float Size = (1000 + Y * PerspectiveSizeMultiplier) / 1000;
	FVector Scale = FVector(Size, 1.0f, Size);

	AActor* Spawned = GetWorld()->SpawnActor(Spawnable, &SpawnerLocation, &SpawnerRotator);
	Spawned->SetActorScale3D(Scale);
}

// Called every frame
void AParallaxSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeSinceLastSpawn += DeltaTime;
	if (TimeSinceLastSpawn >= ActualPeriod)
	{
		SpawnWithScale();
		TimeSinceLastSpawn -= ActualPeriod;
		ActualPeriod = FMath::FRandRange(MinPeriod, MaxPeriod);
	}
}

