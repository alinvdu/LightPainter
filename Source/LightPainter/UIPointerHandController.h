// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HandControllerBase.h"
#include "UIPointerHandController.generated.h"

/**
 * 
 */
UCLASS()
class LIGHTPAINTER_API AUIPointerHandController : public AHandControllerBase
{
	GENERATED_BODY()

public:
	AUIPointerHandController();

	void HandleTriggerPressed() override;

	void HandleTriggerReleased() override;
	
private:
	UPROPERTY(VisibleAnywhere)
	class UWidgetInteractionComponent* InteractionComponent;
};
