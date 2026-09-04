if (!hasInterface) exitWith {};

missionNamespace setVariable ["RB205_roleplay_heightAdjustment_LastMode", -1];
missionNamespace setVariable ["RB205_roleplay_heightAdjustment_LastControlledUnit", objNull];

addMissionEventHandler ["EachFrame", {
    if (isNull player) exitWith {};

    private _hasZeusAccess = !isNull (getAssignedCuratorLogic player);
    private _configuredMode = missionNamespace getVariable ["RB205_roleplay_heightAdjustment_Mode", 0];
    if !(_configuredMode in [0, 1, 2]) then {
        _configuredMode = 0;
    };
    private _effectiveMode = if (_hasZeusAccess) then {_configuredMode} else {0};

    private _height = missionNamespace getVariable ["RB205_roleplay_heightAdjustment_Height", 1];
    _height = (_height max 0.6) min 1.2; // Validate the height value to be within the range of 0.6 to 1.2.

    private _controlledUnit = objNull;
    if (_hasZeusAccess && {_effectiveMode isEqualTo 1}) then {
        _controlledUnit = missionNamespace getVariable [
            "bis_fnc_moduleRemoteControl_unit",
            objNull
        ];
    };

    /* RESET LOGIC START */

    private _lastMode = missionNamespace getVariable [
        "RB205_roleplay_heightAdjustment_LastMode",
        -1
    ];
    private _lastControlledUnit = missionNamespace getVariable [
        "RB205_roleplay_heightAdjustment_LastControlledUnit",
        objNull
    ];

    // Reset a unit after Zeus stops controlling it or changes to another unit.
    if (
        !isNull _lastControlledUnit
        && {_lastControlledUnit isNotEqualTo _controlledUnit}
        && {local _lastControlledUnit}
    ) then {
        _lastControlledUnit setObjectScale 1;
    };

    // Reset the player once after leaving the player-only mode.
    if (_effectiveMode isNotEqualTo _lastMode) then {
        if (_effectiveMode isNotEqualTo 2 && {local player}) then {
            player setObjectScale 1;
        };
    };

    missionNamespace setVariable [
        "RB205_roleplay_heightAdjustment_LastMode",
        _effectiveMode
    ];
    missionNamespace setVariable [
        "RB205_roleplay_heightAdjustment_LastControlledUnit",
        _controlledUnit
    ];

    /* RESET LOGIC END */

    if (_effectiveMode isEqualTo 0) exitWith {};

    // Mode 1: adjust only the unit currently controlled by Zeus.
    if (
        _effectiveMode isEqualTo 1
        && {!isNull _controlledUnit}
        && {local _controlledUnit}
    ) then {
        _controlledUnit setObjectScale _height;
    };

    // Mode 2: adjust only the Zeus player.
    if (
        _effectiveMode isEqualTo 2
        && {local player}
    ) then {
        player setObjectScale _height;
    };
}];
