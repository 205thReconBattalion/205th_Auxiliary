if ("task_force_radio" in activatedAddons) then {
    [
        "HOV_HUD_TFARMessages",
        "CHECKBOX",
        ["Enable Radio Notifications",""],
        ["205th Recon Battalion - TFAR Notifications","1 | General Settings"],
        false,
        nil,
        {},
        false
    ] call CBA_fnc_addSetting;
    
    [
        "HOV_HUD_TFARMessages_ExcludeSelf",
        "CHECKBOX",
        ["Exclude Yourself","Exclude Yourself from the notifications list"],
        ["205th Recon Battalion - TFAR Notifications","1 | General Settings"],
        false,
        nil,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_ShowZeus",
        "CHECKBOX",
        ["Show for Zeus","Will show the notifications in While in Zeus Overaly"],
        ["205th Recon Battalion - TFAR Notifications","1 | General Settings"],
        true,
        nil,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_UseCallsigns_adaptive",
        "CHECKBOX",
        ["[IDENTIFIER] Use Identifier (leadership)","Will show the notifications text with an added 'Leader Identifier' for the SR and LR IF they are the leader of their 'group'"],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        false,
        nil,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_CallsignLeaderText",
        "EDITBOX",
        ["[IDENTIFIER] Leader Identifier","What text identifier will show up next to the Callsign OR Name, You can leave this BLANK!"],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        '(Leader)',
        true,
        {}
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_UseCallsigns_LR",
        "CHECKBOX",
        ["Use Callsigns (general LR)","Will show the notifications text as the groups Callsign for the LR Regardless off leadership status."],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        true,
        nil,
        {},
        false
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_Texture_SR",
        "EDITBOX",
        ["Short-Range Radio Icon","Texture Path to Short Range Icon"],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        "\HOV_BlackCarapace\textures\BCH_vox_SR_Icon.paa",
        nil,
        {}
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_Texture_LR",
        "EDITBOX",
        ["Long-Range Radio Icon","Texture Path to Long Range Icon"],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        "\HOV_BlackCarapace\textures\BCH_vox_LR_Icon.paa",
        nil,
        {}
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_PD_Factor",
        "EDITBOX",
        ["'Push-Down' amount","How much the next message gets pushed down"],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        '0.08',
        nil,
        {   
            params ["_value"]; 
            _number = parseNumber _value;
            HOV_HUD_TFARMessages_PD_Factor = _number;
        }
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_Lifetime",
        "Slider",
        ["Message Lifetime","For how long the message will be visible. The message will have faded out at ZERO seconds"],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        [1,60,10,0],
        nil,
        {}
    ] call CBA_fnc_addSetting;


    [
        "HOV_HUD_TFARMessages_MaxMessages",
        "Slider",
        ["Max Messages","Max amount of messages shown on screen."],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        [1,15,5,0],
        nil,
        {}
    ] call CBA_fnc_addSetting;
    
    [
        "HOV_HUD_TFARMessages_COLOR",
        "COLOR",
        ["Notification Color","Max amount of messages shown on screen."],
        ["205th Recon Battalion - TFAR Notifications","2 | formatting"],
        [1,1,1,1],
        nil,
        {}
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_PosX",
        "Slider",
        ["HUD Position X", "Horizontal screen position of the TFAR notifications (0 - 1)"],
        ["205th Recon Battalion - TFAR Notifications", "2 | formatting"],
        [0, 1, 0.02, 2], // min, max, default, decimals
        nil,
        {
            params ["_value"];
            HOV_HUD_TFARMessages_PosX = _value;
        }
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_PosY",
        "Slider",
        ["HUD Position Y", "Vertical screen position of the TFAR notifications (0 - 1)"],
        ["205th Recon Battalion - TFAR Notifications", "2 | formatting"],
        [0, 1, 0.25, 2], // min, max, default, decimals
        nil,
        {
            params ["_value"];
            HOV_HUD_TFARMessages_PosY = _value;
        }
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_TextSize",
        "Slider",
        ["HUD Text Size", "Size of the notification text"],
        ["205th Recon Battalion - TFAR Notifications", "2 | formatting"],
        [0.5, 2, 1.2, 2],
        nil,
        {
            params ["_value"];
            HOV_HUD_TFARMessages_TextSize = _value;
        }
    ] call CBA_fnc_addSetting;

    [
        "HOV_HUD_TFARMessages_FONT",
        "LIST",
        ["HUD Font", "Font Used"],
        ["205th Recon Battalion - TFAR Notifications", "2 | formatting"],
        [
            [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13], 
            ["Caveat", "EtelkaMonospacePro", "EtelkaMonospaceProBold", "EtelkaNarrowMediumPro", "LCD14", "LucidaConsoleB", "PuristaBold", "PuristaLight", "PuristaMedium", "PuristaSemibold", "RobotoCondensed", "RobotoCondensedBold", "RobotoCondensedLight", "TahomaB"], 
            11
        ],
        nil,
        {
            params ["_value"];
            HOV_HUD_TFARMessages_FONT = _value;
        }
    ] call CBA_fnc_addSetting;

};