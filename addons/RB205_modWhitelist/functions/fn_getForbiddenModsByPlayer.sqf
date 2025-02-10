/* ----------------------------------------------------------------------------
Function: RB205_MW_fnc_getForbiddenModsByPlayer

Description:
    evaluated if the player has clientside mods loaded that are not part of
	the array with allowed mods and is therefor forbidden

Parameters:
    _allowedMods - all allowed (clientside) mods <ARRAY>

Returns:
    all not whitelisted mods loaded by players <ARRAY>
	Each entry consists of: [TIMESTAMP, PLAYERNAME, [MOD-ARRAY]]

Example:
	[["AllowedMod1","AllowedMod2"]] call RB205_MW_fnc_getForbiddenModsByPlayer

Author:
    Spark2000
---------------------------------------------------------------------------- */

params ["_allowedMods"];

_allowedModsTrimmed = [];
{
	_allowedModsTrimmed pushBack (_x trim ["@",1]);
}
forEach _allowedMods;

_allForbiddenModsByPlayer = [];

{
	_curPlayerClientMods = (_x select 2);
	_curPlayerForbiddenMods = [];
	{
		_modIndex = _allowedModsTrimmed find _x;
		if (_modIndex == -1) then {
			_curPlayerForbiddenMods pushBack _x;
		};
	} forEach _curPlayerClientMods;
	if ((count _curPlayerForbiddenMods) > 0) then {
		_entryF = [(_x select 0),(_x select 1)];
		_entryF pushBack _curPlayerForbiddenMods;
		_allForbiddenModsByPlayer pushBack _entryF
	};
} forEach (call RB205_MW_fnc_getClientModsByPlayer);

_allForbiddenModsByPlayer;