class CfgPatches
{
	class RB205_extraContent_accessCards_doors
	{
		requiredAddons[] =
		{
			"RB205_extraContent",
			"3AS_Prop_Interiors",
			"ls_props_structures"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {
			"RB205_3AS_CIS_door_AC",
			"RB205_3AS_CIS_door_ACOFF",
			"RB205_3AS_CIS_door_med_AC",
			"RB205_3AS_CIS_door_med_ACOFF",
			"RB205_3AS_CIS_door_sml_AC",
			"RB205_3AS_CIS_door_sml_ACOFF",

			"RB205_3AS_GAR_door_AC",
			"RB205_3AS_GAR_door_ACOFF",
			"RB205_LS_GAR_door_AC",
			"RB205_LS_GAR_door_ACOFF",
			
			"RB205_3AS_prison_door_AC",
			"RB205_3AS_prison_corridor_AC"
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_extraContent_accessCards
	{
		displayName = "Locked Doors (AC)";
	};
};

#define EDITOR_CATEGORY "RB205_prop_extra"
#define EDITOR_SUBCATEGORY "RB205_extraContent_accessCards"

#include "userActions.hpp"

class CfgVehicles
{
	class land_3AS_CIS_Door;
	class RB205_3AS_CIS_door_AC: land_3AS_CIS_Door {
		displayName = "CIS Corridor Door (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_cis' in items player || 'RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))"; //((this animationPhase 'DoorL') < 0.5)
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_cis' in items player || 'RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};
	class RB205_3AS_CIS_door_ACOFF: RB205_3AS_CIS_door_AC
	{
		displayName = "CIS Corridor Door (AC-Off.)";
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};

	class land_3AS_CIS_Door_Med;
	class RB205_3AS_CIS_door_med_AC: land_3AS_CIS_Door_Med {
		displayName = "CIS Corridor Door Medium (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_cis' in items player || 'RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_cis' in items player || 'RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};
	class RB205_3AS_CIS_door_med_ACOFF: RB205_3AS_CIS_door_med_AC {
		displayName = "CIS Corridor Door Medium (AC-Off.)";
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};

	class land_3AS_CIS_Door_small;
	class RB205_3AS_CIS_door_sml_AC: land_3AS_CIS_Door_small {
		displayName = "CIS Small Corridor Door (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_cis' in items player || 'RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_cis' in items player || 'RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};
	class RB205_3AS_CIS_door_sml_ACOFF: RB205_3AS_CIS_door_sml_AC {
		displayName = "CIS Small Corridor Door (AC-Off.)";
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_cis_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};

	class land_3AS_Venator_Door;
	class RB205_3AS_GAR_door_AC: land_3AS_Venator_Door {
		displayName = "GAR Hallway Door (3AS) (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_gar' in items player || 'RB205_accessCard_gar_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class CloseDoor: OpenDoor {
				displayName = "Close Door";
				condition = "(('RB205_accessCard_gar' in items player || 'RB205_accessCard_gar_officer' in items player) && ((this animationPhase 'open_left') >= 0.5))";
				statement = "[this,'open_left',0] call BIS_fnc_DoorNoHandleClose;[this,'open_right',0] call BIS_fnc_DoorNoHandleClose";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_gar' in items player || 'RB205_accessCard_gar_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};
	class RB205_3AS_GAR_door_ACOFF: RB205_3AS_GAR_door_AC {
		displayName = "GAR Hallway Door (3AS) (AC-Off.)";
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_gar_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_right',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class CloseDoor: OpenDoor {
				displayName = "Close Door";
				condition = "(('RB205_accessCard_gar_officer' in items player) && ((this animationPhase 'open_left') >= 0.5))";
				statement = "[this,'open_left',0] call BIS_fnc_DoorNoHandleClose;[this,'open_right',0] call BIS_fnc_DoorNoHandleClose";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_gar_officer' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
		};
	};

	class ls_prop_hallway_door;
	class RB205_LS_GAR_door_AC: ls_prop_hallway_door {
		displayName = "GAR Hallway Door (LS) (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class door_open {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_gar' in items player || 'RB205_accessCard_gar_officer' in items player) && (this animationSourcePhase 'door_open' == 0))";
				position = "door_pos";
				statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
			};
			class door_close: door_open {
				displayName = "Close Door";
				condition = "(('RB205_accessCard_gar' in items player || 'RB205_accessCard_gar_officer' in items player) && (this animationSourcePhase 'door_open' == 1))";
				statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
			};
			class door_locked: door_open {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_gar' in items player || 'RB205_accessCard_gar_officer' in items player) && (this animationSourcePhase 'door_open' == 0)";
			};
		};
	};
	class RB205_LS_GAR_door_ACOFF: RB205_LS_GAR_door_AC {
		displayName = "GAR Hallway Door (LS) (AC-Off.)";
		class UserActions {
			class door_open {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_gar_officer' in items player) && (this animationSourcePhase 'door_open' == 0)";
				position = "door_pos";
				statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
			};
			class door_close: door_open {
				displayName = "Close Door";
				condition = "(('RB205_accessCard_gar_officer' in items player) && (this animationSourcePhase 'door_open' == 1)";
				statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
			};
			class door_locked: door_open {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_gar_officer' in items player) && (this animationSourcePhase 'door_open' == 0)";
			};
		};
	};

	class land_3AS_Prison_Blast_Door;
	class RB205_3AS_prison_door_AC: land_3AS_Prison_Blast_Door {
		displayName = "Prison Blast Door (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class OpenDoor {
				USER_ACTION_OPEN
				condition = "(('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',1] call BIS_fnc_DoorNoHandleOpen";
			};
			class CloseDoor: OpenDoor {
				displayName = "Close Door";
				condition = "(('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_left') >= 0.5))";
				statement = "[this,'open_left',0] call BIS_fnc_DoorNoHandleClose";
			};
			class DoorLocked: OpenDoor {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
			};
		};
	};

	class land_3AS_Prison_Corridor_Short;
	class RB205_3AS_prison_corridor_AC: land_3AS_Prison_Corridor_Short {
		displayName = "Prison Corridor (Short) (AC)";
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		class UserActions {
			class OpenDoor_1 {
				displayName = "Open Cell Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";

				condition = "(('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_left') < 0.5))";
				position = "door_Action";
				statement = "[this,'open_left',1] call BIS_fnc_DoorNoHandleOpen";

				onlyForPlayer = 0;
				priority = 0.4;
				radius = 2;
			};
			class OpenDoor_2: OpenDoor_1 {
				condition = "(('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_Right') < 0.5))";
				position = "Door_Action_Right";
				statement = "[this,'open_Right',1] call BIS_fnc_DoorNoHandleOpen";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayName = "Close Cell Door";
				condition = "(('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_left') >= 0.5))";
				statement = "[this,'open_left',0] call BIS_fnc_DoorNoHandleClose";
			};
			class CloseDoor_2: OpenDoor_2 {
				displayName = "Close Cell Door";
				condition = "(('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_Right') >= 0.5))";
				statement = "[this,'open_Right',0] call BIS_fnc_DoorNoHandleClose";
			};
			class DoorLocked_1: OpenDoor_1 {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_left') < 0.5))";
			};
			class DoorLocked_2: OpenDoor_2 {
				USER_ACTION_LOCKED
				condition = "(!('RB205_accessCard_prison' in items player) && ((this animationPhase 'open_Right') < 0.5))";
			};
		};
	};
};