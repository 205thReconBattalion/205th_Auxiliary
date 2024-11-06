class cfgPatches
{
	class RB205_civilians_vehicles_lancer
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
            "lsd_vehicles_cars"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_veh_lancer"
		};
	};
};

#include "\RB205_civilians\vehicles\macros.hpp"

class cfgVehicles
{
    class lsd_civ_lancerBike;
    class RB205_civ_veh_lancer: lsd_civ_lancerBike
    {
        displayName = "105-K Speeder Bike";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_SMUGGLER;
    };
};