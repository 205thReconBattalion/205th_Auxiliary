class CfgPatches
{
	class modCompats_OPTRE_hideArsenalItems
	{
		requiredAddons[] =
		{
			"OPTRE_Weapons_Items"
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
	class ACE_fieldDressing;

	class OPTRE_MedKit: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
	class OPTRE_Biofoam: ACE_fieldDressing {
		ace_arsenal_hide = 1;
	};
	class OPTRE_Medigel: ACE_fieldDressing {
		ace_arsenal_hide = 1;
	};
};