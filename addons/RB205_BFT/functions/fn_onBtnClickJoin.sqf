params ["_control"];

private _group = _control getVariable "selectedGroup";


[player] joinSilent _group;
closeDialog 0;