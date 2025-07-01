class cfgPatches
{
	class RB205_cis_droids_special
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
			"3as_drones"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_scavenger_droid",
			"RB295_deka",
			"RB205_dsd"
		};
		weapons[] = {};
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
	class 3as_CIS_ScavDroid;
	class RB205_scavenger_droid: 3as_CIS_ScavDroid
	{
		displayName = "Scavenger Droid";
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_special";
	};

	class P_DroidekaMan;
	class RB295_deka: P_DroidekaMan
	{
		displayName = "Droideka";
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_special";
		icon = "3AS\3AS_Deka\data\ui\Deka_top_ca.paa";
		
		weapons[] = {
			"RB205_DEKA_WP",
			"Throw","Put"
		};
		magazines[] = {
			"3AS_500Rnd_Droideka_RedPlasma","3AS_500Rnd_Droideka_RedPlasma","3AS_500Rnd_Droideka_RedPlasma",
			"ShieldGrenadePersonal_Mag","ShieldGrenadePersonal_Mag","ShieldGrenadePersonal_Mag"
		};
		uniformClass = "RB205_U_deka";
	};

	class P_DSD_Man;
	class RB205_dsd: P_DSD_Man
	{
		displayName = "Dwarf Spider Droid";
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_special";
		icon = "3as\3AS_ADSD\data\ui\ADSD_top_ca.paa";
		
		weapons[] = {
			"RB205_DSD_Cannon",
			"Throw","Put"
		};
		magazines[] = {
			"RB205_DSD_Cannon_Mag",
			"RB205_DSD_Cannon_Mag",
			"RB205_DSD_Cannon_Mag",
			"RB205_DSD_Cannon_Mag",
			"RB205_DSD_Cannon_Mag"
		};
	};
};

class CfgWeapons
{
	class P_Droideka_UniBase;
	class P_Droideka_Uni: P_Droideka_UniBase
	{
		class ItemInfo;
	};
	class RB205_U_deka: P_Droideka_Uni
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply500";
			uniformClass = "RB295_deka";
		};
	};

	class WM_DLT19;
	class P_DroidekaRepeater: WM_DLT19
	{
		class manual;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
	};
	class RB205_DEKA_WP: P_DroidekaRepeater
	{
		scopeArsenal = 1;
		displayName = "Droideka Repeater";
		magazines[] = {"3AS_500Rnd_Droideka_RedPlasma"};
		class manual: manual {
			reloadTime = 0.2;
			burst = 1;
		};
		class close: close {
			reloadTime = 0.2;
			burst = 1;
		};
		class short: short {
			reloadTime = 0.2;
			burst = 1;
		};
		class medium: medium {
			reloadTime = 0.2;
			burst = 1;
		};
		class far_optic1: far_optic1 {
			reloadTime = 0.2;
			burst = 1;
		};
		class far_optic2: far_optic2 {
			reloadTime = 0.2;
			burst = 1;
		};
	};

	class P_DSD_Cannon;
	class RB205_DSD_Cannon: P_DSD_Cannon
	{
		scopeArsenal = 0;
		displayName = "DSD Cannon";
		magazines[] = {"RB205_DSD_Cannon_Mag"};
	};
};
class CfgMagazines
{
	// 3as_24Rnd_AAT_AP
	class ls_magazine_rd4;
	class RB205_DSD_Cannon_Mag: ls_magazine_rd4
	{
		scopeArsenal = 0;
		displayName = "DSD Cannon Magazine";
		ammo = "RB205_DSD_Cannon_Ammo";
		count = 20;

		effectFly = "3AS_PlasmaBolt_Medium_Red_Fly"; // 3AS_PlasmaBolt_Large_Red_Fly
		tracersEvery = 1;
	};
};
class CfgAmmo
{
	// 3AS_ATT_redPlasma_AT
	class ls_40mm_he_green;
	class RB205_DSD_Cannon_Ammo: ls_40mm_he_green
	{
		model = "3as\3AS_Weapons\Data\tracer_shell_red.p3d";
		effectFly = "3AS_PlasmaBolt_Medium_Red_Fly";
	};
};