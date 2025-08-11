class CfgPatches
{
	class modCompats_717_vrWorld
	{
		requiredAddons[] =
		{
			"P_Orto_Optional"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class CfgWorlds
{
	class CAWorld;
	class VR: CAWorld
	{
		description = " Virtual Reality";
		midDetailTexture = "A3\Map_VR\data\L_middle_mco.paa";
	};
};