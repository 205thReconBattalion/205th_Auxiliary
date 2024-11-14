_currentUnit = name _this;
		
_unit_fms = missionNamespace getVariable [(name _this) + '_fms', "notready"];

missionNamespace setVariable [_currentUnit, _this, true];
publicVariable _currentUnit;

lbAdd [2103, _currentUnit];
lbSetValue [2103, i, i];

_color = lbSetColor [2103, i, [0.99,0.14,0.1,1]]; //Default

if(_unit_fms == "ready") then
{
	_color = lbSetColor [2103, i, [0,0.95,0.07,1]]; //Green
}
else 
{
	if (_unit_fms == "confirmed") then
	{
		_color = lbSetColor [2103, i, [0.99,0.92,0.09,1]]; //Gelb
	}
	else
	{
		_color = lbSetColor [2103, i, [0.99,0.14,0.1,1]]; //red
	};
};

i = i + 1;