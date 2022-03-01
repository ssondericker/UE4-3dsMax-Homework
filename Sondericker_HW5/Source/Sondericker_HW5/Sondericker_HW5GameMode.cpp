// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sondericker_HW5GameMode.h"
#include "Sondericker_HW5HUD.h"
#include "Sondericker_HW5Character.h"
#include "UObject/ConstructorHelpers.h"

ASondericker_HW5GameMode::ASondericker_HW5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASondericker_HW5HUD::StaticClass();
}
