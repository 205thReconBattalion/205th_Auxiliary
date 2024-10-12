/*
	Disables the ability of the AI to go prone
*/

class cfgPatches
{
	class RB205_gameplayChanges_enhancedAIBehavior
	{
		requiredAddons[] =
        {
            "A3_Data_F"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgSurfaces
{
	class Default
	{
		AIAvoidStance = 2;
	};
};
//Config reference: https://community.bistudio.com/wiki/Arma_3:_CfgSurfaces_Config_Reference