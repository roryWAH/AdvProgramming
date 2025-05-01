// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvProgramming : ModuleRules
{
	public AdvProgramming(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
