class CfgPatches
{
	class modCompats_717_stanceIndicator
	{
		requiredAddons[] =
		{
			"Poly_Core"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class CfgInGameUI
{
	class Cursor
	{
		customMark = "\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa";
	};
	class CfgStanceIndicatorTextures
	{
		class Normal
		{
			textureProne="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_ca.paa";
			textureProneAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_down_ca.paa";
			textureProneAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_up_ca.paa";
			textureProneAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_left_ca.paa";
			textureProneAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_right_ca.paa";
			textureCrouch="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_ca.paa";
			textureCrouchAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_down_ca.paa";
			textureCrouchAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_up_ca.paa";
			textureCrouchAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_left_ca.paa";
			textureCrouchAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_right_ca.paa";
			textureStand="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_ca.paa";
			textureStandAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_down_ca.paa";
			textureStandAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_up_ca.paa";
			textureStandAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_left_ca.paa";
			textureStandAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_right_ca.paa";
		};
		class Rested
		{
			textureProne="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_ca.paa";
			textureProneAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_down_ca.paa";
			textureProneAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_up_ca.paa";
			textureProneAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_left_ca.paa";
			textureProneAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_right_ca.paa";
			textureCrouch="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_ca.paa";
			textureCrouchAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_down_ca.paa";
			textureCrouchAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_up_ca.paa";
			textureCrouchAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_left_ca.paa";
			textureCrouchAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_right_ca.paa";
			textureStand="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_ca.paa";
			textureStandAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_down_ca.paa";
			textureStandAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_up_ca.paa";
			textureStandAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_left_ca.paa";
			textureStandAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_right_ca.paa";
		};
		class Deployed
		{
			textureProne="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureCrouch="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureStand="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
		};
		class CanDeploy
		{
			textureProne="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_ca.paa";
			textureProneAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_down_ca.paa";
			textureProneAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_up_ca.paa";
			textureProneAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_left_ca.paa";
			textureProneAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_right_ca.paa";
			textureCrouch="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_ca.paa";
			textureCrouchAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_down_ca.paa";
			textureCrouchAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_up_ca.paa";
			textureCrouchAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_left_ca.paa";
			textureCrouchAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_right_ca.paa";
			textureStand="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_ca.paa";
			textureStandAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_down_ca.paa";
			textureStandAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_up_ca.paa";
			textureStandAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_left_ca.paa";
			textureStandAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_right_ca.paa";
		};
		class RestedCanDeploy
		{
			textureProne="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_ca.paa";
			textureProneAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_down_ca.paa";
			textureProneAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_up_ca.paa";
			textureProneAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_left_ca.paa";
			textureProneAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_right_ca.paa";
			textureCrouch="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_ca.paa";
			textureCrouchAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_down_ca.paa";
			textureCrouchAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_up_ca.paa";
			textureCrouchAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_left_ca.paa";
			textureCrouchAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_right_ca.paa";
			textureStand="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_ca.paa";
			textureStandAdjustDown="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_down_ca.paa";
			textureStandAdjustUp="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_up_ca.paa";
			textureStandAdjustLeft="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_left_ca.paa";
			textureStandAdjustRight="\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_right_ca.paa";
		};
	};
};
