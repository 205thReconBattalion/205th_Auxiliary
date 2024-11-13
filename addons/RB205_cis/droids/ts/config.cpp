class cfgPatches
{
	class RB205_cis_droids_ts
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
			"3AS_Characters_Droids_TSeries"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_TS",
			"RB205_TS_green",
			"RB205_TS_red",
			"RB205_TS_tv24",


			"RB205_B_TS",

			"RB205_GH_tseries_head",
			"RB205_GH_tseries_head_green",
			"RB205_GH_tseries_head_red",
			"RB205_GH_tseries_head_tv24"
		};
		weapons[] =
		{
			"RB205_U_TS",
			"RB205_U_TS_green",
			"RB205_U_TS_red",
			"RB205_U_TS_tv24",

			"RB205_tseries_head",
			"RB205_tseries_head_green",
			"RB205_tseries_head_red",
			"RB205_tseries_head_tv24"
		};
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
    class 3AS_CIS_TS_F;

	class RB205_TS : 3AS_CIS_TS_F
	{
		displayName = "T-Series Tactical Droid";
		uniformClass = "RB205_U_TS";
		hiddenSelectionsTextures[] = {"RB205_cis\droids\ts\data\ts_body_blue.paa"};
		items[]=            { "RB205_tseries_head" };
		respawnItems[]=     { "RB205_tseries_head" };

		faction = "RB205_cis";
		editorSubCategory = "RB205_cis_ts";
		ICON_OFFICER
		backpack = "RB205_B_TS";
		linkedItems[]=          { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		respawnlinkedItems[]=   { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		weapons[]=          { WEAPON_E5, BINO, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, BINO, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5) };
		respawnMagazines[]= { MAG_8(MAG_E5) };
	};
	class RB205_TS_green: RB205_TS
	{
		displayName = "T-Series Tactical Droid (Green)";
		uniformClass = "RB205_U_TS_green";
		hiddenSelectionsTextures[] = {"RB205_cis\droids\ts\data\ts_body_green.paa"};
		items[]=            { "RB205_tseries_head_green" };
		respawnItems[]=     { "RB205_tseries_head_green" };
	};
	class RB205_TS_red: RB205_TS
	{
		displayName = "T-Series Tactical Droid (Red)";
		uniformClass = "RB205_U_TS_red";
		hiddenSelectionsTextures[] = {"RB205_cis\droids\ts\data\ts_body_red.paa"};
		items[]=            { "RB205_tseries_head_red" };
		respawnItems[]=     { "RB205_tseries_head_red" };
	};
	class RB205_TS_tv24: RB205_TS
	{
		displayName = "T-Series Tactical Droid (TV24)";
		uniformClass = "RB205_U_TS_tv24";
		hiddenSelectionsTextures[] = {"RB205_cis\droids\ts\data\ts_body_tv24.paa"};
		items[]=            { "RB205_tseries_head_tv24" };
		respawnItems[]=     { "RB205_tseries_head_tv24" };
	};

	/****************
		BACKPACKS
	****************/

	class JLTS_B1_backpack;
	class RB205_B_TS: JLTS_B1_backpack
	{
		displayName = "T-Series droid backpack";
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

	/****************
	      HEADS
	****************/

	class 442_tseries_head;
	class Weapon_Base_F;
    class RB205_GH_tseries_head: Weapon_Base_F
	{
		displayName = "T-Series Tactical Droid Head";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_blue.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
		class TransportItems
		{
			ITEM_XX(RB205_tseries_head, 1)
		};

		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_other";
		scope = 2;
		scopecurator = 2;
		model = "\kobra\442_misc\t_series\t_series_head.p3d";
		hiddenselections[] = {"camo1","lights"};
	};
    class RB205_GH_tseries_head_green: RB205_GH_tseries_head
	{
		displayName = "T-Series Tactical Droid Head (Green)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_green.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
		class TransportItems
		{
			ITEM_XX(RB205_tseries_head_green, 1)
		};
	};
    class RB205_GH_tseries_head_red: RB205_GH_tseries_head
	{
		displayName = "T-Series Tactical Droid Head (Red)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_red.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
		class TransportItems
		{
			ITEM_XX(RB205_tseries_head_red, 1)
		};
	};
    class RB205_GH_tseries_head_tv24: RB205_GH_tseries_head
	{
		displayName = "T-Series Tactical Droid Head (TV-24)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_blue.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
		class TransportItems
		{
			ITEM_XX(RB205_tseries_head_tv24, 1)
		};
	};
};

class CfgWeapons
{
	class Uniform_Base;
	class 3AS_U_CIS_TS: Uniform_Base
	{
		class ItemInfo;
	};
	class RB205_U_TS: 3AS_U_CIS_TS
	{
		displayName = "[CIS] T-Series Tactical Droid";
		picture = "\RB205_cis\droids\data\ts_droid.paa";
		JLTS_isDroid =  1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_TS";
		};
	};
	class RB205_U_TS_green: RB205_U_TS
	{
		displayName="[CIS] T-Series Tactical Droid (Green)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_TS_green";
		};
	};
	class RB205_U_TS_red: RB205_U_TS
	{
		displayName="[CIS] T-Series Tactical Droid (Red)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "205_TS_red";
		};
	};
	class RB205_U_TS_tv24: RB205_U_TS
	{
		displayName="[CIS] T-Series Tactical Droid (TV24)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_TS_tv24";
		};
	};

	/****************
	      HEADS
	****************/

    class ItemCore;
    class InventoryWeapon_Base_F;
    class RB205_tseries_head: ItemCore
	{
		displayName = "T-Series Tactical Droid Head";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_blue.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};

		descriptionShort = "Head of a T-Series tactical droid";
		picture = "\RB205_cis\droids\ts\data\tseries_head.paa";
        model = "\kobra\442_misc\t_series\t_series_head.p3d";
		hiddenselections[] =
		{
			"camo1",
			"lights"
		};
        scope = 2;
        simulation = "ItemMineDetector";
        detectRange = -1;
		useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
	};
	class RB205_tseries_head_green: RB205_tseries_head
	{
		displayName = "T-Series Tactical Droid Head (Green)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_green.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
	};
	class RB205_tseries_head_red: RB205_tseries_head
	{
		displayName = "T-Series Tactical Droid Head (Red)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_red.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
	};
	class RB205_tseries_head_tv24: RB205_tseries_head
	{
		displayName = "T-Series Tactical Droid Head (TV24)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_blue.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
	};
};