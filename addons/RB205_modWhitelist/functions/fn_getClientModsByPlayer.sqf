/* ----------------------------------------------------------------------------
Function: RB205_MW_fnc_getClientModsByPlayer

Description:
    evaluated if the player has mods loaded that are not loaded on the server
	(clientside mods) and if so lists them for each player

Parameters:
    none

Returns:
    all clientside mods loaded by players <ARRAY>
	Each entry consists of: [TIMESTAMP, PLAYERNAME, [MOD-ARRAY]]

Author:
    Spark2000
---------------------------------------------------------------------------- */

_allClientModsByPlayer = [];
_allServerMods = ((RB205_allPlayerLoadedMods select 0) select 2);

{
	if (_allServerMods isEqualTo (_x select 2)) then { continue; };
	_curPlayerAllMods = (_x select 2);
	_curPlayerClientMods = [];
	{
		_modIndex = _allServerMods find _x;
		if (_modIndex == -1) then {
			_curPlayerClientMods pushBack _x;
		};
	} forEach _curPlayerAllMods;
	if ((count _curPlayerClientMods) > 0) then {
		_entryC = [(_x select 0),(_x select 1)];
		_entryC pushBack _curPlayerClientMods;
		_allClientModsByPlayer pushBack _entryC
	};
} forEach (call RB205_MW_fnc_getAllModsByPlayer);

_allClientModsByPlayer;