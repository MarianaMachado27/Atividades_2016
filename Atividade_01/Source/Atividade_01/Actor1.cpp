// Fill out your copyright notice in the Description page of Project Settings.

#include "Atividade_01.h"
#include "Actor1.h"


// Sets default values
AActor1::AActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActor1::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

