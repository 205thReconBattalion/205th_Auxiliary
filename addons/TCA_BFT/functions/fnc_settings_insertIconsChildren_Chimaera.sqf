#include "script_component.hpp"

/*
	_params is an array with a boolean saying whether this is the preferred icons or the rest
*/

params ["_target", "_player", "_params"];

_params params [["_showPreferred", false, [true]]];

// copy available markers into _actions 
_actions = [];

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
	_name = ((GVAR(bft_fireteamInteractions) select _i) select 0);
	//_interactIcon = getText (configfile >> "CfgMarkers" >> _markerSide + "_" + _icon >> "icon");
	_interactIcon = ((GVAR(bft_fireteamInteractions) select _i) select 1);
	_i = _i + 1;

	_statement = {
		params ["_target", "_player", "_params"];
		// set icon:
		(group player) setVariable ["BFT_groupMarker_type", _params, true];

		// set name:
		_squad = _params select [(count _params) - 4,2];
		_squad = format ["%1-%2", (_squad select [0,1]), (_squad select [1])];
		_fireteam = toUpper (_params select [(count _params) - 1]);
		_tempName = " ";
		if (_fireteam == "A") then
		{	
			_tempName = _squad;
		}
		else
		{
			_tempName = format ["%1-%2", _squad, _fireteam];
		};
		(group player) setGroupIdGlobal [_tempName];
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
} forEach ["RB205_BFT_12_a","RB205_BFT_12_b","RB205_BFT_12_c","RB205_BFT_12_d"];

_actions