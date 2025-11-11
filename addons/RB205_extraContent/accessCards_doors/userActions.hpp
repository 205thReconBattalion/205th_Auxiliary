#define USER_ACTION_ESSENTIALS  \
	onlyForPlayer = 0;  \
	priority = 0.4;  \
	radius = 3;

#define USER_ACTION_OPEN  \
	displayName = "Open Door";  \
	displayNameDefault = "<img image='\3AS\3AS_Terrain_Universal\icons\open_door_ca.paa' size='2.5' />";  \
	USER_ACTION_ESSENTIALS

#define USER_ACTION_LOCKED  \
	displayName = "(Access Card required)";  \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_cancel_ca.paa' size='2.5' />";  \
	statement = "";