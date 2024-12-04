class CfgPatches
{
    class RB205_modWhitelist
    {
        requiredAddons[] =  {};
		requiredVersion = 1.0;
        units[] = {};
        weapons[] = {};
    };
};
class Extended_PostInit_EventHandlers
{
	class RB205_modWhitelist_PostInit
	{
		init="call compile preprocessFileLineNumbers 'RB205_modWhitelist\XEH_postInit.sqf'";
	};
};