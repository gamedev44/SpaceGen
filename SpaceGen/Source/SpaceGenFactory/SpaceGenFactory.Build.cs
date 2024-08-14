// Copyright 2024 PGD STUDIO. All Rights Reserved


using System.IO;				
using UnrealBuildTool;

public class SpaceGenFactory : ModuleRules
{
	public SpaceGenFactory(ReadOnlyTargetRules Target) : base(Target)
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
                 "Json",
                "Slate",
                "SlateCore",
                "Engine",
                "InputCore",
                "UnrealEd",
                "KismetWidgets",
                "Kismet",
                "PropertyEditor",
                "RenderCore",
                "ContentBrowser",
                "WorkspaceMenuStructure",
                "EditorStyle",
                "EditorWidgets",
                "Projects",
                "AssetRegistry",
                "SpaceGenCore",
                "SpaceGenNoise",
                "ClassViewer",
                "SlateCore"
    }
        );


        PrivateDependencyModuleNames.AddRange(
            new string[]
             {
                "Core",
                "Settings",
                "UnrealEd",
                "LevelEditor",
                "SpaceGenCore",
                "SpaceGenFoliages",
                "SpaceGenNoise",
                "SpaceGenVolume"
            });


        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
               "AssetTools"
			}
            );
	}
}
