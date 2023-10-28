class cfgPatches
{
	class RB205_fasterBandaging
	{
		requiredAddons[] =
		{
			"ace_medical_treatment"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class ace_medical_treatment_actions
{
	class BasicBandage
	{
		treatmentTime="0.4 * (call ace_medical_treatment_fnc_getBandageTime)";
	};
	class PersonalAidKit: BasicBandage
	{
		treatmentTime="0.1 * (call ace_medical_treatment_fnc_getHealTime)";
	};
};