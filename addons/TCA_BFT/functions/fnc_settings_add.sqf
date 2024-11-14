/*
	Author: Jacco Douma 

	Description: 
	Adds BFT settings to ACE interaction menu. 

	Parameter(s): 
		None

	Returns: 
	nothing

	TODO: 
	 - Also add BFT to map interactions
	 - Cusom name
	 - Update own marker whenever you change a setting
*/
#include "script_component.hpp"

// Only add once
if (GVAR(Settings_Set)) exitWith {};
GVAR(Settings_Set) = true; 

// Add options to ACE menu
_action_BFT = ["Jacco_BFT", "BFT", "", {true}, {leader group player == player && visibleMap}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action_BFT] call ace_interact_menu_fnc_addActionToObject;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Colors 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
action_BFT_Colors = [
	"Jacco_BFT_Colors", 
	"Color", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "colorWheel"), 
	{true}, 
	{true}, // Condition
	FUNC(settings_insertColorsChildren), 
	[true] // Params to pass to insertChildren
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Jacco_BFT"], action_BFT_Colors] call ace_interact_menu_fnc_addActionToObject;

// Add other colors
_action_BFT_Colors_Other = [
	"Jacco_BFT_Colors_Other", 
	"Other colors", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "plus"), 
	{true}, 
	{true}, // Condition
	FUNC(settings_insertColorsChildren)
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Colors"], _action_BFT_Colors_Other] call ace_interact_menu_fnc_addActionToObject;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Team name
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*_action_BFT_Name = [
	"Jacco_BFT_Name", "Name", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "pen"), 
	{true},
	{true}, 
	FUNC(settings_insertNameChildren)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT"], _action_BFT_Name] call ace_interact_menu_fnc_addActionToObject;*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Team icon 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_action_BFT_Icon = [
	"Jacco_BFT_Icons", "Icon", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "BFT"),
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	{},//FUNC(settings_insertIconsChildren), 
	[true] // Params to pass to insertChildren
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT"], _action_BFT_Icon] call ace_interact_menu_fnc_addActionToObject;

//Pathfinder

_action_BFT_Icons_Pathfinder = [
	"Jacco_BFT_Icons_Pathfinder", "205th RB", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Pathfinder"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Pathfinder)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons"], _action_BFT_Icons_Pathfinder] call ace_interact_menu_fnc_addActionToObject;

//Tamer

_action_BFT_Icons_AP = [
	"Jacco_BFT_Icons_AP", "1st AP", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "AP"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_AP)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons"], _action_BFT_Icons_AP] call ace_interact_menu_fnc_addActionToObject;

// Zillo

_action_BFT_Icons_Zillo = [
	"Jacco_BFT_Icons_Zillo", "1-1 Zillo", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Zillo"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Zillo)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons", "Jacco_BFT_Icons_AP"], _action_BFT_Icons_Zillo] call ace_interact_menu_fnc_addActionToObject;

// Chimaera

_action_BFT_Icons_Chimaera = [
	"Jacco_BFT_Icons_Chimaera", "1-2 Chimaera", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Chimaera"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Chimaera)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons", "Jacco_BFT_Icons_AP"], _action_BFT_Icons_Chimaera] call ace_interact_menu_fnc_addActionToObject;

// Rancor

_action_BFT_Icons_Rancor = [
	"Jacco_BFT_Icons_Rancor", "1-3 Rancor", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Rancor"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Rancor)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons", "Jacco_BFT_Icons_AP"], _action_BFT_Icons_Rancor] call ace_interact_menu_fnc_addActionToObject;

// Rancor

_action_BFT_Icons_Wampa = [
	"Jacco_BFT_Icons_Wampa", "1-4 Wampa", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Wampa"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Wampa)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons", "Jacco_BFT_Icons_AP"], _action_BFT_Icons_Wampa] call ace_interact_menu_fnc_addActionToObject;

// 70MRP

_action_BFT_Icons_MRP = [
	"Jacco_BFT_Icons_MRP", "70th MRP", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "MRP"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_MRP)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons"], _action_BFT_Icons_MRP] call ace_interact_menu_fnc_addActionToObject;

// Nexu

_action_BFT_Icons_Nexu = [
	"Jacco_BFT_Icons_Nexu", "2-1 Nexu", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Nexu"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Nexu)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons", "Jacco_BFT_Icons_MRP"], _action_BFT_Icons_Nexu] call ace_interact_menu_fnc_addActionToObject;

// 35HSP

_action_BFT_Icons_HSP = [
	"Jacco_BFT_Icons_HSP", "35th HSP", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "HSP"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_HSP)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons"], _action_BFT_Icons_HSP] call ace_interact_menu_fnc_addActionToObject;

// Raven

_action_BFT_Icons_Raven = [
	"Jacco_BFT_Icons_Raven", "3-1 Raven", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "Raven"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren_Raven)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons", "Jacco_BFT_Icons_HSP"], _action_BFT_Icons_Raven] call ace_interact_menu_fnc_addActionToObject;

_action_BFT_Icons_Other = [
	"Jacco_BFT_Icons_Other", "Other", 
	getText(configfile >> "TCA_BFT_Interact_Icons" >> "BFT"), 
	{true}, // Statement (breaks if not true for some reason)
	{true}, // Condition
	FUNC(settings_insertIconsChildren)
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT", "Jacco_BFT_Icons"], _action_BFT_Icons_Other] call ace_interact_menu_fnc_addActionToObject;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Enable/Disable team tracker
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_action_BFT_Enable = ["Jacco_BFT_Enable", "Enable tracker", getText(configfile >> "TCA_BFT_Interact_Icons" >> "on"), {(group player) setVariable ["BFT_groupMarker_visible", true, true]}, {!((group player) getVariable ["BFT_groupMarker_visible", false]);}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT"], _action_BFT_Enable] call ace_interact_menu_fnc_addActionToObject;

_action_BFT_Disable = ["Jacco_BFT_Disable", "Disable tracker", getText(configfile >> "TCA_BFT_Interact_Icons" >> "off"), {(group player) setVariable ["BFT_groupMarker_visible", false, true]}, {((group player) getVariable ["BFT_groupMarker_visible", false]);}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Jacco_BFT"], _action_BFT_Disable] call ace_interact_menu_fnc_addActionToObject;