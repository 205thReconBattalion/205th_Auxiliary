class CfgPatches
{
	class modCompats_212_hideArsenalItems
	{
		requiredAddons[] =
		{
			"212th_Equipment",
			"Aux212_Phase_2_Headlamp",
			"Aux212_K21_Mine_Detector",
			"Aux212_Remote_Detonator",
			"Aux212_Repair_Tool_Item"
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

	class 212th_ACE_Painkiller: ACE_ItemCore {
		ace_arsenal_hide = 1;
	};

	class Aux212_Phase_2_Headlamp_Batteries: ACE_ItemCore {
		ACE_isTool = 0;
	};
	class MineDetector;
	class Aux212_K21_Mine_Detector: MineDetector {
		ACE_isTool = 0;
	};
	class ACE_Clacker;
	class Aux212_Remote_Detonator: ACE_Clacker {
		ACE_isTool = 0;
	};
	class ToolKit;
	class Aux212_Repair_Tool_Item: ToolKit {
		ACE_isTool = 0;
	};
};