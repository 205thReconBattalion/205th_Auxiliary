class CfgPatches
{
	class modCompats_717_ace_selfAction_orbitalStrike
	{
		requiredAddons[] =
		{
			"PG_Curator_Ordnance"
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
			class ACE_OrbitalStrike
			{
				//displayName = "Call Orbital Strike";
				condition = "false";
				//statement = "[player] spawn Poly_fnc_orbitalStrike";
				//exceptions[] = {"isNotInside"};
				//icon = "\a3\ui_f\data\IGUI\Cfg\Actions\arrow_down_gs.paa";
			};
		};
	};
};