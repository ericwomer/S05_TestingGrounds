// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AssaultSectorSixHUD.generated.h"

class UTexture2D;

UCLASS()
class AAssaultSectorSixHUD : public AHUD
{
	GENERATED_BODY()

protected:

	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

public:

	AAssaultSectorSixHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

};

