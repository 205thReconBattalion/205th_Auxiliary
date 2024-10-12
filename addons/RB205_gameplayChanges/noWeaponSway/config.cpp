class cfgPatches
{
	class RB205_gameplayChanges_noWeaponSway
	{
		requiredAddons[] =
        {
            "A3_Data_F"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

/*
	Deactivates Weapon Sway
*/

class CfgImprecision
{
	class Primary
	{
		horizontalRadius=0;
        verticalRadius  =0;
	};
	class Secondary
	{
		horizontalRadius=0;
        verticalRadius  =0;
	};
};