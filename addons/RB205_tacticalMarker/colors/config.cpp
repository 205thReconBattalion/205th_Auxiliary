class cfgPatches
{
	class RB205_tacticalMarker_colors
	{
		author = "205th Recon Battalion";
		requiredAddons[] =
		{
			"A3_UI_F",
			"RB205_core";
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgMarkerColors
{
	class ColorBlack;
	class ColorUMMCPlaceholder: ColorBlack
	{
		name = "------------";
		color[] = {0,0,0,1};
	};
	class RB205_color11: ColorBlack 
	{
		name = "1-1 'Zillo'";
		color[] = {0,0.8,0,1};
	};
	class RB205_color12: ColorBlack 
	{
		name = "1-2 'Chimaera'";
		color[] = {0.9,0,0,1};
	};
	class RB205_color13: ColorBlack 
	{
		name = "1-3 'Rancor'";
		color[] = {0,0,1,1};
	};
	class RB205_color14: ColorBlack 
	{
		name = "1-4 'Wampa'";
		color[] = {0.85,0.85,0,1};
	};
};