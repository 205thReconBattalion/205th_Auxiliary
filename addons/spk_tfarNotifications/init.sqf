if ("task_force_radio" in activatedAddons) then {
	[] spawn {
		waitUntil { !isNull findDisplay 46 };
		PHEN_RadioMessages_control = 4013451;
		PHEN_RadioMessages_Active = [];
	};

	//local
	//[PHEN_RadioMessages_control, player, ""] spawn PHEN_CreateRadioDialog;

	//proper, with npc example
	//[PHEN_RadioMessages_control, player, ""] remoteExec ["PHEN_CreateRadioDialog", 0];
	//[PHEN_RadioMessages_control, 'Named NPC', "Dialog"] remoteExec ["PHEN_CreateRadioDialog", 0];

	PHEN_CreateRadioDialog = {
		if (isDedicated) exitWith {};
		disableSerialization;

		private ["_ctrlId", "_unit", "_text","_radioType"];

		_ctrlId = _this select 0;
		_unit = _this select 1;
		_text = _this select 2;
        _radioType = _this select 3;

		_display = (findDisplay 46);
		if (!(isNull findDisplay 312)) then { _display = (findDisplay 312) };
		
		// Adjusting the positions of active control groups (push down)
		{
			_ctrl = _display displayCtrl _x;
			_pos = ctrlPosition _ctrl;
			_pos set [1, (_pos select 1) + HOV_HUD_TFARMessages_PD_Factor];
			_ctrl ctrlSetPosition _pos;
			_ctrl ctrlCommit 0.5;
		} forEach PHEN_RadioMessages_Active;
		
		// uiSleep 0.3;
		// If more than max messages already exist, delete the oldest (bottom one)
		if ((count PHEN_RadioMessages_Active) >= HOV_HUD_TFARMessages_MaxMessages) then {
			private _oldestId = PHEN_RadioMessages_Active deleteAt 0;
			private _oldestCtrl = _display displayCtrl _oldestId;
			_oldestCtrl ctrlCommit 0;
			_oldestCtrl ctrlSetFade 1;
			_oldestCtrl ctrlCommit 0.1;
			uiSleep 0.1;
			if (!isNull _oldestCtrl) then { ctrlDelete _oldestCtrl };
		};

		PHEN_RadioMessages_Active pushBack _ctrlId;
		PHEN_RadioMessages_control = PHEN_RadioMessages_control + 1;
		_ctrl = _display ctrlCreate ["RscStructuredText", _ctrlId];
		private _xPos = safezoneX + (safezoneW * HOV_HUD_TFARMessages_PosX);
		private _yPos = safezoneY + (safezoneH * HOV_HUD_TFARMessages_PosY);
		_ctrl ctrlSetPosition [_xPos, _yPos, 1, 1];


		// _colorCode = [(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0]),(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1]),(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1]),(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])] call BIS_fnc_colorRGBAtoHTML;
		_colorCode = HOV_HUD_TFARMessages_COLOR call BIS_fnc_colorRGBtoHTML;

        _icon = switch (_radioType) do {
            case 0: { "spk_tfarNotifications\data\tfar_icon_SR.paa" }; // SR
            case 1: { "spk_tfarNotifications\data\tfar_icon_LR.paa" }; // LR
            default { 'a3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa' }; // fallback/default icon
        };

		private _fontArray = ["Caveat", "EtelkaMonospacePro", "EtelkaMonospaceProBold", "EtelkaNarrowMediumPro", "LCD14", "LucidaConsoleB", "PuristaBold", "PuristaLight", "PuristaMedium", "PuristaSemibold", "RobotoCondensed", "RobotoCondensedBold", "RobotoCondensedLight", "TahomaB"];
		private _font = _fontArray select HOV_HUD_TFARMessages_FONT;

		// Check if _name is a string or an object
		if (typeName _unit == "STRING") then {
			_ctrl ctrlSetStructuredText parseText format["<img color='%1' size='%5' shadow='1' image=%4 /> <t color='%1' font=%7 align='left'size='%6' shadow='1'>%3: %2</t>", _colorCode, _text, _unit, (str _icon), (HOV_HUD_TFARMessages_TextSize * 1.7), HOV_HUD_TFARMessages_TextSize, _font];
		} else {
			_name = "";
			if (true) then {
				_name = switch (true) do {
					case ((HOV_HUD_TFARMessages_UseCallsigns_adaptive) and (_unit == leader group _unit) and (_radioType isEqualTo 0)): { (name _unit) + ' ' + HOV_HUD_TFARMessages_CallsignLeaderText }; // SR Leader
					case (_radioType isEqualTo 0): { (name _unit) }; // SR (player name)
					case ((HOV_HUD_TFARMessages_UseCallsigns_adaptive) and (_unit == leader group _unit) and (_radioType isEqualTo 1)): { (groupId (group _unit)) +  ' ' + HOV_HUD_TFARMessages_CallsignLeaderText }; // LR Leader
					case ((HOV_HUD_TFARMessages_UseCallsigns_LR) and (_radioType isEqualTo 1)): { (groupId (group _unit)) }; // LR
					default { (name _unit) }; // fallback
				};
			} else {
				_name = (name _unit);
			};
			_ctrl ctrlSetStructuredText parseText format["<img color='%1' size='%5' shadow='1' image=%4 /> <t color='%1' font=%7 align='left'size='%6' shadow='1'>%2 %3</t>", _colorCode, _name, _text, (str _icon), (HOV_HUD_TFARMessages_TextSize * 1.7), HOV_HUD_TFARMessages_TextSize, _font];
		};

		_ctrl ctrlCommit 0;
		_ctrl ctrlSetFade 1;
		_ctrl ctrlCommit HOV_HUD_TFARMessages_Lifetime;
		0 = (_ctrlId) spawn {
			disableSerialization;

			_display = (findDisplay 46);
			if (!(isNull findDisplay 312)) then { _display = (findDisplay 312) };

			_ctrl = _display displayCtrl _this;
			UISleep (HOV_HUD_TFARMessages_Lifetime + 1);
			if (!isNull _ctrl) then { ctrlDelete _ctrl };
			PHEN_RadioMessages_Active deleteAt (PHEN_RadioMessages_Active find _this);
		};
	};

	PHEN_RadioMessages_currentTransmittingRadio = [];
	PHEN_RadioMessages_TFAR_EHid = ["TFAR_event_OnTangent", {
		params ["_unit", "_radio", "_type", "_isAdditional", "_start"];

		if (((lifeState  _unit) == "INCAPACITATED") || ((lifeState  _unit) == "UNCONSCIOUS") || ((lifeState  _unit) == "ASLEEP")) exitWith{};

		if (_unit getVariable ['PHEN_RadioMessages_Used', false]) exitWith {};

		_unit setVariable ['PHEN_RadioMessages_Used', true];
		[_unit] spawn {
			params ["_unit"];
			uiSleep 1;
			_unit setVariable ['PHEN_RadioMessages_Used', false];
		};

		if (_start) then {
			PHEN_RadioMessages_currentTransmittingRadio pushBackUnique _unit;
			publicVariable 'PHEN_RadioMessages_currentTransmittingRadio';

			_SR_freq = 230001;
			_LR_freq = 230001;

			_srRadio = call TFAR_fnc_activeSwRadio;
			if (!isNil "_srRadio") then {
				_SR_freq = _srRadio call TFAR_fnc_getSwFrequency;
			};

			_lrRadio = call TFAR_fnc_activeLrRadio;
			if (!isNil "_lrRadio") then {
				_LR_freq = _lrRadio call TFAR_fnc_getLrFrequency;
			};

			[missionNamespace, "PHEN_RadioMessages_EH", [_unit, _SR_freq, _LR_freq, _type]] call BIS_fnc_callScriptedEventHandler;
		} else {
			PHEN_RadioMessages_currentTransmittingRadio deleteAt (PHEN_RadioMessages_currentTransmittingRadio find _unit);
			publicVariable 'PHEN_RadioMessages_currentTransmittingRadio';
		};
	}] call CBA_fnc_addEventHandler;


	// PHEN_RadioMessages_TFAR_EHid
	// ["TFAR_event_OnTangent", PHEN_RadioMessages_TFAR_EHid] call CBA_fnc_removeEventHandler;

	[missionNamespace, "PHEN_RadioMessages_EH", {
		params ["_unit", "_SRChannel", "_LRChannel", "_radioType"];

		[[_unit, _SRChannel, _LRChannel, _radioType], {
			params ["_unit", "_SRChannel", "_LRChannel", "_radioType"];

			private _isZeus = !isNull findDisplay 312;

			if !(HOV_HUD_TFARMessages) exitWith {};
			if (!(HOV_HUD_TFARMessages_ShowZeus) && _isZeus) exitWith {};

			if ((HOV_HUD_TFARMessages_ExcludeSelf) and (_unit isEqualTo player)) exitWith {};

			if !(isNull findDisplay 49) exitWith {}; //mainmenu check

			_isEnemy = [(side _unit), (side player)] call BIS_fnc_sideIsEnemy;
			if (_isEnemy) exitWith {};

			_MySR_freq = 230002;
			_MyLR_freq = 240002;

			_srRadio = call TFAR_fnc_activeSwRadio;
			if (!isNil "_srRadio") then {
				_MySR_freq = _srRadio call TFAR_fnc_getSwFrequency;
			};

			_lrRadio = call TFAR_fnc_activeLrRadio;
			if (!isNil "_lrRadio") then {
				_MyLR_freq = _lrRadio call TFAR_fnc_getLrFrequency;
			};

			if (isNil "_unit") then { _unit = player; };
			if (isNil "_LRChannel") then { _LRChannel = -1; };
			if (isNil "_SRChannel") then { _SRChannel = -1; };

			// systemChat format [
			// 	"Unit: %1 | SR Ch: %2 | SR Freq: %3 | LR Ch: %4 | LR Freq: %5 | Radio Used: %6",
			// 	_unit, _SRChannel, _MySR_freq, _LRChannel, _MyLR_freq, _radioType
			// ];

			// Check only for relevant match
			_srMatch = (!isNil "_srRadio") && (_MySR_freq isEqualTo _SRChannel);
			_lrMatch = (!isNil "_lrRadio") && (_MyLR_freq isEqualTo _LRChannel);

			_validMatch = switch (_radioType) do {
				case 0: { _srMatch }; // SR
				case 1: { _lrMatch }; // LR
				default { false };
			};

			if (_validMatch) exitWith {
				[PHEN_RadioMessages_control, _unit, "",_radioType] spawn PHEN_CreateRadioDialog;
			};

		}] remoteExec ["call", 0];
	}] call BIS_fnc_addScriptedEventHandler;


	player addEventHandler ["Respawn", {
		[] spawn {
			uiSleep 1;
            PHEN_RadioMessages_TFAR_EHid = ["TFAR_event_OnTangent", {
				params ["_unit", "_radio", "_type", "_isAdditional", "_start"];

				if (((lifeState  _unit) == "INCAPACITATED") || ((lifeState  _unit) == "UNCONSCIOUS") || ((lifeState  _unit) == "ASLEEP")) exitWith{};

				if (_unit getVariable ['PHEN_RadioMessages_Used', false]) exitWith {};
				
				_unit setVariable ['PHEN_RadioMessages_Used', true];
				[_unit] spawn {
					params ["_unit"];
					uiSleep 1;
					_unit setVariable ['PHEN_RadioMessages_Used', false];
				};

				if (_start) then {
					PHEN_RadioMessages_currentTransmittingRadio pushBackUnique _unit;
					publicVariable 'PHEN_RadioMessages_currentTransmittingRadio';

					_SR_freq = 230001;
					_LR_freq = 230001;

					_srRadio = call TFAR_fnc_activeSwRadio;
					if (!isNil "_srRadio") then {
						_SR_freq = _srRadio call TFAR_fnc_getSwFrequency;
					};

					_lrRadio = call TFAR_fnc_activeLrRadio;
					if (!isNil "_lrRadio") then {
						_LR_freq = _lrRadio call TFAR_fnc_getLrFrequency;
					};

					[missionNamespace, "PHEN_RadioMessages_EH", [_unit, _SR_freq, _LR_freq, _type]] call BIS_fnc_callScriptedEventHandler;
				} else {
					PHEN_RadioMessages_currentTransmittingRadio deleteAt (PHEN_RadioMessages_currentTransmittingRadio find _unit);
					publicVariable 'PHEN_RadioMessages_currentTransmittingRadio';
				};
			}] call CBA_fnc_addEventHandler;
		};
	}];
};