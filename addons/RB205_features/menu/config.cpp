class cfgPatches
{
	class RB205_menu
	{
		requiredAddons[] = {};
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
			h="(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
			class Controls: Controls
			{
				class ServerBrowser;
				class Join205Server_Primary: ServerBrowser //JoinDigbyServer
				{
					idc=-1;
					text="205th Recon Battalion"; // text="205th Server I";
					tooltip="Server beitreten"; // tooltip="Hier findet statt: MainOP, FunOP, Training";
					y="(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					onbuttonclick="connectToServer ['5.9.255.45', 2900, '205']";
				};
				/*class Join205Server_Secondary: ServerBrowser
				{
					idc=-1;
					text="205th Server II";
					tooltip="Hier findet statt: Ausbildung, Sonstiges";
					y="(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
					onbuttonclick="connectToServer ['5.9.255.45', 2900, '205']";
				};*/
			};
		};
	};
};