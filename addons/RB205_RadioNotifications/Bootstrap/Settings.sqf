if (!FODS_RadioNotifications_hasTFAR) exitWith {};

// 1 | General Settings

[
	"FODS_RadioMessages_Enabled",
	"CHECKBOX",
	["Enable radio notifications", "Master switch for the on screen radio notifications"],
	["[205] Radio Notifications", "1 | General Settings"],
	false,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_ExcludeSelf",
	"CHECKBOX",
	["Exclude yourself", "Leave your own transmissions out of the notification list"],
	["[205] Radio Notifications", "1 | General Settings"],
	false,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_ShowZeus",
	"CHECKBOX",
	["Show for Zeus", "Keep the notifications visible while the Zeus interface is open"],
	["[205] Radio Notifications", "1 | General Settings"],
	true,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
    "FODS_RadioMessages_ShowSR",
    "CHECKBOX",
    ["Show SR notifications", "Show notifications for short-range radio transmissions"],
    ["[205] Radio Notifications", "1 | General Settings"],
    true,
    0,
    {},
    false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_Lifetime",
	"SLIDER",
	["Message lifetime", "How long a message stays visible, it has faded out completely at zero seconds"],
	["[205] Radio Notifications", "1 | General Settings"],
	[1, 60, 10, 0],
	0,
	{}
] call CBA_fnc_addSetting;

// 2 | Formatting

[
	"FODS_RadioMessages_UseCallsigns_LR",
	"CHECKBOX",
	["Use callsigns (general LR)", "Shows the group callsign instead of the name on LR, whether or not the speaker leads the group"],
	["[205] Radio Notifications", "2 | Formatting"],
	true,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_205NameConversion",
	"CHECKBOX",
	["Use 205th name conversion", "Convert names to 205th format (e.g. '[1-1]' -> '[1-1] Zillo')"],
	["[205] Radio Notifications", "2 | Formatting"],
	true,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_UseCallsigns_adaptive",
	"CHECKBOX",
	["Use leadership identifier", "Adds a leader identifier to the SR and LR line when the speaker leads their group"],
	["[205] Radio Notifications", "2 | Formatting"],
	false,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_CallsignLeaderText",
	"EDITBOX",
	["Leader identifier", "Text shown next to the callsign or name, can be left blank"],
	["[205] Radio Notifications", "2 | Formatting"],
	"[Actual]",
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_COLOR",
	"COLOR",
	["Notification color", "Default color of the notification text and icon if it has not been changed by another setting"],
	["[205] Radio Notifications", "2 | Formatting"],
	[1, 1, 1, 1],
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_UseTeamColors",
	"CHECKBOX",
	["Use team colors", "Apply team-specific colors to SR radio notifications"],
	["[205] Radio Notifications", "2 | Formatting"],
	true,
	0,
	{},
	false
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_Texture_SR",
	"EDITBOX",
	["Short range radio icon", "Texture path for the short range icon"],
	["[205] Radio Notifications", "2 | Formatting"],
	"a3\modules_f_curator\data\portraitradio_ca.paa",
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_Texture_LR",
	"EDITBOX",
	["Long range radio icon", "Texture path for the long range icon"],
	["[205] Radio Notifications", "2 | Formatting"],
	"a3\ui_f_enoch\data\common\rschorizontalcompass\compass_hq_ca.paa",
	0,
	{}
] call CBA_fnc_addSetting;

// 3 | Customization

[
	"FODS_RadioMessages_PD_Factor",
	"SLIDER",
	["Push down amount", "How far each new message pushes the older ones down the screen"],
	["[205] Radio Notifications", "3 | Customization"],
	[0, 0.5, 0.08, 2], // min, max, default, decimals
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_MaxMessages",
	"SLIDER",
	["Max messages", "How many messages can sit on screen at once"],
	["[205] Radio Notifications", "3 | Customization"],
	[1, 15, 5, 0],
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_PosX",
	"SLIDER",
	["HUD position X", "Horizontal screen position of the notifications, 0 - 1"],
	["[205] Radio Notifications", "3 | Customization"],
	[0, 1, 0.02, 2],
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_PosY",
	"SLIDER",
	["HUD position Y", "Vertical screen position of the notifications, 0 - 1"],
	["[205] Radio Notifications", "3 | Customization"],
	[0, 1, 0.25, 2],
	0,
	{}
] call CBA_fnc_addSetting;

[
	"FODS_RadioMessages_TextSize",
	"SLIDER",
	["HUD text size", "Size of the notification text, the icon scales with it"],
	["[205] Radio Notifications", "3 | Customization"],
	[0.5, 2, 1.2, 2],
	0,
	{}
] call CBA_fnc_addSetting;

// labels must stay in the same order as FODS_RadioMessages_fonts in `Constants.sqf`, the value is the index
[
	"FODS_RadioMessages_FONT",
	"LIST",
	["HUD font", "Font used for the notification text"],
	["[205] Radio Notifications", "3 | Customization"],
	[
		[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13],
		["Caveat", "EtelkaMonospacePro", "EtelkaMonospaceProBold", "EtelkaNarrowMediumPro", "LCD14", "LucidaConsoleB", "PuristaBold", "PuristaLight", "PuristaMedium", "PuristaSemibold", "RobotoCondensed", "RobotoCondensedBold", "RobotoCondensedLight", "TahomaB"],
		8
	],
	0,
	{}
] call CBA_fnc_addSetting;
