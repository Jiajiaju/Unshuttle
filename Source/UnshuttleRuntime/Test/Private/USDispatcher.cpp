// Fill out your copyright notice in the Description page of Project Settings.


#include "USDispatcher.h"

#include "ShuttleService.h"


AUSDispatcher::AUSDispatcher()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AUSDispatcher::BeginPlay()
{
	Super::BeginPlay();
}

void AUSDispatcher::DispatchTestEvent()
{
	FShuttleService::GetInstance().DispatchEvent("TestEventName");
}