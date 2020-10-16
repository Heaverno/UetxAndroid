// Copyright Epic Games, Inc. All Rights Reserved.

#include "UetxAndroidGameMode.h"
#include "UetxAndroidPlayerController.h"
#include "UetxAndroidCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUetxAndroidGameMode::AUetxAndroidGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUetxAndroidPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}