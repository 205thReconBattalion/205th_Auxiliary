class cfgPatches
{
	class RB205_cis_droids_bx
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
            "ls_armor_redfor"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_BX",
			"RB205_BX_heavy",
			"RB205_BX_sniper",
			"RB205_BX_at",
			"RB205_BX_aa",
			"RB205_BX_ap",
			"RB205_BX_shield",
			"RB205_BX_captain",
			"RB205_BX_security",
			"RB205_B1_diplomat",

			"RB205_BX_training",
			"RB205_BX_heavy_training",
			"RB205_BX_sniper_training",
			"RB205_BX_at_training",
			"RB205_BX_aa_training",
			"RB205_BX_shield_training"
		};
		weapons[] =
        {
            "RB205_V_BX"
        };
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
    class lsd_cis_bxdroid_specops;

	class RB205_BX: lsd_cis_bxdroid_specops
	{
		displayName = "BX Commando Droid";
		ICON_DEFAULT
		uniformClass = "lsd_cis_bxDroid_uniform";
		backpack = "";
		weapons[]=          { WEAPON_E5X, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5X, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5X) };
		respawnMagazines[]= { MAG_8(MAG_E5X) };

		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_bx";
		linkedItems[]=          { RB205_V_BX, JLTS_NVG_droid_chip_2, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		respawnlinkedItems[]=   { RB205_V_BX, JLTS_NVG_droid_chip_2, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		items[]=            {};
		respawnItems[]=     {};
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		DROID_SOUNDS
	};
	class RB205_BX_heavy: RB205_BX
	{
		displayName = "BX Commando Droid (Heavy)";
		ICON_HEAVY
		weapons[]=          { WEAPON_E5C, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5C, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5C), GRENADE };
		respawnMagazines[]= { MAG_8(MAG_E5C), GRENADE };
	};
	class RB205_BX_sniper: RB205_BX
	{
		displayName = "BX Commando Droid (Sniper)";
		ICON_SNIPER
		weapons[]=          { WEAPON_E5S, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5S, Throw, Put };
		magazines[]=        { MAG_10(MAG_E5S) };
		respawnMagazines[]= { MAG_10(MAG_E5S) };
	};
	class RB205_BX_at: RB205_BX
	{
		displayName = "BX Commando Droid (Anti Tank)";
		ICON_AT
		backpack = "RB205_B_BX_predefAT";
		weapons[]=          { WEAPON_E5X, WEAPON_AT, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5X, WEAPON_AT, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5X), MAG_AT };
		respawnMagazines[]= { MAG_8(MAG_E5X), MAG_AT };
	};
	class RB205_BX_aa: RB205_BX
	{
		displayName = "BX Commando Droid (Anti Air)";
		ICON_AT
		backpack = "RB205_B_BX_predefAA";
		weapons[]=          { WEAPON_E5X, WEAPON_AA, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5X, WEAPON_AA, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5X), MAG_AA };
		respawnMagazines[]= { MAG_8(MAG_E5X), MAG_AA };
	};
	class RB205_BX_ap: RB205_BX
	{
		displayName = "BX Commando Droid (Anti Person)";
		ICON_AT
		backpack = "RB205_B_BX_predefAP";
		weapons[]=          { WEAPON_E5X, WEAPON_AT, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5X, WEAPON_AT, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5X), MAG_AP };
		respawnMagazines[]= { MAG_8(MAG_E5X), MAG_AP };
	};
	class RB205_BX_shield: RB205_BX
	{
		displayName = "BX Commando Droid (Shield)";
		weapons[]=          { WEAPON_E5X_SHIELD, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5X_SHIELD, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5X) };
		respawnMagazines[]= { MAG_8(MAG_E5X) };
	};

	class RB205_BX_captain: RB205_BX
	{
		displayName = "BX Commando Droid [Captain]";
		ICON_OFFICER
		uniformClass = "lsd_cis_bxCaptainDroid_uniform";
	};
	class RB205_BX_security: RB205_BX
	{
		displayName = "BX Commando Droid [Security]";
		uniformClass = "lsd_cis_bxSecurityDroid_uniform";
	};
	class RB205_BX_diplomat: RB205_BX
	{
		displayName = "BX Commando Droid [Diplomat]";
		uniformClass = "lsd_cis_bxDiplomatDroid_uniform";
	};

	/****************
		BACKPACKS
	****************/

	class JLTS_B1_backpack;
	class RB205_B_BX: JLTS_B1_backpack
	{
		displayName = "Commando droid backpack";
		model = "RB205_cis\droid\data\inv_backpack.p3d";
		maximumLoad = 500;
		mass = 0;
		scope = 2;
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 250000;
		tf_subtype = "digital_lr";
	};

	class RB205_B_BX_predefAT: RB205_B_BX
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_AT,4)
		};
	};
	class RB205_B_BX_predefAA: RB205_B_BX
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_AA,4)
		};
	};
	class RB205_B_BX_predefAP: RB205_B_BX
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_AP,4)
		};
	};

	//#include "training.hpp"
};

class CfgWeapons
{
	class ls_redforVest_base;
	class ls_cis_bxCommando_vest: ls_redforVest_base
	{
		class ItemInfo;
	};
	class RB205_V_BX: ls_cis_bxCommando_vest
	{
		displayName = "BX Commando Droid Plating";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=10;
                    PassThrough=0.3;
                };
                class Arms
                {
                    hitpointName="HitArms";
                    armor=4;
                    passThrough=0.3;
                };
                class Legs
                {
                    hitpointName="HitLegs";
                    armor=6;
                    passThrough=0.3;
                };
            };
		};
	};
};