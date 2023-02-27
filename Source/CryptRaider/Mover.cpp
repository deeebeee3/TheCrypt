// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// variable that stores the address of the Actor that owns it.. (pointer)
	AActor* Owner = GetOwner();

	//FString Name = (*Owner).GetActorNameOrLabel();
	FString Name = Owner->GetActorNameOrLabel();

	UE_LOG(LogTemp, Display, TEXT("Mover Owner: %s"), *Name);


	FVector ActorLocation = Owner->GetActorLocation();
	FString ActorLocationString = ActorLocation.ToCompactString();
	UE_LOG(LogTemp, Display, TEXT("Actor location is: %f"), *ActorLocationString);


	float MyFloat = 5;
	float* YourFloat = &MyFloat; //pointer variable which stores the address of MyFloat
	//float FloatValue = *YourFloat; // dereferencing - get me the value at this location

	// dereferencing - get me the value at this location
	UE_LOG(LogTemp, Display, TEXT("YourFloat Value: %f"), *YourFloat); 


	UE_LOG(LogTemp, Display, TEXT("I am owned by: %u"), Owner);

	// ...
}

