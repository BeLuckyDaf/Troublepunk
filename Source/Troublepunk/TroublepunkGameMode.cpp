// Copyright Epic Games, Inc. All Rights Reserved.

#include "TroublepunkGameMode.h"
#include "TroublepunkPlayerController.h"
#include "TroublepunkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATroublepunkGameMode::ATroublepunkGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATroublepunkPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}