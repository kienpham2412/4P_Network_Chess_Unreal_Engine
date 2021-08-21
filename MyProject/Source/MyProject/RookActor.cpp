// Fill out your copyright notice in the Description page of Project Settings.


#include "RookActor.h"

// Sets default values
ARookActor::ARookActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	firstMove = 1;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>RookMeshAsset(TEXT("StaticMesh'/Game/ChessPieces/SM_Rook.SM_Rook'"));

	if (RookMeshAsset.Succeeded())
		Mesh->SetStaticMesh(RookMeshAsset.Object);
	else
		UE_LOG(LogTemp, Warning, TEXT("No Mesh Found for Rook!"));
}

// Called when the game starts or when spawned
void ARookActor::BeginPlay()
{
	Super::BeginPlay();
	
}
