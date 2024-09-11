// Copyright Epic Games, Inc. All Rights Reserved.

#include "WwisardGameMode.h"
#include "WwisardCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWwisardGameMode::AWwisardGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
