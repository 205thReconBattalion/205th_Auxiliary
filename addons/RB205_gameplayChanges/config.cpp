class cfgPatches
{
	class RB205_gameplayChanges
	{
		requiredAddons[] =
        {
            "A3_Ui_F" //> quickJoinButton.hpp
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

#include "noWeaponSway.hpp"
#include "quickJoinButton.hpp"