["vehicle", twc_2inch_fnc_ui, true] call CBA_fnc_addPlayerEventHandler;

["DF-90C Mortar", "twc_2inch_deploykey", ["Deploy DF-90C Mortar", "This deploys the static with you on it."], {
	[player] call twc_2inch_fnc_deploy
}, {}, [0x04, [false, false, false]]] call CBA_fnc_addKeybind;