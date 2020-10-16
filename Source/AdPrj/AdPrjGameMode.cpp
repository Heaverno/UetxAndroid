// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdPrjGameMode.h"
#include "AdPrjPlayerController.h"
#include "AdPrjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAdPrjGameMode::AAdPrjGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAdPrjPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}