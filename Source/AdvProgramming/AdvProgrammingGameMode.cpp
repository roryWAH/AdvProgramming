// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvProgrammingGameMode.h"
#include "AdvProgrammingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAdvProgrammingGameMode::AAdvProgrammingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
