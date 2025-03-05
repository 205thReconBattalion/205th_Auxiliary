class cfgPatches
{
	class RB205_civilians_vehicles_gozanti
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
            "3AS_Imperial_Air_Gozanti"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_veh_gozanti_blue",
            "RB205_civ_veh_gozanti_green",
            "RB205_civ_veh_gozanti_yellow",
            "RB205_civ_veh_gozanti_purple",
            "RB205_civ_veh_gozanti_brown"
		};
	};
};

#include "\RB205_civilians\vehicles\macros.hpp"

class cfgVehicles
{
    class 3AS_Gozanti_Civ_F;
    class RB205_civ_veh_gozanti_blue: 3AS_Gozanti_Civ_F
    {
        displayName = "Gozanti Cruiser (Blue)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Gozanti_Civ_Green;
    class RB205_civ_veh_gozanti_green: 3AS_Gozanti_Civ_Green
    {
        displayName = "Gozanti Cruiser (Green)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Gozanti_Civ_Yellow;
    class RB205_civ_veh_gozanti_yellow: 3AS_Gozanti_Civ_Yellow
    {
        displayName = "Gozanti Cruiser (Yellow)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Gozanti_Civ_Purple;
    class RB205_civ_veh_gozanti_purple: 3AS_Gozanti_Civ_Purple
    {
        displayName = "Gozanti Cruiser (Purple)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Gozanti_Civ_Brown;
    class RB205_civ_veh_gozanti_brown: 3AS_Gozanti_Civ_Brown
    {
        displayName = "Gozanti Cruiser (Brown)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
};