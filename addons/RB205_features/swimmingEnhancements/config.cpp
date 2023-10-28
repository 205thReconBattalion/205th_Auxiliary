class cfgPatches
{
	class RB205_swimmingEnhancements
	{
		requiredAddons[] = {};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};


class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class U_BasicBody;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
		uniformType="Neopren";
	};
	class Uniform_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			uniformType="Neopren";
			mass=0;
		};
	};
	class U_BasicBody_Swim: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Underwear1";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Underwear_F";
			containerClass="Supply0";
			uniformType="Neopren";
			mass=5;
		};
	};
};


class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AdvePercMrunSnonWnonDf;
		class AdvePercMrunSnonWrflDf;
		class AbdvPercMrunSnonWnonDf;
		class AbdvPercMrunSnonWrflDf;
		class AsdvPercMrunSnonWnonDf;
		class AsdvPercMrunSnonWrflDf;

		//speed = 0.14336; - Standard
		//speed = 0.25     -
		//speed = 0.3;     - Zu Schnell

		class AdvePercMsprSnonWnonDf: AdvePercMrunSnonWnonDf
		{
			speed = 0.25
		};
		class AdvePercMsprSnonWrflDf: AdvePercMrunSnonWrflDf
		{
			speed = 0.25
		};

		class AbdvPercMsprSnonWnonDf: AbdvPercMrunSnonWnonDf
		{
			speed = 0.25
		};
		class AbdvPercMsprSnonWrflDf: AbdvPercMrunSnonWrflDf
		{
			speed = 0.25
		};

		class AsdvPercMsprSnonWnonDf: AsdvPercMrunSnonWnonDf
		{
			speed = 0.25
		};
		class asdvpercmsprsnonwrfldf: AsdvPercMrunSnonWrflDf
		{
			speed = 0.25
		};
	};
};