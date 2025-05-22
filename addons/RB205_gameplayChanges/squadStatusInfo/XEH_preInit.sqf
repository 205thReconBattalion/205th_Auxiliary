/*
CBA_fnc_addSetting

Parameters:
    _setting     - Unique setting name. Matches resulting variable name <STRING>
    _settingType - Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER" or "COLOR" <STRING>
    _title       - Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    _category    - Category for the settings menu + optional sub-category <STRING, ARRAY>
    _valueInfo   - Extra properties of the setting depending of _settingType. See examples below <ANY>
    _isGlobal    - 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <NUMBER>
    _script      - Script to execute when setting is changed. (optional) <CODE>
    _needRestart - Setting will be marked as needing mission restart after being changed. (optional, default false) <BOOL>
*/

[
    "RB205_GC_SSI_Active",
    "CHECKBOX",
    ["Enable Squad Size Info Markers","Aktiviere Markierungen auf der Karte, die die aktuelle Anzahl an Squad-Mitgliedern anzeigen."],
    ["205th Recon Battalion", "Miscellaneous"],
    true,
    0,
    {},
    true
] call CBA_fnc_addSetting;