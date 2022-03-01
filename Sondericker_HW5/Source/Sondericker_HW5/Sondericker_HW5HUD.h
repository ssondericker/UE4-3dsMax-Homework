// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Sondericker_HW5HUD.generated.h"

UCLASS()
class ASondericker_HW5HUD : public AHUD
{
	GENERATED_BODY()

public:
	ASondericker_HW5HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

