class CfgPatches
{
	class configOverwrite_stretcher
	{
		requiredAddons[] =
		{
			"rr_stretch"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class rr_stretcher: CBA_MiscItem
	{
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 15;
		};
	};
};
