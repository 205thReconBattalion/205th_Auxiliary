/* ----------------------------------------------------------------------------
Function: RB205_MW_fnc_getMissingModsByPlayer

Description:
    evaluated if the player has mods not loaded that are loaded on the server and if so lists them for each player

Parameters:
    none

Returns:
    all missing mods loaded by players <ARRAY>
	Each entry consists of: [TIMESTAMP, PLAYERNAME, [MOD-ARRAY]]

Author:
    Spark2000
---------------------------------------------------------------------------- */

_allMissingModsByPlayer = [];
_allServerMods = ((RB205_allPlayerLoadedMods select 0) select 2);

{
	if (_allServerMods isEqualTo (_x select 2)) then { continue; };
	_curPlayerAllMods = (_x select 2);
	_curPlayerMissingMods = [];
	{
		_modIndex = _curPlayerAllMods find _x;
		if (_modIndex == -1) then {
			_curPlayerMissingMods pushBack _x;
		};
	} forEach _allServerMods;
	if ((count _curPlayerMissingMods) > 0) then {
		_entryM = [(_x select 0),(_x select 1)];
		_entryM pushBack _curPlayerMissingMods;
		_allMissingModsByPlayer pushBack _entryM
	};
} forEach (call RB205_MW_fnc_getAllModsByPlayer);

_allMissingModsByPlayer;