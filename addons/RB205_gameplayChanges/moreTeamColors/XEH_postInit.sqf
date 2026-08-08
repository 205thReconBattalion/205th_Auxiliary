if (hasInterface) then {
    RB205_dui_teamSortValues = createHashMapFromArray [
        ["MAIN",   0],
        ["RED",    1],
        ["GREEN",  2],
        ["BLUE",   3],
        ["YELLOW", 4],
        ["CYAN",   5],
        ["PINK",   6],
        ["BLACK",  7]
    ];

    diwako_dui_radar_customSort = {
        params ["_grp", "_player"];

        private _nameSpace = diwako_dui_radar_sortNamespace;
        private _sortValues = RB205_dui_teamSortValues;

        private _sortedGrp = _grp apply {
            private _unit = _x;
            _team = _unit getVariable ["RB205_teamColor", "MAIN"];

            [
                _sortValues getOrDefault [_team, 9999],
                _nameSpace getVariable [rank _unit, 9999],
                _unit getVariable [
                    "diwako_dui_main_customName",
                    _unit getVariable ["ACE_Name", name _unit]
                ],
                _unit
            ]
        };

        _sortedGrp sort true;

        // Rückgabe: ausschließlich ein Array aus Units
        _sortedGrp apply { _x select 3 }
    };
};