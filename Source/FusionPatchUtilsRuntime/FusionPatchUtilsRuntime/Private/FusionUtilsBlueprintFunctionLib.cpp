// Fill out your copyright notice in the Description page of Project Settings.


#include "FusionUtilsBlueprintFunctionLib.h"
#include "HarmonixDsp/FusionSampler/FusionPatch.h"
#include "AssetRegistry/AssetRegistryModule.h"

TArray<UFusionPatch*> UFusionUtilsBlueprintFunctionLib::GetAllFusionPatchAssets()
{
	TArray<UFusionPatch*> FusionPatches;

	TArray<FAssetData> AssetData;
    const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
	AssetRegistry.GetAssetsByClass(UFusionPatch::StaticClass()->GetClassPathName(), AssetData, true);

	for (const FAssetData& Asset : AssetData)
	{
		if (Asset.IsValid())
		{
			UFusionPatch* FusionPatch = Cast<UFusionPatch>(Asset.GetAsset());
			if (FusionPatch)
			{
				FusionPatches.Add(FusionPatch);
			}
		}
	}

    
    return FusionPatches;
}
