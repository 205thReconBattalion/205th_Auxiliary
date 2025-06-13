class cfgPatches
{
	class RB205_cis_droids_bx
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
            "ls_characters_droid"
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
			"RB205_BX_diplomat",
			"RB205_BX_melee",
			"RB205_BX_captain_melee",

			"RB205_BX_training",
			"RB205_BX_heavy_training",
			"RB205_BX_sniper_training",
			"RB205_BX_at_training",
			"RB205_BX_aa_training",
			"RB205_BX_ap_training",
			"RB205_BX_shield_training",
			"RB205_BX_melee_training",
		};
		weapons[] =
        {
            "RB205_V_BX",

			"RB205_U_BX",
			"RB205_U_BX_captain",
			"RB205_U_BX_security",
			"RB205_U_BX_diplomant",
			"RB205_U_BX_training"
        };
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
    class ls_droid_bx;

	class RB205_BX: ls_droid_bx
	{
		displayName = "BX Commando Droid";
		ICON_DEFAULT
		backpack = "";
		weapons[]=          { WEAPON_E5X, BINO_BX, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5X, BINO_BX, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5X) };
		respawnMagazines[]= { MAG_8(MAG_E5X) };

		uniformClass = "RB205_U_BX";
		hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\body_co.paa"};
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_bx";
		linkedItems[]=          { "RB205_V_BX", "JLTS_NVG_droid_chip_2", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		respawnlinkedItems[]=   { "RB205_V_BX", "JLTS_NVG_droid_chip_2", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
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
		weapons[]=          { WEAPON_E5C, BINO_BX, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5C, BINO_BX, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5C), GRENADE };
		respawnMagazines[]= { MAG_8(MAG_E5C), GRENADE };
	};
	class RB205_BX_sniper: RB205_BX
	{
		displayName = "BX Commando Droid (Sniper)";
		ICON_SNIPER
		weapons[]=          { WEAPON_E5S, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5S, "Throw", "Put" };
		magazines[]=        { MAG_10(MAG_E5S) };
		respawnMagazines[]= { MAG_10(MAG_E5S) };
	};
	class RB205_BX_at: RB205_BX
	{
		displayName = "BX Commando Droid (Anti Tank)";
		ICON_AT
		backpack = "RB205_B_BX_predefAT";
		weapons[]=          { WEAPON_E5X, WEAPON_AT, BINO_BX, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5X, WEAPON_AT, BINO_BX, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5X), MAG_AT };
		respawnMagazines[]= { MAG_8(MAG_E5X), MAG_AT };
	};
	class RB205_BX_aa: RB205_BX
	{
		displayName = "BX Commando Droid (Anti Air)";
		ICON_AT
		backpack = "RB205_B_BX_predefAA";
		weapons[]=          { WEAPON_E5X, WEAPON_AA, BINO_BX, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5X, WEAPON_AA, BINO_BX, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5X), MAG_AA };
		respawnMagazines[]= { MAG_8(MAG_E5X), MAG_AA };
	};
	class RB205_BX_ap: RB205_BX
	{
		displayName = "BX Commando Droid (Anti Person)";
		ICON_AT
		backpack = "RB205_B_BX_predefAP";
		weapons[]=          { WEAPON_E5X, WEAPON_AA, BINO_BX, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5X, WEAPON_AA, BINO_BX, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5X), MAG_AP };
		respawnMagazines[]= { MAG_8(MAG_E5X), MAG_AP };
	};
	class RB205_BX_shield: RB205_BX
	{
		displayName = "BX Commando Droid (Shield)";
		weapons[]=          { WEAPON_E5X_SHIELD, BINO_BX, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5X_SHIELD, BINO_BX, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5X) };
		respawnMagazines[]= { MAG_8(MAG_E5X) };
	};

	class RB205_BX_captain: RB205_BX
	{
		displayName = "BX Commando Droid [Captain]";
		ICON_OFFICER
		uniformClass = "RB205_U_BX_captain";
		hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\captain_body_co.paa"};
	};
	class RB205_BX_security: RB205_BX
	{
		displayName = "BX Commando Droid [Security]";
		uniformClass = "RB205_U_BX_security";
		hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\security_body_co.paa"};
	};
	class RB205_BX_diplomat: RB205_BX
	{
		displayName = "BX Commando Droid [Diplomat]";
		uniformClass = "RB205_U_BX_diplomant";
		hiddenSelectionsTextures[] = {"\ls\core\addons\characters_droid\uniforms\bx\data\diplomat_body_co.paa"};
	};

	class WBK_BX_Assasin_1;
	class RB205_BX_melee: WBK_BX_Assasin_1
	{
		displayName = "BX Commando Droid (Melee)";
		ICON_DEFAULT
		backpack = "";
		weapons[]=          { WEAPON_E5X, WBK_Dutch_Vibro, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5X, WBK_Dutch_Vibro, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5X), WBK_Cybercrystal };
		respawnMagazines[]= { MAG_8(MAG_E5X), WBK_Cybercrystal };

		uniformClass = "RB205_U_BX";
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_bx";
		linkedItems[]=          { "RB205_V_BX", "JLTS_NVG_droid_chip_2", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		respawnlinkedItems[]=   { "RB205_V_BX", "JLTS_NVG_droid_chip_2", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		items[]=            {};
		respawnItems[]=     {};
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		DROID_SOUNDS
	};
	class RB205_BX_captain_melee: RB205_BX_melee
	{
		displayName = "BX Commando Droid [Captain] (Melee)";
		ICON_OFFICER
		uniformClass = "RB205_U_BX_captain";
	};

	/****************
		BACKPACKS
	****************/

	class JLTS_B1_backpack;
	class RB205_B_BX: JLTS_B1_backpack
	{
		displayName = "Commando droid backpack";
		model = "RB205_cis\droids\data\inv_backpack.p3d";
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
			MAG_XX(MAG_TP_AT,4)
		};
	};
	class RB205_B_BX_predefAA: RB205_B_BX
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AA,4)
		};
	};
	class RB205_B_BX_predefAP: RB205_B_BX
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AP,4)
		};
	};

	#include "training.hpp"
};

class CfgWeapons
{
	class ls_vest_base;
	class ls_droidVest_bx: ls_vest_base
	{
		class ItemInfo;
	};
	class RB205_V_BX: ls_droidVest_bx
	{
		displayName = "[CIS] BX Commando Droid Plating";
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

	class ls_droidUniform_base;
	class ls_droidUniform_bx: ls_droidUniform_base
	{
		class ItemInfo;
	};
	class RB205_U_BX: ls_droidUniform_bx
	{
		displayName = "[CIS] BX Commando Droid";
		picture = "\RB205_cis\droids\data\bx_droid.paa";
		JLTS_isDroid =  1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_BX";
		};
	};
	class RB205_U_BX_captain: RB205_U_BX
	{
		displayName = "[CIS] BX Commando Droid (Captain)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_BX_captain";
		};
	};
	class RB205_U_BX_security: RB205_U_BX
	{
		displayName = "[CIS] BX Commando Droid (Security)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_BX_security";
		};
	};
	class RB205_U_BX_diplomant: RB205_U_BX
	{
		displayName = "[CIS] BX Commando Droid (Diplomat)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_BX_diplomat";
		};
	};
	class RB205_U_BX_training: RB205_U_BX
	{
		displayName = "[CIS] BX Commando Droid (Training)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_BX_training";
		};
	};
};