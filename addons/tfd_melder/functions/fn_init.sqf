diag_log format ['Melder Script von Lennard[TFD] initalisiert'];
fnc_setFMS = 
{
	_unit = _this select 0;
	_fms = _this select 1;
	
	if(_fms == "ready") then
	{
		missionNamespace setVariable [(_unit) + '_einsatz', localize "STR_TFD_Melder_noDispatch", true];
	};
	missionNamespace setVariable [(_unit) + '_fms', _fms, true];
	publicVariable (_unit) + '_fms';
	
};

