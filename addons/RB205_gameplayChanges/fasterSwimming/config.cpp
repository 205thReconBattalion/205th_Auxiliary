class cfgPatches
{
	class RB205_gameplayChanges_fasterSwimming
	{
		requiredAddons[] =
        {
            "A3_Anims_F_Config_Sdr"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

/*
	Speeds Up the swimming animations and changes every uniform into a neopren suit
*/

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		//speed = 0.14336; - Standard
		//speed = 0.25     -
		//speed = 0.3;     - Zu Schnell

		class AdvePercMrunSnonWnonDf;
		class AdvePercMsprSnonWnonDf: AdvePercMrunSnonWnonDf
		{
			speed = 0.25
		};
		class AdvePercMrunSnonWrflDf;
		class AdvePercMsprSnonWrflDf: AdvePercMrunSnonWrflDf
		{
			speed = 0.25
		};
		class AbdvPercMrunSnonWnonDf;
		class AbdvPercMsprSnonWnonDf: AbdvPercMrunSnonWnonDf
		{
			speed = 0.25
		};
		class AbdvPercMrunSnonWrflDf;
		class AbdvPercMsprSnonWrflDf: AbdvPercMrunSnonWrflDf
		{
			speed = 0.25
		};
		class AsdvPercMrunSnonWnonDf;
		class AsdvPercMsprSnonWnonDf: AsdvPercMrunSnonWnonDf
		{
			speed = 0.25
		};
		class AsdvPercMrunSnonWrflDf;
		class asdvpercmsprsnonwrfldf: AsdvPercMrunSnonWrflDf
		{
			speed = 0.25
		};
	};
};