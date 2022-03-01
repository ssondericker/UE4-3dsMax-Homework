// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sondericker_HW5 : ModuleRules
{
	public Sondericker_HW5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
