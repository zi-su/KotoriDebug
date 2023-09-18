// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClass.h"

#include "Kismet/KismetSystemLibrary.h"

void UKtrDebugFunctionLibrary::DebugPrint(UObject* WorldContextObject, FString InString, bool bPrintToScreen,
	bool bPrintToLog, FLinearColor TextColor, float Duration)
{
	UKismetSystemLibrary::PrintString(WorldContextObject, InString, bPrintToScreen, bPrintToLog, TextColor, Duration);
}
