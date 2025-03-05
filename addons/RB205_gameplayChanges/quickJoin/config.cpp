/*
    Adds a join button in the Arma 3 Main Menu under the section "Multiplayer"
*/

class cfgPatches
{
	class RB205_gameplayChanges_quickJoin
	{
		requiredAddons[] =
        {
            "A3_Ui_F"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class controls
	{
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
			class Controls;
		};
		class GroupMultiplayer: GroupSingleplayer
		{
			h="(7 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			class Controls: Controls
			{
				class ServerBrowser;
				class Join205Server_MainOp: ServerBrowser
				{
					idc=-1;
					text="Join 205th (MainOp)"; // text="205th Server I";
					tooltip="Server beitreten (hier findet statt: MainOp)"; // tooltip="Hier findet statt: MainOP, FunOP, Training";
					y="(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					onbuttonclick="connectToServer ['5.9.255.45', 2900, '205']";
				};
				class Join205Server_FunOp1: ServerBrowser
				{
					idc=-1;
					text="Join 205th (FunOp I)";
					tooltip="Server beitreten (hier findet statt: FunOp)";
					y="(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					onbuttonclick="connectToServer ['5.9.255.45', 2901, '205']";
				};
				class Join205Server_FunOp2: ServerBrowser
				{
					idc=-1;
					text="Join 205th (FunOp II)";
					tooltip="Server beitreten (hier findet statt: FunOp (Jumpers Server))";
					y="(5 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					onbuttonclick="connectToServer ['162.55.253.241', 2302, '205']";
				};
				class Join205Server_Training: ServerBrowser
				{
					idc=-1;
					text="Join 205th (Training)";
					tooltip="Server beitreten (hier findet statt: Ausbildungen, Trainings, Sonstiges)";
					y="(6 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					onbuttonclick="connectToServer ['5.9.255.45', 2902, '205']";
				};
			};
		};
	};
};