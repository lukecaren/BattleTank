// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank * GetControlledTank() const;

	ATank * GetPlayerTank() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};
