// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "udk_test.h"
#include "udk_testGameMode.h"
#include "udk_testPlayerController.h"
#include "udk_testCharacter.h"

Audk_testGameMode::Audk_testGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// use our custom PlayerController class
	PlayerControllerClass = Audk_testPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}