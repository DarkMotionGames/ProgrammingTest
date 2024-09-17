// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/GizmoPawn.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AGizmoPawn::AGizmoPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(FName("Root"));
	SceneComponent->SetupAttachment(RootComponent);

	XAxis = CreateDefaultSubobject<UStaticMeshComponent>(FName("XAxis"));
	XAxis->SetupAttachment(SceneComponent);

	YAxis = CreateDefaultSubobject<UStaticMeshComponent>(FName("YAxis"));
	YAxis->SetupAttachment(SceneComponent);

	ZAxis = CreateDefaultSubobject<UStaticMeshComponent>(FName("ZAxis"));
	ZAxis->SetupAttachment(SceneComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMesh"));

}

void AGizmoPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

