// Copyright Epic Games, Inc. All Rights Reserved.

#include "TutorialSeriesGameMode.h"
#include "TutorialSeriesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorialSeriesGameMode::ATutorialSeriesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
