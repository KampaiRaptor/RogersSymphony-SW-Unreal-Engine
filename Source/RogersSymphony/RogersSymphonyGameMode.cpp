// Copyright Epic Games, Inc. All Rights Reserved.

#include "RogersSymphonyGameMode.h"
#include "RogersSymphonyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARogersSymphonyGameMode::ARogersSymphonyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
