// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/GizmoBase.h"
#include "Components/StaticMeshComponent.h"

AGizmoBase::AGizmoBase()
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

	XYAxis = CreateDefaultSubobject<UStaticMeshComponent>(FName("XYAxis"));
	XYAxis->SetupAttachment(SceneComponent);

	YZAxis = CreateDefaultSubobject<UStaticMeshComponent>(FName("YZAxis"));
	YZAxis->SetupAttachment(SceneComponent);

	XZAxis = CreateDefaultSubobject<UStaticMeshComponent>(FName("XZAxis"));
	XZAxis->SetupAttachment(SceneComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMesh"));
}

void AGizmoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGizmoBase::BeginPlay()
{
	Super::BeginPlay();
}

