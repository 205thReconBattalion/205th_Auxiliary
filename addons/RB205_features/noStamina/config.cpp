class cfgPatches
{
	class RB205_noStamina
	{
		requiredAddons[] =
		{			
            "Extended_EventHandlers",
            "ace_advanced_fatigue"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_PreInit_EventHandlers
{
    205th_Init="205th_Init_Var = [] execVM ""\RB205_features\noStamina\init.sqf""";
    class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue="";
	};
}