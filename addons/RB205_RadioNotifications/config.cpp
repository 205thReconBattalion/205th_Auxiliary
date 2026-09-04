class CfgPatches
{
	class RB205_RadioNotifications
	{
		name="[RB205] Radio Notifications";
		author="Phenosi | Edited by Spark";
		url="https://discord.gg/KY9seJDnWK";
		requiredVersion=1;
		version="2.0.0";
		versionStr="2.0.0";
		versionAr[]={2,0,0};
		requiredAddons[]=
		{
			"cba_settings"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class RB205_RadioNotifications
			{
				main_addon="RB205_RadioNotifications";
				class Dependencies
				{
					CBA[]=
					{
						"cba_main",
						{3,5,0},
						"true"
					};
				};
			};
		};
	};
};
class RscTitles
{
	class FODS_RadioMessages
	{
		idd=-1;
		fadein=0;
		fadeout=0;
		duration=9.9999998e+010;
		name="FODS_RadioMessages";
		onLoad="uiNamespace setVariable ['FODS_RadioMessages_Display', _this select 0]";
		onUnload="uiNamespace setVariable ['FODS_RadioMessages_Display', displayNull]";
	};
};
class CfgRemoteExec
{
	class Functions
	{
		class FODS_fnc_createRadioDialog
		{
			allowedTargets=0;
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class RB205_RadioNotifications_PreInit_Constants
	{
		init="call compile preprocessFileLineNumbers '\RB205_RadioNotifications\Bootstrap\Constants.sqf'";
	};
	class RB205_RadioNotifications_PreInit_Functions
	{
		init="call compile preprocessFileLineNumbers '\RB205_RadioNotifications\Bootstrap\Functions.sqf'";
	};
	class RB205_RadioNotifications_PreInit_Functions_TFAR
	{
		init="call compile preprocessFileLineNumbers '\RB205_RadioNotifications\Bootstrap\Functions_TFAR.sqf'";
	};
	class RB205_RadioNotifications_PreInit_Settings
	{
		init="call compile preprocessFileLineNumbers '\RB205_RadioNotifications\Bootstrap\Settings.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_RadioNotifications_PostInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_RadioNotifications\Bootstrap\XEH_postInit.sqf'";
	};
};