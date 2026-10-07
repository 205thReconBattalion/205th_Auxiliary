/*
	Adds an alternative sprint animations (disabled by default)
	
	Made by WebKnight / Edited by Spark
*/

class cfgPatches
{
	class RB205_gameplayChanges_alternateSprintAnimation
	{
		requiredAddons[] =
		{
			"a3_anims_f"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers
{
	class RB205_altSprint_PreInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_gameplayChanges\alternateSprintAnimation\scripts\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_altSprint_PostInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_gameplayChanges\alternateSprintAnimation\scripts\XEH_postInit.sqf'";
	};
};

class CfgMovesBasic
{
	class Default;
	class StandBase;
	class HealBase: Default
	{
		disableWeapons=1;
		disableWeaponsLong=1;
		showWeaponAim=0;
		canPullTrigger=0;
		duty=0.2;
		limitGunMovement=0;
		aiming="empty";
		aimingBody="empty";
		actions="HealActionBase";
		looped=0;
	};
	class ManActions
	{
		WBK_Showdown_sraswrfld_Disable[]=
		{
			"WBK_Showdown_sraswrfld_Disable",
			"Gesture"
		};
		WBK_Showdown_Pistol_sraswrfld_Disable[]=
		{
			"WBK_Showdown_Pistol_sraswrfld_Disable",
			"Gesture"
		};
		WBK_Showdown_Idle[]=
		{
			"WBK_Showdown_Idle",
			"Gesture"
		};
		WBK_Showdown_Pistol_Idle[]=
		{
			"WBK_Showdown_Pistol_Idle",
			"Gesture"
		};
	};
};
class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class BlendAnims
	{
		wbk_showdown_mask_disable[]=
		{
			"RightHand",
			"MaskStart"
		};
		wbk_showdown_mask[]=
		{
			"weapon",
			1,
			"RightHand",
			"MaskStart"
		};
		wbk_showdown_pistol_mask[]=
		{
			"LeftShoulder",
			1,
			"LeftArm",
			1,
			"LeftArmRoll",
			1,
			"LeftForeArm",
			1,
			"LeftForeArmRoll",
			1,
			"LeftHand",
			1,
			"LeftHandRing",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandPinky2",
			1,
			"LeftHandPinky3",
			1,
			"LeftHandRing1",
			1,
			"LeftHandRing2",
			1,
			"LeftHandRing3",
			1,
			"LeftHandMiddle1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandIndex1",
			1,
			"LeftHandIndex2",
			1,
			"LeftHandIndex3",
			1,
			"LeftHandThumb1",
			1,
			"LeftHandThumb2",
			1,
			"LeftHandThumb3",
			1,
			"RightShoulder",
			1,
			"RightArm",
			1,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandRing",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			1,
			"Spine2",
			"MaskStart"
		};
	};
	class States
	{
		class WBK_Showdown_sraswrfld_Disable: Default
		{
			mask="wbk_showdown_mask_disable";
			speed=-0.1;
			file="\RB205_gameplayChanges\alternateSprintAnimation\anim\showdown_loop.rtm";
			disableWeapons=0;
			disableWeaponsLong=0;
			interpolationSpeed=3;
			interpolationRestart=2;
			enableOptics=1;
			weaponIK=1;
			looped="false";
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			preload=1;
		};
		class WBK_Showdown_Pistol_sraswrfld_Disable: WBK_Showdown_sraswrfld_Disable
		{
			file="\RB205_gameplayChanges\alternateSprintAnimation\anim\showdown_pistol_loop.rtm";
			enableOptics=2;
			weaponIK=2;
			mask="wbk_showdown_mask_disable";
		};
		class WBK_Showdown_Idle: WBK_Showdown_sraswrfld_Disable
		{
			interpolationSpeed=2;
			file="\RB205_gameplayChanges\alternateSprintAnimation\anim\showdown_loop.rtm";
			enableOptics=0;
			looped="true";
			speed=-0.1;
			mask="wbk_showdown_mask";
			headBobStrength=0;
			headBobMode=2;
			canPullTrigger=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			weaponIK=1;
			preload=1;
			disableWeaponsLong=1;
			disableWeapons=1;
		};
		class WBK_Showdown_Pistol_Idle: WBK_Showdown_sraswrfld_Disable
		{
			interpolationSpeed=2;
			file="\RB205_gameplayChanges\alternateSprintAnimation\anim\showdown_pistol_loop.rtm";
			enableOptics=0;
			looped="true";
			speed=-0.1;
			mask="wbk_showdown_pistol_mask";
			headBobStrength=0;
			headBobMode=2;
			canPullTrigger=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			weaponIK=2;
			preload=1;
			disableWeaponsLong=1;
			disableWeapons=1;
		};
	};
};