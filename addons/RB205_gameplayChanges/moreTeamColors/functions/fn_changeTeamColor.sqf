params ["_unit"];

private _team = _unit getVariable ["RB205_teamColor", "MAIN"];
private _color = [1, 1, 1];
switch (_team) do
{
    case "MAIN":   { _color = [1, 1, 1] };
    case "RED":    { _color = [1, 0, 0] };
    case "GREEN":  { _color = [0, 1, 0] };
    case "BLUE":   { _color = [0, 0, 1] };
    case "YELLOW": { _color = [1, 1, 0] };
    case "CYAN":   { _color = [0, 1, 1] };
    case "PINK":   { _color = [1, 0, 1] };
    case "BLACK":  { _color = [0, 0, 0] };
    default {};
};

_unit setVariable ["dui_customRGBColor", _color, true];
_unit setVariable ["dui_customHexColor", _color call BIS_fnc_colorRGBtoHTML, true];
_unit setVariable ["dui_customInfoHexColor", _color call BIS_fnc_colorRGBtoHTML, true];