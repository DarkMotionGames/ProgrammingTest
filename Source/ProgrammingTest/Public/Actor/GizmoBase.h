// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GizmoBase.generated.h"

UCLASS()
class PROGRAMMINGTEST_API AGizmoBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGizmoBase();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "Gizmo")
    AActor* SelectedActor;
    
    UFUNCTION(BlueprintCallable, Category = "Gizmo")
    void MoveActor(FVector Axis);
    
private:
    FVector InitialLocation;
    FVector CurrentLocation;
};


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
