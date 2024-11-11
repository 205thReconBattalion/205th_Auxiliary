class cfgPatches
{
	class RB205_cis_droids
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis"
            //JLTS_Droid_B1_E5
		};
		requiredVersion = 1.0;
		units[] =
		{
			
		};
		weapons[] =
        {
            
        };
	};
};

#include "macros.hpp"

class CfgVehicles
{
    
};

/*class CfgWeapons
{
    #include "cfgWeapons.hpp"

    class ls_redforVest_base;
    class ls_cis_bxCommando_vest: ls_redforVest_base
    {
        class ItemInfo;
    };
    class 205_V_B1_aqua: ls_cis_bxCommando_vest
	{
		displayName = "B1 Battle Droid (Water Resistant Coating)"; //B1 Kampfroide (Wasserabweisende Beschichtung)
		class ItemInfo: ItemInfo
		{
            vestType = "Rebreather";
		};
	};
};*/

/*class CfgGroups
{
    #include "cfgGroups.hpp"
};*/

class CfgEditorSubcategories
{
	class RB205_cis_b1
	{
		displayName = "B1 Battle Droids"; //B1 Kampfdroiden
	};
    class RB205_cis_b1_geonosis
	{
		displayName = "B1 Battle Droids (Geonosis)"; //B1 Kampfdroiden (Geonosis)
	};
	class RB205_cis_b1_training
	{
		displayName = "B1 Battle Droids (Training)" //B1 Kampfdroiden (Training)
	};
	class RB205_cis_b2
	{
		displayName = "B2 Super Battle Droids"; //B2 Superkampfdroiden
	};
	class RB205_cis_bx
	{
		displayName = "BX Commando Droids"; //BX Kommandodroiden
	};
	class RB205_cis_t
	{
		displayName = "T-Series Tactical Droids"; //Taktikdroiden
	};
	class RB205_cis_special
	{
		displayName = "Specialized Droids"; //Spezialisierte Droiden
	};
};