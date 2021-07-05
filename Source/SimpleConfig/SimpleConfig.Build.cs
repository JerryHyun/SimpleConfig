// Copyright SeungHyeon Hyun. All Rights Reserved.

using UnrealBuildTool;

public class SimpleConfig : ModuleRules
{
	public SimpleConfig(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", });
		PrivateDependencyModuleNames.AddRange(new string[]{ "CoreUObject", "Engine", });
	}
}
