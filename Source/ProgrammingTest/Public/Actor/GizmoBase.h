// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GizmoBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class PROGRAMMINGTEST_API AGizmoBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGizmoBase();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
	TObjectPtr<UStaticMeshComponent> XYAxis;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> YZAxis;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> XZAxis;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gizmo")
	TObjectPtr<UStaticMeshComponent> Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};