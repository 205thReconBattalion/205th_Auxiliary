class CfgPatches
{
	class RB205_extraContent_ballisticShield
	{
		requiredAddons[] =
		{
			"RB205_extraContent",
			"JLTS_weapons_shield"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {
			"RB205_ballisticShield_item"
		};
		units[] = {
			"RB205_GH_ballisticShield",
			"RB205_ballisticShield_object"
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_extraContent_ballisticShields
	{
		displayName = "Ballistic Shields";
	};
};

#define EDITOR_CATEGORY "RB205_prop_extra"
#define EDITOR_SUBCATEGORY "RB205_extraContent_ballisticShields"

class CfgWeapons
{
	class ItemWatch;
	class RB205_ballisticShield_item: ItemWatch
	{
		_generalMacro = "RB205_ballisticShield_item";
		author = "Marbearis and Phenosi";
		scope = 2;
		scopeCurator = 2;
		displayName = "[205] Ballistic Shield";
		descriptionShort = "Ballistic Shield";
		descriptionUse = "Schild das vor Blasterschüssen schützt";
		picture = "\MRC\JLTS\weapons\Shield\data\ui\shield_ui_ca.paa";

		model = "\MRC\JLTS\weapons\Shield\shield.p3d";
		simulation = "ItemWatch";
		editorCategory = EDITOR_CATEGORY;
		class ItemInfo
		{
			mass = 25;
			uniformModel = "\MRC\JLTS\weapons\Shield\shield.p3d";
		};
	};
	/*class RB205_ballisticShield_cmd_item: RB205_GH_ballisticShield_item
	{
		_generalMacro = "RB205_ballisticShield_cmd_item";
		displayName = "[205] Ballistic Shield (CMD)";
		model = "\MRC\JLTS\weapons\Shield\shield_CG.p3d";
		class ItemInfo
		{
			mass = 25;
			uniformModel = "\MRC\JLTS\weapons\Shield\shield_CG.p3d";
		};
	};*/
};
class CfgVehicles
{
	class Item_ItemWatch;
	class RB205_GH_ballisticShield: Item_ItemWatch {
		scope = 2;
		scopeCurator = 2;
		displayName = "Ballistic Shield";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		editorPreview = "";

		model = "\MRC\JLTS\weapons\Shield\shield.p3d";
		destrType = "DestructNo";
		vehicleClass = "Items";
		class TransportItems
		{
			class RB205_ballisticShield_item
			{
				name = "RB205_ballisticShield_item";
				count = 1;
			};
		};
	};
	class House_F;
	class RB205_ballisticShield_object: House_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Ballistic Shield (Prop)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		editorPreview = "";

		model = "\MRC\JLTS\weapons\Shield\shield.p3d";
		mapSize = 20.27;
		armor = 1000000;
	};
};