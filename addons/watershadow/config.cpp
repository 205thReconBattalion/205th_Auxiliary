class CfgPatches
{
	class CBS_K9N_WaterShadow730
	{
		units[]=
		{
			"B_CBS_WaterShadow730_F",
			"O_CBS_WaterShadow730_F",
			"I_CBS_WaterShadow730_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Boat_F"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Driver_Watershadow="Driver_Watershadow";
		Passenger_Watershadow="Passenger_Watershadow";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class PreciseCrew: Crew
		{
			head="headNo";
		};
		class Driver_Watershadow: Crew
		{
			file="\watershadow\data\Anims\watershadow_driver.rtm";
			interpolateTo[]=
			{
				"Unconscious",
				1
			};
			speed=-30;
			leftHandIKCurve[]={0};
			rightHandIKCurve[]={0};
		};
		class Passenger_Watershadow: Crew
		{
			file="\watershadow\data\Anims\watershadow_passenger.rtm";
			interpolateTo[]=
			{
				"Unconscious",
				1
			};
			speed=-30;
			leftHandIKCurve[]={0};
			rightHandIKCurve[]={0};
		};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class AnimationSources;
	};
	class SDV_01_base_F;
	class CBS_WaterShadow730: SDV_01_base_F
	{
		class EventHandlers
		{
			init="call compileFinal preProcessFileLineNumbers ""\watershadow\scripts\events.sqf""; [_this select 0] call watershadow_Init;";
			getin="_this call watershadow_GetIn";
			getout="_this call watershadow_GetOut";
		};
		mapSize=5.4499998;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_ship_submarine_s"
				};
				speechPlural[]=
				{
					"veh_ship_submarine_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_ship_submarine_s";
		textPlural="$STR_A3_nameSound_veh_ship_submarine_p";
		nameSound="veh_ship_submarine_s";
		author="Idea/prototype/management-CBS Kol9yN, Model-Teh Snake, Config&O2-[EvG]Kiory";
		_generalMacro="CBS_WaterShadow730";
		displayName="Seabob Magnum Water Shadow 730";
		vehicleClass="Submarine";
		model="\watershadow\watershadow.p3d";
		picture="\watershadow\data\ui\portrait_WaterShadow_ca.paa";
		Icon="\watershadow\data\ui\map_WaterShadow_ca.paa";
		unitInfoType="RscOptics_SDV_driver";
		radarType=8;
		leftEngineEffect="LEngEffectsSmall";
		rightEngineEffect="REngEffectsSmall";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		memoryPointSupply="door_back_axis";
		supplyRadius=4;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		attenuationEffectType="TankAttenuation";
		insideSoundCoef=1;
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\boat\SDV\sdv-start2-ext",
			0.1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\boat\SDV\sdv-start2-ext",
			1,
			1,
			100
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\boat\SDV\sdv-stop2-ext",
			0.1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\boat\SDV\sdv-stop2-ext",
			1,
			1,
			100
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_01",
			1.7782794,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_02",
			1.7782794,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_03",
			1.7782794,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_04",
			1.7782794,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
			1.7782794,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
			1.7782794,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
			1.7782794,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
			1.7782794,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
			1.7782794,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
			1.7782794,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
			1.7782794,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
			1.7782794,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
			1.7782794,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
			1.7782794,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SDV\SDV_engine_2",
					1,
					2.5,
					100
				};
				frequency="1";
				volume="engineOn* (thrust factor[1, 0])*0.1";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SDV\SDV_engine_2",
					1,
					3,
					300
				};
				frequency="0.70 + (thrust *0.30)";
				volume="engineOn* thrust*0.1";
			};
			class LodnSroub
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SDV\lopatky1",
					1,
					2,
					200
				};
				frequency="0.85 + (thrust *0.15)";
				volume="engineOn* thrust*0.3";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[3, 0])";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-10-speed",
					1,
					1,
					200
				};
				frequency="1";
				volume="(speed factor[1, 4])";
			};
		};
		getInRadius=2;
		camouflage=0.1;
		audible=0.2;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		driverAction="Driver_Watershadow";
		cargoAction[]=
		{
			"Passenger_Watershadow"
		};
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		hasDriver=1;
		hasGunner=0;
		hasCommander=0;
		gunneriscommander=0;
		castDriverShadow=1;
		castCargoShadow=1;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		driverCanSee=31;
		driverForceOptics=0;
		enableGPS=1;
		transportSoldier=1;
		typicalCargo[]=
		{
			"B_diver_F",
			"B_diver_F"
		};
		cost=10000;
		armor=5;
		showNVGCargo[]={1};
		showNVGDriver=1;
		showNVGGunner=1;
		armorStructural=20;
		accuracy=0.5;
		precision=5;
		verticalTurnCoef=0.1;
		turnCoef=0.0070000002;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnPlan=0.80000001;
		predictTurnSimul=0.60000002;
		brakeDistance=25;
		acceleration=1;
		maxSpeed=55;
		waterSpeedFactor=10;
		periscopeDepth=2.8;
		idleRpm=100;
		redRpm=600;
		thrustDelay=2;
		formationX=15;
		formationZ=15;
		simulation="submarineX";
		overSpeedBrakeCoef=0.80000001;
		enginePower=30;
		engineShiftY=0.30000001;
		waterLeakiness=0;
		waterResistanceCoef=0.045000002;
		waterLinearDampingCoefX=0.2;
		waterLinearDampingCoefY=0.60000002;
		waterAngularDampingCoef=0.1;
		rudderForceCoef=0.0099999998;
		rudderForceCoefAtMaxSpeed=0.02;
		rudderInfluence=0;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectBig";
			};
		};
		waterEffectSpeed=25;
		engineEffectSpeed=5;
		waterFastEffectSpeed=18;
		leftDustEffect="DustEffectBottom";
		memoryPointsLeftWaterEffect="waterEffectL";
		memoryPointsRightWaterEffect="waterEffectR";
		leftFastWaterEffect="LFastWaterEffects";
		rightFastWaterEffect="RFastWaterEffects";
		class AnimationSources
		{
		};
		class UserActions
		{
		};
		class Turrets
		{
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_SDV_Base_Library0";
		};
		extCameraPosition[]={0,1.5,-6};
		class HitPoints
		{
			class HitEngine
			{
				armor=0.5;
				material=10;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitBody
			{
				armor=10;
				material=-1;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"\watershadow\data\WaterShadow.rvmat"
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={0.80000001,0.89999998,1};
				ambient[]={1,1,1};
				position="Light_L";
				direction="Light_L_Dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=30;
				outerAngle=160;
				coneFadeCoef=8;
				intensity=500;
				useFlare=1;
				dayLight=0;
				flareSize=0.89999998;
				flareMaxDistance=85;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=1;
					quadratic=0.5;
					hardLimitStart=45;
					hardLimitEnd=50;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_Dir";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Display_Light: Left
			{
				color[]={0.80000001,0.89999998,1};
				ambient[]={1,1,1};
				position="display_light";
				direction="display_light_dir";
				size=1;
				innerAngle=180;
				outerAngle=360;
				coneFadeCoef=8;
				intensity=20;
				useFlare=0;
				dayLight=1;
				class Attenuation
				{
					start=0.69999999;
					constant=0;
					linear=0;
					quadratic=200;
					hardLimitStart=5;
					hardLimitEnd=10;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			},
			
			{
				"Display_Light"
			}
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
	};
	class B_CBS_WaterShadow730_F: CBS_WaterShadow730
	{
		author="Kol9yN";
		_generalMacro="B_CBS_WaterShadow730_F";
		scope=2;
		crew="B_diver_F";
		faction="BLU_F";
		side=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\watershadow\data\WaterShadow_CO.paa"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
	};
	class O_CBS_WaterShadow730_F: CBS_WaterShadow730
	{
		author="Kol9yN";
		_generalMacro="O_CBS_WaterShadow730_F";
		scope=2;
		crew="O_diver_F";
		faction="OPF_F";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\watershadow\data\WaterShadow_opfor_CO.paa"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
	};
	class I_CBS_WaterShadow730_F: CBS_WaterShadow730
	{
		author="Kol9yN";
		_generalMacro="I_CBS_WaterShadow730_F";
		scope=2;
		crew="I_diver_f";
		faction="IND_F";
		side=2;
		typicalCargo[]=
		{
			"I_soldier_F",
			"I_soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\watershadow\data\WaterShadow_INDP_CO.paa"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
	};
};
