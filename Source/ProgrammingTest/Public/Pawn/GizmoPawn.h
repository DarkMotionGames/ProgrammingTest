// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GizmoPawn.generated.h"


class UStaticMeshComponent;
UCLASS()
class PROGRAMMINGTEST_API AGizmoPawn : public APawn
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGizmoPawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<AActor> TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> XAxis;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> YAxis;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> ZAxis;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};