/*
	Prevents falldamage while jetpack ist activated
*/

class cfgPatches
{
	class RB205_gameplayChanges_noJetpackFalldamage
	{
		requiredAddons[] =
        {
            "jen_jetpacks_core"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class RB205_gameplayChanges_noJetpackFalldamage
	{
		class NFD
		{
			file = "RB205_gameplayChanges\noJetpackFalldamage\functions";
			class monitorHeight { postInit=1 };
		};
	};
};