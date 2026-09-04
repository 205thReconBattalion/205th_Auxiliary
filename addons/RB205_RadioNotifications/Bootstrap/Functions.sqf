if (!FODS_RadioNotifications_hasTFAR) exitWith {};

//puts the title layer back up and deletes old radio notifs
FODS_fnc_activateLayer = {
	if (!hasInterface) exitWith {};
	FODS_RadioMessages_Active = [];
	("FODS_RadioMessages" call BIS_fnc_rscLayer) cutRsc ["FODS_RadioMessages", "PLAIN", 0, true];
};


//draws one notification row on the title layer, safe to call unscheduled and safe to remoteExec
//params: unit object or a plain name string, extra text, radio type (0 SR, 1 LR, 2 DD, 3 intercom)
FODS_fnc_createRadioDialog = {
	params [["_unit", objNull], ["_text", ""], ["_radioType", -1]];

	if (!hasInterface) exitWith {};
	if (isDedicated) exitWith {};
	if !(isNull (findDisplay 49)) exitWith {}; // pause menu is open

	private _display = uiNamespace getVariable ["FODS_RadioMessages_Display", displayNull];
	if (isNull _display) exitWith {};

	// size needs of the invis part needs to big so it does not cut of icons
	private _iconHeight = FODS_RadioMessages_TextSize * 0.12;
	private _ctrlHeight = _iconHeight * 0.55;
	// prevent stacking
	private _pushAmount = FODS_RadioMessages_PD_Factor max (_iconHeight * 0.5);
	private _xPos = safezoneX + (safezoneW * FODS_RadioMessages_PosX);
	private _yPos = safezoneY + (safezoneH * FODS_RadioMessages_PosY);

	//over the cap = fade the oldest out fast! (timer handles deletion)
	// has to run before the layout below or the slot numbers do not match the list the new row joins
	private _rowCount = count FODS_RadioMessages_Active;
	if (_rowCount >= FODS_RadioMessages_MaxMessages) then {
		private _oldestId = FODS_RadioMessages_Active deleteAt 0;
		private _oldestCtrl = _display displayCtrl _oldestId;
		if (!isNull _oldestCtrl) then {
			_oldestCtrl ctrlSetFade 1;
			_oldestCtrl ctrlCommit 0.1;
		};
	};

	//shove down behaviour
	//NOTE TO SELF: never add the push onto ctrlPosition, that reads where a row is RIGHT NOW, can cause the 'stacking issue'
	private _slotCount = count FODS_RadioMessages_Active;
	{
		private _oldCtrl = _display displayCtrl _x;
		private _oldPos = ctrlPosition _oldCtrl;
		_oldPos set [1, _yPos + ((_slotCount - _forEachIndex) * _pushAmount)];
		_oldCtrl ctrlSetPosition _oldPos;
		_oldCtrl ctrlCommit 0.35;
	} forEach FODS_RadioMessages_Active;

	FODS_RadioMessages_control = FODS_RadioMessages_control + 1;
	private _ctrlId = FODS_RadioMessages_control;
	FODS_RadioMessages_Active pushBack _ctrlId;

	private _ctrl = _display ctrlCreate ["RscStructuredText", _ctrlId];
	_ctrl ctrlSetPosition [_xPos, _yPos, safezoneW * 0.4, _ctrlHeight];	

	private _icon = switch (_radioType) do {
		case 0: { FODS_RadioMessages_Texture_SR };
		case 1: { FODS_RadioMessages_Texture_LR };
		// 2 is a TFAR case, it has no icon of its own and drops through to the fallback
		default { FODS_RadioMessages_iconFallback };
	};

	private _font = FODS_RadioMessages_fonts param [FODS_RadioMessages_FONT, "PuristaMedium"];
	private _iconSize = FODS_RadioMessages_TextSize * 1.7;
	
	private _colorCode = FODS_RadioMessages_COLOR call BIS_fnc_colorRGBtoHTML;

	private _line = "";
	if (_unit isEqualType "") then {
		//scripted line pushed by a MM, string is the speaker
		_line = format ["%1: %2", _unit, _text];
	} else {
		private _isLeader = _unit isEqualTo (leader (group _unit));
		private _isSR = _radioType isEqualTo 0;
		private _isLR = _radioType isEqualTo 1;
		private _useLeaderTag = FODS_RadioMessages_UseCallsigns_adaptive;
		private _leaderTag = FODS_RadioMessages_CallsignLeaderText;
		private _callsign = groupId (group _unit);
		private _unitName = name _unit;

		if (FODS_RadioMessages_205NameConversion && _isLR) then {
			//apply 205th LR callsign and color conversion

			if (_callsign isEqualTo " ") then {
				_callsign = "[HQ] Pathfinder";
			};
			if (_callsign isEqualTo "1-0") then {
				_callsign = "[1-0] Tamer";
			};
			if (_callsign isEqualTo "1-1" || ["1-1-", _callsign] call BIS_fnc_inString) then {
				_callsign = "[1-1] Zillo";
				_colorCode = "#00CC00";
			};
			if (_callsign isEqualTo "1-2" || ["1-2-", _callsign] call BIS_fnc_inString) then {
				_callsign = "[1-2] Chimaera";
				_colorCode = "#FF0000";
			};
			if (_callsign isEqualTo "1-3" || ["1-3-", _callsign] call BIS_fnc_inString) then {
				_callsign = "[1-3] Rancor";
				_colorCode = "#0000FF";
			};
			if (_callsign isEqualTo "1-4" || ["1-4-", _callsign] call BIS_fnc_inString) then {
				_callsign = "[1-4] Wampa";
				_colorCode = "#D9D900";
			};
			private _isPilot = [_unit, "pilot"] call ls_common_fnc_checkSkill;
			if (["3-1", _callsign] call BIS_fnc_inString || _isPilot) then {
				_callsign = "[3-1] Banshee";
				_colorCode = "#808080";
			};
			private _isZeus = !isNull (getAssignedCuratorLogic _unit);
			if (_callsign isEqualTo (groupId (group _unit)) && _isZeus) then {
				_callsign = "NAVY";
			};
		};

		if (FODS_RadioMessages_UseTeamColors && _isSR) then {
			//apply SR color conversion
			private _team = _unit getVariable ["RB205_teamColor", "MAIN"];
			private _color = [1, 1, 1];
			switch (_team) do
			{
				case "MAIN":   { _color = [1, 1, 1] };
				case "RED":    { _color = [1, 0, 0] };
				case "GREEN":  { _color = [0, 1, 0] };
				case "BLUE":   { _color = [0, 0, 1] };
				case "YELLOW": { _color = [1, 1, 0] };
				case "CYAN":   { _color = [0, 1, 1] };
				case "PINK":   { _color = [1, 0, 1] };
				case "BLACK":  { _color = [0, 0, 0] };
				default {};
			};
			_colorCode = _color call BIS_fnc_colorRGBtoHTML;
		};

		private _name = switch (true) do {
			case (_useLeaderTag && {_isLeader} && {_isSR}): { format ["%1 %2", _unitName, _leaderTag] };
			case (_isSR): { _unitName };
			case (_useLeaderTag && {_isLeader} && {_isLR}): { format ["%1 %2", _callsign, _leaderTag] };
			case (FODS_RadioMessages_UseCallsigns_LR && {_isLR}): { _callsign };
			default { _unitName };
		};

		_line = format ["%1 %2", _name, _text];
	};

	_ctrl ctrlSetStructuredText parseText format [
		"<img color='%1' size='%3' shadow='1' image=%2 /> <t color='%1' font='%5' align='left' size='%4' shadow='1'>%6</t>",
		_colorCode,
		str _icon,
		_iconSize,
		FODS_RadioMessages_TextSize,
		_font,
		_line
	];

	_ctrl ctrlCommit 0;
	_ctrl ctrlSetFade 1;
	_ctrl ctrlCommit FODS_RadioMessages_Lifetime;

	//row is fully faded at lifetime
	[{
		params ["_ctrlId"];

		private _index = FODS_RadioMessages_Active find _ctrlId;
		if (_index > -1) then {
			FODS_RadioMessages_Active deleteAt _index;
		};

		private _display = uiNamespace getVariable ["FODS_RadioMessages_Display", displayNull];
		if (isNull _display) exitWith {};

		private _ctrl = _display displayCtrl _ctrlId;
		if (!isNull _ctrl) then {
			ctrlDelete _ctrl;
		};
	}, [_ctrlId], FODS_RadioMessages_Lifetime + 1] call CBA_fnc_waitAndExecute;
};

//works out IF the handlers of one backend should run, 1 is TFAR
FODS_fnc_backendActive = {
	params [["_backend", 0]];

	private _isLoaded = switch (_backend) do {
		case 1: { FODS_RadioNotifications_hasTFAR };
		default { false };
	};

	_isLoaded
};

//keeps one unit from drawing more than one row per cooldown, both backends run this before they draw
//RETURN: bool, true means the unit is still on cooldown and the caller should exit
FODS_fnc_onCooldown = {
	params [["_unit", objNull]];

	if (isNull _unit) exitWith {false};

	private _used = _unit getVariable ["FODS_RadioMessages_Used", false];
	if (_used) exitWith {true};

	_unit setVariable ["FODS_RadioMessages_Used", true];
	[{
		params ["_unit"];
		_unit setVariable ["FODS_RadioMessages_Used", false];
	}, [_unit], FODS_RadioMessages_tangentCooldown] call CBA_fnc_waitAndExecute;

	false
};

// pushes the unit on the talker list or takes it off again, both backends call this same one
FODS_fnc_trackTalker = {
	params ["_unit", ["_started", false]];

	if (_started) exitWith {
		FODS_RadioMessages_currentTransmitting pushBackUnique _unit;
	};

	private _index = FODS_RadioMessages_currentTransmitting find _unit;
	if (_index > -1) then {
		FODS_RadioMessages_currentTransmitting deleteAt _index;
	};
};
