/*
Dispatch via Script:

[1] call TFD_Melder_fnc_getUnits;
//["Title", "Lennard", "Spot", 0, "1"] call TFD_Melder_fnc_dispatch;
["Title", "Spot", 0, "1"] call TFD_Melder_fnc_dispatch;

name (TFD_Melder_ownerPager1 select 0)
*/

_dispatchTitle = _this select 0;
//_dispatchUnit = _this select 1;
_dispatchSpot = _this select 1;
_dispatchIndex = _this select 2;
_dispatchFrequency =  _this select 3;

//hint format ["Freq: %1", _dispatchFrequency];


_dispatchUnit2 = "";
_dispatchUnit = "";


if(_dispatchFrequency == "1") then
{
	_dispatchUnit2 = TFD_Melder_ownerPager1 select _dispatchIndex;
	_dispatchUnit = name (TFD_Melder_ownerPager1 select _dispatchIndex);
};
if(_dispatchFrequency == "2") then
{
	_dispatchUnit2 = TFD_Melder_ownerPager2 select _dispatchIndex;
	_dispatchUnit = name (TFD_Melder_ownerPager2 select _dispatchIndex);
};
if(_dispatchFrequency == "3") then
{
	_dispatchUnit2 = TFD_Melder_ownerPager3 select _dispatchIndex;
	_dispatchUnit = name (TFD_Melder_ownerPager3 select _dispatchIndex);
};


_date = systemTime;//date;
_hour = str (_date select 3);
_minute = str (_date select 4);

if((parseNumber _minute) < 10) then
{
	_minute = "0" + _minute;
};

_time = _hour + ":" + _minute;

_dispatch = parseText format [_dispatchTitle + "\n\n" + _dispatchSpot + "\n" + "> " + _time];

missionNamespace setVariable [(_dispatchUnit) + '_einsatz', _dispatch, true];
publicVariable (_dispatchUnit) + '_einsatz';

[_dispatchUnit2, "TFD_Melder_alarm"] remoteExec ["say3D",0,false];

cutRsc ['melder_display', 'PLAIN'];

_dispatch_hint = format ["<t color='#ff0000'>NEUER DISPATCH</t>\n\n<t align='left'>%1</t>", _dispatch]; 
(parseText (_dispatch_hint regexReplace ["\\n", "<br />"])) remoteExec ['hint', _dispatchUnit2];

/*[] spawn {
	cutRsc ['melder_display', 'PLAIN'];
	sleep 20;
	cutText ['', 'PLAIN'];
}*/