class CfgPatches
{
	class modCompats_717_ace_medical_gui_BodyImage
	{
		requiredAddons[] =
		{
			"ace_medical_gui",
            "Poly_AceEdit"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class RscPicture;
class RscControlsGroupNoScrollbars;
class ace_medical_gui_BodyImage: RscControlsGroupNoScrollbars
{
	idc = 6000;
	x = "((13.83) * ((	(safezoneW / safezoneH) min 1.2) / 40	) + 		(safezoneX + (safezoneW - (	(safezoneW / safezoneH) min 1.2))/ 2))";
	y = "((2.73) * 	(((	(safezoneW / safezoneH) min 1.2) / 1.2	) / 25) + 	(safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2)) / 2))";
	w = "((12.33) * ((	(safezoneW / safezoneH) min 1.2) / 40	))";
	h = "((12.33) * (((	(safezoneW / safezoneH) min 1.2) / 1.2	) / 25))";
	class controls
	{
		class Background: RscPicture
		{
			idc = -1;
			text = "\z\ace\addons\medical_gui\data\body_image\background.paa";
			x = 0;
			y = 0;
			w = "((12.33) * ((( safezoneW / safezoneH) min 1.2) / 40))";
			h = "((12.33) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Head: Background
		{
			idc = 6005;
			text = "\z\ace\addons\medical_gui\data\body_image\head.paa";
		};
		class Torso: Background
		{
			idc = 6010;
			text = "\z\ace\addons\medical_gui\data\body_image\torso.paa";
		};
		class ArmLeft: Background
		{
			idc = 6015;
			text = "\z\ace\addons\medical_gui\data\body_image\arm_left.paa";
		};
		class ArmRight: Background
		{
			idc = 6020;
			text = "\z\ace\addons\medical_gui\data\body_image\arm_right.paa";
		};
		class LegLeft: Background
		{
			idc = 6025;
			text = "\z\ace\addons\medical_gui\data\body_image\leg_left.paa";
		};
		class LegRight: Background
		{
			idc = 6030;
			text = "\z\ace\addons\medical_gui\data\body_image\leg_right.paa";
		};
		class ArmLeftB: Background
		{
			idc = 6055;
			text = "\z\ace\addons\medical_gui\data\body_image\arm_left_b.paa";
			colorText[] = {0,0,0.8,1};
			show = 0;
		};
		class ArmRightB: ArmLeftB
		{
			idc = 6060;
			text = "\z\ace\addons\medical_gui\data\body_image\arm_right_b.paa";
		};
		class LegLeftB: ArmLeftB
		{
			idc = 6065;
			text = "\z\ace\addons\medical_gui\data\body_image\leg_left_b.paa";
		};
		class LegRightB: ArmLeftB
		{
			idc = 6070;
			text = "\z\ace\addons\medical_gui\data\body_image\leg_right_b.paa";
		};
		class ArmLeftT: Background
		{
			idc = 6035;
			text = "\z\ace\addons\medical_gui\data\body_image\arm_left_t.paa";
			colorText[] = {0,0,0.8,1};
			show = 0;
		};
		class ArmRightT: ArmLeftT
		{
			idc = 6040;
			text = "\z\ace\addons\medical_gui\data\body_image\arm_right_t.paa";
		};
		class LegLeftT: ArmLeftT
		{
			idc = 6045;
			text = "\z\ace\addons\medical_gui\data\body_image\leg_left_t.paa";
		};
		class LegRightT: ArmLeftT
		{
			idc = 6050;
			text = "\z\ace\addons\medical_gui\data\body_image\leg_right_t.paa";
		};
	};
};