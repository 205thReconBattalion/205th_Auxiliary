class cfgPatches
{
	class RB205_tacticalMarker_remove_aws
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
			"FIR_AirWeaponSystem_US"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgMarkers
{
	class AWS_LSR_Marker
	{
		scope=1;
	};
};