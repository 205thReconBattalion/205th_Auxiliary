if hasInterface then {
    ["ace_unconscious", {
        params ["_unit", "_state"];
        if _state then {
            _unit disableCollisionWith ace_player;
        } else {
            _unit enableCollisionWith ace_player;
        }
    }] call CBA_fnc_addEventHandler;
};