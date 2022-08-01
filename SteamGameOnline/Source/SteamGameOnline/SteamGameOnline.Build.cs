// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SteamGameOnline : ModuleRules
{
	public SteamGameOnline(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
