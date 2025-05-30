// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "HarmonixDsp/FusionSampler/FusionPatch.h"
#include "FileUtilities/ZipArchiveReader.h"
#include "BKDSLibraryFactory.generated.h"

/**
 *
 */
UCLASS()
class FUSIONPATCHUTILS_API UBKDSLibraryFactory : public UFactory
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<TObjectPtr<UFusionPatch>> newPatches;

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;

	UBKDSLibraryFactory();
};
