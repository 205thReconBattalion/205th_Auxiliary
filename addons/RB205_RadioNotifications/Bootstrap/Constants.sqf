FODS_RadioNotifications_hasTFAR = isClass (configFile >> "CfgPatches" >> "task_force_radio") || {isClass (configFile >> "CfgPatches" >> "tfar_core")};

//base idc, every notification row takes the next one up
FODS_RadioMessages_control = 4013451;

// idcs of the rows currently on screen, oldest first
FODS_RadioMessages_Active = [];

// units using radio, kept in sync on every machine so missions can read it
FODS_RadioMessages_currentTransmitting = [];

FODS_RadioMessages_eventName = "FODS_RadioMessages_tangent"; //CBA event that carries a keyup to every machine

//SPAM prevention cooldown
FODS_RadioMessages_tangentCooldown = 1;

//the FODS_RadioMessages_FONT setting is an index INTO THIS, the labels in `Settings.sqf` must stay in the same order!
FODS_RadioMessages_fonts = [
	"Caveat",
	"EtelkaMonospacePro",
	"EtelkaMonospaceProBold",
	"EtelkaNarrowMediumPro",
	"LCD14",
	"LucidaConsoleB",
	"PuristaBold",
	"PuristaLight",
	"PuristaMedium",
	"PuristaSemibold",
	"RobotoCondensed",
	"RobotoCondensedBold",
	"RobotoCondensedLight",
	"TahomaB"
];

// used when the radio type is neither SR nor LR, mostly scripted calls pushed by MM
FODS_RadioMessages_iconFallback = "a3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa";
