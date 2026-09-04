if (!FODS_RadioNotifications_hasTFAR) exitWith {};

//receiver side, the server and headless clients register too so that the the 'talker list' stays in sync globally
[FODS_RadioMessages_eventName, FODS_fnc_TFAR_onReceived] call CBA_fnc_addEventHandler;

//sender side, TFAR only raises this on the machine that pressed the tangent
if (hasInterface) then {
	["TFAR_event_OnTangent", FODS_fnc_TFAR_onTangent] call CBA_fnc_addEventHandler;
};

if (!hasInterface) exitWith {};

//add layer first time
//waits for game display as loadingscreen yeets out one made before that
[{
	!isNull (findDisplay 46)
}, {
	call FODS_fnc_activateLayer;
}] call CBA_fnc_waitUntilAndExecute;

//weird respawn bug can sometimes wipe the layer for some reason so in the fnc it checks if its already added, if not then we just chill aka exitwith {};
// the TFAR handler lives on the CBA 'eventbus' so it survives respawn on its own, no need to re-add
["unit", {
	[{
		call FODS_fnc_activateLayer;
	}, [], 1] call CBA_fnc_waitAndExecute;
}, false] call CBA_fnc_addPlayerEventHandler;
