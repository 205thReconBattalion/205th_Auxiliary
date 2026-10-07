[ 
    "RB205_altSprint_disabledWeapons", 
    "EDITBOX", 
    ["Excluded weapons","System will not work on those weapons."],
    ["[205] Miscellaneous", "Alternate Sprint Animation"],
    "['RB205_Z6','RB205_BTX42','RB205_DC17_Dual','RB205_datapad','3AS_FusionCutter_F']",
    1,
    {   
        params ["_value"];  
		_arr = parseSimpleArray _value;
		RB205_altSprint_disabledWeapons_array = _arr;
    }
] call CBA_fnc_addSetting;


[
	"RB205_altSprint_enablePrimary", 
	"CHECKBOX", 
	["Enable for primary weapons","Weapon up animation will be disabled for primary weapons."], 
	["[205] Miscellaneous", "Alternate Sprint Animation"],
	false, 
	0,
	{}
] call CBA_fnc_addSetting;


[
	"RB205_altSprint_enableSecondary", 
	"CHECKBOX", 
	["Enable for secondary weapons","Weapon up animation will be disabled for secondary weapons."], 
	["[205] Miscellaneous", "Alternate Sprint Animation"],
	false, 
	0,
	{}
] call CBA_fnc_addSetting;
