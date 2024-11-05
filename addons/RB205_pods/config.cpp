class CfgPatches
{
    class RB205_pods
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = 
        {
            "RB205_main",
			"RB205_weapons",
			"RB205_custom"
        };
    };
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class RB205_pods: NO_CATEGORY
	{
		displayName="DropPods/SupplyPods";
	};
};

class CfgFunctions
{
	class RB205_pods_addon
	{
		tag="RB205_pods";
		class FireSupport
		{
			file="\RB205_pods\functions";
			class DropPod
			{
			};
			class SupplyPod
			{
			};
		};
	};
};

class CfgEditorCategories
{
	class RB205_pods_addon
	{
		displayName="205th Recon Battalion";
	};
};
class Extended_PreInit_EventHandlers
{
	class RB205_pods_PreInit
	{
		init="call compile preprocessFileLineNumbers 'RB205_pods\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_pods_PostInit
	{
		init="call compile preprocessFileLineNumbers 'RB205_pods\XEH_postInit.sqf'";
	};
};