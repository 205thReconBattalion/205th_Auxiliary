if (isServer) then {
	RB205_allPlayerLoadedMods = [];
	publicVariable "RB205_allPlayerLoadedMods";
};

_mods = [];
{
	_currentMod = _x select 0;
	if(_x select 2) then {continue;}; //filter official Arma 3 stuff eg. DLCs
	_mods pushBack _currentMod;
} forEach getLoadedModsInfo;

_entry = [name player];
_entry pushBack _mods;

RB205_allPlayerLoadedMods pushBack _entry;
publicVariable "RB205_allPlayerLoadedMods";