/*
	Removes unused radio channels and adds a "Recon channel" for intelligence infos
*/

class cfgPatches
{
	class RB205_gameplayChanges_editChannels
	{
		requiredAddons[] = {};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class RB205_gameplayChanges_editChannels
	{
		class CHNL
		{
			file = "RB205_gameplayChanges\editChannels\functions";
			class disableChannel { postInit=1 };
		}
	};
};