class RB205_notification
{
    idd = 205100;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground
    {

        class DialogBackground: RB205notification_RscPicture
        {
            idc = -1;
            x = HINTERGRUND_X;
            y = HINTERGRUND_Y;
            w = HINTERGRUND_W;
            h = HINTERGRUND_H;
            colorBackground[] = {0,0,0,0.6};
            colorText[] = {1,1,1,0.7};
            text = "RB205_notification\UIElements\Hintergrund.paa";
        };
    };

    class controls
    {
        class dialogText : RB205notification_RscText
        {
            idc = 205101;
            x = HINTERGRUND_X + 0.03;
            y = HINTERGRUND_Y + 0.03;
            w = HINTERGRUND_W - 0.06;
            h = HINTERGRUND_H - 0.06;
        };
    };
};