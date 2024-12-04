class cfgPatches
{
	class RB205_tacticalMarker_remove
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
			"RB205_tacticalMarker",
			"A3_Ui_F",
			"A3_Ui_F_Orange"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgMarkers
{
	class Flag;
	class hd_dot: Flag
	{
		scope = 1;
	};

	#define MARKER_HD(CLASSNAME) class ##CLASSNAME##: hd_dot { scope=1; };

	MARKER_HD(hd_ambush)
	MARKER_HD(hd_destroy)
	MARKER_HD(hd_end)
	MARKER_HD(hd_flag)
	MARKER_HD(hd_join)
	MARKER_HD(hd_objective)
	MARKER_HD(hd_pickup)
	MARKER_HD(hd_start)
	MARKER_HD(hd_unknown)
	MARKER_HD(hd_warning)

	class b_unknown;
	class b_Ordnance: b_unknown{ scope=1; };
	class o_unknown;
	class o_Ordnance: o_unknown{ scope=1; };
	class n_unknown;
	class n_Ordnance: n_unknown{ scope=1; };

	class flag_NATO;
	class RedCrystal: flag_NATO
	{
		scope = 1;
	};
	class White: flag_NATO
	{
		scope = 1;
	};
};