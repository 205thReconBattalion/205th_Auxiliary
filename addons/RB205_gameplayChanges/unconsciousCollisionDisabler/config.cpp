/*
	Deactivates collision of unconscious players (ace)
*/

class cfgPatches
{
	class RB205_gameplayChanges_unconsciousCollisionDisabler
	{
		requiredAddons[] =
        {
            "ace_common",
			"ace_medical"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers
{
	RB205_uncon_XEH_preInit="call compile preprocessFileLineNumbers '\RB205_gameplayChanges\unconsciousCollisionDisabler\preInit.sqf'";
};