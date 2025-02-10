/* ----------------------------------------------------------------------------
Function: RB205_MW_fnc_getModsInfo

Description:
    compiles all relevant information into one array for easier usage

Parameters:
    _allowedMods - all allowed (clientside) mods <ARRAY>

Example:
	[["AllowedMod1","AllowedMod2"]] call RB205_MW_fnc_getModsInfo

Author:
    Spark2000
---------------------------------------------------------------------------- */

params ["_allowedMods"];

_modsInfo = [];

_modsInfo pushBack "FORBIDDEN MODS LOADED BY PLAYER";
_modsInfo pushBack (_allowedMods call RB205_MW_fnc_getForbiddenModsByPlayer);
_modsInfo pushBack "MISSING MODS NOT LOADED BY PLAYER";
_modsInfo pushBack (call RB205_MW_fnc_getMissingModsByPlayer);

_modsInfo;