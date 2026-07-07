class RB205_RscGroupDialog
{
    idd = 205500;
    movingEnable = 1;
    enableSimulation = 1;

    class ControlsBackground
    {
        class Background: RscText
        {
            idc = -1;
            x = 0.28 * safezoneW + safezoneX;
            y = 0.20 * safezoneH + safezoneY;
            w = 0.44 * safezoneW;
            h = 0.56 * safezoneH;
            colorBackground[] = {0,0,0,0.85};
        };

        class Header: RscText
        {
            idc = -1;
            text = "Gruppen";
            x = 0.28 * safezoneW + safezoneX;
            y = 0.17 * safezoneH + safezoneY;
            w = 0.44 * safezoneW;
            h = 0.03 * safezoneH;
            colorBackground[] = {0.6,0,0,1};
        };
    };

    class Controls
    {
        class GroupList: RscListBox
        {
            idc = 205501;

            x = 0.295 * safezoneW + safezoneX;
            y = 0.22 * safezoneH + safezoneY;
            w = 0.14 * safezoneW;
            h = 0.48 * safezoneH;

            onLBSelChanged = "_this call RB205_fnc_groupSelected;";
        };

        class MemberText: RscStructuredText
        {
            idc = 205502;

            x = 0.45 * safezoneW + safezoneX;
            y = 0.22 * safezoneH + safezoneY;
            w = 0.255 * safezoneW;
            h = 0.48 * safezoneH;

            text = "";
            colorBackground[] = {0.1,0.1,0.1,0.6};
        };

        class CloseButton: RscButton
        {
            idc = -1;

            text = "Schließen";

            x = 0.60 * safezoneW + safezoneX;
            y = 0.71 * safezoneH + safezoneY;
            w = 0.105 * safezoneW;
            h = 0.035 * safezoneH;

            action = "closeDialog 0;";
        };
    };
};