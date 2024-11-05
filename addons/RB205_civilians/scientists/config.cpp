class cfgPatches
{
	class RB205_civilians_scientists
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
			"OPTRE_UNSC_Units_ONI",
            "OPTRE_UNSC_Units_Army"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_republic_scientist",
            "RB205_separatist_scientist"
		};
		weapons[] =
        {
            "RB205_U_republic_scientist",
            "RB205_U_seperatist_scientist"
        };
	};
};

#include "\RB205_civilians\macros.hpp"

class cfgWeapons
{
    class U_B_CombatUniform_mcam;
    class OPTRE_ONI_Researcher_Uniform: U_B_CombatUniform_mcam
    {
        class ItemInfo;
    };
    class RB205_U_republic_scientist: OPTRE_ONI_Researcher_Uniform
    {
        displayName = "Scientist (Republic)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "RB205_republic_scientist";
        };
    };

    class OPTRE_UNSC_Army_Uniform_WDL;
    class OPTRE_UNSC_Dress_Uniform_gray: OPTRE_UNSC_Army_Uniform_WDL
    {
        class ItemInfo;
    };
    class RB205_U_seperatist_scientist: OPTRE_ONI_Researcher_Uniform
    {
        displayName = "Scientist (Separatist)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "RB205_separatist_scientist";
        };
    };
};
class cfgVehicles
{
    class OPTRE_ONI_Researcher_Base;
    class RB205_republic_scientist: OPTRE_ONI_Researcher_Base
    {
        scope = 2;
        scopecurator = 2;
        displayName = "Scientist (Republic)";
        side = 3;
        faction = "RB205_civ";
        editorSubcategory = "RB205_civ_poi";
        uniformClass = "RB205_U_republic_scientist";

        //model = "\optre_unsc_units\oni\research.p3d";
        //hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {"RB205_civilians\scientists\data\U_republic_scientist.paa"};
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = {"JLTS_intel_holoProjector","JLTS_intel_datacard","JLTS_intel_datapad_civ","JLTS_credit_card"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    
    class OPTRE_UNSC_Army_Soldier_DressGray;
    class C_scientist_F;
    class RB205_separatist_scientist: C_scientist_F
    {
        displayName = "Scientist (Separatist)";
        side = 3;
        faction = "RB205_civ";
        editorSubcategory = "RB205_civ_poi";
        uniformClass = "RB205_U_seperatist_scientist";

        model = "\OPTRE_UNSC_Units\Army\officer.p3d";
        hiddenSelections[] =
        {
            "camo1",
            "camo2",
            "insignia",
            "odst",
            "bar_1",
            "bar_2",
            "awards",
            "nametag"
        };
        hiddenSelectionsTextures[] =
        {
            "OPTRE_UNSC_Units\Army\data\dress_uniform_gray_co.paa",
            "RB205_civilians\scientists\data\U_separatist_scientist.paa",
            "",
            "",
            "",
            "",
            "RB205_civilians\scientists\data\U_separatist_scientist.paa",
            "RB205_civilians\scientists\data\U_separatist_scientist.paa"
        };
        
        identityTypes[] = {IDENTITY_TYPES_HUMAN,IDENTITY_TYPES_ALIEN};
        Items[] = {"JLTS_intel_holoProjector","JLTS_intel_datacard","JLTS_intel_datapad_civ","JLTS_credit_card"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
};