class CfgPatches
{
	class RB205_extraContent_accessCards
	{
		requiredAddons[] =
		{
			"RB205_extraContent",
			"RB205_extraContent_accessCards_doors",
			"P_Keycards"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {
			"RB205_accessCard_cis",
			"RB205_accessCard_cis_officer",
			"RB205_accessCard_gar",
			"RB205_accessCard_gar_officer",
			"RB205_accessCard_prison"
		};
		units[] = {
			"RB205_GH_accessCard_cis",
			"RB205_GH_accessCard_cis_officer",
			"RB205_GH_accessCard_gar",
			"RB205_GH_accessCard_gar_officer",
			"RB205_GH_accessCard_prison"
		};
	};
};

class CfgWeapons
{
	class P_Keycard_Blue;
	class RB205_accessCard_cis: P_Keycard_Blue {
		displayName = "Access Card (CIS)";
	};
	class P_Keycard_Black;
	class RB205_accessCard_cis_officer: P_Keycard_Black {
		displayName = "Access Card (CIS - Officer)";
	};

	class P_Keycard_Orange;
	class RB205_accessCard_gar: P_Keycard_Orange {
		displayName = "Access Card (GAR)";
	};
	class P_Keycard_Yellow;
	class RB205_accessCard_gar_officer: P_Keycard_Yellow {
		displayName = "Access Card (GAR - Officer)";
	};

	class P_Keycard_Red;
	class RB205_accessCard_prison: P_Keycard_Red {
		displayName = "Access Card (Prison)";
	};
};

#define EDITOR_CATEGORY "RB205_prop_extra"
#define EDITOR_SUBCATEGORY "RB205_extraContent_accessCards"

class CfgVehicles
{
	class P_GH_KeyB;
	class RB205_GH_accessCard_cis: P_GH_KeyB {
		displayName = "Access Card (CIS)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class TransportItems {
			class RB205_accessCard_cis {
				name = "RB205_accessCard_cis";
				count = 1;
			};
		};
		scopeCurator = 2;
	};
	class P_GH_KeyBlk;
	class RB205_GH_accessCard_cis_officer: P_GH_KeyBlk {
		displayName = "Access Card (CIS - Officer)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class TransportItems {
			class RB205_accessCard_cis {
				name = "RB205_accessCard_cis_officer";
				count = 1;
			};
		};
		scopeCurator = 2;
	};
	
	class P_GH_KeyO;
	class RB205_GH_accessCard_gar: P_GH_KeyO {
		displayName = "Access Card (GAR)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class TransportItems {
			class RB205_accessCard_cis {
				name = "RB205_accessCard_gar";
				count = 1;
			};
		};
		scopeCurator = 2;
	};
	class P_GH_KeyY;
	class RB205_GH_accessCard_gar_officer: P_GH_KeyY {
		displayName = "Access Card (GAR - Officer)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class TransportItems {
			class RB205_accessCard_cis {
				name = "RB205_accessCard_gar_officer";
				count = 1;
			};
		};
		scopeCurator = 2;
	};
	
	class P_GH_KeyR;
	class RB205_GH_accessCard_prison: P_GH_KeyR {
		displayName = "Access Card (Prison)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class TransportItems {
			class RB205_accessCard_cis {
				name = "RB205_accessCard_prison";
				count = 1;
			};
		};
		scopeCurator = 2;
	};
};