class CfgPatches
{
	class TFD_Melder
	{
		name="TFD Melder / Pager";
		author="Lenanrd[TFD]";
		authorUrl="https://www.taskforcedragon.de";
		version="1.5";
		units[]=
		{
			"tfd_pager1Item",
			"tfd_pager2Item",
			"tfd_pager3Item",
			"tfd_ls1Item",
			"tfd_ls2Item",
			"tfd_ls3Item"
		};
		weapons[]=
		{
			"tfd_pager1",
			"tfd_pager2",
			"tfd_pager3",
			"tfd_ls1",
			"tfd_ls2",
			"tfd_ls3"
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgFunctions
{
	class TFD_Melder
	{
		class Functions
		{
			file="tfd_melder\functions";
			class init
			{
				postInit=1;
			};
			class checkDispatch
			{
			};
			class dispatch
			{
			};
			class getUnits
			{
			};
			class ls
			{
			};
			class fme
			{
			};
			class addToList
			{
			};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class FME
			{
				displayName="$STR_TFD_Melder_FME";
				condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
				exceptions[]=
				{
					"isNotInside"
				};
				statement="";
				icon="\tfd_melder\data\melder.paa";
				class openFME
				{
					displayName="$STR_TFD_Melder_openFME";
					condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="call TFD_Melder_fnc_fme";
					icon="\tfd_melder\data\melder.paa";
				};
				class showFME
				{
					displayName="$STR_TFD_Melder_showFME";
					condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="_rsc = cutRsc ['melder_display', 'PLAIN']";
					icon="\tfd_melder\data\melder.paa";
				};
				/*class hideFME
				{
					displayName="$STR_TFD_Melder_hideFME";
					condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="cutText ['', 'PLAIN'];";
					icon="\tfd_melder\data\melder.paa";
				};*/
				class fmsReady
				{
					displayName="$STR_TFD_Melder_fms1";
					condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[name player, 'ready'] call fnc_setFMS";
					icon="#(rgb,8,8,3)color(0,0.95,0.07,1)";
				};
				class fmsConfirmed
				{
					displayName="$STR_TFD_Melder_confirm";
					condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[name player, 'confirmed'] call fnc_setFMS";
					icon="#(rgb,8,8,3)color(0.99,0.92,0.09,1)";
				};
				class fmsNotReady
				{
					displayName="$STR_TFD_Melder_fms6";
					condition="'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[name player, 'notready'] call fnc_setFMS";
					icon="#(rgb,8,8,3)color(0.99,0.14,0.1,1)";
				};
			};
			class LS
			{
				displayName="$STR_TFD_Melder_ls";
				condition="'tfd_ls1' in items _player or 'tfd_ls2' in items _player or 'tfd_ls3' in items _player";
				exceptions[]=
				{
					"isNotInside"
				};
				statement="";
				icon="\tfd_melder\data\ls.paa";
				class openLS1
				{
					displayName="$STR_TFD_Melder_openls1";
					condition="'tfd_ls1' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[1, _player] call TFD_Melder_fnc_ls";
					icon="\tfd_melder\data\ls.paa";
				};
				class openLS2
				{
					displayName="$STR_TFD_Melder_openls2";
					condition="'tfd_ls2' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[2, _player] call TFD_Melder_fnc_ls";
					icon="\tfd_melder\data\ls.paa";
				};
				class openLS3
				{
					displayName="$STR_TFD_Melder_openls3";
					condition="'tfd_ls3' in items _player";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[3, _player] call TFD_Melder_fnc_ls";
					icon="\tfd_melder\data\ls.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class tfd_pagercore: ItemCore
	{
		type=4096;
		detectRange=-1;
		simulation="ItemMineDetector";
		scope=0;
		author="Lennard[TFD]";
	};
	class tfd_pager1: tfd_pagercore
	{
		scope=2;
		displayName="$STR_TFD_Melder_pager1";
		descriptionShort="$STR_TFD_Melder_pager1Descr";
		picture="\tfd_melder\data\melder.paa";
		logo="\tfd_melder\data\melder.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
	class tfd_pager2: tfd_pagercore
	{
		scope=2;
		displayName="$STR_TFD_Melder_pager2";
		descriptionShort="$STR_TFD_Melder_pager2Descr";
		picture="\tfd_melder\data\melder.paa";
		logo="\tfd_melder\data\melder.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
	class tfd_pager3: tfd_pagercore
	{
		scope=2;
		displayName="$STR_TFD_Melder_pager3";
		descriptionShort="$STR_TFD_Melder_pager3Descr";
		picture="\tfd_melder\data\melder.paa";
		logo="\tfd_melder\data\melder.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
	class tfd_ls1: tfd_pagercore
	{
		scope=2;
		displayName="$STR_TFD_Melder_ls1";
		descriptionShort="$STR_TFD_Melder_ls1Descr";
		picture="\tfd_melder\data\ls.paa";
		logo="\tfd_melder\data\ls.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
	class tfd_ls2: tfd_pagercore
	{
		scope=2;
		displayName="$STR_TFD_Melder_ls2";
		descriptionShort="$STR_TFD_Melder_ls2Descr";
		picture="\tfd_melder\data\ls.paa";
		logo="\tfd_melder\data\ls.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
	class tfd_ls3: tfd_pagercore
	{
		scope=2;
		displayName="$STR_TFD_Melder_ls3";
		descriptionShort="$STR_TFD_Melder_ls3Descr";
		picture="\tfd_melder\data\ls.paa";
		logo="\tfd_melder\data\ls.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
};
class CfgSounds
{
	sounds[]={};
	class TFD_Melder_alarm
	{
		name="TFD_Melder_alarm";
		sound[]=
		{
			"\tfd_melder\data\melder.ogg",
			0.60000002,
			1,
			0.1
		};
		titles[]={};
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class tfd_pager1Item: CA_Magazine
	{
		mass=1;
		scope=2;
		author="Lennard[TFD]";
		displayName="$STR_TFD_Melder_pager1";
		picture="\tfd_melder\data\melder.paa";
	};
	class tfd_pager2Item: tfd_pager1Item
	{
		displayName="$STR_TFD_Melder_pager2";
	};
	class tfd_pager3Item: tfd_pager1Item
	{
		displayName="$STR_TFD_Melder_pager3";
	};
	class tfd_ls1Item: CA_Magazine
	{
		mass=1;
		scope=2;
		author="Lennard[TFD]";
		displayName="$STR_TFD_Melder_ls1";
		picture="\tfd_melder\data\ls.paa";
	};
	class tfd_ls2Item: tfd_ls1Item
	{
		displayName="$STR_TFD_Melder_ls2";
	};
	class tfd_ls3Item: CA_Magazine
	{
		displayName="$STR_TFD_Melder_ls3";
	};
};
class RscText
{
	deletable=0;
	fade=0;
	access=0;
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	text="";
	fixedWidth=0;
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=0;
	shadow=1;
	colorShadow[]={0,0,0,0.5};
	font="PuristaMedium";
	SizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscStructuredText
{
	deletable=0;
	fade=0;
	access=0;
	type=13;
	idc=-1;
	style=0;
	colorText[]={1,1,1,1};
	class Attributes
	{
		font="PuristaMedium";
		color="#ffffff";
		align="center";
		shadow=1;
	};
	x=0;
	y=0;
	h=0.035;
	w=0.1;
	text="";
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow=1;
};
class RscPicture
{
	deletable=0;
	fade=0;
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.2;
	h=0.15000001;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscEdit
{
	deletable=0;
	fade=0;
	access=0;
	type=2;
	x=0;
	y=0;
	h=0.039999999;
	w=0.2;
	colorBackground[]={0,0,0,1};
	colorText[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabled[]={1,1,1,0.25};
	colorSelection[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	autocomplete="";
	text="";
	size=0.2;
	style="0x00 + 0x40";
	lineSpacing=1; //-----
	font="PuristaMedium";
	shadow=2;
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscCombo
{
	deletable=0;
	fade=0;
	access=0;
	type=4;
	colorSelect[]={0,0,0,1};
	colorText[]={1,1,1,1};
	colorBackground[]={0,0,0,1};
	colorScrollbar[]={1,0,0,1};
	colorPicture[]={1,1,1,1};
	colorPictureSelected[]={1,1,1,1};
	colorPictudeDisabled[]={1,1,1,0.25};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	soundSelect[]=
	{
		"\A3\ui_f\data\sound\RscCombo\soundSelect",
		0.1,
		1
	};
	soundExpand[]=
	{
		"\A3\ui_f\data\sound\RscCombo\soundExpand",
		0.1,
		1
	};
	soundCollapse[]=
	{
		"\A3\ui_f\data\sound\RscCombo\soundCollapse",
		0.1,
		1
	};
	maxHistoryDelay=1;
	class ComboScrollBar
	{
		color[]={1,1,1,1};
	};
	style="0x10 + 0x200";
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow=0;
	x=0;
	y=0;
	w=0.12;
	h=0.035;
	colorSelectBackground[]={1,1,1,0.69999999};
	arrowEmpty="\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull="\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight=0.44999999;
	colorActive[]={1,0,0,1};
	colorDisabled[]={1,1,1,0.25};
	colorPictureDisabled[]={1,1,1,1};
};
class RscListBox
{
	deletable=0;
	fade=0;
	access=0;
	type=5;
	w=0.40000001;
	h=0.40000001;
	rowHeight=0;
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	colorScrollbar[]={1,0,0,0};
	colorSelect[]={0,0,0,1};
	colorSelect2[]={0,0,0,1};
	colorSelectBackground[]={0.94999999,0.94999999,0.94999999,1};
	colorSelectBackground2[]={1,1,1,0.5};
	colorBackground[]={0,0,0,0.30000001};
	soundSelect[]=
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.090000004,
		1
	};
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
	arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
	arrowFull="#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[]={1,1,1,1};
	colorPictureSelected[]={1,1,1,1};
	colorPictudeDisabled[]={1,1,1,0.25};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	class ListScrollBar
	{
		color[]={1,1,1,1};
		autoScrollEnabled=1;
	};
	style=16;
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow=0;
	colorShadow[]={0,0,0,0.5};
	period=1.2;
	maxHistoryDelay=1;
	colorPictureDisabled[]={1,1,1,1};
};
class HiddenButton
{
	access=0;
	type=1;
	text="";
	colorText[]={0,0,0,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	shadow=2;
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX=0.003;
	offsetY=0.003;
	offsetPressedX=0.0020000001;
	offsetPressedY=0.0020000001;
	borderSize=0;
};
class RscButton
{
	deletable=0;
	fade=0;
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	shadow=0;
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX=0;
	offsetY=0;
	offsetPressedX=0;
	offsetPressedY=0;
	borderSize=0;
};
class RscShortcutButton
{
	deletable=0;
	fade=0;
	type=16;
	x=0.1;
	y=0.1;
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class ShortcutPos
	{
		left=0;
		top="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right=0.0049999999;
		bottom=0;
	};
	shortcuts[]={};
	textureNoShortcut="#(argb,8,8,3)color(0,0,0,0)";
	color[]={1,1,1,1};
	colorFocused[]={1,1,1,1};
	color2[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabled[]={1,1,1,0.25};
	colorBackground[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorBackgroundFocused[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorBackground2[]={1,1,1,1};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	class Attributes
	{
		font="PuristaMedium";
		color="#E5E5E5";
		align="left";
		shadow="true";
	};
	idc=-1;
	style=0;
	default=0;
	shadow=1;
	w=0.183825;
	h="((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	animTextureDefault="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus=1.2;
	periodOver=0.80000001;
	period=0.40000001;
	font="PuristaMedium";
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text="";
	action="";
	class AttributesImage
	{
		font="PuristaMedium";
		color="#E5E5E5";
		align="left";
	};
};
class RscShortcutButtonMain
{
	idc=-1;
	style=0;
	default=0;
	w=0.31372601;
	h=0.104575;
	color[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class ShortcutPos
	{
		left=0.0145;
		top="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class TextPos
	{
		left="(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right=0.0049999999;
		bottom=0;
	};
	animTextureNormal="\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled="\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureOver="\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTextureFocused="\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTexturePressed="\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	animTextureDefault="\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	period=0.5;
	font="PuristaMedium";
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	text="";
	action="";
	class Attributes
	{
		font="PuristaMedium";
		color="#E5E5E5";
		align="left";
		shadow="false";
	};
	class AttributesImage
	{
		font="PuristaMedium";
		color="#E5E5E5";
		align="false";
	};
};
class RscFrame
{
	type=0;
	idc=-1;
	style=64;
	shadow=2;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="PuristaMedium";
	sizeEx=0.02;
	text="";
};
class RscSlider
{
	deletable=0;
	fade=0;
	access=0;
	type=3;
	style=1024;
	w=0.30000001;
	color[]={1,1,1,0.80000001};
	colorActive[]={1,1,1,1};
	shadow=0;
	h=0.025;
};
class IGUIBack
{
	type=0;
	idc=124;
	style=128;
	text="";
	colorText[]={0,0,0,0};
	font="PuristaMedium";
	sizeEx=0;
	shadow=0;
	x=0.1;
	y=0.1;
	w=0.1;
	h=0.1;
	colorbackground[]=
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};
class RscCheckBox
{
	idc=-1;
	type=77;
	style=0;
	checked=0;
	x="0.375 * safezoneW + safezoneX";
	y="0.36 * safezoneH + safezoneY";
	w="0.025 * safezoneW";
	h="0.04 * safezoneH";
	color[]={1,1,1,0.69999999};
	colorFocused[]={1,1,1,1};
	colorHover[]={1,1,1,1};
	colorPressed[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.2};
	colorBackground[]={0,0,0,0};
	colorBackgroundFocused[]={0,0,0,0};
	colorBackgroundHover[]={0,0,0,0};
	colorBackgroundPressed[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	textureChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundPush[]=
	{
		"",
		0.1,
		1
	};
	soundClick[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.1,
		1
	};
};
class RscTextCheckBox
{
	idc=-1;
	type=7;
	style=0;
	x="0.375 * safezoneW + safezoneX";
	y="0.36 * safezoneH + safezoneY";
	w="0.025 * safezoneW";
	h="0.04 * safezoneH";
	colorText[]={1,0,0,1};
	color[]={0,0,0,0};
	colorBackground[]={0,0,1,1};
	colorTextSelect[]={0,0.80000001,0,1};
	colorSelectedBg[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorSelect[]={0,0,0,1};
	colorTextDisable[]={0.40000001,0.40000001,0.40000001,1};
	colorDisable[]={0.40000001,0.40000001,0.40000001,1};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows=1;
	columns=1;
	strings[]=
	{
		"UNCHECKED"
	};
	checked_strings[]=
	{
		"CHECKED"
	};
};
class RscButtonMenu
{
	idc=-1;
	type=16;
	style="0x02 + 0xC0";
	default=0;
	shadow=0;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	colorBackground[]={0,0,0,0.80000001};
	colorBackgroundFocused[]={1,1,1,1};
	colorBackground2[]={0.75,0.75,0.75,1};
	color[]={1,1,1,1};
	colorFocused[]={0,0,0,1};
	color2[]={0,0,0,1};
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	class TextPos
	{
		left="0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right=0.0049999999;
		bottom=0;
	};
	class Attributes
	{
		font="PuristaLight";
		color="#E5E5E5";
		align="center";
		shadow="false";
	};
	class ShortcutPos
	{
		left="(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top=0.0049999999;
		w=0.022500001;
		h=0.029999999;
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.090000004,
		1
	};
};
class RscButtonMenuOK
{
	idc=1;
	shortcuts[]=
	{
		"0x00050000 + 0",
		28,
		57,
		156
	};
	default=1;
	text="OK";
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",
		0.090000004,
		1
	};
};
class RscButtonMenuCancel
{
	idc=2;
	shortcuts[]=
	{
		"0x00050000 + 1"
	};
	text="Cancel";
};
class RscControlsGroup
{
	deletable=0;
	fade=0;
	class VScrollbar
	{
		color[]={1,1,1,1};
		width=0.021;
		autoScrollEnabled=1;
	};
	class HScrollbar
	{
		color[]={1,1,1,1};
		height=0.028000001;
	};
	class Controls
	{
	};
	type=15;
	idc=-1;
	x=0;
	y=0;
	w=1;
	h=1;
	shadow=0;
	style=16;
};
class rsctitles
{
	class melder_display
	{
		idd=-1;
		movingEnable=1;
		duration=20;//3600
		fadein=0;
		fadeout=0.1;
		name="melder_display";
		onLoad="uiNamespace setVariable ['melder_display', _this select 0]; call TFD_Melder_fnc_checkDispatch;";
		onUnLoad="uiNamespace setVariable ['melder_display', nil];";
		class controls
		{
			class display_bg: RscPicture
			{
				idc=1901;
				text="\tfd_melder\data\melder.paa";
				x="0.818 * safezoneW + safezoneX";
				y="0.725564 * safezoneH + safezoneY"; //-0.05714
				w="0.175849 * safezoneW";
				h="0.331576 * safezoneH";
				moving=1;
			};
			class display_lcd: RscText
			{
				idc=1902;
				text="$STR_TFD_Melder_noDispatch";
				x="0.859022 * safezoneW + safezoneX";
				y="0.819760 * safezoneH + safezoneY"; //037056
				w="0.117719 * safezoneW";
				h="0.149838 * safezoneH";
				ColorBackground[]={0,0,0,0};
				ColorText[]={1,1,1}; //{0.090000004,0.090000004,0.090000004,1}
				canModify=0;
				style=528;
				lineSpacing=1;
				sizeEx=0.029999999;
				shadow=0;
				font="PuristaMedium";
			};
		};
	};
};
class GUI_MELDER
{
	idd=1000;
	name="GUI_MELDER";
	onLoad="uiNamespace setVariable ['GUI_MELDER', _this select 0]; call TFD_Melder_fnc_checkDispatch;";
	onUnLoad="uiNamespace setVariable ['GUI_MELDER', nil];";
	movingEnable=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Melder_BG: RscPicture
		{
			idc=1101;
			text="\tfd_melder\data\melder.paa";
			x="0.361008 * safezoneW + safezoneX";
			y="0.319785 * safezoneH + safezoneY";
			w="0.195849 * safezoneW";
			h="0.371576 * safezoneH";
			moving=1;
		};
		class Text_LCD: RscText
		{
			idc=1502;
			text="$STR_TFD_Melder_noDispatch";
			x="0.407362 * safezoneW + safezoneX";
			y="0.426885 * safezoneH + safezoneY";
			w="0.129710 * safezoneW";
			h="0.168196 * safezoneH";
			ColorBackground[]={0,0,0,0};
			ColorText[]={1,1,1}; //{0.090000004,0.090000004,0.090000004,1}
			canModify=0;
			style=528;
			lineSpacing=1;
			sizeEx=0.035;
			shadow=0;
			font="PuristaMedium";
		};
		class ready_btn: HiddenButton
		{
			idc=1103;
			text="";
			x="0.378201 * safezoneW + safezoneX"; //378201
			y="0.426885 * safezoneH + safezoneY"; //406399
			w="0.021347 * safezoneW";
			h="0.040157 * safezoneH";
			ColorBackground[]={0,0.95,0.07,1}; //{0,0,0,0}
			colorBackgroundActive[]={0,0.95,0.07,0.8};
			ColorText[]={0,0,0,0};
			font="TahomaB";
			colorFocused[]={0,0.95,0.07,1};
			colorDisabled[]={0,0,0,0};
			tooltip="$STR_TFD_Melder_fms1";
			action="[name player, 'ready'] call fnc_setFMS;";
		};
		class confirm_btn: HiddenButton
		{
			idc=1104;
			text="";
			x="0.378201 * safezoneW + safezoneX"; //370376
			y="0.467042 * safezoneH + safezoneY"; //463278
			w="0.021347 * safezoneW"; //012502
			h="0.040157 * safezoneH"; //024590
			ColorBackground[]={0.99,0.92,0.09,1}; //{0,0,0,0}
			colorBackgroundActive[]={0.99,0.92,0.09,0.8};
			ColorText[]={0,0,0,0};
			font="TahomaB";
			colorFocused[]={0.99,0.92,0.09,1};
			colorDisabled[]={0,0,0,0};
			tooltip="$STR_TFD_Melder_confirm";
			action="[name player, 'confirmed'] call fnc_setFMS;";
		};
		class notReady_btn: HiddenButton
		{
			idc=1105;
			text="";
			x="0.378201 * safezoneW + safezoneX"; //377670
			y="0.507199 * safezoneH + safezoneY"; //502390
			w="0.021347 * safezoneW"; //021357
			h="0.040157 * safezoneH"; //041543
			ColorBackground[]={0.99,0.14,0.1,1}; //{0,0,0,0}
			colorBackgroundActive[]={0.99,0.14,0.1,0.8};
			ColorText[]={0,0,0,0};
			font="TahomaB";
			colorFocused[]={0.99,0.14,0.1,1};
			colorDisabled[]={0,0,0,0};
			tooltip="$STR_TFD_Melder_fms6";
			action="[name player, 'notready'] call fnc_setFMS;";
		};
	};
};
class GUI_Leitstelle
{
	idd=2000;
	name="GUI_Leitstelle";
	onLoad="uiNamespace setVariable ['GUI_Leitstelle', _this select 0];";
	onUnLoad="uiNamespace setVariable ['GUI_Leitstelle', nil];";
	movingEnable="false";
	enableSimulation="true";
	class controlsBackground
	{
	};
	class controls
	{
		class bg: RscPicture
		{
			idc=2101;
			text=""; //\tfd_melder\data\bg.paa
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
			ColorBackground[]={1,0.38431299,0.27450901,1};
		};
		class title: RscEdit
		{
			idc=2102;
			text="";
			x="0.378297 * safezoneW + safezoneX"; //227464
			y="0.162206 * safezoneH + safezoneY"; //041141
			w="0.314583 * safezoneW";
			h="0.153086 * safezoneH"; //050926
			ColorBackground[]={0,0,0,0.7};
			ColorText[]={1,1,1,1};
			font="TahomaB";
			colorSelection[]={0,1,1,1};
			colorDisabled[]={1,1,1,1};
		};
		class freq: RscText
		{
			idc=2194;
			text="1";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="0 * safezoneW";
			h="0 * safezoneH";
			ColorBackground[]={0,0,0,0};
			ColorText[]={0,0,0,0};
			font="TahomaB";
		};
		class units: RscListBox
		{
			idc=2103;
			x="0.067361 * safezoneW + safezoneX"; //137881
			y="0.162206 * safezoneH + safezoneY"; //101789
			w="0.160416 * safezoneW";
			h="0.558333 * safezoneH";
			ColorBackground[]={0,0,0,0.7};
			ColorText[]={1,1,1,1};
			colorSelectBackground[]={0,0,0,1};
			colorSelect[]={0,1,1,1};
		};
		class text_units: RscText
		{
			idc=2104;
			text="$STR_TFD_Melder_units";
			x="0.037361 * safezoneW + safezoneX";
			y="0.101558 * safezoneH + safezoneY";
			w="0.096874 * safezoneW";
			h="0.050462 * safezoneH";
			ColorBackground[]={0,0,0,0};
			ColorText[]={1,1,1,1};
			font="TahomaB";
		};
		class ort: RscEdit
		{
			idc=2105;
			text="";
			x="0.378297 * safezoneW + safezoneX"; //17
			y="0.473780 * safezoneH + safezoneY"; //67
			w="0.314583 * safezoneW"; //261631
			h="0.053086 * safezoneH";
			ColorBackground[]={0,0,0,0.7};
			ColorText[]={1,1,1,1};
			font="TahomaB";
			colorSelection[]={0,1,1,1};
			colorDisabled[]={1,1,1,1};
		};
		class alarm: RscButton
		{
			idc=2106;
			text="$STR_TFD_Melder_dispatch";
			x="0.348297 * safezoneW + safezoneX"; //139704
			y="0.644614 * safezoneH + safezoneY"; //738827
			w="0.160677 * safezoneW";
			h="0.075925 * safezoneH";
			ColorBackground[]={0,0,0,0.62352902};
			ColorText[]={1,1,1,1};
			font="TahomaB";
			colorFocused[]={0,1,1,1};
			colorDisabled[]={1,1,1,1};
			action="_index = lbCurSel 2103; [ctrlText 2102, ctrlText 2105, lbValue[2103, _index], ctrlText 2194] call TFD_Melder_fnc_dispatch;";
		};
		class description: RscText
		{
			idc=2107;
			text="$STR_TFD_Melder_description";
			x="0.348297 * safezoneW + safezoneX"; //037881
			y="0.101558 * safezoneH + safezoneY"; //041141
			w="0.1875 * safezoneW";
			h="0.052777 * safezoneH";
			ColorBackground[]={0,0,0,0};
			ColorText[]={1,1,1,1};
			font="TahomaB";
		};
		class einsatzstelle: RscText
		{
			idc=2108;
			text="$STR_TFD_Melder_position";
			x="0.348297 * safezoneW + safezoneX"; //037881
			y="0.413132 * safezoneH + safezoneY";
			w="0.120834 * safezoneW";
			h="0.054937 * safezoneH";
			ColorBackground[]={0,0,0,0};
			ColorText[]={1,1,1,1};
			font="TahomaB";
		};
	};
};
class cfgMods
{
	author="Lennard[TFD]";
	timepacked="1550946806";
};
