class RscTitles
{
    titles[] = {"RB205_notification"};

    class RB205_notification
    {
        idd = -1;
        movingEnable = 0;
        duration = 10; 
        fadeIn = 0;
        fadeOut = 0;
        name = "RB205_notification";
        onLoad = "uiNamespace setVariable ['RB205_notification', _this select 0]";
        onUnload = "uiNamespace setVariable ['RB205_notification', nil]";
        
        class controls
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
                text = "\RB205_notification\UIElements\Hintergrund.paa";
            };
            class dialogText : RB205notification_RscText
            {
                idc = 205101;
                x = TEXT_X;
                y = TEXT_Y;
                w = TEXT_W;
                h = TEXT_H;
            };
        };
    };
};