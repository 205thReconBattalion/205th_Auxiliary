#define CT_STATIC           0
#define ST_CENTER           2

#define HINTERGRUND_X       0.35 * safezoneW + safezoneX
#define HINTERGRUND_Y       0.20 * safezoneH + safezoneY
#define HINTERGRUND_W       0.30 * safezoneW
#define HINTERGRUND_H       0.60 * safezoneH

class RB205notification_RscPicture
{
    access = 0;
    type = 0;

    style = 48;

    font = "PuristaMedium";
    sizeEx = 0;

    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};

    lineSpacing = 0;
    fixedWidth = 0;

    shadow = 0;

    text = "";
};


class RB205notification_RscText
{
    access = 0;
    type = 1;

    style = 48;

    font = "JLTS_republic";
    sizeEx = 0;

    colorBackground[] = {0,0,0,0};
    colorText[] = {0.75, 0.93, 1.00, 1};

    lineSpacing = 0;
    fixedWidth = 0;

    shadow = 0;

    text = "";
};

