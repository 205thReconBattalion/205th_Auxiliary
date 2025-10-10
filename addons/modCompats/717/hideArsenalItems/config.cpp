class CfgPatches
{
	class modCompats_717_hideArsenalItems
	{
		requiredAddons[] =
		{
			"Poly_RC_Infusor"
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
	
	class P_BactaInjector_Item: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};
};