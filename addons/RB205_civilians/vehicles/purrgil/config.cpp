class cfgPatches
{
	class RB205_civilians_vehicles_purrgil
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
            "3as_Starships"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_veh_purrgil_blue",
            "RB205_civ_veh_purrgil_green",
            "RB205_civ_veh_purrgil_yellow"
		};
	};
};

#include "\RB205_civilians\vehicles\macros.hpp"

class cfgVehicles
{
    class 3AS_Civilian_Transport_01;
    class RB205_civ_veh_purrgil_blue: 3AS_Civilian_Transport_01
    {
        displayName = "Purrgil Transport Shuttle (Blue)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Civilian_Transport_03;
    class RB205_civ_veh_purrgil_green: 3AS_Civilian_Transport_03
    {
        displayName = "Purrgil Transport Shuttle (Green)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Civilian_Transport_02;
    class RB205_civ_veh_purrgil_yellow: 3AS_Civilian_Transport_02
    {
        displayName = "Purrgil Transport Shuttle (Yellow)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
};