class CfgPatches
{
    class RB205_notification
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
    };
};



class CfgFunctions
{
	class RB205_notification
	{
		class notification
		{
			file = "\RB205_notification\functions";
			class openDialog{};
			class openDialogSlow{};
		};
	};
};

#include "\RB205_notification\UIElements\defines.hpp"
#include "\RB205_notification\UIElements\dialog.hpp"