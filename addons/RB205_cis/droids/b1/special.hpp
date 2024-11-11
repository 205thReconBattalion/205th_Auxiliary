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
	backpack = "JLTS_B1_backpack_training";
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
	weapons[]=          { Throw, Put };
	respawnWeapons[]=   { Throw, Put };
	magazines[]=        {};
	respawnMagazines[]= {};
	SUBCATEGORY_SPECIAL
};

/****************
	BACKPACKS
****************/

class RB205_B_B1_firefighter: JLTS_B1_backpack
{
	displayName = "Battle droid backpack (firefighter)";
	hiddenSelectionsTextures[] = {"\RB205_cis\droids\b1\data\b1_firefighter_backpack.paa"};
};