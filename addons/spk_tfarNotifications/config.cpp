class cfgPatches
{
    class spk_tfarNotifications
    {
        requiredAddons[] = {};
        requiredVersion = 1.0;
        weapons[] = {};
        units[]	= {};
    };
};

class Extended_Preinit_EventHandlers
{
	class spk_tfarNotifications_settings_init
	{
		clientInit = "execVM '\spk_tfarNotifications\settings.sqf';";
	};
};
class Extended_PostInit_EventHandlers
{
	class spk_tfarNotifications_script_init
	{
		clientInit = "execVM '\spk_tfarNotifications\init.sqf';";
	};
};