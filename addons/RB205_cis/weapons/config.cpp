class cfgPatches
{
	class RB205_cis_weapons
	{
		requiredAddons[] =
        {
            "RB205_cis",
            "JLTS_weapons_E5",
            "JLTS_weapons_E5C",
            "JLTS_weapons_E5S",
            "JLTS_weapons_RG4D",
            "JLTS_weapons_E60R",
            "3AS_Weapons",
            "3AS_Weapons_E5",
            "3AS_Weapons_DWBlaster"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
        {
            "RB205_E5",
            "RB205_E5_commando",
            "RB205_E5_commando_shield",
            "RB205_E5C",
            "RB205_E5C_stock",
            "RB205_E5S",
            "RB205_B2_wristBlaster",
            "RB205_RG4D",
            "RB205_RPS6_CIS",
            "RB205_E60R"
        };
	};
};

#include "emp_compat.hpp"

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
    class arifle_MX_Base_F;
    class JLTS_E5: arifle_MX_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
        class fullauto_medium: FullAuto
        {
            class StandardSound;
        };
        class WeaponSlotsInfo;
    };

    class RB205_E5: JLTS_E5
    {
        displayName = "[CIS] E-5 Blaster Rifle";
        magazines[] =
        {
            "RB205_E5_mag"
        };
        JLTS_friedItem = "RB205_E5_fried";
        JLTS_canHaveShield = 0;
    };
    FRIED_WEAPON(RB205_E5,"\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa")
    class RB205_E5_commando: JLTS_E5
    {
        displayName = "[CIS] E-5 Blaster Rifle (Commando)";
        JLTS_friedItem = "RB205_E5_commando_fried";
        JLTS_shieldedWeapon = "RB205_E5_commando_shield";
        canShootInWater = 1;
        magazines[] =
        {
            "RB205_E5_commando_mag",
            "RB205_E5_mag"
        };
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"\RB205_cis\weapons\sounds\E5_commando.wss","+3db",1,2200};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"\RB205_cis\weapons\sounds\E5_commando.wss","+3db",1,2200};
            };
        };
        class fullauto_medium: fullauto_medium
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"\RB205_cis\weapons\sounds\E5_commando.wss","+3db",1,2200};
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot;
        };
    };
    FRIED_WEAPON(RB205_E5_commando,"\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa")
    class RB205_E5_commando_shield: RB205_E5_commando
    {
        displayName = "[CIS] E-5 Blaster Rifle (Commando) (Shield)";
        baseWeapon = "RB205_E5_commando_shield";
        JLTS_baseWeapon = "RB205_E5_commando";
        JLTS_friedItem = "RB205_E5_commando_shield_fried";
        JLTS_isShielded = 1;

        scope = 1;
        model = "\MRC\JLTS\weapons\E5\E5_shielded.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"};
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E5\data\E5_co.paa"};
        recoil = "recoil_pdw";
        inertia = 0.8;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 110;
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {"JLTS_riot_shield_droid_attachment"};
            };
        };
        class LinkedItems
		{
			class LinkedItemsUnderBarrel
			{
				item = "JLTS_riot_shield_droid_attachment";
				slot = "UnderBarrelSlot";
			};
		};
    };
    FRIED_WEAPON(RB205_E5_commando_shield,"\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa")

    class JLTS_E5C;
    class RB205_E5C: JLTS_E5C
    {
        displayName = "[CIS] E-5C Heavy Blaster Rifle";
        baseWeapon = "RB205_E5C";
        magazines[] =
        {
            "RB205_E5C_mag"
        };
        fireLightDiffuse[] = {1,0,0};
        JLTS_friedItem = "RB205_E5C_fried";
    };
    FRIED_WEAPON(RB205_E5C,"\MRC\JLTS\weapons\e5c\data\ui\e5c_fried_ui_ca.paa")

    class JLTS_E5C_stock;
    class RB205_E5C_stock: JLTS_E5C_stock
    {
        displayName = "[CIS] E-5C Heavy Blaster Rifle (Stock)";
        baseWeapon = "RB205_E5C_stock";
        magazines[] =
        {
            "RB205_E5C_mag"
        };
        fireLightDiffuse[] = {1,0,0};
        JLTS_friedItem = "RB205_E5C_stock_fried";
    };
    FRIED_WEAPON(RB205_E5C_stock,"\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_fried_ui_ca.paa")

    class JLTS_E5S;
    class RB205_E5S: JLTS_E5S
    {
        displayName = "[CIS] E-5S Sniper Rifle";
        baseWeapon = "RB205_E5S";
        magazines[] =
        {
            "RB205_E5S_mag"
        };
        fireLightDiffuse[] = {1,0,0};
        JLTS_friedItem = "RB205_E5S_fried";
    };
    FRIED_WEAPON(RB205_E5S,"\MRC\JLTS\weapons\E5S\data\ui\E5S_fried_ui_ca.paa")

    class 3AS_E5_Base_F;
    class 3AS_E5_F: 3AS_E5_Base_F
    {
        class Single: Mode_SemiAuto {};
    };

    class RB205_B2_wristBlaster: 3AS_E5_F
    {
        displayName = "[CIS] B2 Wrist Blaster";
        picture = "\3AS\3AS_Weapons\DWBlaster\Data\UI\3as_b2arm.paa";
        model="WebKnightsRobotics\WBK_b2_weap.p3d";
        magazines[] =
        {
            "RB205_B2_mag"
        };
        modes[] = {"Single"};
        class Single: Single
        {
            reloadTime=0.8;
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[]=
                {
                    "RB205_B2_SoundSet"
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[]=
                {
                    "RB205_B2_SoundSet"
                };
            };
        };
    };

    class JLTS_RG4D;
    class RB205_RG4D: JLTS_RG4D
    {
        displayName = "[CIS] RG-4D Blaster Pistol";
        baseWeapon = "RB205_RG4D";
        magazines[] =
        {
            "RB205_RG4D_mag"
        };
        JLTS_friedItem = "RB205_RG4D_fried";
    };
    FRIED_WEAPON_SECONDARY(RB205_RG4D,"\MRC\JLTS\weapons\RG4D\data\ui\RG4D_fried_ui_ca.paa")

    class JLTS_RPS6;
    class RB205_RPS6_CIS: JLTS_RPS6
    {
        displayName = "[CIS] RPS-6 Rocket Launcher";
        baseWeapon = "RB205_RPS6_CIS";
        magazines[] =
        {
            "RB205_RPS6_AT_mag"
        };
        JLTS_hasEMPProtection = 1;
        JLTS_friedItem = "";
    };

    class JLTS_E60R_AT;
    class RB205_E60R: JLTS_E60R_AT
    {
        displayName = "[CIS] E-60R Missile Launcher";
        baseWeapon = "RB205_E60R";
        magazines[] =
        {
            "RB205_E60R_AA_mag",
            "RB205_E60R_AP_mag"
        };
    };
};

class CfgMagazines
{
    class JLTS_E5_mag;
    class RB205_E5_mag: JLTS_E5_mag
    {
        displayName = "E-5 Energy Cell";
        ammo = "RB205_E5_ammo";
    };
    class RB205_E5_commando_mag: JLTS_E5_mag
    {
        displayName = "E-5 (Commando) Energy Cell";
        ammo = "RB205_E5_commando_ammo";
    };

    class JLTS_e5c_mag;
    class RB205_E5C_mag: JLTS_e5c_mag
    {
        displayName = "E-5C Energy Cell";
        ammo = "RB205_E5_ammo";
    };

    class JLTS_E5S_mag;
    class RB205_E5S_mag: JLTS_E5S_mag
    {
        displayName = "E-5S Energy Cell";
        ammo = "RB205_E5S_ammo";
    };

    class 3AS_500Rnd_EM30_mag;
    class RB205_B2_mag: 3AS_500Rnd_EM30_mag
    {
        displayName = "[CIS] Wrist Blaster Energy Cell";
        ammo = "RB205_B2_ammo";
    };

    class JLTS_RG4D_mag;
    class RB205_RG4D_mag: JLTS_RG4D_mag
    {
        displayName = "RG-4D Energy Cell";
        ammo = "RB205_RG4D_ammo";
    };

    class JLTS_RPS6_mag;
    class RB205_RPS6_AT_mag: JLTS_RPS6_mag
    {
        displayName = "RPS-6 AT Rocket";
        displayNameShort = "AT";
        descriptionShort = "Type: Anti-Tank<br/>Rounds: 1<br/>Used in: RPS-6";
        ammo = "RB205_RPS6_AT_ammo";
    };

    class JLTS_E60R_AP_mag;
    class RB205_E60R_AP_mag: JLTS_E60R_AP_mag
    {
        displayName = "E-60R AP Missile";
        displayNameShort = "AP";
        descriptionShort = "Type: Anti-Person<br/>Rounds: 1<br/>Used in: E-60R";
        ammo = "RB205_E60R_AP_ammo";
    };

    class Titan_AA;
    class RB205_E60R_AA_mag: Titan_AA
    {
        displayName = "E-60R AA Missile";
        displayNameShort = "AA";
        descriptionShort = "Type: Anti-Air<br/>Rounds: 1<br/>Used in: E-60R";
        ammo = "RB205_E60R_AA_ammo";
    };
};

class CfgAmmo
{
    class JLTS_bullet_carbine_red;
    class RB205_E5_ammo: JLTS_bullet_carbine_red
    {
        effectFly = "3AS_PlasmaBolt_Red_Fly";
    };
    class RB205_E5_commando_ammo: RB205_E5_ammo
    {
        hit = 15;
        waterFriction = -0.0099999998;
    };

    class JLTS_bullet_sniper_red;
    class RB205_E5S_ammo: JLTS_bullet_sniper_red
    {
        effectFly = "3AS_PlasmaBolt_Red_Fly";
    };

    class 3AS_EM90_RedPlasma;
    class RB205_B2_ammo: 3AS_EM90_RedPlasma
    {
        hit = 30;
        caliber = 3.79;
        explosionSoundEffect = "DefaultExplosion";
        model = "kobra\442_turrets\Droideka\Doublelaserred.p3d";
        class CamShakeExplode
        {
            power="(20*0.2)";
            duration="((round (20^0.5))*0.2 max 0.2)";
            frequency=20;
            distance="((1 + 20^0.5)*8)";
        };
        class CamShakeHit
        {
            power=20;
            duration="((round (20^0.25))*0.2 max 0.2)";
            frequency=20;
            distance=1;
        };
    };

    class JLTS_bullet_pistol_red;
    class RB205_RG4D_ammo: JLTS_bullet_pistol_red
    {
        effectFly = "3AS_PlasmaBolt_Red_Fly";
    };

    class R_PG32V_F;
    class RB205_RPS6_AT_ammo: R_PG32V_F
    {
        soundFly[]=
		{
			"\RB205_cis\weapons\sounds\E60R_fly.wss",
			6,
			1.5,
			700
		};
    };

    class M_Titan_AP;
    class RB205_E60R_AP_ammo: M_Titan_AP
    {
        effectsMissile = "RB205_particle_effect_E60R_fly";
        soundFly[]=
		{
			"\RB205_cis\weapons\sounds\E60R_fly.wss",
			6,
			1.5,
			700
		};
    };

    class M_Titan_AA;
    class RB205_E60R_AA_ammo: M_Titan_AA
    {
        effectsMissile = "RB205_particle_effect_E60R_fly";
        soundFly[]=
		{
			"\RB205_cis\weapons\sounds\E60R_fly.wss",
			6,
			1.5,
			700
		};
    };
};

class RB205_particle_effect_E60R_fly
{
	class Light
	{
		simulation = "light";
		type = "RB205_light_E60R";
		position[] = {0,0,0};
	};
	class Smoke
	{
		simulation = "particles";
		type = "RB205_cloudlet_smoke_E60R";
		position[] = {0,0,0};
		qualityLevel = -1;
	};
	class Sparks
	{
		simulation="particles";
		type="RB205_cloudlet_sparks_E60R";
		position[]={0,0,0};
		qualityLevel=2;
	};
};
class CfgLights
{
	class RocketLight;
	class RB205_light_E60R: RocketLight
	{
		color[]={0.94099998,0.44299999,1};
		intensity=1e+008;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
};
class CfgCloudlets
{
	class Missile3;
	class RB205_cloudlet_smoke_E60R: Missile3
	{
		color[]=
		{
			{0,0,0,0.5},
			{0.079999998,0.079999998,0.079999998,0.30000001},
			{0.079999998,0.079999998,0.079999998,0.30000001}
		};
		size[]={2,4,4};
		lifeTime=5;
		interval=0.00050000002;
	};
	class Default;
	class RB205_cloudlet_sparks_E60R: Default
	{
		interval=0.00089999998;
		lifeTime=2.5;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={1,3,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};

class cfgSoundShaders
{
	class RB205_B2_SoundShader_Close
	{
		samples[]=
		{
			
			{
				"RB205_cis\weapons\sounds\B2_Close.wss",
				1
			}
		};
		volume=1;
		range=5;
		limitation=0;
	};
	class RB205_B2_SoundShader_Close2
	{
		samples[]=
		{
			
			{
				"RB205_cis\weapons\sounds\B2_Close.wss",
				1
			}
		};
		volume=1.6;
		range=20;
		limitation=0;
		rangeCurve="closeShotCurve";
	};
	class RB205_B2_SoundShader_Medium
	{
		samples[]=
		{
			
			{
				"RB205_cis\weapons\sounds\B2_Medium.wss",
				1
			}
		};
		volume=1.5;
		range=1800;
		limitation=0;
		rangeCurve[]=
		{
			{0,0.2},
			{20,1},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class RB205_B2_SoundShader_Far
	{
		samples[]=
		{
			
			{
				"RB205_cis\weapons\sounds\B2_Far.wss",
				1
			}
		};
		volume=1.5;
		range=4000;
		limitation=0;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{4000,1}
		};
	};
};
class cfgSoundSets
{
	class RB205_B2_SoundSet
	{
		soundShaders[]=
		{
			"RB205_B2_SoundShader_Close",
			"RB205_B2_SoundShader_Close2",
			"RB205_B2_SoundShader_Medium",
			"RB205_B2_SoundShader_Far"
		};
		volumeFactor=1.1;
		frequencyRandomizer=1;
		frequencyRandomizermin=0.34999999;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.15000001;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
};