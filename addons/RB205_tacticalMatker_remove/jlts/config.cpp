class cfgPatches
{
	class RB205_tacticalMarker_remove_jlts
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
			"RB205_tacticalMarker",
			"JLTS_core",
			"JLTS_core_droids"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgMarkers
{
	#define MARKER_JLTS_O(TYPE) class o_##TYPE##; class JLTS_CIS_##TYPE##: o_##TYPE## { scope=1; };
	#define MARKER_JLTS_B(TYPE) class b_##TYPE##; class JLTS_GAR_##TYPE##: b_##TYPE## { scope=1; };

	MARKER_JLTS_O(air)
	MARKER_JLTS_O(antiair)
	MARKER_JLTS_O(armor)
	MARKER_JLTS_O(art)
	MARKER_JLTS_O(hq)
	MARKER_JLTS_O(inf)
	MARKER_JLTS_O(installation)
	MARKER_JLTS_O(maint)
	MARKER_JLTS_O(mech_inf)
	MARKER_JLTS_O(med)
	MARKER_JLTS_O(mortar)
	MARKER_JLTS_O(motor_inf)
	MARKER_JLTS_O(naval)
	MARKER_JLTS_O(ordnance)
	MARKER_JLTS_O(plane)
	MARKER_JLTS_O(recon)
	MARKER_JLTS_O(service)
	MARKER_JLTS_O(support)
	MARKER_JLTS_O(uav)
	MARKER_JLTS_O(unknown)

	MARKER_JLTS_B(air)
	MARKER_JLTS_B(antiair)
	MARKER_JLTS_B(armor)
	MARKER_JLTS_B(art)
	MARKER_JLTS_B(hq)
	MARKER_JLTS_B(inf)
	MARKER_JLTS_B(installation)
	MARKER_JLTS_B(maint)
	MARKER_JLTS_B(mech_inf)
	MARKER_JLTS_B(med)
	MARKER_JLTS_B(mortar)
	MARKER_JLTS_B(motor_inf)
	MARKER_JLTS_B(naval)
	MARKER_JLTS_B(ordnance)
	MARKER_JLTS_B(plane)
	MARKER_JLTS_B(recon)
	MARKER_JLTS_B(service)
	MARKER_JLTS_B(support)
	MARKER_JLTS_B(uav)
	MARKER_JLTS_B(unknown)
	
	#define MARKER_HD(CLASSNAME) class ##CLASSNAME##: hd_dot { scope=1; };

	class hd_dot;
	
	MARKER_HD(JLTS_hd_mines)
	MARKER_HD(JLTS_hd_wildlife)
};