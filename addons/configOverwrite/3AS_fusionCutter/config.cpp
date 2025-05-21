class CfgPatches
{
	class configOverwrite_3AS_fusionCutter
	{
		requiredAddons[] =
		{
			"3AS_Weapons_Roleplay"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class CfgMagazines
{
    class CA_Magazine;
    
    class 3AS_FusionCutter_Magazine: CA_Magazine
    {
        mass = 1;
    };

    class 3AS_FusionCutter_Dewreck_Magazine: 3AS_FusionCutter_Magazine
    {
        mass = 5;
    };
};