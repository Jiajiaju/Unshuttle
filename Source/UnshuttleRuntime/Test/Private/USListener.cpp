// Fill out your copyright notice in the Description page of Project Settings.


#include "UnshuttleRuntime/Test/Public/USListener.h"

#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/TextRenderComponent.h"

AUSListener::AUSListener()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AUSListener::BeginPlay()
{
	Super::BeginPlay();
}