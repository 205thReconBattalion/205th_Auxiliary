class CfgPatches
{
	class modCompats_3AS_enableLoadingScreens
	{
		requiredAddons[] =
		{
			"3AS_Main_Loadorder"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
	};
};

class 3as_LoadingScreen
{
    disableLoadingPictures = 1;
	/*
		0 = Use loading screens and 3AS images
		1 = Disable the replacement of logos and images on loading screens
	*/
};