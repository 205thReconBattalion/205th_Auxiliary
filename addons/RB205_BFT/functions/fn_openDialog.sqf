createDialog "RB205_BFTSelectGroupDialog";
private _ctrlDisplay = findDisplay 205550;
private _ctrlListNBox = displayCtrl 205551;
lnbClear _ctrlListNBox;

private _playerSide = side player;
private _allGroups = groups _playerSide;
private _row;
private _iconPath = "\RB205_BFT\UIElements\icons\";
_allGroups = [_allGroups, [], { groupId _x }, "ASCEND"] call BIS_fnc_sortBy;
hint format ["Sortiert: %1",_allGroups];

_ctrlListNBox setVariable ["groups", _allGroups];


{

    _row = _ctrlListNBox lnbAddRow [groupId _x, ""];
    _ctrlListNBox lnbSetData [[_row, 0], leader _x];
    _groupID = groupId _x;
    switch (true) do {
        case (_groupId regexMatch "^0-0($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "0-0.paa"]; };
        case (_groupId regexMatch "^1-0($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "1-0.paa"]; };
        case (_groupId regexMatch "^1-1($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "1-1.paa"]; };
        case (_groupId regexMatch "^1-2($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "1-2.paa"]; };
        case (_groupId regexMatch "^1-3($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "1-3.paa"]; };
        case (_groupId regexMatch "^1-4($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "1-4.paa"]; };
        case (_groupId regexMatch "^2-0($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "2-0.paa"]; };
        case (_groupId regexMatch "^3-0($| [A-E]$)"): { _ctrlListNBox lnbSetPicture [[_row,1], _iconPath + "3-0.paa"]; };
        default { };
    };

} forEach _allGroups;

