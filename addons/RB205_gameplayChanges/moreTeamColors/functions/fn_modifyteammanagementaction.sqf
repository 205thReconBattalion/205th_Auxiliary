params ["_teamColor", "_icon", "_actionData"];

private _color = switch (toUpper _teamColor) do {
    case "RED": {missionNamespace getVariable ["ace_nametags_nametagColorRed", [221, 0, 0]]};
    case "GREEN": {missionNamespace getVariable ["ace_nametags_nametagColorGreen", [0, 221, 0]]};
    case "BLUE": {missionNamespace getVariable ["ace_nametags_nametagColorBlue", [0, 0, 221]]};
    case "YELLOW": {missionNamespace getVariable ["ace_nametags_nametagColorYellow", [221, 221, 0]]};
    case "CYAN": {missionNamespace getVariable ["ace_nametags_nametagColorCyan", [0, 221, 221]]};
    case "PINK": {missionNamespace getVariable ["ace_nametags_nametagColorPink", [221, 0, 221]]};
    case "BLACK": {missionNamespace getVariable ["ace_nametags_nametagColorBlack", [0, 0, 0]]};
    default {missionNamespace getVariable ["ace_nametags_nametagColorMain", [255, 255, 255]]};
};

_actionData set [2, [_icon, _color call BIS_fnc_colorRGBtoHTML]];
