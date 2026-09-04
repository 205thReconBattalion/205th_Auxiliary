if (!FODS_RadioNotifications_hasTFAR) exitWith {};

// freq of one radio on either its active channel or its additional channel, no radio return ""
// TFAR returns SR radios over as a classname string and LR radios as [object, id] array sowe gotta CHECK BOTH diff'ly
// params: radio, radio type (0 SR, 1 LR), additional channel flag
FODS_fnc_getRadioFrequency = {
	params [["_radio", ""], ["_radioType", -1], ["_isAdditional", false]];

	private _isSR = (_radioType isEqualTo 0) && {_radio isEqualType ""} && {_radio isNotEqualTo ""};
	private _isLR = (_radioType isEqualTo 1) && {_radio isEqualType []} && {(count _radio) > 0};
	if (!_isSR && {!_isLR}) exitWith {""};

	private _frequency = "";

	if (_isSR) then {
		if (_isAdditional) then {
			private _channel = _radio call TFAR_fnc_getAdditionalSwChannel;
			private _hasChannel = !isNil "_channel" && {_channel isEqualType 0} && {_channel >= 0};
			if (_hasChannel) then {
				//TFAR stores the additional channel zero based, getChannelFrequency wants it one based
				_frequency = [_radio, _channel + 1] call TFAR_fnc_getChannelFrequency;
			};
		} else {
			_frequency = _radio call TFAR_fnc_getSwFrequency;
		};
	};

	if (_isLR) then {
		if (_isAdditional) then {
			private _channel = _radio call TFAR_fnc_getAdditionalLrChannel;
			private _hasChannel = !isNil "_channel" && {_channel isEqualType 0} && {_channel >= 0};
			if (_hasChannel) then {
				_frequency = [_radio, _channel + 1] call TFAR_fnc_getChannelFrequency;
			};
		} else {
			_frequency = _radio call TFAR_fnc_getLrFrequency;
		};
	};

	if (isNil "_frequency") exitWith {""};
	if !(_frequency isEqualType "") exitWith {str _frequency};

	//return
	_frequency
};

// frequencies the local player is listening on for one radio type; primary channel PLUS the additional channel
// params: radio type (0 SR, 1 LR)
FODS_fnc_getMonitoredFrequencies = {
	params ["_radioType"];

	//both TFAR getters return nil when the unit carries no radio of that type, "" stands in for that
	private _radio = "";

	if (_radioType isEqualTo 0) then {
		private _active = call TFAR_fnc_activeSwRadio;
		if (!isNil "_active") then { _radio = _active; };
	};

	if (_radioType isEqualTo 1) then {
		private _active = call TFAR_fnc_activeLrRadio;
		if (!isNil "_active") then { _radio = _active; };
	};

	private _primary = [_radio, _radioType, false] call FODS_fnc_getRadioFrequency;
	private _additional = [_radio, _radioType, true] call FODS_fnc_getRadioFrequency;

	[_primary, _additional] select {_x isNotEqualTo ""}
};

// runs where the tangent was pressed, TFAR triggers this LOCAL
// params: unit, radio, radio type (0 SR, 1 LR, 2 DD), additional channel flag, pressed
FODS_fnc_TFAR_onTangent = {
	params ["_unit", "_radio", "_radioType", "_isAdditional", "_start"];

	private _backendActive = [1] call FODS_fnc_backendActive;
	if (!_backendActive) exitWith {};

	private _lifeState = lifeState _unit;
	if (_lifeState in ["INCAPACITATED", "UNCONSCIOUS", "ASLEEP"]) exitWith {};

	// one notification per unit per cooldown
	private _blocked = false;
	if (_start) then {
		_blocked = [_unit] call FODS_fnc_onCooldown;
	};
	if (_blocked) exitWith {};

	// read the radio the event gave us, not the 'active' one, bc _unit can have multiple
	private _frequency = [_radio, _radioType, _isAdditional] call FODS_fnc_getRadioFrequency;

	[FODS_RadioMessages_eventName, [_unit, _frequency, _radioType, _start]] call CBA_fnc_globalEvent;
};

// runs on every machine when the unit uses radio, each client works out for itself whether it can hear them
// params: unit, `freq the sender is transmitting on`, `radio type`, `pressed : bool`
FODS_fnc_TFAR_onReceived = {
	params ["_unit", "_frequency", "_radioType", "_start"];

	private _backendActive = [1] call FODS_fnc_backendActive;
	if (!_backendActive) exitWith {};

	//talker list stays current everywhere, this runs before any of the display filters
	[_unit, _start] call FODS_fnc_trackTalker;

	if (!_start) exitWith {};
	if (!hasInterface) exitWith {};
	if (isNull _unit) exitWith {};
	if (_frequency isEqualTo "") exitWith {};
	if !(FODS_RadioMessages_Enabled) exitWith {};
	if !(isNull (findDisplay 49)) exitWith {}; //pause menu is open

	private _isZeus = !isNull (findDisplay 312);
	if (_isZeus && {!FODS_RadioMessages_ShowZeus}) exitWith {};

	if (FODS_RadioMessages_ExcludeSelf && {_unit isEqualTo player}) exitWith {};

	if (!FODS_RadioMessages_ShowSR && {_radioType isEqualTo 0}) exitWith {};

	private _isEnemy = [side _unit, side player] call BIS_fnc_sideIsEnemy;
	if (_isEnemy) exitWith {};

	private _monitored = [_radioType] call FODS_fnc_getMonitoredFrequencies;
	if !(_frequency in _monitored) exitWith {};

	[_unit, "", _radioType] call FODS_fnc_createRadioDialog;
};
