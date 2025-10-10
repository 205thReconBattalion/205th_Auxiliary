class CfgPatches
{
	class modCompats_arsenalSubCategories
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
        author = "205th Recon Battalion";
		units[] = {};
	};
};
class Extended_PostInit_EventHandlers
{
	class modCompats_arsenalSubCategories
	{
		init = "call compile preProcessFileLineNumbers '\modCompats\arsenalSubCategories\XEH_postInit.sqf'";
	};
};