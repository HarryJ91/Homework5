// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CurrentX = 0;
	CurrentY = 0;

	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	RootComponent = SkeletalMeshComponent;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(TEXT("/Script/Engine.SkeletalMesh'/Game/Werewolf/Mesh/Full/SK_Werewolf_Full1.SK_Werewolf_Full1'")); // Replace with your mesh path")
	
	if (SkeletalMeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMeshAsset(SkeletalMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello. World!"));
	// start moving when the game starts
	Move();
}

int32 AMyActor::Step()
{
	// return 0 or 1 randomly
	return FMath::RandRange(0, 1);
}

void AMyActor::Move()
{
	UE_LOG(LogTemp, Warning, TEXT("Start Coordinate: (%d,%d)"), CurrentX, CurrentY);

	for (int32 i = 0; i < 10; i++)
	{
		// using move function
		int32 MoveX = Step();
		int32 MoveY = Step();

		CurrentX += MoveX;
		CurrentY += MoveY;

		UE_LOG(LogTemp, Warning, TEXT("Move %d -> Position: (%d, %d)"), i + 1, CurrentX, CurrentY);
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

