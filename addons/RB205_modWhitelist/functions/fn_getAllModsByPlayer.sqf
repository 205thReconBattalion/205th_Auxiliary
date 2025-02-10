/* ----------------------------------------------------------------------------
Function: RB205_MW_fnc_getAllModsByPlayer

Description:
    sorts and returns all mods loaded by the server and each player

Parameters:
    none

Returns:
    all mods loaded by players, sorted in alphabetical order <ARRAY>
	Each entry consists of: [TIMESTAMP, PLAYERNAME, [MOD-ARRAY]]

Author:
    Spark2000
---------------------------------------------------------------------------- */

_allModsByPlayer = RB205_allPlayerLoadedMods;

{
	(_x select 2) sort true;
} forEach _allModsByPlayer;

_allModsByPlayer;