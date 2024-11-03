if !(hasInterface) exitwith {};
if (is3DEN) exitwith {}; 
if !(isnil "vibro_axe_actionid") exitwith { diag_log "vibroAxeInit is being called more than once"}; 
if !(canSuspend) exitwith {
	[] spawn VAXE_fnc_axe_initplayer;
};
waitUntil { isPlayer player }; 
vibro_axe_actionid = [
	player,												// Object the action is attached to
	"Chop",												// Title of the action
	"\RB205_gameplayChanges\removeTrees\axe_icon.paa",	// Idle icon shown on screen
	"\RB205_gameplayChanges\removeTrees\axe_icon.paa",	// Progress icon shown on screen
	"call VAXE_fnc_axe_condition",
	"call VAXE_fnc_axe_condition",
	{
		(_this#1) spawn VAXE_fnc_axe_chopsound;  
		//[player ,"AinvPknlMstpSnonWnonDnon_medicUp3"] remoteExec ["playMove", 0, player];
		
	},													// Code executed when action starts
	{},													// Code executed on every progress tick
	{
		chopchopsound = false;
		_arbol  = cursorObject;
		_arbol spawn { sleep 3; hideObjectGlobal _this};
		_arbol setDamage [1,true,player, player] ;

	},													// Code executed on completion
	{
		chopchopsound = false;
	},													// Code executed on interrupted
	[],													// Arguments passed to the scripts as _this select 3
	5,													// Action duration in seconds
	0,													// Priority
	false,												// Remove on completion
	false,
	false												// Show in unconscious state
] call BIS_fnc_holdActionAdd;