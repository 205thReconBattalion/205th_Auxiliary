/////////////////////////////////////////////////////////
//////           GUI für Overlay Pager            //////
///////////////////////////////////////////////////////

class rsctitles
{
	class melder_display {
		idd = -1;
		movingEnable = 1;
		duration = 7;
		fadein = 0;
		fadeout = 0.1;
		name = "melder_display";
		onLoad = "uiNamespace setVariable ['melder_display', _this select 0]; call TFD_Melder_fnc_checkDispatch;"; // execVM 'fn_checkDispatch.sqf';
		onUnLoad = "uiNamespace setVariable ['melder_display', nil];";

		class controls {
			class display_bg: RscPicture
			{
				idc = 1901;
				text = "\tfd_melder\data\melder.paa";
				x = 0.818 * safezoneW + safezoneX;
				y = -0.05714 * safezoneH + safezoneY;
				w = 0.175849 * safezoneW;
				h = 0.331576 * safezoneH;
				moving = 1;
			};
			class display_lcd: RscText
			{
				idc = 1902;
				text = $STR_TFD_Melder_noDispatch;
				x = 0.859022 * safezoneW + safezoneX;
				y = 0.037056 * safezoneH + safezoneY;
				w = 0.117719 * safezoneW;
				h = 0.149838 * safezoneH;
				ColorBackground[] = {0,0,0,0};
				ColorText[] = {1,1,1,1}; //{0.09,0.09,0.09,1}
				canModify = 0;
				style = 528;
				lineSpacing = 1;
				sizeEx = 0.03;
				shadow = 0;
				font = PuristaMedium;
			};
		};
	};
};

/////////////////////////////////////////////////////////////
//////           GUI für bedienbaren Pager            //////
///////////////////////////////////////////////////////////
class GUI_MELDER {
    idd = 1000;
    name = "GUI_MELDER";
    onLoad = "uiNamespace setVariable ['GUI_MELDER', _this select 0]; call TFD_Melder_fnc_checkDispatch;";
    onUnLoad = "uiNamespace setVariable ['GUI_MELDER', nil];";
    movingEnable = 1;
    //enableSimulation = true;

    class controlsBackground {
    };
    class controls {
        class Melder_BG: RscPicture
        {
            idc = 1101;
            text = "\tfd_melder\data\melder.paa";
            x = 0.361008 * safezoneW + safezoneX;
            y = 0.319785 * safezoneH + safezoneY;
            w = 0.195849 * safezoneW;
            h = 0.371576 * safezoneH;
			moving = 1;
        };
        class Text_LCD: RscText
        {
            idc = 1502;
            text = $STR_TFD_Melder_noDispatch;
            x = 0.407362 * safezoneW + safezoneX;
            y = 0.426885 * safezoneH + safezoneY;
            w = 0.129710 * safezoneW;
            h = 0.168196 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1}; //{0.09,0.09,0.09,1}
			canModify = 0;
			style = 528;
			lineSpacing = 1;
			sizeEx = 0.035;
			shadow = 0;
			font = PuristaMedium;
        };
        class ready_btn: HiddenButton
        {
            idc = 1103;
            text = "";
            x = 0.378201 * safezoneW + safezoneX; //378201
            y = 0.406399 * safezoneH + safezoneY;
            w = 0.021347 * safezoneW;
            h = 0.040157 * safezoneH;
            ColorBackground[] = {0,1,0,1};
            ColorText[] = {0,0,0,0};
            font = TahomaB;
            colorFocused[] = {0,0,0,0};
            colorDisabled[] = {0,0,0,0};
			tooltip = $STR_TFD_Melder_fms1;
			//action = "missionNamespace setVariable [(name player) + '_fms', 'ready', true]; hint format ['%1', missionNamespace getVariable (name player) + '_fms']; missionNamespace setVariable [(name player) + '_einsatz', 'Keine Meldungen', true]; publicVariable (name player) + '_fms';";
			action = "[name player, 'ready'] call fnc_setFMS;";
		};
        class confirm_btn: HiddenButton
        {
            idc = 1104;
            text = "";
            x = 0.378201 * safezoneW + safezoneX; //370376
            y = 0.463278 * safezoneH + safezoneY;
            w = 0.021347 * safezoneW; //012502
            h = 0.040157 * safezoneH; //024590
            ColorBackground[] = {0,0,1,1};
            ColorText[] = {0,0,0,0};
            font = TahomaB;
            colorFocused[] = {0,0,0,0};
            colorDisabled[] = {0,0,0,0};
			tooltip = $STR_TFD_Melder_confirm;
			//action = "missionNamespace setVariable [(name player) + '_fms', 'confirmed', true]; hint format ['%1', missionNamespace getVariable (name player) + '_fms']; publicVariable (name player) + '_fms';";
			action = "[name player, 'confirmed'] call fnc_setFMS;";
        };
        class notReady_btn: HiddenButton
        {
            idc = 1105;
            text = "";
            x = 0.378201 * safezoneW + safezoneX; //377670
            y = 0.502390 * safezoneH + safezoneY;
            w = 0.021357 * safezoneW;
            h = 0.041543 * safezoneH;
            ColorBackground[] = {1,0,0,1};
            ColorText[] = {0,0,0,0};
            font = TahomaB;
            colorFocused[] = {0,0,0,0};
            colorDisabled[] = {0,0,0,0};
			tooltip = $STR_TFD_Melder_fms6;
			//action = "missionNamespace setVariable [(name player) + '_fms', 'notready', true]; hint format ['%1', missionNamespace getVariable (name player) + '_fms']; publicVariable (name player) + '_fms';";
			action = "[name player, 'notready'] call fnc_setFMS;";
        };
    };
};

//////////////////////////////////////////////////////
//////           GUI für Leitstelle            //////
////////////////////////////////////////////////////
class GUI_Leitstelle {
    idd = 2000;
    name = "GUI_Leitstelle";
    //onLoad = "uiNamespace setVariable ['GUI_Leitstelle', _this select 0]; call TFD_Melder_fnc_getUnits;";
    onLoad = "uiNamespace setVariable ['GUI_Leitstelle', _this select 0];";
    onUnLoad = "uiNamespace setVariable ['GUI_Leitstelle', nil];";
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
    };
    class controls {
        class bg: RscPicture
        {
            idc = 2101;
            text = "\tfd_melder\data\bg.paa";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 1 * safezoneH;
            ColorBackground[] = {1,0.384313,0.274509,1};
        };
        class title: RscEdit
        {
            idc = 2102;
            text = "";
            x = 0.227464 * safezoneW + safezoneX;
            y = 0.041141 * safezoneH + safezoneY;
            w = 0.314583 * safezoneW;
            h = 0.050926 * safezoneH;
            ColorBackground[] = {1,1,1,0};
            ColorText[] = {1,1,1,1};
			font = TahomaB;
            colorSelection[] = {0,1,1,1};
            colorDisabled[] = {1,1,1,1};
        };
		class freq: RscText
        {
            idc = 2194;
            text = "1";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 0 * safezoneW;
            h = 0 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {0,0,0,0};
			font = TahomaB;
        };
        class units: RscListbox
        {
            idc = 2103;
            x = 0.137881 * safezoneW + safezoneX;
            y = 0.101789 * safezoneH + safezoneY;
            w = 0.160416 * safezoneW;
            h = 0.558333 * safezoneH;
            ColorBackground[] = {0,0,0,0.701960};
            ColorText[] = {1,1,1,1};
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,1,1,1};
        };
        class text_units: RscText
        {
            idc = 2104;
            text = $STR_TFD_Melder_units;
            x = 0.037361 * safezoneW + safezoneX;
            y = 0.101558 * safezoneH + safezoneY;
            w = 0.096874 * safezoneW;
            h = 0.050462 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
			font = TahomaB;
        };
        class ort: RscEdit
        {
            idc = 2105;
            text = "";
            x = 0.17 * safezoneW + safezoneX;
            y = 0.67 * safezoneH + safezoneY;
            w = 0.261631 * safezoneW;
            h = 0.053086 * safezoneH;
            ColorBackground[] = {1,1,1,0};
            ColorText[] = {1,1,1,1};
			font = TahomaB;
            colorSelection[] = {0,1,1,1};
            colorDisabled[] = {1,1,1,1};
        };
        class alarm: RscButton
        {
            idc = 2106;
            text = $STR_TFD_Melder_dispatch;
            x = 0.139704 * safezoneW + safezoneX;
            y = 0.738827 * safezoneH + safezoneY;
            w = 0.160677 * safezoneW;
            h = 0.075925 * safezoneH;
            ColorBackground[] = {0,0,0,0.623529};
            ColorText[] = {1,1,1,1};
			font = TahomaB;
            colorFocused[] = {0,1,1,1};
            colorDisabled[] = {1,1,1,1};
			//action = "_index = lbCurSel 2103; [ctrlText 2102, lbText [2103, _index], ctrlText 2105, lbValue[2103, _index], ctrlText 2194] call TFD_Melder_fnc_dispatch;";
			action = "_index = lbCurSel 2103; [ctrlText 2102, ctrlText 2105, lbValue[2103, _index], ctrlText 2194] call TFD_Melder_fnc_dispatch;";
        };
        class description: RscText
        {
            idc = 2107;
            text = $STR_TFD_Melder_description;
            x = 0.037881 * safezoneW + safezoneX;
            y = 0.041141 * safezoneH + safezoneY;
            w = 0.1875 * safezoneW;
            h = 0.052777 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
        };
        class einsatzstelle: RscText
        {
            idc = 2108;
            text = $STR_TFD_Melder_position;
            x = 0.037881 * safezoneW + safezoneX;
            y = 0.67 * safezoneH + safezoneY;
            w = 0.120834 * safezoneW;
            h = 0.054937 * safezoneH;
            ColorBackground[] = {0,0,0,0};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
        };
    };
};
////////////////////////////////////////////////////////////////////////////

