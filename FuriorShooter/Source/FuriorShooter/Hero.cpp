// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero.h"
#include "GameFramework/CharacterMovementComponent.h"

void AHero::NiceMove(FVector DesiredMovement)
{
	if (!DesiredMovement.IsNearlyZero())
	{
		FHitResult Hit;
		UCharacterMovementComponent *PaperCharacterMovement = GetCharacterMovement();
		PaperCharacterMovement->SafeMoveUpdatedComponent(DesiredMovement, RootComponent->GetComponentRotation(), true, Hit);

		// If we bumped into something, try to slide along it
		if (Hit.IsValidBlockingHit())
		{
			PaperCharacterMovement->SlideAlongSurface(DesiredMovement, 1.f - Hit.Time, Hit.Normal, Hit, false);
		}
	}
}