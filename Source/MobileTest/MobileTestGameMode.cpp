// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MobileTestGameMode.h"
#include "MobileTestHUD.h"
#include "MobileTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMobileTestGameMode::AMobileTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMobileTestHUD::StaticClass();
}
