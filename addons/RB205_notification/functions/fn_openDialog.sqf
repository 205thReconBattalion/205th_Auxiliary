params [
    "_text",
    ["_placeholders", [], [[]]]
];

cutRsc ["RB205_notification", "PLAIN"];

private _display = uiNamespace getVariable ["RB205_notification", displayNull];
if (isNull _display) exitWith {};

private _ctrlText = _display displayCtrl 205101;

private _textFormatArray = [_text] + _placeholders;

_ctrlText ctrlSetStructuredText parseText (format _textFormatArray);