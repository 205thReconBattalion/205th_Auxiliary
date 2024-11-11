class cfgPatches
{
	class RB205_cis
	{
		requiredAddons[] =
        {
            "RB205_core"
        };
		requiredVersion = 1.0;
		units[] =
        {
            "RB205_GH_tseries_head"
        };
		weapons[] =
        {
            "RB205_tseries_head"
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
		picture = "\RB205_cis\data\tseries_head.paa";
        model = "\kobra\442_misc\t_series\t_series_head.p3d";
		hiddenselections[] =
		{
			"camo1",
			"lights"
		};
		hiddenselectionstextures[] =
		{
			"\kobra\442_misc\t_series\data\camo1_co.paa",
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
};
class CfgVehicles
{
    class Weapon_Base_F;
    class RB205_GH_tseries_head: Weapon_Base_F
	{
		displayName = "T-Series Droid Head";
		scope = 2;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_other";
        simulation = "thingx";
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