/*
	Edites Stamina
*/

class cfgPatches
{
	class RB205_gameplayChanges_editedStamina
	{
		requiredAddons[] =
        {
            "A3_Characters_F"
        };
		requiredVersion = 1.54;
		units[] = {};
		weapons[] = {};
	};
};

class CfgMovesFatigue {
    staminaCooldown = 1;
    staminaDuration = 60;
    staminaRestoration = 10;
};

class CfgInventoryGlobalVariable {
    maxSoldierLoad = 999999;
};