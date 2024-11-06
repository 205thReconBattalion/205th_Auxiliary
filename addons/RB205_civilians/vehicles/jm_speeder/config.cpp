class cfgPatches
{
	class RB205_civilians_vehicles_jm_speeder
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
            "RB205_civilians",
			"JMSLLTE_vehgr_landspeeders",
			"JMSLLTE_vehgr_AA2",
			"JMSLLTE_vehgr_AA5"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_civ_veh_x34",
			"RB205_civ_veh_g17",
			"RB205_civ_veh_v35",
			"RB205_civ_veh_v35c",
			"RB205_civ_veh_aa2",
			"RB205_civ_veh_aa5",
			"RB205_civ_veh_aa5c"
		};
	};
};

#include "\RB205_civilians\vehicles\macros.hpp"

class cfgVehicles
{
    class JMSLLTE_C_veh_x34_F;
    class RB205_civ_veh_x34: JMSLLTE_C_veh_x34_F
    {
        displayName = "X-34 Landspeeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class JMSLLTE_C_veh_g17_F;
    class RB205_civ_veh_g17: JMSLLTE_C_veh_g17_F
    {
        displayName = "G-17 Speeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class JMSLLTE_C_veh_v35_F;
    class RB205_civ_veh_v35: JMSLLTE_C_veh_v35_F
    {
        displayName = "V-35 Speeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class JMSLLTE_C_veh_v35c_F;
    class RB205_civ_veh_v35c: JMSLLTE_C_veh_v35c_F
    {
        displayName = "V-35C Speeder";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class JMSLLTE_C_veh_AA2_F;
    class RB205_civ_veh_aa2: JMSLLTE_C_veh_AA2_F
    {
        displayName = "A-A2 Speeder Van";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class JMSLLTE_C_veh_AA5_F;
    class RB205_civ_veh_aa5: JMSLLTE_C_veh_AA5_F
    {
        displayName = "A-A5 Speeder Truck";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
	class JMSLLTE_C_veh_AA5sup_F;
    class RB205_civ_veh_aa5c: JMSLLTE_C_veh_AA5sup_F
    {
        displayName = "A-A5C Speeder Truck (Cargo)";
        EDITOR_FACTION
        editorSubcategory = "RB205_civ_vehicles_speeder";
        
        crew = CREW_DEFAULT;
    };
};