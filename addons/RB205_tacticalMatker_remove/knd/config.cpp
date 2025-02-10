class cfgPatches
{
	class RB205_tacticalMarker_remove_knd
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
			"RB205_tacticalMarker",
			"kndMarkers"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgMarkers
{
	#define MARKER_KND(CLASSNAME) class ##CLASSNAME## { scope=1; };

	MARKER_KND(knd_blazeFlag)
	MARKER_KND(knd_cultistFlag)
	MARKER_KND(knd_eclipseFlag)
	MARKER_KND(knd_firebirdFlag)
	MARKER_KND(knd_hammerFlag)
	MARKER_KND(knd_jaroFlag)
	MARKER_KND(knd_monarchFlag)
	MARKER_KND(knd_prophetFlag)
	MARKER_KND(knd_ralFlag)
	MARKER_KND(knd_vandalFlag)
};