// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "USTester.generated.h"

UCLASS()
class UNSHUTTLERUNTIME_API AUSTester : public AActor
{
	GENERATED_BODY()

public:
	AUSTester();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UArrowComponent* ArrowComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UTextRenderComponent* TextRenderComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBillboardComponent* BillboardComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;

	virtual void BeginPlay() override;
};
