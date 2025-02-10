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
class CfgFunctions
{
	class RB205_MW
	{
		class modWhitelist
		{
			file="\RB205_modWhitelist\functions";
            class getAllModsByPlayer {};
            class getClientModsByPlayer {};
            class getForbiddenModsByPlayer {};
            class getMissingModsByPlayer {};
            class getModsInfo {};
		};
	};
};