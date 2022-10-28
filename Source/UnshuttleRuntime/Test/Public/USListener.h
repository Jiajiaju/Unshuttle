// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "USTester.h"
#include "GameFramework/Actor.h"
#include "USListener.generated.h"

UCLASS()
class UNSHUTTLERUNTIME_API AUSListener : public AUSTester
{
	GENERATED_BODY()

public:
	AUSListener();

protected:
	virtual void BeginPlay() override;
};
