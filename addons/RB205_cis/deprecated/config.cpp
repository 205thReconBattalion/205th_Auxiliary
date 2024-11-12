class cfgPatches
{
	class RB205_cis_deprecated
	{
		requiredAddons[] =
        {
            "RB205_cis"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

#define DPRC(CLASS_OLD,CLASS_NEW) \
	class ##CLASS_OLD##: ##CLASS_NEW## \
	{ \
		scope = 1; \
	};

class CfgVehicles
{
	class RB205_B1;
	class RB205_B1_heavy;
	class RB205_B1_sniper;
	class RB205_B1_at;
	class RB205_B1_aa;
	class RB205_B1_commander;
	class RB205_B1_crewman;
	class RB205_B1_pilot;
	class RB205_B1_security;
	class RB205_B1_marine;
	class RB205_B1_rocket;

	class RB205_B1_geonosis;
	class RB205_B1_heavy_geonosis;
	class RB205_B1_sniper_geonosis;
	class RB205_B1_at_geonosis;
	class RB205_B1_aa_geonosis;
	class RB205_B1_commander_geonosis;

	class RB205_B1_training;
	class RB205_B1_heavy_training;
	class RB205_B1_sniper_training;
	class RB205_B1_at_training;
	class RB205_B1_aa_training;
	class RB205_B1_commander_training;
	
	class RB205_B1_space;
	class RB205_B1_prototype;
	class RB205_B1_firefighter;

	class RB205_B2;
	class RB205_B2_rocket;
	class RB205_B2_unarmed;

	class RB205_BX;
	class RB205_BX_heavy;
	class RB205_BX_sniper;
	class RB205_BX_at;
	class RB205_BX_aa;
	class RB205_BX_ap;
	class RB205_BX_shield;
	class RB205_BX_captain;
	class RB205_BX_security;
	class RB205_B1_diplomat;
	class RB205_BX_melee;
	class RB205_BX_captain_melee;

	class RB205_BX_training;
	class RB205_BX_heavy_training;
	class RB205_BX_sniper_training;
	class RB205_BX_at_training;
	class RB205_BX_aa_training;
	class RB205_BX_ap_training;
	class RB205_BX_shield_training;
	class RB205_BX_melee_training;

	class RB205_TS;
	class RB205_TS_green;
	class RB205_TS_red;
	class RB205_TS_tv24;

	class RB205_scavenger_droid;

	class RB205_AAT;
	class RB205_GAT;
	class RB205_GAT_light;
	class RB205_N99;
	class RB205_ADSD;
	class RB205_Hailfire_AT;
	class RB205_Hailfire_Rocket;
	class RB205_Hailfire_SAM;
	class RB205_raptor;
	class RB205_MTT;
	class RB205_PAC;
	class RB205_SAC;
	class RB205_SAC_repair;
	class RB205_HAGM;

	class RB205_vulture;
	class RB205_vulture_cas;
	class RB205_vulture_aa;
	class RB205_Tri_Fighter;
	class RB205_HMP;
	class RB205_HMP_transport;
	class RB205_MAF;
	class RB205_MAF_transport;
	class RB205_dragonFly;

	class RB205_droideka;
	class RB205_droideka_sniper;
	class RB205_droideka_heavy;
	class RB205_crab;
	class RB205_OG9;
	class RB205_flak;
	class RB205_flak_small;
	class RB205_flak_small_inverted;
	class RB205_particle;
	class RB205_proton;
	class RB205_j1_proton;
	class RB205_cis_autoTurret;
	class RB205_cis_defenseTurret;
	class RB205_j10Turret;
	class RB205_cis_mortar;
	class RB205_cis_fcp;

	class RB205_flitknot;
	class RB205_flitknot_bx;
	class RB205_flitknot_bx_sniper;
	

	DPRC(205_B1,RB205_B1)
	DPRC(205_B1_commander,RB205_B1_commander)
	DPRC(205_B1_heavy,RB205_B1_heavy)
	DPRC(205_B1_sniper,RB205_B1_sniper)
	DPRC(205_B1_at,RB205_B1_at)
	DPRC(205_B1_aa,RB205_B1_aa)
	DPRC(205_B1_pilot,RB205_B1_pilot)
	DPRC(205_B1_crewman,RB205_B1_crewman)
	DPRC(205_B1_security,RB205_B1_security)
	DPRC(205_B1_eod,RB205_B1)
	DPRC(205_B1_rocket,RB205_B1_rocket)
	DPRC(205_B1_aqua,RB205_B1_marine)
	DPRC(205_B1_prototype,RB205_B1_prototype)
	DPRC(205_B1_firefighter,RB205_B1_firefighter)

	DPRC(205_B1_geonosis,RB205_B1_geonosis)
	DPRC(205_B1_commander_geonosis,RB205_B1_commander_geonosis)
	DPRC(205_B1_heavy_geonosis,RB205_B1_heavy_geonosis)
	DPRC(205_B1_sniper_geonosis,RB205_B1_sniper_geonosis)
	DPRC(205_B1_at_geonosis,RB205_B1_at_geonosis)
	DPRC(205_B1_aa_geonosis,RB205_B1_aa_geonosis)

	DPRC(205_B1_training,RB205_B1_training)
	DPRC(205_B1_commander_training,RB205_B1_commander_training)
	DPRC(205_B1_heavy_training,RB205_B1_heavy_training)
	DPRC(205_B1_sniper_training,RB205_B1_sniper_training)
	DPRC(205_B1_at_training,RB205_B1_at_training)
	DPRC(205_B1_aa_training,RB205_B1_aa_training)

	DPRC(205_B2,RB205_B2)
	DPRC(205_B2_rocket,RB205_B2_rocket)

	DPRC(205_BX,RB205_BX)
	DPRC(205_BX_heavy,RB205_BX_heavy)
	DPRC(205_BX_sniper,RB205_BX_sniper)
	DPRC(205_BX_at,RB205_BX_at)
	DPRC(205_BX_aa,RB205_BX_aa)
	DPRC(205_BX_captain,RB205_BX_captain)
	DPRC(205_BX_diplomat,RB205_B1_diplomat)
	DPRC(205_BX_security,RB205_BX_security)

	DPRC(205_scavenger_droid,RB205_scavenger_droid)

	DPRC(205_TS,RB205_TS)
	DPRC(205_TS_green,RB205_TS_green)
	DPRC(205_TS_red,RB205_TS_red)
	DPRC(205_TS_tv24,RB205_TS_tv24)

	DPRC(205_B1_pirate,RB205_B1)
	DPRC(205_B2_pirate,RB205_B2)
	DPRC(205_BX_pirate,RB205_BX)

	// --- EVEN OLDER:

	DPRC(205_B1_standart,RB205_B1)
	DPRC(205_B1_Shotgun,RB205_B1)
	DPRC(205_B1_SquadLead,RB205_B1_commander)
	DPRC(205_B1_Officer,RB205_B1_commander)
	DPRC(205_B1_crew,RB205_B1_crewman)

	DPRC(205_B1_t,RB205_B1_training)
	DPRC(205_B1_t_heavy,RB205_B1_heavy_training)
	DPRC(205_B1_t_shotgun,RB205_B1_training)
	DPRC(205_B1_t_sniper,RB205_B1_sniper_geonosis)
	DPRC(205_B1_t_squadLead,RB205_B1_commander_training)

	DPRC(205_B2_Mod_Standart,RB205_B2)
	DPRC(205_B2_Mod_GL,RB205_B2)
	DPRC(205_B2_Mod_Shotgun,RB205_B2)

	DPRC(205_BX_Assasin_1,RB205_BX)
	DPRC(205_BX_Assasin_Commander,RB205_BX_captain)
	DPRC(205_BX_Assasin_diplomat,RB205_B1_diplomat)
	DPRC(205_BX_Assasin_security,RB205_BX_security)

	// --- --- --- --- ---

	DPRC(205_AAT,RB205_AAT)
	DPRC(205_GAT,RB205_GAT)
	DPRC(205_GAT_light,RB205_GAT_light)
	DPRC(205_N99,RB205_N99)
	DPRC(205_ADSD,RB205_ADSD)
	DPRC(205_MTT,RB205_MTT)
	DPRC(205_PAC,RB205_PAC)
	DPRC(205_SAC,RB205_SAC)
	DPRC(205_SAC_repair,RB205_SAC_repair)
	DPRC(205_HAGM,RB205_HAGM)
	DPRC(205_Hailfire_AT,RB205_Hailfire_AT)
	DPRC(205_Hailfire_Rocket,RB205_Hailfire_Rocket)
	DPRC(205_Hailfire_SAM,RB205_Hailfire_SAM)
	DPRC(205_raptor,RB205_raptor)

	DPRC(205_vulture,RB205_vulture)
	DPRC(205_Vulture_cas,RB205_vulture_cas)
	DPRC(205_Vulture_aa,RB205_vulture_aa)
	DPRC(205_HMP,RB205_HMP)
	DPRC(205_HMP_transport,RB205_HMP_transport)
	DPRC(205_Tri_Fighter,RB205_Tri_Fighter)
	DPRC(205_MAF,RB205_MAF)
	DPRC(205_MAF_transport,RB205_MAF_transport)
	DPRC(205_dragonFly,RB205_dragonFly)

	DPRC(205_droideka,RB205_droideka)
	DPRC(205_droideka_sniper,RB205_droideka_sniper)
	DPRC(205_droideka_heavy,RB205_droideka_heavy)
	DPRC(205_crab,RB205_crab)
	DPRC(205_OG9,RB205_OG9)
	DPRC(205_flak,RB205_flak)
	DPRC(205_flak_small,RB205_flak_small)
	DPRC(205_flak_small_inverted,RB205_flak_small_inverted)
	DPRC(205_particle,RB205_particle)
	DPRC(205_proton,RB205_proton)
	DPRC(205_j1_proton,RB205_j1_proton)
	DPRC(205_cis_autoTurret,RB205_cis_autoTurret)
	DPRC(205_cis_defenseTurret,RB205_cis_defenseTurret)
	DPRC(205_cis_mortar,RB205_cis_mortar)
	DPRC(205_cis_j10Turret,RB205_j10Turret)
	DPRC(205_cis_fcp,RB205_cis_fcp)
	
	DPRC(205_flitknot,RB205_flitknot)

	// --- EVEN OLDER:

	DPRC(205_AAT_CIS,RB205_AAT)
	DPRC(205_AAT_Green,RB205_AAT)
	DPRC(205_AAT_Red,RB205_AAT)
	DPRC(205_AAT_tan,RB205_AAT)

	DPRC(205_Advanced_DSD,RB205_ADSD)
	DPRC(205_SAC_Trade,RB205_PAC)
	DPRC(205_ground_bawhag,RB205_HAGM)
	
	DPRC(205_cis_hmp,RB205_HMP)
	DPRC(205_cis_hmp_transport,RB205_HMP_transport)
};