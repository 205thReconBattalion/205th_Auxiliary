//macros for unit icons
#define ICON_DEFAULT	icon = "iconMan";
#define ICON_OFFICER	icon = "iconManOfficer";
#define ICON_HEAVY		icon = "JLTS_iconManSupportGunner";
#define ICON_SNIPER		icon = "JLTS_iconManSniper";
#define ICON_AT 		icon = "iconManAT";

//macros for unit inventory
#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define MAG_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
#define MAG_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define MAG_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

//macros for predefined backpacks
#define MAG_XX(a,b)  class _xx_##a {magazine = a; count = b;}
#define WEAP_XX(a,b) class _xx_##a {weapon = a;   count = b;}
#define ITEM_XX(a,b) class _xx_##a {name = a;     count = b;}

//macros for weapons and magazines
#define WEAPON_E5 	"RB205_E5"
#define MAG_E5 		"RB205_E5_mag"

#define WEAPON_E5X 	"RB205_E5_commando"
#define WEAPON_E5X_SHIELD "RB205_E5_commando_shield"
#define MAG_E5X 	"RB205_E5_commando_mag"

#define WEAPON_E5C 	"RB205_E5C"
#define WEAPON_E5C_STOCK "RB205_E5C_stock"
#define MAG_E5C 	"RB205_E5C_mag"

#define WEAPON_E5S 	"RB205_E5S"
#define MAG_E5S 	"RB205_E5S_mag"

#define WEAPON_B2 	"RB205_B2_wristBlaster"
#define MAG_B2 		"RB205_B2_mag"

#define WEAPON_RG4D "RB205_RG4D"
#define MAG_RG4D	"RB205_RG4D_mag"

#define WEAPON_AT	"RB205_RPS6_CIS"
#define WEAPON_AA	"RB205_E60R"
#define MAG_AT 		"RB205_RPS6_AT_mag"
#define MAG_AA 		"RB205_E60R_AA_mag"
#define MAG_AP 		"RB205_E60R_AP_mag"
#define MAG_TP_AT 	RB205_RPS6_AT_mag
#define MAG_TP_AA 	RB205_E60R_AA_mag
#define MAG_TP_AP 	RB205_E60R_AP_mag

#define GRENADE 	"3AS_ThermalDetonator"

#define BINO		"JLTS_DroidBinocular"
#define BINO_BX		"SWLB_clone_commander_binocular_night"

//macros for droid footsteps
#define DROID_SOUNDS \
class SoundEnvironExt \
{ \
	generic[] = \
	{ \
		{"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}} \
	}; \
}; \
class SoundEquipment \
{ \
	soldier[] = \
	{ \
		{"run", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}}, \
		{"walk", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 45}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 45}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt1.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt2.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt3.wav", 2, 1, 15}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\dirt4.wav", 2, 1, 15}} \
	}; \
}; \
class SoundBreath \
{ \
	breath[] = {}; \
}; \
class SoundDrown \
{ \
	breath[] = {}; \
}; \
class SoundInjured \
{ \
	breath[] = {}; \
}; \
class SoundBleeding \
{ \
	breath[] = {}; \
}; \
class SoundBurning \
{ \
	breath[] = {}; \
}; \
class SoundChoke \
{ \
	breath[] = {}; \
}; \
class SoundRecovered \
{ \
	breath[] = {}; \
};

#define DROID_SOUNDS_B2 \
class SoundEnvironExt { \
	generic[] = { \
		{"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}} \
	}; \
}; \
class SoundEquipment { \
	soldier[] = { \
		{"walk", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"walk", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"run", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"sprint", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\b2_step_1.ogg", 2, 1, 30}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\b2_step_2.ogg", 2, 1, 30}}, \
		{"Tactical", {"\WebKnightsRobotics\sounds\b2_step_3.ogg", 2, 1, 30}} \
	}; \
}; \
class SoundBreath \
{ \
	breath[] = {}; \
}; \
class SoundDrown \
{ \
	breath[] = {}; \
}; \
class SoundInjured \
{ \
	breath[] = {}; \
}; \
class SoundBleeding \
{ \
	breath[] = {}; \
}; \
class SoundBurning \
{ \
	breath[] = {}; \
}; \
class SoundChoke \
{ \
	breath[] = {}; \
}; \
class SoundRecovered \
{ \
	breath[] = {}; \
};