if (!(hasInterface) || (isDedicated)) exitWith {};
[] spawn
{
	waitUntil { !isNull findDisplay 46 };
	uiSleep 3;
	if (getText (configfile >> 'CfgVehicles' >> typeOf player >> 'moves') != 'CfgMovesMaleSdr') exitWith {};
	WBK_ShowDown_Anims = [{
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		_ms = (toLower (animationState _unit) find "mspr") != -1;
		_action = getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _unit >> "actions");
		switch true do {
			case ((!(RB205_altSprint_enableSecondary) && !(RB205_altSprint_enablePrimary)) || (currentWeapon _unit == "") || (currentWeapon _unit == secondaryWeapon _unit) || (currentWeapon _unit in RB205_altSprint_disabledWeapons_array) || !(isNull objectParent _unit)): {
				if (gestureState _unit in ["wbk_showdown_pistol_idle","wbk_showdown_idle"]) then {
					_unit playActionNow "WBK_Showdown_sraswrfld_Disable";
				};
			};
			case (currentWeapon _unit == handGunWeapon _unit): {
				_restGest = _action isKindOf ["PistolStandActions", configfile >> "CfgMovesBasic" >> "Actions"];
				switch true do {
					case !(RB205_altSprint_enableSecondary): {if (gestureState _unit == "WBK_Showdown_Pistol_Idle") then {_unit playActionNow "WBK_Showdown_Pistol_sraswrfld_Disable";};};
					case (!(_restGest) && (gestureState _unit == "WBK_Showdown_Pistol_Idle")): {_unit playActionNow "WBK_Showdown_Pistol_sraswrfld_Disable";};
					case ((_restGest) && (!(_ms) || (animationState _unit in ["amovpercmstpslowwpstdnon_amovpercmstpsraswpstdnon"])) && !(animationState _unit in ["amovpercmstpsraswpstdnon_amovpercmstpslowwpstdnon","amovpercmrunsraswpstdf","amovpercmrunsraswpstdfl","amovpercmrunsraswpstdfr","amovpercmrunsraswpstdl","amovpercmrunsraswpstdr","amovpercmrunsraswpstdb","amovpercmrunsraswpstdbl","amovpercmrunsraswpstdbr","amovpercmstpsraswpstdnon_aidlpercmstpslowwpstdnon","amovpercmevaslowwpstdf","amovpercmevaslowwpstdfl","amovpercmevaslowwpstdfr","amovpercmevasraswpstdf","amovpercmevasraswpstdfl","amovpercmevasraswpstdfr"]) && (gestureState _unit == "WBK_Showdown_Pistol_Idle")): {_unit playActionNow "WBK_Showdown_Pistol_sraswrfld_Disable";};
					case ((_restGest) && ((_ms) || (animationState _unit in ["amovpercmstpsraswpstdnon_amovpercmstpslowwpstdnon","amovpercmrunsraswpstdf","amovpercmrunsraswpstdfl","amovpercmrunsraswpstdfr","amovpercmrunsraswpstdl","amovpercmrunsraswpstdr","amovpercmrunsraswpstdb","amovpercmrunsraswpstdbl","amovpercmrunsraswpstdbr","amovpercmstpsraswpstdnon_aidlpercmstpslowwpstdnon","amovpercmevaslowwpstdf","amovpercmevaslowwpstdfl","amovpercmevaslowwpstdfr","amovpercmevasraswpstdf","amovpercmevasraswpstdfl","amovpercmevasraswpstdfr"])) && !(animationState _unit in ["amovpercmstpslowwpstdnon_amovpercmstpsraswpstdnon"]) && (gestureState _unit in ["<none>","wbk_showdown_pistol_sraswrfld_disable","disable_gesture"])): {_unit playActionNow "WBK_Showdown_Pistol_Idle";};
					default {};
				};
			};
			case (currentWeapon _unit == primaryWeapon _unit): {
				_restGest = _action isKindOf ["RifleBaseLowStandActions", configfile >> "CfgMovesBasic" >> "Actions"];
				switch true do {
					case !(RB205_altSprint_enablePrimary): {if (gestureState _unit == "WBK_Showdown_Idle") then {_unit playActionNow "WBK_Showdown_sraswrfld_Disable";};};
					case (!(_restGest) && (gestureState _unit == "WBK_Showdown_Idle")): {_unit playActionNow "WBK_Showdown_sraswrfld_Disable";};
					case ((_restGest) && (!(_ms) || (animationState _unit in ["amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon"])) && !(animationState _unit in ["amovpknlmevasraswrfldf","amovpknlmevasraswrfldfl","amovpknlmevasraswrfldfr","amovpknlmevaslowwrfldf","amovpknlmevaslowwrfldfl","amovpknlmevaslowwrfldfr","amovpknlmrunsraswrfldf","amovpknlmrunsraswrfldfl","amovpknlmrunsraswrfldfr","amovpknlmrunsraswrfldl","amovpknlmrunsraswrfldr","amovpknlmrunsraswrfldbr","amovpknlmrunsraswrfldbl","amovpknlmrunsraswrfldb","amovpercmrunsraswrfldf","amovpercmrunsraswrfldfl","amovpercmrunsraswrfldfr","amovpercmrunsraswrfldl","amovpercmrunsraswrfldr","amovpercmrunsraswrfldbr","amovpercmrunsraswrfldbl","amovpercmrunsraswrfldb","amovpercmevasraswrfldf","amovpercmevasraswrfldfl","amovpercmevasraswrfldfr","amovpercmevaslowwrfldf","amovpercmevaslowwrfldfl","amovpercmevaslowwrfldfr"]) && (gestureState _unit == "WBK_Showdown_Idle")): {_unit playActionNow "WBK_Showdown_sraswrfld_Disable";};
					case ((_restGest) && ((_ms) || (animationState _unit in ["amovpknlmevaslowwrfldf","amovpknlmevaslowwrfldfl","amovpknlmevaslowwrfldfr","amovpknlmevasraswrfldf","amovpknlmevasraswrfldfl","amovpknlmevasraswrfldfr","amovpknlmrunsraswrfldf","amovpknlmrunsraswrfldfl","amovpknlmrunsraswrfldfr","amovpknlmrunsraswrfldl","amovpknlmrunsraswrfldr","amovpknlmrunsraswrfldbr","amovpknlmrunsraswrfldbl","amovpknlmrunsraswrfldb","amovpercmrunsraswrfldf","amovpercmrunsraswrfldfl","amovpercmrunsraswrfldfr","amovpercmrunsraswrfldl","amovpercmrunsraswrfldr","amovpercmrunsraswrfldbr","amovpercmrunsraswrfldbl","amovpercmrunsraswrfldb","amovpercmevasraswrfldf","amovpercmevasraswrfldfl","amovpercmevasraswrfldfr","amovpercmevaslowwrfldf","amovpercmevaslowwrfldfl","amovpercmevaslowwrfldfr"])) && !(animationState _unit in ["amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon"]) && (gestureState _unit in ["<none>","wbk_showdown_sraswrfld_disable","disable_gesture"])): {_unit playActionNow "WBK_Showdown_Idle";};
					default {};
				};
			};
			default {};
		};
	}, 0.01, []] call CBA_fnc_addPerFrameHandler;
};