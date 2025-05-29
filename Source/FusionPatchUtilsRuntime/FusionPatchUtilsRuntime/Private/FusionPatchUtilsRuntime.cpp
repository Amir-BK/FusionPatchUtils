// Fill out your copyright notice in the Description page of Project Settings.

#include "FusionPatchUtilsRuntime.h"
#include "Logging.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FFusionPatchUtilsRuntime"

void FFusionPatchUtilsRuntime::StartupModule()
{
}

void FFusionPatchUtilsRuntime::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFusionPatchUtilsRuntime, FusionPatchUtilsRuntime);