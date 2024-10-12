class cfgPatches
{
	class RB205_gameplayChanges_noSmokeUGLBounce
	{
		requiredAddons[] =
        {
            "A3_Weapons_F"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

/*
	Deactivates the bouncing of UGL smoke grenades
*/

class CfgAmmo
{
	class SmokeShell;
	class G_40mm_Smoke: SmokeShell
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
};