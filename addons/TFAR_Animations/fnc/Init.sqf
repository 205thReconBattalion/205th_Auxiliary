fn_radioAnims_Ear = {
    /*if ( (headgear player in radioAnims_cba_Earpieces) || (goggles player in radioAnims_cba_Earpieces) ) then {*/
        if (player getVariable ["tsp_gestureState", ""] != "") exitWith {}; //prevents animation while making map gesture
        
        player playActionNow radioAnims_Ear;
    /*} else {
        call fn_radioAnims_hand;
    };*/
};

//-- Start speaking on radio
    ["TFAR_RadioEventStart", "OnTangent", {	
        //-- Exceptions
		radioAnims_TFAR_currentRadio = _this select 1;
        if (!radioAnims_cba_main) exitWith {};
        if (!(_this select 4)) exitWith {};
        if (isWeaponDeployed player) exitWith {};
        if (!isNil "radioAnims_playerProbablyReloading") exitWith {};
        if ( (radioAnims_cba_vehicles) && (vehicle player != player) ) exitWith {};
		if ( (radioAnims_cba_ads) && (currentWeapon player != primaryWeapon player) && (cameraView == "GUNNER") ) exitWith {};
        if ( (binocular player != "") && (currentWeapon player == binocular player) ) exitWith {};
        if (!isNull (findDisplay 312)) exitWith {};

        //-- Figure out which setting to use
        /*_currentlyUsedRadio = 0;
        if (["prc152", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 152};
        if (["prc154", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 154};
        if (["prc148", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 148};
        if (["fadak", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 21};
        if (["pnr1000", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 1000};
        if (["rf7800", str radioAnims_TFAR_currentRadio, false] call BIS_fnc_inString) then {_currentlyUsedRadio = 7800};
		radioAnims_animToUse = 0;

        switch (_currentlyUsedRadio) do {
            case 152: {radioAnims_animToUse = radioAnims_cba_preference_PRC152};
            case 154: {radioAnims_animToUse = radioAnims_cba_preference_PRC154};
            case 21: {radioAnims_animToUse = radioAnims_cba_preference_fadak};
            case 148: {radioAnims_animToUse = radioAnims_cba_preference_PRC148};
            case 7800: {radioAnims_animToUse = radioAnims_cba_preference_rf7800};
            case 1000: {radioAnims_animToUse = radioAnims_cba_preference_pnr1000};
            default {radioAnims_animToUse = radioAnims_cba_preference_Others};
        };*/

        //-- Use the setting
        radioAnims_playerAnimated = true;
        /*switch (radioAnims_animToUse) do {
            case "Hand": {call fn_radioAnims_hand};
            case "Ear": {call fn_radioAnims_Ear};
            case "Vest": {call fn_radioAnims_vest};
        };*/
        call fn_radioAnims_Ear

    }, ObjNull] call TFAR_fnc_addEventHandler;

//-- Stop speaking on radio
    ["TFAR_RadioEventEnd", "OnTangent", {
        //-- Exceptions
        if (!radioAnims_cba_main) exitWith {};
        if ( (isWeaponDeployed player) && (isNil "radioAnims_playerAnimated") ) exitWith {};  //-- If bipoded and not currently animated, dont do stopping animation
        If (!isNil "radioAnims_playerProbablyReloading") exitWith {};  //-- If reloading, dont do stopping animation
		if ( (radioAnims_cba_ads) && (currentWeapon player != primaryWeapon player) && (cameraView == "GUNNER") ) exitWith {};
        if ( (binocular player != "") && (currentWeapon player == binocular player) ) exitWith {};
        if (!isNull (findDisplay 312)) exitWith {};

        if (!(_this select 4)) exitWith {
            if (!isNil "radioAnims_radioModel") then {deletevehicle radioAnims_radioModel;radioAnims_radioModel = nil};  //-- If radio model exists, delete it
            player playActionNow "radioAnims_Stop";
            radioAnims_playerAnimated = nil;
        }; 
    }, ObjNull] call TFAR_fnc_addEventHandler;


//-- Eventhandler (Returns radioAnims_playerProbablyReloading = true if reloading)
    [] spawn {
        while {true} do {  
            _playerMagsPast = magazines player;  //-- Save past state of magazines
            sleep 0.25;
            if (getText (configfile >> "CfgWeapons" >> (currentWeapon player) >> "EventHandlers" >> "reload") != "radioAnims_playerProbablyReloading = true") then {
	            if (  (!(magazines player isEqualTo _playerMagsPast)) && (isnull (findDisplay 602))  ) then {
                    radioAnims_playerProbablyReloading = true;
                    sleep 15; //-- Buffer
                    radioAnims_playerProbablyReloading = nil;
                };
            };
        };
    };