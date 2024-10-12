/*
	Deactivates Stamina (vanilla and ace)
*/

class cfgPatches
{
	class RB205_gameplayChanges_noStamina
	{
		requiredAddons[] =
        {
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
    noStamina_init="noStamina_init_var = [] execVM ""\RB205_gameplayChanges\noStamina\init.sqf""";
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