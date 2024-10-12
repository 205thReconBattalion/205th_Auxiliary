/*
	Speeds Up the swimming animations and changes every uniform into a neopren suit
*/

class cfgPatches
{
	class RB205_gameplayChanges_fasterSwimming
	{
		requiredAddons[] =
        {
			"A3_Characters_F",
            "A3_Anims_F_Config_Sdr"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = 
		{
			"Uniform_Base"
		};
	};
};

class CfgWeapons
{
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
		uniformType = "Neopren";
	};
	class ItemCore;
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			uniformType = "Neopren";
			mass = 0;
		};
	};
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
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