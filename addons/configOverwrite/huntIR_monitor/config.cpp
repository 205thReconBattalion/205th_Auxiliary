class CfgPatches
{
	class configOverwrite_huntIR_monitor
	{
		requiredAddons[] =
		{
			"ace_huntir"
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
    
    class ACE_HuntIR_monitor: ACE_ItemCore
    {
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 5;
        };
    };
};