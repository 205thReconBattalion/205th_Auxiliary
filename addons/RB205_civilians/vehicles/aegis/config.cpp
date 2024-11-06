class cfgPatches
{
	class RB205_civilians_vehicles_aegis
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
            "3AS_Rebel_Heli_Aegis"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_veh_aegis_blue",
            "RB205_civ_veh_aegis_green",
            "RB205_civ_veh_aegis_red",
            "RB205_civ_veh_aegis_yellow",
            "RB205_civ_veh_aegisCarrier_blue",
            "RB205_civ_veh_aegisCarrier_green",
            "RB205_civ_veh_aegisCarrier_red",
            "RB205_civ_veh_aegisCarrier_yellow"
		};
	};
};

#include "\RB205_civilians\vehicles\macros.hpp"

class cfgVehicles
{
    class 3AS_Aegis_Shuttle_Civ_Blue;
    class RB205_civ_veh_aegis_blue: 3AS_Aegis_Shuttle_Civ_Blue
    {
        displayName = "Aegis Shuttle (Blue)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Aegis_Shuttle_Civ_Green;
    class RB205_civ_veh_aegis_green: 3AS_Aegis_Shuttle_Civ_Green
    {
        displayName = "Aegis Shuttle (Green)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Aegis_Shuttle_Civ_F;
    class RB205_civ_veh_aegis_red: 3AS_Aegis_Shuttle_Civ_F
    {
        displayName = "Aegis Shuttle (Red)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Aegis_Shuttle_Civ_Yellow;
    class RB205_civ_veh_aegis_yellow: 3AS_Aegis_Shuttle_Civ_Yellow
    {
        displayName = "Aegis Shuttle (Yellow)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };

    class 3AS_Aegis_Carrier_Civ_Blue;
    class RB205_civ_veh_aegisCarrier_blue: 3AS_Aegis_Carrier_Civ_Blue
    {
        displayName = "Aegis/C Carrier (Blue)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Aegis_Carrier_Civ_Green;
    class RB205_civ_veh_aegisCarrier_green: 3AS_Aegis_Carrier_Civ_Green
    {
        displayName = "Aegis/C Carrier (Green)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Aegis_Carrier_Civ_F;
    class RB205_civ_veh_aegisCarrier_red: 3AS_Aegis_Carrier_Civ_F
    {
        displayName = "Aegis/C Carrier (Red)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
    class 3AS_Aegis_Carrier_Civ_Yellow;
    class RB205_civ_veh_aegisCarrier_yellow: 3AS_Aegis_Carrier_Civ_Yellow
    {
        displayName = "Aegis/C Carrier (Yellow)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_spaceship";
        
        crew = CREW_SMUGGLER;
    };
};