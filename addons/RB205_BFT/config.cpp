class CfgPatches
{
	class RB205_BFT
	{
		requiredAddons[] = {};
		requiredVersion = 1.0;
        author = "Putzi";
		units[] = {};
	};
};

class CfgFunctions
{
	class RB205_BFT
	{
		class BlueforceTracking
		{
			file = "\RB205_BFT\functions";
			class openDialog{};
			class onSelectGroup{};
			class onBtnClickJoin{};
		};
	};
};

#include "UIElements\GUI\defines.hpp"
#include "UIElements\GUI\dialog.hpp"