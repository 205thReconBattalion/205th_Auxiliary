#include "script_component.hpp"

/*
	_params is an array with a boolean saying whether this is the preferred icons or the rest
*/

params ["_target", "_player", "_params"];

_params params [["_showPreferred", false, [true]]];

// copy available markers into _actions 
_actions = [];

_vehicleNames = ["Allgemein","LAAT/I","LAAT/C","LAAT/LE","Nu-Class Shuttle","Purrgil Transport Shuttle","ARC-170","Z-95 Headhunter","V-Wing Fighter","V-19","BTL-B Y-Wing Bomber"];
_i = 0;

{
	_isBlacklisted = _x in (GVAR(groupMarkers_iconsBlacklist) call EFUNC(main,stringToTrimmedArray));
	_isPreferred = _x in (GVAR(groupMarkers_preferredIcons) call EFUNC(main,stringToTrimmedArray));

	if (_isBlacklisted) then {continue;};

	// Exit if we dont want to show current marker
	// _isPreferred XOR !_showPreferred (A3 doesn't have XOR)
	// https://community.bistudio.com/wiki/Operators#Logical_Operators 
	_xor = (_isPreferred||_showPreferred)&&!(_isPreferred&&_showPreferred);
	if (_xor) then {continue;};

	_markerSide = [group player] call FUNC(getGroupMarkerShape);

	_icon = _x; 
	//_name = getText (configfile >> "CfgMarkers" >> _markerSide + "_" + _icon >> "Name");
	_name = (_vehicleNames select _i);
	_i = _i + 1;

	_interactIcon = getText (configfile >> "CfgMarkers" >> _markerSide + "_" + _icon >> "icon"); 

	_statement = {
		params ["_target", "_player", "_params"];
		(group player) setVariable ["BFT_groupMarker_type", _params, true]; 
	};

    // Get icon colour in CfgMarkerColors, convert to RGB array, then convert to HTML string
	_iconColour = group player getVariable ["BFT_groupMarker_color", [playerSide, true] call BIS_fnc_sideColor];
    _iconColour = (getArray (configfile >> "CfgMarkerColors" >> _iconColour >> "color")) call BIS_fnc_colorConfigToRGBA;
    _iconColour = _iconColour call BIS_fnc_colorRGBtoHTML;

	_actions pushBack [
		[
			("Jacco_BFT_Icons_"+_icon),
			_name, 
			[_interactIcon, _iconColour],
			_statement,
			{true},
			{},
			_icon
		] call ace_interact_menu_fnc_createAction, 
		[], 
		_target
	];
} forEach ["RB205_BFT_31_unknown","RB205_BFT_31_laat","RB205_BFT_31_laatc","RB205_BFT_31_laatle","RB205_BFT_31_nu","RB205_BFT_31_purrgil","RB205_BFT_31_arc170","RB205_BFT_31_z95","RB205_BFT_31_vwing","RB205_BFT_31_v19","RB205_BFT_31_ywing"];

_actions