class CfgPatches
{
	class configOverwrite_entrenchingTool
	{
		requiredAddons[] =
		{
			"ace_trenches"
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
	class CBA_MiscItem_ItemInfo;
	class ACE_EntrenchingTool: ACE_ItemCore
	{
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0;
		};
	};
};
