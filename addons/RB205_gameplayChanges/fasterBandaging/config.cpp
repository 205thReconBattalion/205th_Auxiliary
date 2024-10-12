/*
	Increases the bandiging time and the time needed to use the personal aid kit
*/
/*
class cfgPatches
{
	class RB205_gameplayChanges_fasterBandaging
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