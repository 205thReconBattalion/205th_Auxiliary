#define SUBCATEGORY_GEONOSIS editorSubCategory = "RB205_cis_b1_geonosis";

class RB205_B1_geonosis: RB205_B1
{
	uniformClass = "JLTS_DroidB1_Geonosis";
	backpack = "JLTS_B1_backpack_Geonosis";
	SUBCATEGORY_GEONOSIS
};
class RB205_B1_heavy_geonosis: RB205_B1_heavy
{
	uniformClass = "JLTS_DroidB1_Geonosis";
	backpack = "JLTS_B1_backpack_Geonosis";
	SUBCATEGORY_GEONOSIS
};
class RB205_B1_sniper_geonosis: RB205_B1_sniper
{
	uniformClass = "JLTS_DroidB1_Geonosis";
	SUBCATEGORY_GEONOSIS
};
class RB205_B1_at_geonosis: RB205_B1_at
{
	uniformClass = "JLTS_DroidB1_Geonosis";
	backpack = "RB205_B_B1_predefAT_geonosis";
	SUBCATEGORY_GEONOSIS
};
class RB205_B1_aa_geonosis: RB205_B1_aa
{
	uniformClass = "JLTS_DroidB1_Geonosis";
    backpack = "RB205_B_B1_predefAA_geonosis";
	SUBCATEGORY_GEONOSIS
};

class RB205_B1_commander_geonosis: RB205_B1_commander
{
	uniformClass = "JLTS_DroidB1_Geonosis_commander";
	backpack = "JLTS_B1_antenna_Geonosis";
	SUBCATEGORY_GEONOSIS
};

/****************
	BACKPACKS
****************/

class RB205_B_B1_predefAT_geonosis: RB205_B_B1_predefAT
{
	scope = 1;
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_backpack_co.paa"};
};
class RB205_B_B1_predefAA_geonosis: RB205_B_B1_predefAA
{
    scope = 1;
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_backpack_co.paa"};
};