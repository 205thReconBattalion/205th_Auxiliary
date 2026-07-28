#define CT_STATIC           0
#define ST_LEFT             0x00    
#define ST_RIGHT            0x01    
#define ST_CENTER           0x02    
#define CT_STRUCTURED_TEXT  13

#define HINTERGRUND_X       0.35 * safezoneW + safezoneX
#define HINTERGRUND_Y       0.10 * safezoneH + safezoneY
#define HINTERGRUND_W       0.30 * safezoneW
#define HINTERGRUND_H       0.30 * safezoneH

#define TEXT_X              (HINTERGRUND_X + (HINTERGRUND_W * 0.1233))
#define TEXT_Y              (HINTERGRUND_Y + (HINTERGRUND_H * 0.2233))
#define TEXT_W              (HINTERGRUND_W * 0.7867)
#define TEXT_H              (HINTERGRUND_H * 0.5)

#define STANDARD_TEXT_FARBE "#2EB8FF"


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


    size = 0.03;

    text = "";
    colorBackground[] = {0,0,0,0};

    class Attributes
    {
        font = "EtelkaMonospacePro";
        color = STANDARD_TEXT_FARBE;          
        align = "center";
        valign = "middle";
        shadow = 2;
        shadowColor = "#000000";
        size = "1";
    };
};

