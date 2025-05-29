// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class FusionPatchUtilsRuntime : ModuleRules
{
	public FusionPatchUtilsRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
			{ 
				"Core",
				"CoreUObject",
				"Engine"
			});
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Harmonix",
                "HarmonixDsp",
            });
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				
			});
	}
}
