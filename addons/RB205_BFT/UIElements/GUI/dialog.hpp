class RB205_BFTSelectGroupDialog
{
    idd = 205550;
    movingEnable = 1;
    enableSimulation = 1;

    class ControlsBackground
    {
        class Background: RB205_BFT_RscText
        {
            idc = -1;
            x = 0.28 * safezoneW + safezoneX;
            y = 0.20 * safezoneH + safezoneY;
            w = 0.44 * safezoneW;
            h = 0.56 * safezoneH;
            colorBackground[] = {0,0,0,0.85};
        };

        class Header: RB205_BFT_RscText
        {
            idc = -1;
            text = "Squadübersicht";
            x = 0.28 * safezoneW + safezoneX;
            y = 0.17 * safezoneH + safezoneY;
            w = 0.44 * safezoneW;
            h = 0.03 * safezoneH;
            colorBackground[] = {0.41569,0.05882,0.05882,1};   
        };
    };

    class Controls
    {
        class GroupList: RB205_BFT_RscListNBox
        {
            idc = 205551;

            x = 0.295 * safezoneW + safezoneX;
            y = 0.22 * safezoneH + safezoneY;
            w = 0.14 * safezoneW;
            h = 0.48 * safezoneH;

            columns[] = {-0.01,0.9};

            onLBSelChanged = "_this call RB205_BFT_fnc_onSelectGroup;";
        };

        class MemberText: RB205_BFT_StructuredText
        {
            idc = 205552;

            x = 0.45 * safezoneW + safezoneX;
            y = 0.22 * safezoneH + safezoneY;
            w = 0.255 * safezoneW;
            h = 0.48 * safezoneH;

            text = "";
            colorBackground[] = {0.1,0.1,0.1,0.6};
        };

        class JoinButton: RB205_BFT_RscButton
        {
            idc = 205553;

            text = "Beitreten";

            x = 0.45 * safezoneW + safezoneX;
            y = 0.71 * safezoneH + safezoneY;
            w = 0.105 * safezoneW;
            h = 0.035 * safezoneH;
            onButtonClick = "_this call RB205_BFT_fnc_onBtnClickJoin;";
        };

        class CloseButton: RB205_BFT_RscButton
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