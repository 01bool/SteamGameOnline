// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamGameOnlineGameMode.h"
#include "SteamGameOnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamGameOnlineGameMode::ASteamGameOnlineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
