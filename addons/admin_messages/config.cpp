class CfgPatches
{
	class mti_admin_messages
	{
		name="[205] Admin Messages";
		requiredAddons[]={};
		units[]={};
		weapons[]={};
		requiredVersion=2.0599999;
		//version=1.2;
		//versionStr="1.2.4.0";
		//versionAr[]={1,2,4,0};*/
	};
};
class Extended_PreStart_EventHandlers
{
	class mti_admin_messages
	{
		init="call compileScript ['\z\mti\addons\admin_messages\XEH_preStart.sqf']";
	};
};
class Extended_PostInit_EventHandlers
{
	class mti_admin_messages
	{
		init="call compileScript ['\z\mti\addons\admin_messages\XEH_postInit.sqf']";
	};
};
class Extended_PreInit_EventHandlers
{
	class mti_admin_messages
	{
		clientInit="call compileScript ['\z\mti\addons\admin_messages\XEH_preClientInit.sqf']";
		init="call compileScript ['\z\mti\addons\admin_messages\XEH_preInit.sqf']";
	};
};
class RscText;
class RscTitle;
class RscEdit;
class RscButtonMenu;
class RscCombo;
class mti_admin_messages_sendBoxTitleBase: RscTitle
{
	idc=-1;
	style=0;
	onLoad="_this call mti_admin_messages_fnc_setTitle";
	text="ERROR ";
	colorBackground[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
	};
	x="(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX))";
	y="(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY))";
	w="(15 * (((safezoneW / safezoneH) min 1.2) / 40))";
	h="(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
};
class mti_admin_messages_sendBoxBGBase: RscText
{
	idc=-1;
	colorBackground[]={0,0,0,0.69999999};
	x="(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX))";
	y="((1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)) + (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	w="(15 * (((safezoneW / safezoneH) min 1.2) / 40))";
	h="((8 * (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / ((getResolution select 5)/0.55))";
};
class mti_admin_messages_sendBoxBase: RscEdit
{
	idc=-1;
	style=16;
	autocomplete="";
	shadow=0;
	font="EtelkaMonospacePro";
	sizeEx="0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	onLoad="uiNamespace setVariable [""mti_admin_messages_sendBoxCtrl"", (_this select 0)]";
	onUnLoad="uiNamespace setVariable [""mti_admin_messages_sendBoxCtrl"", nil]";
	onKeyDown="if ((_this select 1) isEqualTo 28 && !(_this select 2) && !(_this select 3) && !(_this select 4)) then {call mti_admin_messages_fnc_sendMessage;};";
	x="((1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)) + (0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))";
	y="(((1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)) + (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + ((0.5 * (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / ((getResolution select 5)/0.55)))";
	w="((15 * (((safezoneW / safezoneH) min 1.2) / 40)) - 2 * (0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))";
	h="(((8 * (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / ((getResolution select 5)/0.55)) - 2 * ((0.5 * (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / ((getResolution select 5)/0.55)))";
};
class mti_admin_messages_sendBoxButtonBase: RscButtonMenu
{
	idc=33500;
	onLoad="uiNamespace setVariable [""mti_admin_messages_sendBoxButtonCtrl"", (_this select 0)]; _this call mti_admin_messages_fnc_setSendButtonPosition";
	onUnLoad="uiNamespace setVariable [""mti_admin_messages_sendBoxButtonCtrl"", nil]";
	text="$STR_mti_admin_messages_SENDBOXBUTTON";
	action="call mti_admin_messages_fnc_sendMessage";
	x="(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX))";
	y="(((1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)) + (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + ((8 * (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / ((getResolution select 5)/0.55)) + (0.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	w="(15 * (((safezoneW / safezoneH) min 1.2) / 40))";
	h="(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
};
class mti_admin_messages_sendBoxListboxBase: RscCombo
{
	idc=-1;
	font="EtelkaMonospacePro";
	rowHeight=10;
	onLoad="uiNamespace setVariable [""mti_admin_messages_sendBoxListboxCtrl"", (_this select 0)]; _this call mti_admin_messages_fnc_initListbox";
	onUnLoad="uiNamespace setVariable [""mti_admin_messages_sendBoxListboxCtrl"", nil]";
	onLBSelChanged="_this call mti_admin_messages_fnc_onRecipientChanged";
	x="(1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX))";
	y="(((1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)) + (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + ((8 * (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / ((getResolution select 5)/0.55)) + (0.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
	w="(15 * (((safezoneW / safezoneH) min 1.2) / 40))";
	h="(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
};
class RscStandardDisplay;
class RscDisplayMPInterrupt: RscStandardDisplay
{
	class controls
	{
		class mti_admin_messages_sendBoxTitle: mti_admin_messages_sendBoxTitleBase
		{
		};
		class mti_admin_messages_sendBoxBG: mti_admin_messages_sendBoxBGBase
		{
		};
		class mti_admin_messages_sendBox: mti_admin_messages_sendBoxBase
		{
		};
		class mti_admin_messages_sendBoxButton: mti_admin_messages_sendBoxButtonBase
		{
		};
		class mti_admin_messages_sendBoxListBox: mti_admin_messages_sendBoxListboxBase
		{
		};
	};
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	class controls
	{
		class mti_admin_messages_sendBoxTitle: mti_admin_messages_sendBoxTitleBase
		{
		};
		class mti_admin_messages_sendBoxBG: mti_admin_messages_sendBoxBGBase
		{
		};
		class mti_admin_messages_sendBox: mti_admin_messages_sendBoxBase
		{
		};
		class mti_admin_messages_sendBoxButton: mti_admin_messages_sendBoxButtonBase
		{
		};
		class mti_admin_messages_sendBoxListBox: mti_admin_messages_sendBoxListboxBase
		{
		};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	class controls
	{
		class mti_admin_messages_sendBoxTitle: mti_admin_messages_sendBoxTitleBase
		{
		};
		class mti_admin_messages_sendBoxBG: mti_admin_messages_sendBoxBGBase
		{
		};
		class mti_admin_messages_sendBox: mti_admin_messages_sendBoxBase
		{
		};
		class mti_admin_messages_sendBoxButton: mti_admin_messages_sendBoxButtonBase
		{
		};
		class mti_admin_messages_sendBoxListBox: mti_admin_messages_sendBoxListboxBase
		{
		};
	};
};
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	class controls
	{
		class mti_admin_messages_sendBoxTitle: mti_admin_messages_sendBoxTitleBase
		{
		};
		class mti_admin_messages_sendBoxBG: mti_admin_messages_sendBoxBGBase
		{
		};
		class mti_admin_messages_sendBox: mti_admin_messages_sendBoxBase
		{
		};
		class mti_admin_messages_sendBoxButton: mti_admin_messages_sendBoxButtonBase
		{
		};
		class mti_admin_messages_sendBoxListBox: mti_admin_messages_sendBoxListboxBase
		{
		};
	};
};
class RscDisplayMovieInterrupt: RscStandardDisplay
{
	class controls
	{
		class mti_admin_messages_sendBoxTitle: mti_admin_messages_sendBoxTitleBase
		{
		};
		class mti_admin_messages_sendBoxBG: mti_admin_messages_sendBoxBGBase
		{
		};
		class mti_admin_messages_sendBox: mti_admin_messages_sendBoxBase
		{
		};
		class mti_admin_messages_sendBoxButton: mti_admin_messages_sendBoxButtonBase
		{
		};
		class mti_admin_messages_sendBoxListBox: mti_admin_messages_sendBoxListboxBase
		{
		};
	};
};
class RscStructuredText;
class RscTitles
{
	class mti_admin_messages_rscCustomChat
	{
		duration=20;
		enableSimulation=1;
		fadeIn=0.2;
		fadeOut=0.2;
		idd=-1;
		movingEnable=0;
		onLoad="uiNamespace setVariable [""mti_admin_messages_rscCustomChat"", _this select 0]";
		onUnload="uiNamespace setVariable [""mti_admin_messages_rscCustomChat"", nil]";
		class controls
		{
			class chatBox: RscStructuredText
			{
				idc=33601;
				colorBackground[]={0,0,0,0.30000001};
				font="RobotoCondensed";
				shadow=1;
				shadowColor[]={0,0,0,0.5};
				size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				x="(safezoneX + 1 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y="(safezoneY + safezoneH - 10.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w="(20 *(((safezoneW / safezoneH) min 1.2) / 40))";
				h="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			};
		};
	};
};
