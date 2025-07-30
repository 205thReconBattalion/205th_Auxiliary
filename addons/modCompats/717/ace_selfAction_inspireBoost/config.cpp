class CfgPatches
{
	class modCompats_717_ace_selfAction_inspireBoost
	{
		requiredAddons[] =
		{
			"Poly_Inspire"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class Poly_Inspire_Boost
			{
				//displayName = "Rally the Troops!";
				condition = "false";
				//statement = "[_player] call Poly_Inspire_fnc_inspireBoost";
				//exceptions[] = {"isNotInside","isNotSwimming"};
				//icon = "\a3\ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
			};
		};
	};
};