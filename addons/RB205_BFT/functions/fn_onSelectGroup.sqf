params ["_control", "_lbCurSel", "_lbSelection"];
private _ctrlDisplay = findDisplay 205550;
private _ctrlText = displayCtrl 205552;
private _ctrlJointButton = displayCtrl 205553;


private _groups = _control getVariable "groups";
private _selectedGroup = _groups select _lbCurSel;
_ctrlJointButton setVariable ["selectedGroup", _selectedGroup];

private _leader = leader _selectedGroup;

private _units = units _selectedGroup;

private _groupInfoString = "";

private _color;

{
    _color = switch (assignedTeam _x) do
    {
        case "RED":    {"#FF0000"};
        case "GREEN":  {"#00FF00"};
        case "BLUE":   {"#0096FF"};
        case "YELLOW": {"#FFFF00"};
        default        {"#FFFFFF"};
    };
    _groupInfoString = _groupInfoString + format ["<t color='%1'>%2</t><br/>",_color,name _x]; 
    
} forEach _units;

//_ctrlText ctrlSetStructuredText parseText (format _groupInfoString);
_ctrlText ctrlSetStructuredText parseText _groupInfoString;