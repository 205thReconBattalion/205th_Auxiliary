class cfgPatches
{
	class RB205_cis_droids_special
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
			"3as_drones"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_scavenger_droid"
		};
		weapons[] = {};
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
	class 3as_CIS_ScavDroid;

	class RB205_scavenger_droid: 3as_CIS_ScavDroid
	{
		displayName = "Scavenger Droid";
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_special";
	};
};