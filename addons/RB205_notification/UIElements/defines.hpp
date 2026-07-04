#define CT_STATIC           0
#define ST_CENTER           2
#define CT_STRUCTURED_TEXT  13

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
    type = CT_STRUCTURED_TEXT;
    idc = -1;
    style = ST_CENTER;


    size = 0.04;

    text = "";
    colorBackground[] = {0,0,0,0};

    class Attributes
    {
        font = "JLTS_republic";
        color = "#BFEFFF";          
        align = "center";
        valign = "middle";
        shadow = 2;
        shadowColor = "#000000";
        size = "1";
    };
};

