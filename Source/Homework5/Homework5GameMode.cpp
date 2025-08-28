// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework5GameMode.h"
#include "Homework5Character.h"
#include "UObject/ConstructorHelpers.h"

AHomework5GameMode::AHomework5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
