using UnrealBuildTool;

public class UnshuttleRuntime : ModuleRules
{
	public UnshuttleRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine"
		});

		PrivateDependencyModuleNames.AddRange(new string[]{});
		
		PublicIncludePaths.AddRange(new string[]
		{
			// "UnshuttleRuntime/Core/Public",
			// "UnshuttleRuntime/Core/Public",
			// "UnshuttleRuntime/Settings/Public"
		});
		
		PrivateIncludePaths.AddRange(new string[]
		{
			"UnshuttleRuntime/Utility/Public",
			"UnshuttleRuntime/Core/Public",
			"UnshuttleRuntime/Test/Public"
		});
	}
}