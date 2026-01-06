class CfgPatches
{
	class RB205_extraContent_interactiveTerminals
	{
		requiredAddons[] =
		{
			"RB205_extraContent",
			"WBK_MissionScriptsMod"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {
			"3AS_CIS_Console_Prop_interactive",
			"3AS_CIS_Console_2_Prop_interactive",
			"3AS_CIS_Console_3_Prop_interactive",
			"3AS_CIS_Console_4_Prop_interactive",
			"3AS_CIS_Console_5_Prop_interactive",
			"3AS_Terminal_Data_CIS_interactive"
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_extraContent_interactiveTerminals
	{
		displayName = "Interactive Terminals";
	};
};

#define EDITOR_CATEGORY "RB205_prop_extra"
#define EDITOR_SUBCATEGORY "RB205_extraContent_interactiveTerminals"

#define USER_ACTION \
	class UserActions \
	{ \
		class WBK_MS_DownloadData \
		{ \
			displayName="<img size='1.2' image='\A3\ui_f\data\igui\cfg\simpleTasks\types\download_ca.paa'/><t size='1.2' font = 'PuristaLight'> Begin download</t>"; \
			displayNameDefault="<img size='1.4' image='\A3\ui_f\data\igui\cfg\simpleTasks\types\download_ca.paa'/>"; \
			priority=10; \
			radius=3; \
			position="camera"; \
			showWindow=0; \
			hideOnUse=1; \
			onlyForPlayer=0; \
			shortcut=""; \
			condition="isNil {this getVariable 'Wbk_LoadProgress'}"; \
			statement="this spawn WBK_MissionScripts_DownloadData_Alt;"; \
		}; \
	};

class CfgVehicles
{
	class 3AS_CIS_Console_Prop;
	class 3AS_CIS_Console_Prop_interactive: 3AS_CIS_Console_Prop
	{
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		USER_ACTION
	};
	class 3AS_CIS_Console_2_Prop;
	class 3AS_CIS_Console_2_Prop_interactive: 3AS_CIS_Console_2_Prop
	{
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		USER_ACTION
	};
	class 3AS_CIS_Console_3_Prop;
	class 3AS_CIS_Console_3_Prop_interactive: 3AS_CIS_Console_3_Prop
	{
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		USER_ACTION
	};
	class 3AS_CIS_Console_4_Prop;
	class 3AS_CIS_Console_4_Prop_interactive: 3AS_CIS_Console_4_Prop
	{
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		USER_ACTION
	};
	class 3AS_CIS_Console_5_Prop;
	class 3AS_CIS_Console_5_Prop_interactive: 3AS_CIS_Console_5_Prop
	{
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		USER_ACTION
	};
	class 3AS_Terminal_Data_CIS;
	class 3AS_Terminal_Data_CIS_interactive: 3AS_Terminal_Data_CIS
	{
		editorCategory = EDITOR_CATEGORY;
		editorSubcategory = EDITOR_SUBCATEGORY;
		USER_ACTION
	};
};