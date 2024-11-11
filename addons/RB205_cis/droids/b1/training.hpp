#define SUBCATEGORY_TRAINING editorSubCategory = "RB205_cis_b1_training";

class RB205_B1_training: RB205_B1
{
	uniformClass = "JLTS_DroidB1_Training";
	backpack = "JLTS_B1_backpack_training";
	SUBCATEGORY_TRAINING
};
class RB205_B1_heavy_training: RB205_B1_heavy
{
	uniformClass = "JLTS_DroidB1_Training";
	backpack = "JLTS_B1_backpack_training";
	SUBCATEGORY_TRAINING
};
class RB205_B1_sniper_training: RB205_B1_sniper
{
	uniformClass = "JLTS_DroidB1_Training";
	SUBCATEGORY_TRAINING
};
class RB205_B1_at_training: RB205_B1_at
{
	uniformClass = "JLTS_DroidB1_Training";
	backpack = "RB205_B_B1_predefAT_training";
	SUBCATEGORY_TRAINING
};
class RB205_B1_aa_training: RB205_B1_aa
{
	uniformClass = "JLTS_DroidB1_Training";
    backpack = "RB205_B_B1_predefAA_training";
	SUBCATEGORY_TRAINING
};

class RB205_B1_commander_training: RB205_B1_commander
{
	uniformClass = "JLTS_DroidB1_Training";
	backpack = "JLTS_B1_antenna_training";
	SUBCATEGORY_TRAINING
};

/****************
	BACKPACKS
****************/

class RB205_B_B1_predefAT_training: RB205_B_B1_predefAT
{
	scope = 1;
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"};
};
class RB205_B_B1_predefAA_training: RB205_B_B1_predefAA
{
    scope = 1;
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"};
};