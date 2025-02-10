if (isServer) then {
	RB205_allPlayerLoadedMods = [];
	publicVariable "RB205_allPlayerLoadedMods";
};

// LIST ALL LOADED MODS BY LOCAL PLAYER

_mods = [];
{
	_currentMod = _x select 0;
	if(_x select 2) then {continue;}; //filter official Arma 3 stuff eg. DLCs
	_mods pushBack (_currentMod trim ["@",1]); //remove @ in the beginning for easier comparison later
} forEach getLoadedModsInfo;

// FORMAT SYSTEM TIME

_year = systemTime select 0;
_month = systemTime select 1;
_day = systemTime select 2;

if (_month < 10) then { _month = format["0%1", _month] };
if (_day < 10) then { _day = format["0%1", _day] };

_hour = systemTime select 3;
_min = systemTime select 4;
_sec = systemTime select 5;

if (_hour < 10) then { _hour = format["0%1", _hour] };
if (_min < 10) then { _min = format["0%1", _min] };
if (_sec < 10) then { _sec = format["0%1", _sec] };

_systemTimeFormatted = format["%1-%2-%3 %4:%5:%6",_year,_month,_day,_hour,_min,_sec];

// SET PLAYER INFO

_entry = [_systemTimeFormatted, name player];
_entry pushBack _mods;

// ADD PLAYER ENTRY

RB205_allPlayerLoadedMods pushBack _entry;
publicVariable "RB205_allPlayerLoadedMods";