params ["_vehicle", "_role", "_unit", "_turret"];

if !(local _vehicle) exitWith {};

_loadedMag = _vehicle getVariable ["TWC_2inch_LoadedMag", ""];

_magazines = magazines [_vehicle, false];
_vehicle removeMagazinesTurret ["twc_2inch_he_1rnd", [0]];
_vehicle removeMagazinesTurret ["twc_2inch_smoke_1rnd", [0]];
_vehicle removeMagazinesTurret ["twc_2inch_illum_1rnd", [0]];

_unit removeMagazines "twc_2inch_he_1rnd";
_unit removeMagazines "twc_2inch_smoke_1rnd";
_unit removeMagazines "twc_2inch_illum_1rnd";
{
	_unit addMagazine [_x, 1];
} forEach _magazines;

deleteVehicle _vehicle;

_unit addWeapon "twc_2inch_bag";
if (_loadedMag != "") then {
	_unit addMagazine [_loadedMag, 1];
};