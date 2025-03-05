class cfgPatches
{
	class RB205_cis_vehicles_groups
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_vehicles"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

#define ICON_MOTOR      icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
#define ICON_TANK       icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
#define ICON_ARTILLERY  icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
#define ICON_MORTAR     icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
#define ICON_ANTIAIR    icon = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";
#define ICON_PLANE      icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
#define ICON_HELI       icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";

class CfgGroups
{
    class East
	{
		class RB205_cis_groups
		{
			name = "[205] Confederacy of Independent Systems";
			class Vehicle
            {
                name = "Vehicles";
                #include "groundAssets\flitknot.hpp"
            };
			class Vehicle_ground
            {
                name = "Vehicles - Tanks";
                #include "groundAssets\aat.hpp"
                #include "groundAssets\gat.hpp"
                #include "groundAssets\raptor.hpp"
                #include "groundAssets\hailfire.hpp"
            };
            class Vehicle_air
            {
                name = "Vehicles - Starfigher";
                #include "airAssets\vulture.hpp"
                #include "airAssets\triFighter.hpp"
                #include "airAssets\hmp.hpp"
                #include "airAssets\maf.hpp"
            };
            class Vehicle_stationary
            {
                name = "Vehicles - Stationary";
                #include "stationaryAssets\mortar.hpp"
            };
		};
	};
};