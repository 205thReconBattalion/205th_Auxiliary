class cfgPatches
{
	class RB205_cis_droids_groups
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids_b1",
			"RB205_cis_droids_b2",
			"RB205_cis_droids_bx",
			"RB205_cis_droids_ts",
			"RB205_cis_droids_special"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

#define ICON_INFANTRY   icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
#define ICON_RECON      icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
#define ICON_EOD        icon = "\a3\UI_F_Orange\Data\CfgMarkers\o_Ordnance_ca.paa";
#define ICON_HQ         icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";

#define SPC_PATROL(CLASSNAME,DISPLAYNAME,UNIT) \
    class ##CLASSNAME## \
    { \
        name = ##DISPLAYNAME##; \
        ICON_INFANTRY \
        side = 0; \
        faction = "RB205_cis"; \
        class Unit0 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "CORPORAL"; \
            position[] = {0,0,0}; \
        }; \
        class Unit1 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-2,0}; \
        }; \
    };
#define SPC_FIRETEAM(CLASSNAME,DISPLAYNAME,UNIT) \
    class ##CLASSNAME## \
    { \
        name = ##DISPLAYNAME##; \
        ICON_INFANTRY \
        side = 0; \
        faction = "RB205_cis"; \
        class Unit0 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "SERGEANT"; \
            position[] = {0,0,0}; \
        }; \
        class Unit1 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-1.5,0}; \
        }; \
        class Unit2 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-3,0}; \
        }; \
        class Unit3 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-4.5,0}; \
        }; \
    };
#define SPC_SQUAD(CLASSNAME,DISPLAYNAME,UNIT) \
    class ##CLASSNAME## \
    { \
        name = ##DISPLAYNAME##; \
        ICON_INFANTRY \
        side = 0; \
        faction = "RB205_cis"; \
        class Unit0 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "SERGEANT"; \
            position[] = {0,0,0}; \
        }; \
        class Unit1 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-1.5,0}; \
        }; \
        class Unit2 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-3,0}; \
        }; \
        class Unit3 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-4.5,0}; \
        }; \
        class Unit4 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-6,0}; \
        }; \
        class Unit5 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-7.5,0}; \
        }; \
        class Unit6 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-9,0}; \
        }; \
        class Unit7 \
        { \
            side = 0; \
            vehicle = ##UNIT##; \
            rank = "PRIVATE"; \
            position[] = {0,-10.5,0}; \
        }; \
    };

class CfgGroups
{
    class East
	{
		class RB205_cis_groups
		{
			name = "[205] Confederacy of Independent Systems";
			class Infantry_B1
			{
				name = "B1 Battle Droids";
				#include "b1.hpp"
			};
			class Infantry_B1_geonosis
			{
				name = "B1 Battle Droids (Geonosis)";
				#include "b1_geonosis.hpp"
			};
			class Infantry_B1_training
			{
				name = "B1 Battle Droids (Training)";
				#include "b1_training.hpp"
			};
			class Infantry_B2
			{
				name = "B2 Super Battle Droids";
				#include "b2.hpp"
			};
			class Infantry_BX
			{
				name = "BX Commando Droids";
				#include "bx.hpp"
			};
			class Infantry_BX_training
			{
				name = "BX Commando Droids (Training)";
				#include "bx_training.hpp"
			};
			class Infantry_TS
			{
				name = "T-Series Tactical Droids";
				#include "ts.hpp"
			};
			class Infantry_special
			{
				name = "Specialized Droids";
				#include "special.hpp"
			};
		};
	};
};