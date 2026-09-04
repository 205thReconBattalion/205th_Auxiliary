class CfgPatches
{
    class RB205_roleplay_heightAdjustment
    {
        name = "RB205_roleplay_heightAdjustment";
        author = "KJW | Edited by Spark";
        requiredAddons[] =
        {
            "cba_settings",
            "cba_xeh",
            "A3_Data_F",
            "A3_Weapons_F",
            "A3_Characters_F",
            "A3_Data_F_AoW_Loadorder"
        };
        requiredVersion = 1;
        units[] = {};
        weapons[] = {};
        vehicles[] = {};
    };
};

class Extended_PostInit_EventHandlers
{
    class RB205_roleplay_heightAdjustment_Settings
    {
        init = "call compileScript ['\RB205_roleplay_heightAdjustment\functions\fn_addCBASettings.sqf']";
    };

    class RB205_roleplay_heightAdjustment_PostInit
    {
        init = "call compileScript ['\RB205_roleplay_heightAdjustment\functions\fn_postInit.sqf']";
    };
};

class CfgFunctions
{
    class RB205_roleplay_heightAdjustment
    {
        tag = "RB205_roleplay_heightAdjustment";

        class functions
        {
            class addCBASettings
            {
                file = "\RB205_roleplay_heightAdjustment\functions\fn_addCBASettings.sqf";
            };

            class postInit
            {
                file = "\RB205_roleplay_heightAdjustment\functions\fn_postInit.sqf";
            };
        };
    };
};
