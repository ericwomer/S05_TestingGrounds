// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AssaultSectorSixMode.h"
#include "AssaultSectorSixHUD.h"
#include "AssaultSectorSixCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAssaultSectorSixMode::AAssaultSectorSixMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAssaultSectorSixHUD::StaticClass();
}
