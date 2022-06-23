// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallMovment.generated.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

UCLASS()
class MYPROJECTTEST_API ABallMovment : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallMovment();

	class  USceneComponent US;
	class  UStaticMeshComponent SM;
	class  USpringArmComponent SA;
	


protected:
	// Called when the game starts or when spawned
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
