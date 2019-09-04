// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Hero.generated.h"

/**
 * 
 */
UCLASS()
class FURIORSHOOTER_API AHero : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void NiceMove(FVector DesiredMovement);
};
