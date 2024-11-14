_meldungen = missionNamespace getVariable [(name player) + '_einsatz', localize "STR_TFD_Melder_noDispatch"];

ctrlSetText [1502, format ["%1", _meldungen]];
ctrlSetText [1902, format ["%1", _meldungen]];

((uiNamespace getVariable "melder_display") displayCtrl 1902) ctrlSetText format ["%1", _meldungen];