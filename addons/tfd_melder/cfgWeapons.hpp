class ItemCore;
class InventoryItem_Base_F;

class tfd_pagercore : ItemCore {
    type = 4096;
    detectRange = -1;
    simulation = "ItemMineDetector";
    scope = 0;
    author = "Lennard[TFD]";
};

class tfd_pager1 : tfd_pagercore
{
    scope = 2;
    displayName = $STR_TFD_Melder_pager1;
	//model="\tfd_melee\models\m9baj.p3d";
    descriptionShort = $STR_TFD_Melder_pager1Descr;
    picture = "\tfd_melder\data\melder.paa";
	logo = "\tfd_melder\data\melder.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 1;
    };
};

class tfd_pager2 : tfd_pagercore
{
    scope = 2;
    displayName = $STR_TFD_Melder_pager2;
	//model="\tfd_melee\models\m9baj.p3d";
    descriptionShort = $STR_TFD_Melder_pager2Descr;
    picture = "\tfd_melder\data\melder.paa";
	logo = "\tfd_melder\data\melder.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 1;
    };
};

class tfd_pager3 : tfd_pagercore
{
    scope = 2;
    displayName = $STR_TFD_Melder_pager3;
	//model="\tfd_melee\models\m9baj.p3d";
    descriptionShort = $STR_TFD_Melder_pager3Descr;
    picture = "\tfd_melder\data\melder.paa";
	logo = "\tfd_melder\data\melder.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 1;
    };
};


class tfd_ls1 : tfd_pagercore
{
    scope = 2;
    displayName = $STR_TFD_Melder_ls1;
	//model="\tfd_melee\models\m9baj.p3d";
    descriptionShort = $STR_TFD_Melder_ls1Descr;
    picture = "\tfd_melder\data\ls.paa";
	logo = "\tfd_melder\data\ls.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 1;
    };
};

class tfd_ls2 : tfd_pagercore
{
    scope = 2;
    displayName = $STR_TFD_Melder_ls2;
	//model="\tfd_melee\models\m9baj.p3d";
    descriptionShort = $STR_TFD_Melder_ls2Descr;
    picture = "\tfd_melder\data\ls.paa";
	logo = "\tfd_melder\data\ls.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 1;
    };
};

class tfd_ls3 : tfd_pagercore
{
    scope = 2;
    displayName = $STR_TFD_Melder_ls3;
	//model="\tfd_melee\models\m9baj.p3d";
    descriptionShort = $STR_TFD_Melder_ls3Descr;
    picture = "\tfd_melder\data\ls.paa";
	logo = "\tfd_melder\data\ls.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 1;
    };
};