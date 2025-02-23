#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class twc_2inch
	{
		units[]=
		{
			"twc_2inch_vehicle"
		};
		weapons[]=
		{
			"twc_2inch_weapon",
			"twc_2inch_bag"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_static_f",
			"A3_weapons_f",
			"cba_main",
			"A3_Data_F"
		};
		magazines[]=
		{
			"twc_2inch_he_1rnd",
			"twc_2inch_smoke_1rnd",
			"twc_2inch_illum_1rnd"
		};
		ammo[]=
		{
			"twc_2inch_he",
			"twc_2inch_smoke_submunition",
			"twc_2inch_smoke",
			"twc_2inch_illum"
		};
	};
};
class CfgFunctions
{
	class twc_2inch
	{
		class functions
		{
			file="twc_2inch\functions";
			class ui
			{
			};
			class deploy
			{
			};
			class rangetable
			{
			};
			class fire
			{
			};
			class init
			{
			};
			class getout
			{
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class twc_2inch
	{
		init="_this call twc_2inch_fnc_init";
	};
};
class Extended_GetOut_Eventhandlers
{
	class twc_2inch_vehicle
	{
		class twc_2inch
		{
			getout="_this call twc_2inch_fnc_getout";
		};
	};
};
class Extended_FiredBIS_EventHandlers
{
	class twc_2inch_vehicle
	{
		class twc_2inch
		{
			firedBIS="_this call twc_2inch_fnc_fire";
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		twc_2inch_Gunner="twc_2inch_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class twc_2inch_Gunner: Crew
		{
			file="\twc_2inch\twc_2inch.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKCurve[]={1};
			righHandIKBeg=1;
			righHandIKEnd=1;
		};
	};
};
class RscFrame;
class RscText;
class RscPicture;
class RscListbox;
class RscListNBox;
class RscControlsGroup;

//RAHMEN:
#define X_RA x="0.71 * safezoneW";
#define Y_RA y="0.905 * safeZoneH";
//TEXT:
#define X_LEFT x="0.712 * safezoneW";
#define X_RIGHT x="0.75 * safezoneW";
#define Y_TOP y="0.907 * safeZoneH";
#define Y_BOTTOM y="0.941 * safeZoneH";

class RscInGameUI
{
	class RscWeaponRangeArtillery;
	class twc_2inch_ui: RscWeaponRangeArtillery
	{
		idd=-1;
		movingenable=0;
		onLoad="uiNamespace setVariable ['twc_2inch_RscWeaponRangeArtillery', _this select 0];";
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
			class Controls
			{
				class RscFrame_4210: RscFrame
				{
					idc=4210;
					type=0;
					style=80;
					X_RA
					Y_RA
					/*x="0.2 * safezoneW";
					y="0.8 * safeZoneH";*/
					w="0.08 * safezoneW";
					h="0.07 * safezoneH";
					sizeEx="0.9 * GUI_GRID_H";
					colorText[]={0.094,0.094,0.094,1};//colorText[]={1,1,1,1};
					colorBackground[]={1,1,1,1};//colorBackground[]={0,0,0,1};
				};
				class RscText_4211: RscText
				{
					idc=4211;
					text="ELEV:";
					shadow=0;
					X_LEFT
					Y_TOP
					/*x="0.202 * safezoneW";
					y="0.802 * safeZoneH";*/
					w="0.038 * safezoneW";
					h="0.032 * safezoneH";
					sizeEx="0.02 * safezoneW";
					colorBackground[]={0.094,0.094,0.094,1};//colorBackground[]={1,1,1,1};
					colorText[]={1,1,1,1};//colorText[]={0,0,0,1};
				};
				class RscText_4212: RscText
				{
					idc=4212;
					text="DIR:";
					shadow=0;
					X_LEFT
					Y_BOTTOM
					/*x="0.202 * safezoneW";
					y="0.836 * safeZoneH";*/
					w="0.038 * safezoneW";
					h="0.032 * safezoneH";
					sizeEx="0.02 * safezoneW";
					colorBackground[]={0.094,0.094,0.094,1};//colorBackground[]={1,1,1,1};
					colorText[]={1,1,1,1};//colorText[]={0,0,0,1};
				};
				class RscText_4213: RscText
				{
					idc=4213;
					text="750";
					shadow=0;
					X_RIGHT
					Y_TOP
					/*x="0.240 * safezoneW";
					y="0.802 * safeZoneH";*/
					w="0.038 * safezoneW";
					h="0.032 * safezoneH";
					sizeEx="0.02 * safezoneW";
					colorBackground[]={0.094,0.094,0.094,1};//colorBackground[]={1,1,1,1};
					colorText[]={1,1,1,1};//colorText[]={0,0,0,1};
				};
				class RscText_4214: RscText
				{
					idc=4214;
					text="361";
					shadow=0;
					X_RIGHT
					Y_BOTTOM
					/*x="0.240 * safezoneW";
					y="0.836 * safeZoneH";*/
					w="0.038 * safezoneW";
					h="0.032 * safezoneH";
					sizeEx="0.02 * safezoneW";
					colorBackground[]={0.094,0.094,0.094,1};//colorBackground[]={1,1,1,1};
					colorText[]={1,1,1,1};//colorText[]={0,0,0,1};
				};
				class TheTable: RscListNBox
				{
					idc=4215;
					x="0.79 * safezoneW";
					y="0.635 * safeZoneH";
					w="0.2 * safezoneW";
					h="0.34 * safezoneH";
					columns[]=
					{
						"(30/696)",//(0/696)
						"(131/696)",//(121/696)
						"(262/696)",//(232/696)
						"(368/696)",//(348/696)
						"(474/696)" //(454/696)
					};
					font="EtelkaMonospacePro";
					sizeEx="0.018 * safezoneW";
					drawSideArrows=0;
					idcLeft=-1;
					idcRight=-1;
					colorText[]={1,1,1,1};//colorText[]={0,0,0,1};
					shadow="0";
					colorSelectBackground[]={0,0,0,0.025};
					colorSelectBackground2[]={0,0,0,0.025};
					colorScrollbar[]={0,0,0,0};
					arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
					arrowFull="#(argb,8,8,3)color(1,1,1,1)";
					class ScrollBar
					{
						arrowEmpty="#(argb,0,0,0)color(0,0,0,0)";
						arrowFull="#(argb,0,0,0)color(0,0,0,0)";
						border="#(argb,0,0,0)color(0,0,0,0)";
						color[]={0,0,0,0};
						colorActive[]={0,0,0,0};
						colorDisabled[]={0,0,0,0};
						thumb="#(argb,0,0,0)color(0,0,0,0)";
					};
				};
				class TableBackground: RscPicture
				{
					idc=-1;
					text="twc_2inch\data\RangeTable_background.paa";
					x="0.8 * safezoneW";
					y="0.57 * safeZoneH";
					w="0.164 * safezoneW";
					h="0.4 * safezoneH";
					colorBackground[]={1,1,1,1};
				};
			};
		};
		class CA_RangeElements_group: CA_IGUI_elements_group
		{
			class Controls
			{
			};
		};
	};
};
class TWC_2inch_WP
{
	class LightExp
	{
		intensity=0.001;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="light";
		type="ExploLight";
	};
	class MortarSmoke1
	{
		intensity=1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="particles";
		type="CloudMedDark";
	};
	class Cloud
	{
		intensity=1;
		interval=1;
		lifeTime=180;//lifeTime=48;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="TWC_2inch_WPCloud";
	};
	class Trails
	{
		intensity=1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="TWC_2inch_WPTrails";
	};
};
class CfgCloudlets
{
	class WPCloud;
	class WPTrails;
	class TWC_2inch_WPTrails: WPTrails
	{
	};
	class TWC_2inch_WPCloud: WPCloud
	{
		moveVelocity[]={0,0.25,0};
		moveVelocityVar[]={0.25,0.25,0.25};
		particleFSFrameCount=8;
		randomDirectionIntensity=0.039999999;
		rotationVelocity=1;
		size[]={2,4,8,16,18,20,21,22};
		rubbing=0.050000001;
		blockAIVisibility=1;
	};
};
class CfgAmmo
{
	class Sh_82mm_AMOS;
	class Flare_82mm_AMOS_White;
	class Smoke_82mm_AMOS_White;
	class SmokeShellArty;
	class twc_2inch_he: Sh_82mm_AMOS
	{
		//model="\twc_2inch\twc_2inch_shell_he.p3d";
		hit=40;//90
		indirectHit=25;//40
		indirectHitRange=10;//16
		fuseDistance=3;

		//LS (?):
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,250};
		soundHit1[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit1.wss",2.51189,1,1900};
		soundHit2[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit2.wss",2.51189,1,1900};
		soundHit3[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit3.wss",2.51189,1,1900};
		soundHit4[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit4.wss",2.51189,1,1900};
		soundHit5[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit5.wss",2.51189,1,1900};

		//OPTRE_FC ():
		explosionEffects = "ImpactPlasmaExpBlueBig";
		explosionSoundEffect = "{""\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg"",1.4,1,2000}";
		soundImpact[] = {"",1,1};
		SoundSetExplosion[] = {"\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,2000};
		soundFall[] = {"",1,1};
		//soundHit[] = {"",316.228,1};
		//soundHit1[] = {"\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900};
		//soundHit2[] = {"\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900};
		//soundHit3[] = {"\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900};
		//soundHit4[] = {"\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900};

		model = "\OPTRE_FC_Weapons\data\bolt_blue.p3d";
		//model = "\OPTRE_FC_Weapons\data\bolt_blue_large.p3d";
		//model = "\OPTRE_FC_Weapons\data\bolt_red.p3d";
	};
	class twc_2inch_smoke_submunition: SmokeShellArty
	{
		model="\twc_2inch\twc_2inch_shell_smoke.p3d";
		effectsSmoke="TWC_2inch_WP";
		ExplosionEffects="TWC_2inch_WP";
	};
	class twc_2inch_smoke: Smoke_82mm_AMOS_White
	{
		model="\twc_2inch\twc_2inch_shell_smoke.p3d";
		effectsSmoke="TWC_2inch_WP";
		ExplosionEffects="TWC_2inch_WP";
		fuseDistance=3;
		submunitionAmmo="twc_2inch_smoke_submunition";
	};
	class twc_2inch_illum: Flare_82mm_AMOS_White
	{
		model="\twc_2inch\twc_2inch_shell_illum.p3d";
		/*timeToLive=60;
		fuseDistance=3;
		brightness=4;
		intensity=2000000;*/
		timeToLive = 90;
        brightness = 80000;
		intensity  = 200000;
        flareSize  = 50;
	};
};
class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Smoke_white;
	class 8Rnd_82mm_Mo_Flare_white;
	class twc_2inch_he_1rnd: 8Rnd_82mm_Mo_shells
	{
		displayname = "1Rnd HE";
		DLC="twc_config";
		count = 1;
		ammo = "twc_2inch_he";
		scope=2;
		scopeCurator=2;
		weaponPoolAvailable=1;
		author="[TWC] Rik & [TWC] lockoncap";
		displayNameShort = "HE";
		descriptionShort = "HE round for the DF-90C Mortar";
		model="\twc_2inch\twc_2inch_shell_he.p3d";
		picture="\twc_2inch\data\ui\205_logo.paa";
		mass = 1;//mass=3;
		type=256;
		initSpeed=80;
	};
	class twc_2inch_smoke_1rnd: 8Rnd_82mm_Mo_Smoke_white
	{
		displayname = "1Rnd Smoke";
		DLC="twc_config";
		count = 1;
		ammo = "twc_2inch_smoke";
		scope=2;
		scopeCurator=2;
		weaponPoolAvailable=1;
		author="[TWC] Rik & [TWC] lockoncap";
		displayNameShort = "Smoke";
		descriptionShort = "Smoke round for the DF-90C Mortar";
		model="\twc_2inch\twc_2inch_shell_smoke.p3d";
		picture="\twc_2inch\data\ui\205_logo.paa";
		mass = 1;//mass=1;
		type=256;
		initSpeed=80;
	};
	class twc_2inch_illum_1rnd: 8Rnd_82mm_Mo_Flare_white
	{
		displayname = "1Rnd Illum";
		DLC="twc_config";
		count = 1;
		ammo = "twc_2inch_illum";
		scope=2;
		scopeCurator=2;
		weaponPoolAvailable=1;
		author="[TWC] Rik & [TWC] lockoncap";
		displayNameShort = "Illum";
		descriptionShort = "Illum round for the DF-90C Mortar";
		model="\twc_2inch\twc_2inch_shell_illum.p3d";
		picture="\twc_2inch\data\ui\205_logo.paa";
		mass = 1;//mass=1;
		type=256;
		initSpeed=80;
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponsSlotsInfo;
	};
	class twc_2inch_bag: Launcher_Base_F
	{
		author="[TWC] Rik & [TWC] lockoncap";
		scope=2;
		displayname="[205] DF-90C Mortar";
		model="twc_2inch\twc_2inch_bag.p3d";
		picture="\twc_2inch\data\ui\205_logo.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		magazines[]=
		{
			"twc_2inch_he_1rnd",
			"twc_2inch_smoke_1rnd",
			"twc_2inch_illum_1rnd"
		};
		handAnim[]={};
		class weaponSlotsInfo: WeaponsSlotsInfo
		{
			mass=105.8;
		};
	};
	class CannonCore;
	class mortar_82mm: CannonCore
	{
		class Single1;
		class Single2;
		class Single3;
	};
	class twc_2inch_weapon: mortar_82mm //LS: ls_weapon_mortarLauncher
	{
		displayname="DF-90C Mortar";
		ballisticsComputer=0;
		drySound[] = {"",1,1};
		emptySound[] = {"",1,1};
		sound[] = {"",1,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBullet[] = {"emptySound",1};
		soundBurst = 1;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundLoop[] = {"sound",1};
		sounds[] = {"StandardSound"};
		soundServo[] = {"",0.0001,1};
		weaponSoundEffect = "";
		reloadTime = 1.8;
		magazineReloadTime = 3;
		reloadSound[] = {"\swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss",2,1,20};
		reloadMagazineSound[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reloadMagazine.wss",1,1,20};
		magazines[]=
		{
			"twc_2inch_he_1rnd",
			"twc_2inch_smoke_1rnd",
			"twc_2inch_illum_1rnd"
		};
		initSpeed=80;
		class Single1: Single1
		{
			displayname="";
			artilleryCharge=1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss",1.5,1,250};
				begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss",1.5,1,250};
				begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss",1.5,1,250};
				begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss",1.5,1,250};
				begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss",1.5,1,250};
				soundBegin[] = {"begin1",0.15,"begin2",0.25,"begin3",0.1,"begin4",0.3,"begin5",0.2};
			};
		};
		class Single2: Single2
		{
			showToPlayer=0;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss",1.5,1,250};
				begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss",1.5,1,250};
				begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss",1.5,1,250};
				begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss",1.5,1,250};
				begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss",1.5,1,250};
				soundBegin[] = {"begin1",0.15,"begin2",0.25,"begin3",0.1,"begin4",0.3,"begin5",0.2};
			};
		};
		class Single3: Single3
		{
			showToPlayer=0;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss",1.5,1,250};
				begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss",1.5,1,250};
				begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss",1.5,1,250};
				begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss",1.5,1,250};
				begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss",1.5,1,250};
				soundBegin[] = {"begin1",0.15,"begin2",0.25,"begin3",0.1,"begin4",0.3,"begin5",0.2};
			};
		};
		class StandardSound
		{
			begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss",1.5,1,250};
			begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss",1.5,1,250};
			begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss",1.5,1,250};
			begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss",1.5,1,250};
			begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss",1.5,1,250};
			soundBegin[] = {"begin1",0.15,"begin2",0.25,"begin3",0.1,"begin4",0.3,"begin5",0.2};
		};
		
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
			};
		};
	};
	class twc_2inch_vehicle: Mortar_01_base_F
	{
		displayname="DF-90C Mortar";
		author="[TWC] Rik & [TWC] lockoncap";
		model="twc_2inch\twc_2inch.p3d";
		artilleryScanner=0;
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
		class assembleInfo
		{
			assembleTo="";
			base="";
			displayName="";
			dissasembleTo[]={};
			primary=0;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initElev=-30;
				maxelev=0;
				minelev=-88;
				weapons[]=
				{
					"twc_2inch_weapon"
				};
				magazines[]={};
				gunnerAction="twc_2inch_Gunner";
				gunnerRightHandAnimName="OtocHlaven";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				turretInfoType="twc_2inch_ui";
				elevationAnimSourceSpeed=10;
				maxHorizontalRotSpeed=4;
				maxVerticalRotSpeed=4;
				animationSourceElevation="elevBarrel";
				memoryPointGunnerOptics="AimPoint";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=45;
					initFov=0.69999999;
					minFov=0.69999999;
					maxFov=0.69999999;
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
	};
};
