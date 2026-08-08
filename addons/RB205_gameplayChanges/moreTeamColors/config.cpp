/*
	Adds more team colors to the ace team managment
*/

class cfgPatches
{
	class RB205_gameplayChanges_moreTeamColors
	{
		requiredAddons[] =
        {
            "ace_interaction"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_TeamManagement
			{
				class RB205_SelectColor
				{
					displayName = "Select Team Color";
					condition = "ace_interaction_EnableTeamManagement";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
					modifierFunction = "[_target getVariable ['RB205_teamColor', 'MAIN'], '\z\ace\addons\interaction\UI\team\team_management_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
					showDisabled = 1;

					class RB205_JoinTeamWhite
					{
						displayName = "Join White";
						condition = "true";
						statement = "[_player, 'MAIN', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'MAIN', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['MAIN', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamRed
					{
						displayName = "Join Red";
						condition = "true";
						statement = "[_player, 'RED', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'RED', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['RED', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamGreen
					{
						displayName = "Join Green";
						condition = "true";
						statement = "[_player, 'GREEN', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'GREEN', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['GREEN', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamBlue
					{
						displayName = "Join Blue";
						condition = "true";
						statement = "[_player, 'BLUE', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'BLUE', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['BLUE', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamYellow
					{
						displayName = "Join Yellow";
						condition = "true";
						statement = "[_player, 'YELLOW', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'YELLOW', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['YELLOW', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamCyan
					{
						displayName = "Join Cyan";
						condition = "true";
						statement = "[_player, 'MAIN', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'CYAN', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['CYAN', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamPink
					{
						displayName = "Join Pink";
						condition = "true";
						statement = "[_player, 'MAIN', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'PINK', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['PINK', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
					class RB205_JoinTeamBlack
					{
						displayName = "Join Black";
						condition = "true";
						statement = "[_player, 'MAIN', true] call ace_interaction_fnc_joinTeam; _player setVariable ['RB205_teamColor', 'BLACK', true]; [_player] call RB205_gameplayChanges_moreTeamColors_fnc_changeTeamColor;";
						exceptions[] = {"isNotSwimming","isNotInside","isNotSitting","isNotOnLadder","isNotRefueling"};
						modifierFunction = "['BLACK', '\z\ace\addons\interaction\UI\team\team_white_ca.paa', _this select 3] call RB205_gameplayChanges_moreTeamColors_fnc_modifyTeamManagementAction";
						showDisabled = 1;
					};
				};

				class ACE_JoinTeamMain {
					condition = "false";
				}
				class ACE_JoinTeamRed {
					condition = "false";
				}
				class ACE_JoinTeamGreen {
					condition = "false";
				}
				class ACE_JoinTeamBlue {
					condition = "false";
				}
				class ACE_JoinTeamYellow {
					condition = "false";
				}
			};
		}
	};
};

class Extended_PostInit_EventHandlers 
{
	class RB205_GC_moreTeamColors
	{
		init = "call compile preprocessFileLineNumbers '\RB205_gameplayChanges\moreTeamColors\XEH_postInit.sqf'";
	};
};

class CfgFunctions
{
	class RB205_gameplayChanges_moreTeamColors
	{
		class modifyteammanagementaction
		{
			file = "RB205_gameplayChanges\moreTeamColors\functions";
			class modifyTeamManagementAction {};
		}
		class changeTeamColor
		{
			file = "RB205_gameplayChanges\moreTeamColors\functions";
			class changeTeamColor {};
		}
	};
};