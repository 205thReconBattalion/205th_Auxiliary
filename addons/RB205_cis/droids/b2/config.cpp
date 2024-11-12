class cfgPatches
{
	class RB205_cis_droids_b2
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
            "lsd_units_redfor",
			"WBK_DifferentRobotics_1"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_B2",
			"RB205_B2_rocket",
			"RB205_B2_unarmed",


			"RB205_B2_jetpack"
		};
		weapons[] = {};
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
	class WBK_B2_Mod_Standart;
    class lsd_cis_b2_standard;

	class RB205_B2: WBK_B2_Mod_Standart
	{
		displayName = "B2 Super Battle Droid";
		ICON_DEFAULT
		uniformClass = "lsd_cis_b2Droid_uniform";
		backpack = "";
		weapons[]=          { WEAPON_B2, Throw, Put };
		respawnWeapons[]=   { WEAPON_B2, Throw, Put };
		magazines[]=        { MAG_8(MAG_B2) };
		respawnMagazines[]= { MAG_8(MAG_B2) };
		
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_b2";
		linkedItems[]=          { JLTS_NVG_droid_chip_1, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		respawnlinkedItems[]=   { JLTS_NVG_droid_chip_1, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		items[]=            {};
		respawnItems[]=     {};
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		DROID_SOUNDS_B2
	};
	class RB205_B2_rocket: RB205_B2
	{
		displayName = "B2 Super Battle Droid (Rocket)";
		backpack = "RB205_B2_jetpack";
	};

	class RB205_B2_unarmed: lsd_cis_b2_standard
	{
		displayName = "B2 Super Battle Droid (Unarmed)";
		ICON_DEFAULT
		uniformClass = "lsd_cis_b2Droid_uniform";
		backpack = "";
		weapons[]=          { Throw, Put };
		respawnWeapons[]=   { Throw, Put };
		magazines[]=        { };
		respawnMagazines[]= { };

		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_b2";
		linkedItems[]=          { JLTS_NVG_droid_chip_1, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		respawnlinkedItems[]=   { JLTS_NVG_droid_chip_1, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		items[]=            {};
		respawnItems[]=     {};
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		DROID_SOUNDS_B2
	};

	class JLTS_B1_jetpack;
	class RB205_B2_jetpack: JLTS_B1_jetpack
	{
		displayName = "Super battle droid jetpack";
		model = "RB205_cis\droids\data\inv_backpack.p3d";
	};
};