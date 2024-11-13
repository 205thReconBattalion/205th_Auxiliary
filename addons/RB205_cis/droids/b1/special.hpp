#define SUBCATEGORY_SPECIAL editorSubCategory = "RB205_cis_special";

class RB205_B1_space: RB205_B1
{
	displayName = "B1 Battle Droid [Space]";
	uniformClass = "JLTS_DroidB1_Rocket";
	backpack = "JLTS_B1_jetpack_Rocket";
	SUBCATEGORY_SPECIAL
};
class RB205_B1_prototype: RB205_B1
{
	displayName = "B1 Battle Droid [Prototype]";
	uniformClass = "JLTS_DroidB1_Prototype";
	backpack = "RB205_B_B1_prototype";
	magazines[]=        { MAG_8(MAG_E5), "ShieldGrenadePersonal_Mag" };
	respawnMagazines[]= { MAG_8(MAG_E5), "ShieldGrenadePersonal_Mag" };
	SUBCATEGORY_SPECIAL
};
class RB205_B1_firefighter: RB205_B1
{
	displayName = "B1 Battle Droid [Firefighter]";
	uniformClass = "RB205_U_B1_firefighter";
	hiddenSelectionsTextures[] = 
	{
		"\RB205_cis\droids\b1\data\b1_firefighter.paa"
	};
	backpack = "RB205_B_B1_firefighter";
	weapons[]=          { "Throw", "Put" };
	respawnWeapons[]=   { "Throw", "Put" };
	magazines[]=        {};
	respawnMagazines[]= {};
	SUBCATEGORY_SPECIAL
};

/****************
	BACKPACKS
****************/
class JLTS_portable_shield_gar_backpack;
class JLTS_portable_shield_cis_backpack: JLTS_portable_shield_gar_backpack
{
	class assembleInfo;
};
class RB205_B_B1_prototype: JLTS_portable_shield_cis_backpack
{
	displayName = "Battle droid backpack (prototype)";
	hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"};
	class assembleInfo: assembleInfo
	{
		assembleTo = "RB205_portable_shield_cis";
	}
};
class JLTS_portable_shield_gar;
class JLTS_portable_shield_cis: JLTS_portable_shield_gar
{
	class assembleInfo;
};
class RB205_portable_shield_cis: JLTS_portable_shield_cis
{
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] = {"RB205_B_B1_prototype"};
	}
};

class RB205_B_B1_firefighter: JLTS_B1_backpack
{
	displayName = "Battle droid backpack (firefighter)";
	hiddenSelectionsTextures[] = {"\RB205_cis\droids\b1\data\b1_firefighter_backpack.paa"};
};