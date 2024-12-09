class cfgPatches
{
	class RB205_cis_droids_b1
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
            "JLTS_characters_DroidArmor",
			"JLTS_weapons_Statics_generator"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_B1",
			"RB205_B1_heavy",
			"RB205_B1_sniper",
			"RB205_B1_at",
			"RB205_B1_aa",
			"RB205_B1_commander",
			"RB205_B1_crewman",
			"RB205_B1_pilot",
			"RB205_B1_security",
			"RB205_B1_marine",
			"RB205_B1_rocket",

			"RB205_B1_geonosis",
			"RB205_B1_heavy_geonosis",
			"RB205_B1_sniper_geonosis",
			"RB205_B1_at_geonosis",
			"RB205_B1_aa_geonosis",
			"RB205_B1_commander_geonosis",

			"RB205_B1_training",
			"RB205_B1_heavy_training",
			"RB205_B1_sniper_training",
			"RB205_B1_at_training",
			"RB205_B1_aa_training",
			"RB205_B1_commander_training",
			
			"RB205_B1_space",
			"RB205_B1_prototype",
			"RB205_B1_firefighter",


			"RB205_B_B1_firefighter"
		};
		weapons[] =
        {
            "RB205_U_B1_firefighter"
        };
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
    class JLTS_Droid_B1_E5;

	class RB205_B1: JLTS_Droid_B1_E5
	{
		displayName = "B1 Battle Droid";
		ICON_DEFAULT
		uniformClass = "JLTS_DroidB1";
		backpack = "JLTS_B1_backpack";
		weapons[]=          { WEAPON_E5, BINO, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, BINO, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5) };
		respawnMagazines[]= { MAG_8(MAG_E5) };
		
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_b1";
		linkedItems[]=          { "JLTS_NVG_droid_chip_1", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		respawnlinkedItems[]=   { "JLTS_NVG_droid_chip_1", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		items[]=            {};
		respawnItems[]=     {};
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		DROID_SOUNDS
	};
	class RB205_B1_heavy: RB205_B1
	{
		displayName = "B1 Battle Droid (Heavy)";
		ICON_HEAVY
		weapons[]=          { WEAPON_E5C, BINO, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5C, BINO, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5C), GRENADE };
		respawnMagazines[]= { MAG_8(MAG_E5C), GRENADE };
	};
	class RB205_B1_sniper: RB205_B1
	{
		displayName = "B1 Battle Droid (Sniper)";
		ICON_SNIPER
		backpack = "";
		weapons[]=          { WEAPON_E5S, BINO, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5S, BINO, "Throw", "Put" };
		magazines[]=        { MAG_10(MAG_E5S) };
		respawnMagazines[]= { MAG_10(MAG_E5S) };
	};
	class RB205_B1_at: RB205_B1
	{
		displayName = "B1 Battle Droid (Anti Tank)";
		ICON_AT
		backpack = "RB205_B_B1_predefAT";
		weapons[]=          { WEAPON_E5, WEAPON_AT, BINO, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, WEAPON_AT, BINO, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5), MAG_AT };
		respawnMagazines[]= { MAG_8(MAG_E5), MAG_AT };
	};
	class RB205_B1_aa: RB205_B1
	{
		displayName = "B1 Battle Droid (Anti Air)";
		ICON_AT
		backpack = "RB205_B_B1_predefAA";
		weapons[]=          { WEAPON_E5, WEAPON_AA, BINO, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, WEAPON_AA, BINO, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5), MAG_AA };
		respawnMagazines[]= { MAG_8(MAG_E5), MAG_AA };
	};

	class RB205_B1_commander: RB205_B1
	{
		displayName = "B1 Battle Droid [Commander]";
		ICON_OFFICER
		uniformClass = "JLTS_DroidB1_Commander";
		backpack = "JLTS_B1_antenna";
	};
	class RB205_B1_crewman: RB205_B1
	{
		displayName = "B1 Battle Droid [Crewman]";
		uniformClass = "JLTS_DroidB1_Crew";
	};
	class RB205_B1_pilot: RB205_B1
	{
		displayName = "B1 Battle Droid [Pilot]";
		uniformClass = "JLTS_DroidB1_Pilot";
		backpack = "";
	};
	class RB205_B1_security: RB205_B1
	{
		displayName = "B1 Battle Droid [Security]";
		uniformClass = "JLTS_DroidB1_Security";
		backpack = "";
	};
	class RB205_B1_marine: RB205_B1_aa
	{
		displayName = "B1 Battle Droid [Marine]";
		uniformClass = "JLTS_DroidB1_Marine";
		backpack = "RB205_B_B1_predefAP";
		magazines[]=        { MAG_8(MAG_E5), MAG_AP };
		respawnMagazines[]= { MAG_8(MAG_E5), MAG_AP };
	};
	class RB205_B1_rocket: RB205_B1
	{
		displayName = "B1 Battle Droid [Rocket]";
		backpack = "JLTS_B1_jetpack";
	};

	/****************
		BACKPACKS
	****************/

	class JLTS_B1_backpack;

	class RB205_B_B1_predefAT: JLTS_B1_backpack
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AT,2)
		};
	};
	class RB205_B_B1_predefAA: JLTS_B1_backpack
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AA,2)
		};
	};
	class RB205_B_B1_predefAP: JLTS_B1_backpack
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AP,2)
		};
	};

	#include "geonosis.hpp"
	#include "training.hpp"
	#include "special.hpp"
};

class CfgWeapons
{
	class U_I_CombatUniform;
	class JLTS_DroidB1: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class RB205_U_B1_firefighter: JLTS_DroidB1
	{
		displayName = "Battle droid (firefighter)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_B1_firefighter";
		};
	};
};