class cfgPatches
{
	class RB205_cis_vehicles
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_AAT",
			"RB205_GAT",
			"RB205_GAT_light",
			"RB205_N99",
			"RB205_ADSD",
			"RB205_Hailfire_AT",
			"RB205_Hailfire_Rocket",
			"RB205_Hailfire_SAM",
			"RB205_raptor",
			"RB205_MTT",
			"RB205_PAC",
			"RB205_SAC",
			"RB205_SAC_repair",
			"RB205_HAGM",

			"RB205_AAT_defoliator",
			"RB205_AAT_flamer",
			"RB205_AAT_shield",

			"RB205_flitknot",
			"RB205_flitknot_bx",
			"RB205_flitknot_bx_sniper",
			"RB205_combatSpeeder",

			"RB205_vulture",
			"RB205_vulture_cas",
			"RB205_vulture_aa",
			"RB205_Tri_Fighter",
			"RB205_HMP",
			"RB205_HMP_transport",
			"RB205_MAF",
			"RB205_MAF_transport",
			"RB205_dragonFly",

			"RB205_droideka",
			"RB205_droideka_sniper",
			"RB205_droideka_heavy",
			"RB205_crab",
			"RB205_OG9",
			"RB205_flak",
			"RB205_flak_small",
			"RB205_flak_small_inverted",
			"RB205_particle",
			"RB205_proton",
			"RB205_j1_proton",
			"RB205_cis_autoTurret",
			"RB205_cis_defenseTurret",
			"RB205_j10Turret",
			"RB205_cis_mortar",
			"RB205_cis_fcp"
		};
		weapons[] = {};
	};
};

#include "macros.hpp"

class CfgVehicles
{
    #include "hpp\groundAssets.hpp"
	#include "hpp\airAssets.hpp"
	#include "hpp\stationaryAssets.hpp"
};

class CfgEditorSubcategories
{
	class RB205_cis_veh
	{
		displayName = "Vehicles"; //Fahrzeuge
	};
	class RB205_cis_tank
	{
		displayName = "Vehicles - Armored"; //Fahrzeuge - Panzer
	};
	class RB205_cis_walker
	{
		displayName  = "Vehicles - Walker"; //Fahrzeuge - Läufer
	};
	class RB205_cis_starfighter
	{
		displayName = "Vehicles - Starfigher"; //Fahrzeuge - Sternenjäger
	};
    class RB205_cis_turret
    {
		displayName = "Vehicles - Stationary"; //Fahrzeuge - Stationär
	};
	class RB205_cis_other
    {
		displayName = "Vehicles - Other"; //Fahrzeuge - Sonstige
	};
};