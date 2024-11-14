//-- Main
    [
        "radioAnims_cba_main",
        "CHECKBOX",
        ["Enable Addon", "Turns addon on/off."],
        "TFAR - Animations",
        true,
        false,
        {}
    ] call CBA_Settings_fnc_init;

//-- Aiming Down Sights
    [
        "radioAnims_cba_ads",
        "CHECKBOX",
        ["Aiming while Talking", "If enabled, players will be able to aim while using a radio."],
        "TFAR - Animations",
        true,
        false,
        {
            if (radioAnims_cba_ads) then {
                radioAnims_Ear = "radioAnims_Ear";
                radioAnims_Vest = "radioAnims_Vest";
                radioAnims_Hand = "radioAnims_Hand";
            } else {
                radioAnims_Ear = "radioAnims_Ear_NoADS";
                radioAnims_Vest = "radioAnims_Vest_NoADS";
                radioAnims_Hand = "radioAnims_Hand_NoADS";
            };
        }
    ] call CBA_Settings_fnc_init;

//-- Vehicles
    [
        "radioAnims_cba_vehicles",
        "CHECKBOX",
        ["Disable Animation in Vehicles", "If enabled, the animations will not be played in vehicles."],
        "TFAR - Animations",
        true,
        false,
        {}
    ] call CBA_Settings_fnc_init;