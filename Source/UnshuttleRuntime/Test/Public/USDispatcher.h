// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "USTester.h"
#include "GameFramework/Actor.h"
#include "USDispatcher.generated.h"

UCLASS()
class UNSHUTTLERUNTIME_API AUSDispatcher : public AUSTester
{
	GENERATED_BODY()

public:
	AUSDispatcher();

	UFUNCTION(BlueprintCallable)
	void DispatchTestEvent();

protected:

	virtual void BeginPlay() override;
};
