watershadow_Init = 
{
	_veh = vehicle (_this select 0);
	//diag_log text format["INIT :: %1", _veh];
	if (isNull (driver _veh)) then
	{
		_veh lockCargo true;
	};

	_veh spawn 
	{
		_veh = _this;
		while {(getdammage _veh < 1)} do 
		{
			if ((count (crew _veh) > 0) && (isNull (driver _veh))) then 
			{
				{_x action ["eject", vehicle _x];} foreach (crew _veh);
			};
			sleep(1);
		};
	};	

};
 
watershadow_GetIn =
{
	//diag_log text format["GetIn :: %1", _this];
	_veh = (_this select 0);
	_pos = (_this select 1);
	_unit = (_this select 2);
	
	if (_pos == "driver") then
	{
		_veh lockCargo false;
		_unit assignAsDriver _veh;
	}else{
		_unit assignAsCargo _veh;
	}
};
 
watershadow_GetOut =
{
	//diag_log text format["GetOut :: %1", _this];
	_veh = (_this select 0);
	_pos = (_this select 1);
	_unit = (_this select 2);
	unassignVehicle _uni ;
	if (_pos == "driver") then
	{
		{_x action ["eject", vehicle _x];} foreach (crew _veh);
		_veh lockCargo true;
	}else{
		
		if (isNull (driver _veh)) then 
		{
			_veh lockCargo true;	
		};
	};
};