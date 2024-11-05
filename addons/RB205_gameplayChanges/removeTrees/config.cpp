/*
	Adds axe interaction to remove trees and bushes
*/

class cfgPatches
{
	class RB205_gameplayChanges_removeTrees
	{
		requiredAddons[] =
        {
            "WBK_SomeSciFiWeapons"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class cfgFunctions {
    class vibro_axe {
		tag = "vaxe";
        class axe {
            file = "RB205_gameplayChanges\removeTrees\functions";
            class axe_condition {};
            class axe_chopsound {};
            class axe_initplayer {};
        };
    }; 
};

class CfgVehicles
{
	class CAManBase
	{
		class EventHandlers
		{
			class vaxe
			{
				init = "_this spawn VAXE_fnc_axe_initplayer";
            }; 
        };
    };
};