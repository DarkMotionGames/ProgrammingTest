// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProgrammingTest : ModuleRules
{
	public ProgrammingTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
		
	}
}
