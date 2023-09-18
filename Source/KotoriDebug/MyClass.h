// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "MyClass.generated.h"

/**
 * 
 */
UCLASS()
class KOTORIDEBUG_API UKtrDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta=(AdvancedDisplay = "2", DevelopmentOnly, WorldContext="WorldContextObject"))
	static void DebugPrint(UObject* WorldContextObject, FString InString, bool bPrintToScreen = true, bool bPrintToLog = true, FLinearColor TextColor = FLinearColor::White, float Duration = 2.f);
};
