if(!isServer) exitWith {};

[] spawn {

_squadMarkerInfo = [
	["RB205_squadInfo_marker_00", "(0-0) Pathfinder", "ColorBlack"],
	["RB205_squadInfo_marker_10", "(1-0) Tamer", "ColorBlack"],
	["RB205_squadInfo_marker_11", "(1-1) Zillo", "ColorGreen"],
	["RB205_squadInfo_marker_12", "(1-2) Chimaera", "ColorRed"],
	["RB205_squadInfo_marker_13", "(1-3) Rancor", "ColorBlue"],
	["RB205_squadInfo_marker_14", "(1-4) Wampa", "ColorYellow"],
	["RB205_squadInfo_marker_31", "(3-1) Banhsee", "ColorBlack"]
];
_space = 300;
_n = (count _squadMarkerInfo)-1;

// Marker erstellen
_allSquadMarkers = [];
for "_i" from 0 to _n do
{
	_allSquadMarkers pushBack createMarkerLocal [(_squadMarkerInfo select _i) select 0, [worldSize+_space,worldSize-(_space*(_i+1))]];
};

// Icon
{
	_x setMarkerTypeLocal "RB205_M_dot";
} forEach _allSquadMarkers;

// Farbe
for "_i" from 0 to _n do
{
	(_allSquadMarkers select _i) setMarkerColorLocal ((_squadMarkerInfo select _i) select 2)
};

/* * * * * * * * * *
	UPDATE LOOP
* * * * * * * * * */

//while { true } do {
while { RB205_GC_SSI_Active } do {
	_allPlayerGroups = [];
	{_allPlayerGroups pushBack (groupID group _x)} forEach (allPlayers - entities "HeadlessClient_F");
	
	for "_i" from 0 to _n do
	{
		_squadName = ((_squadMarkerInfo select _i) select 1);
		_squadCount = 0;
		if(_i != 0) then {
			_squadCount = {[_squadName select [1, 3], _x select [0, 3]] call BIS_fnc_inString} count _allPlayerGroups;
		} else {
			_squadCount = {" " == _x} count _allPlayerGroups;
		};

		// Hide empty groups (not completely)
		if(_squadCount == 0) then {
			(_allSquadMarkers select _i) setMarkerAlphaLocal 0;
		} else {
			(_allSquadMarkers select _i) setMarkerAlphaLocal 1;
		};

		// Text
		(_allSquadMarkers select _i) setMarkerText format["%2 | %1", _squadName, _squadCount]
	};
	waitUntil { sleep 30; true; };
};

{
	_x setMarkerAlphaLocal 0;
} forEach _allSquadMarkers;

};