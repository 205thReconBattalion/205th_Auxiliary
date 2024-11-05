class CfgPatches
{
	class RB205_gameplayChanges_grenadesInHatches
	{
		requiredAddons[] =
		{
			"RB205_main",
			"RB205_weapons",
			"RB205_custom"
		};
		requiredVersion = 1.0;
		author = "205th Recon Battalion";
		units[] = {};
		weapons[] = {};
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_gameplayChanges_grenadesInHatches
	{
		init = "call compile preProcessFileLineNumbers '\RB205_gameplayChanges\grenadesInHatches\XEH_postInit.sqf'";
	};
};