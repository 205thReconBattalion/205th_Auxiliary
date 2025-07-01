class cfgPatches
{
	class RB205_civilians_vehicles_poly_speeder
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
			"Poly_Vehicle_AV21",
			"Poly_Celere",
			"Poly_DaggerStar"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_veh_av21",
			"RB205_civ_veh_celere",
			"RB205_civ_veh_daggerstar"
		};
	};
};

#include "\RB205_civilians\vehicles\macros.hpp"

class cfgVehicles
{
    class P_AV21;
    class RB205_civ_veh_av21: P_AV21
    {
        displayName = "AV-21 Landspeeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class Poly_Celere;
    class RB205_civ_veh_celere: Poly_Celere
    {
        displayName = "Celere Speeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class Poly_Swoop;
    class RB205_civ_veh_daggerstar: Poly_Swoop
    {
        displayName = "Daggerstar Speeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
};