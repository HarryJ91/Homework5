// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework5 : ModuleRules
{
	public Homework5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
