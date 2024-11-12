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

			"RB205_GH_tseries_head"
		};
		weapons[] =
		{
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
		displayName = "T-Series Droid";
		uniformClass = "3AS_U_CIS_TS";
		ICON_OFFICER

		faction = "RB205_cis";
		editorSubCategory = "RB205_cis_ts";
		backpack = "RB205_B_TS";
		linkedItems[]=          { JLTS_NVG_droid_chip_2, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		respawnlinkedItems[]=   { JLTS_NVG_droid_chip_2, JLTS_DroidBinocular, ItemMap, ItemGPS, JLTS_droid_comlink, ItemCompass, ItemWatch };
		weapons[]=          { WEAPON_E5, Throw, Put };
		respawnWeapons[]=   { WEAPON_E5, Throw, Put };
		magazines[]=        { MAG_8(MAG_E5) };
		respawnMagazines[]= { MAG_8(MAG_E5) };
		items[]=            { RB205_tseries_head };
		respawnItems[]=     { RB205_tseries_head };
	};
	class RB205_TS_green: RB205_TS
	{
		displayName = "T-Series Droid (Green)";
		uniformClass = "3AS_U_CIS_TS_Green";
		items[]=            { RB205_tseries_head_green };
		respawnItems[]=     { RB205_tseries_head_green };
	};
	class RB205_TS_red: RB205_TS
	{
		displayName = "T-Series Droid (Red)";
		uniformClass = "3AS_U_CIS_TS_Red";
		items[]=            { RB205_tseries_head_red };
		respawnItems[]=     { RB205_tseries_head_red };
	};
	class RB205_TS_tv24: RB205_TS
	{
		displayName = "T-Series Droid (TV24)";
		uniformClass = "3AS_U_CIS_TS_TV24";
		items[]=            { RB205_tseries_head_tv24 };
		respawnItems[]=     { RB205_tseries_head_tv24 };
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
	   OTHER STUFF
	****************/

	class Weapon_Base_F;
    class RB205_GH_tseries_head: Weapon_Base_F
	{
		displayName = "T-Series Droid Head";
		scope = 2;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_other";
        //simulation = "thingx";
		class TransportItems
		{
			class 205_tseries_head
			{
				count = 1;
				name = "RB205_tseries_head";
			};
		};
	};
};

class CfgWeapons
{
    class ItemCore;
    class InventoryWeapon_Base_F;
    class RB205_tseries_head: ItemCore
	{
		displayName = "T-Series Droid Head";
		descriptionShort = "Head of a T-Series tactical droid";
		picture = "\RB205_cis\droids\ts\data\tseries_head.paa";
        model = "\kobra\442_misc\t_series\t_series_head.p3d";
		hiddenselections[] =
		{
			"camo1",
			"lights"
		};
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_blue.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};

        scope = 2;
        detectRange = -1;
        simulation = "ItemMineDetector";
		useAsBinocular = 0;
		type = 4096;
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 1;
		};
	};
	class RB205_tseries_head_green: RB205_tseries_head
	{
		displayName = "T-Series Droid Head (Green)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_green.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
	};
	class RB205_tseries_head_red: RB205_tseries_head
	{
		displayName = "T-Series Droid Head (Red)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_red.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
	};
	class RB205_tseries_head_tv24: RB205_tseries_head
	{
		displayName = "T-Series Droid Head (TV24)";
		hiddenselectionstextures[] =
		{
			"\RB205_cis\droids\ts\data\ts_head_blue.paa",
			"\kobra\442_misc\t_series\data\lights_co.paa"
		};
	};
};