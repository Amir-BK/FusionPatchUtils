// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FusionUtilsBlueprintFunctionLib.generated.h"

class UFusionPatch;
/**
 * 
 */
UCLASS()
class FUSIONPATCHUTILSRUNTIME_API UFusionUtilsBlueprintFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "FusionPatchUtils|FusionPatch")
	static TArray<UFusionPatch*> GetAllFusionPatchAssets();
};
