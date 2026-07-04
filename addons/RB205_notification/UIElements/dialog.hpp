class RB205_notification
{
    idd = 205530;
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


    };
};