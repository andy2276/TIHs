// Copyright Epic Games, Inc. All Rights Reserved.

using System.Linq;
using UnrealBuildTool;

public class TIHLibraryEntry : ModuleRules
{
	public TIHLibraryEntry(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		string PublicFolderPathName = "Public";
		string PrivateFolderPathName = "Private";
		string enginePath = System.IO.Path.GetFullPath(Target.RelativeEnginePath);
		string engineSourcePath = enginePath + "Source/";
		string engineDeveloperPath = engineSourcePath + "Developer/";
		string engineRuntimePath = engineSourcePath + "Runtime/";

		string onlineWebsocketPath = engineRuntimePath + "Online/WebSockets/";
		string webSocketPublicPath = onlineWebsocketPath + PublicFolderPathName;
		string webSocketPrivatePath = onlineWebsocketPath + PrivateFolderPathName;

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				webSocketPublicPath
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				webSocketPrivatePath
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",
				"Sockets",
				"Networking",
				"WebSockets",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"UMG",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
