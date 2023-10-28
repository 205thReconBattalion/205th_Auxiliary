class cfgPatches
{
	class RB205_smokeEffectEnhancements
	{
		requiredAddons[] = {};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAmmo {
	class SmokeShell;
	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
};

class cfgCloudlets
{
	class Default;
	class SmokeShellWhite: Default
	{
		moveVelocity[]={0.2,0.50000001,0.1};//{0.2,0.1,0.1}
		size[]={0.36,3.5,12};//{0.1,2,6}
		MoveVelocityVar[]={0.7,0.4,0.7};//{0.25,0.25,0.25}
	};
};