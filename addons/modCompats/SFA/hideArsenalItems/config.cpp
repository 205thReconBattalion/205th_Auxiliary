class CfgPatches
{
	class modCompats_SFA_hideArsenalItems
	{
		requiredAddons[] =
		{
			"SFA_Medical",
			"sfaBoosts"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class CfgWeapons
{
	class ACE_ItemCore;

	class SFA_Anodyne_Stim: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
	class SFA_Battle_Stim: SFA_Anodyne_Stim {
		ace_arsenal_hide = 1;
	};
	class SFA_Parallactic_Stim: SFA_Anodyne_Stim {
		ace_arsenal_hide = 1;
	};

	class SFA_Base_Stim: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
	class SFA_Kolto_Stim: SFA_Base_Stim {
		ace_arsenal_hide = 1;
	};
	class SFA_Kyrprax_Stim: SFA_Base_Stim {
		ace_arsenal_hide = 1;
	};
	class SFA_Polybiotic_Stim: SFA_Base_Stim {
		ace_arsenal_hide = 1;
	};
	
	class SFA_BactaIV_250: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
	class SFA_BactaIV_500: SFA_BactaIV_250 {
		ace_arsenal_hide = 1;
	};
	class SFA_BactaIV_1000: SFA_BactaIV_250 {
		ace_arsenal_hide = 1;
	};

	class SFA_AdvancedKoltoStim: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
	class SFA_AdvancedReflexStim: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
	class SFA_EnergizedKoltoStim: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
};