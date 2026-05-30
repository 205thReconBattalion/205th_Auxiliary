class cfgPatches
{
	class RB205_gameplayChanges_discordPresence
	{
		requiredAddons[] =
        {
			"CAU_DiscordRichPresence"
        };
		skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgDiscordRichPresence {
    applicationID = "1510198413201772595";
    defaultDetails = "Arma 3 Starsim (DE/GER)";	// Upper text
    defaultState = "Mehr Infos: 205rb.de";		// Lower text  
    defaultLargeImageKey = "205th_logo";				// Large image
    defaultLargeImageText = "205th Recon Battalion";	// Large image hover text
    defaultSmallImageKey = "a3_logo";					// Small image
    defaultSmallImageText = "Arma 3";					// Small image hover text
    defaultButtons[] = {
		"Jetzt Mitmachen", "https://www.205rb.de/"
	};	// Button texts and urls
    useTimeElapsed = 0; // Show time elapsed since the player connected (1 - true, 0 - false)
};