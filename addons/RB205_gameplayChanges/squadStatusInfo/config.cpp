/*
	Activates Squad Size Info Markers on map
*/

class cfgPatches
{
	class RB205_gameplayChanges_squadStatusInfo
	{
		requiredAddons[] =
        {
            "RB205_tacticalMarker",
			"CBA_Extended_EventHandlers"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers
{
   class RB205_GC_SSI_PreInit
   {
    	init = "call compile preProcessFileLineNumbers '\RB205_gameplayChanges\squadStatusInfo\XEH_preInit.sqf'";
   };
};

class Extended_PostInit_EventHandlers 
{
	class RB205_GC_SSI_PostInit
	{
		init = "call compile preprocessFileLineNumbers '\RB205_gameplayChanges\squadStatusInfo\XEH_postInit.sqf'";
	};
};