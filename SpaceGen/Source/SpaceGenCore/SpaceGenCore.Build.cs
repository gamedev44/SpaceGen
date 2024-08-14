// Copyright 2024 PGD STUDIO. All Rights Reserved


using System.IO;				
using UnrealBuildTool;

public class SpaceGenCore : ModuleRules
{
	public SpaceGenCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnforceIWYU = true;
        bLegacyPublicIncludePaths = false;

#if UE_4_24_OR_LATER
        bUseUnity = false;
#else
        bFasterWithoutUnity = true;
#endif
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));																																	  
        // For raytracing
        PrivateIncludePaths.Add(EngineDirectory + "/Shaders/Shared");
        // For HLSL translator
        PrivateIncludePaths.Add(EngineDirectory + "/Source/Runtime/Engine/Private");

        PublicDependencyModuleNames.AddRange(
			new string[]
			{                
				"Core",
                "CoreUObject",
                "Engine",
				"EngineSettings",
                "Sockets",
                "RHI",
                "Foliage",
#if UE_4_23_OR_LATER
                "PhysicsCore",
#endif
                "RenderCore",
#if UE_4_26_OR_LATER
                "DeveloperSettings",
                "TraceLog",
#endif
            }
        );


        PrivateDependencyModuleNames.AddRange(
            new string[]
             {
                "Core",
                "CoreUObject",
                "Engine",
                "nvTessLib",
                "HTTP",
                "Projects",
                "Slate",
                "SlateCore",
                "ProceduralMeshComponent",
                "SpaceGenNoise",
                "SpaceGenCommon",
                "SpaceGenVolume",
                "SpaceGenFoliages"
            });



        if (Target.Type == TargetType.Editor) // Check if UBT building for Editor.
            {
                PrivateDependencyModuleNames.Add("SpaceGenEditor");
             PublicDependencyModuleNames.Add("PropertyEditor");
            }

        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
