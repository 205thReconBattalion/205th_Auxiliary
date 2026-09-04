[
    "RB205_roleplay_heightAdjustment_Mode",
    "LIST",
    [
        "Height adjustment mode",
        "Controls which units receive the adjusted height. Only players with assigned Zeus access can apply the adjustment."
    ],
    ["[205] Roleplay", "Height Adjustment"],
    [
        [0, 1, 2],
        [
            "Do not adjust height",
            "Only adjust height for controlled units",
            "Only adjust height for player"
        ],
        0
    ],
    0,
    {},
    false
] call CBA_fnc_addSetting;

[
    "RB205_roleplay_heightAdjustment_Height",
    "SLIDER",
    ["Adjusted height", "Character scale (1.0 = default)"],
    ["[205] Roleplay", "Height Adjustment"],
    [0.6, 1.2, 1, 2],
    0,
    {},
    false
] call CBA_fnc_addSetting;
