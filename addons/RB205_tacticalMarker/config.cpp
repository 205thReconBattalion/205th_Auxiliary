class cfgPatches
{
	class RB205_tacticalMarker
	{
		author = "205th Recon Battalion";
		requiredAddons[] = {};
		requiredVersion = 1.0;
		units[] = {};
	};
};

class CfgMarkerClasses
{
	class RB205_tasks
	{
		displayName="[205th] Tasks";
	};
	class RB205_pointsOfInterest
	{
		displayName="[205th] Points Of Interest";
	};
	class RB205_addMarker
	{
		displayName="[205th] Additional Marker";
	};
	class RB205_letter
	{
		displayName="[205th] Letter";
	};
};
class CfgMarkers
{
	class RB205_M_dot
	{
		name = "Dot";
		icon = "RB205_tacticalMarker\data\dot.paa";
		
		markerClass = "RB205_tasks";

		color[] = {0,0,0,1};
		size = 32;
		shadow = 0;
		scope = 2;
		showEditorMarkerColor = 1;
	};
	class RB205_M_square: RB205_M_dot
	{
		name = "Square";
		icon = "RB205_tacticalMarker\data\square.paa";
	};
	class RB205_M_triangle: RB205_M_dot
	{
		name = "Triangle";
		icon = "RB205_tacticalMarker\data\triangle.paa";
	};

	class RB205_M_attack: RB205_M_dot
	{
		name = "Attack";
		icon = "RB205_tacticalMarker\data\attack.paa";
	};
	class RB205_M_support: RB205_M_dot
	{
		name = "Support";
		icon = "RB205_tacticalMarker\data\support.paa";
	};
	class RB205_M_ambush: RB205_M_dot
	{
		name = "Ambush";
		icon = "RB205_tacticalMarker\data\ambush.paa";
	};
	class RB205_M_block: RB205_M_dot
	{
		name = "Block";
		icon = "RB205_tacticalMarker\data\block.paa";
	};
	class RB205_M_breach: RB205_M_dot
	{
		name = "Breach";
		icon = "RB205_tacticalMarker\data\breach.paa";
	};
	class RB205_M_bypass: RB205_M_dot
	{
		name = "Bypass";
		icon = "RB205_tacticalMarker\data\bypass.paa";
	};
	class RB205_M_clear: RB205_M_dot
	{
		name = "Clear";
		icon = "RB205_tacticalMarker\data\clear.paa";
	};
	class RB205_M_disrupt: RB205_M_dot
	{
		name = "Disrupt";
		icon = "RB205_tacticalMarker\data\disrupt.paa";
	};
	class RB205_M_exfiltrate: RB205_M_dot
	{
		name = "Exfiltrate";
		icon = "RB205_tacticalMarker\data\exfiltrate.paa";
	};

	class RB205_M_moveAndAttack: RB205_M_dot
	{
		name = "Move And Attack";
		icon = "RB205_tacticalMarker\data\moveAndAttack.paa";
	};
	class RB205_M_moveAndEvade: RB205_M_dot
	{
		name = "Move And Evade";
		icon = "RB205_tacticalMarker\data\moveAndEvade.paa";
	};
	class RB205_M_followAndSupport: RB205_M_dot
	{
		name = "Follow And Support";
		icon = "RB205_tacticalMarker\data\followAndSupport.paa";
	};
	class RB205_M_followAndAssume: RB205_M_dot
	{
		name = "Follow And Assume";
		icon = "RB205_tacticalMarker\data\followAndAssume.paa";
	};
	class RB205_M_rallyPoint: RB205_M_dot
	{
		name = "Rally Point";
		icon = "RB205_tacticalMarker\data\rallyPoint.paa";
	};
	class RB205_M_landingZone: RB205_M_dot
	{
		name = "Landing Zone";
		icon = "RB205_tacticalMarker\data\landingZone.paa";
	};
	class RB205_M_start: RB205_M_dot
	{
		name = "Start";
		icon = "RB205_tacticalMarker\data\start.paa";
	};
	class RB205_M_end: RB205_M_dot
	{
		name = "End";
		icon = "RB205_tacticalMarker\data\end.paa";
	};

	class RB205_M_supress: RB205_M_dot
	{
		name = "Supress";
		icon = "RB205_tacticalMarker\data\supress.paa";
	};
	class RB205_M_neutralize: RB205_M_dot
	{
		name = "Neutralize";
		icon = "RB205_tacticalMarker\data\neutralize.paa";
	};
	class RB205_M_destroy: RB205_M_dot
	{
		name = "Destroy";
		icon = "RB205_tacticalMarker\data\destroy.paa";
	};
	
	class RB205_M_warning: RB205_M_dot
	{
		name = "Warning";
		icon = "RB205_tacticalMarker\data\warning.paa";
	};
	class RB205_M_unknown: RB205_M_dot
	{
		name = "Unknown";
		icon = "RB205_tacticalMarker\data\unknown.paa";
	};
	class RB205_M_minefield: RB205_M_dot
	{
		name = "Minefield";
		icon = "RB205_tacticalMarker\data\minefield.paa";
	};
	class RB205_M_dangerousWildlife: RB205_M_dot
	{
		name = "Dangerous Wildlife";
		icon = "RB205_tacticalMarker\data\dangerousWildlife.paa";
	};
	
	class RB205_M_phaseline: RB205_M_dot
	{
		name = "Phaseline";
		icon = "RB205_tacticalMarker\data\phaseline.paa";
	};
	class RB205_M_objective: RB205_M_dot
	{
		name = "Objective";
		icon = "RB205_tacticalMarker\data\objective.paa";
	};
	class RB205_M_objectiveClear: RB205_M_dot
	{
		name = "Objective Clear";
		icon = "RB205_tacticalMarker\data\objectiveClear.paa";
	};
	class RB205_M_forwardOperatingBase: RB205_M_dot
	{
		name = "FOB";
		icon = "RB205_tacticalMarker\data\forwardOperatingBase.paa";
	};

	/* POINTS OF INTEREST */
	
	class RB205_M_passagePoint: RB205_M_dot
	{
		name = "Passage Point";
		icon = "RB205_tacticalMarker\data\passagePoint.paa";

		markerClass = "RB205_pointsOfInterest";
	};
	class RB205_M_checkpoint: RB205_M_passagePoint
	{
		name = "Checkpoint";
		icon = "RB205_tacticalMarker\data\checkpoint.paa";
	};
	class RB205_M_civilianCollectionPoint: RB205_M_passagePoint
	{
		name = "Civilian Collection Point";
		icon = "RB205_tacticalMarker\data\civilianCollectionPoint.paa";
	};
	class RB205_M_detaineeCollectionPoint: RB205_M_passagePoint
	{
		name = "Detainee Collection Point";
		icon = "RB205_tacticalMarker\data\detaineeCollectionPoint.paa";
	};
	class RB205_M_casualtiesCollectionPoint: RB205_M_passagePoint
	{
		name = "Casualties Collection Point";
		icon = "RB205_tacticalMarker\data\casualtiesCollectionPoint.paa";
	};
	class RB205_M_ammoSupplyPoint: RB205_M_passagePoint
	{
		name = "Ammo Supply Point";
		icon = "RB205_tacticalMarker\data\ammoSupplyPoint.paa";
	};
	class RB205_M_r3p: RB205_M_passagePoint
	{
		name = "Rearm, Refuel and Resupply Point";
		icon = "RB205_tacticalMarker\data\r3p.paa";
	};
	class RB205_M_medevac: RB205_M_passagePoint
	{
		name = "Medevac";
		icon = "RB205_tacticalMarker\data\medevac.paa";
	};
	class RB205_M_isolatedPersonnelRecoveryPoint: RB205_M_passagePoint
	{
		name = "Isolated Personnel Recovery Point";
		icon = "RB205_tacticalMarker\data\isolatedPersonnelRecoveryPoint.paa";
	};

	/* ADDITIONAL MARKER */

	class RB205_M_intel: RB205_M_dot
	{
		name = "Intel";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\documents_ca.paa";

		markerClass = "RB205_addMarker";
		size = 18;
		showEditorMarkerColor = 0;
	};
	class RB205_M_target: RB205_M_intel
	{
		name = "Target";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\kill_ca.paa";
	};
	class RB205_M_explosive: RB205_M_intel
	{
		name = "Explosive";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa";
	};
	class RB205_M_mine: RB205_M_intel
	{
		name = "Mine";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\mine_ca.paa";
	};
	class RB205_M_spottingPosition: RB205_M_intel
	{
		name = "Spotting Position";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\scout_ca.paa";
	};
	class RB205_M_combat: RB205_M_intel
	{
		name = "Combat";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\attack_ca.paa";
	};
	class RB205_M_defensivePosition: RB205_M_intel
	{
		name = "Defensive Position";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\defend_ca.paa";
	};
	class RB205_M_groupOfPeople: RB205_M_intel
	{
		name = "Group Of People";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\meet_ca.paa";
	};
	class RB205_M_search: RB205_M_intel
	{
		name = "Search";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\search_ca.paa";
	};
	class RB205_M_assist: RB205_M_intel
	{
		name = "Assist";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\help_ca.paa";
	};
	class RB205_M_talk: RB205_M_intel
	{
		name = "Talk";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\Talk_ca.paa";
	};
	class RB205_M_pickUp: RB205_M_intel
	{
		name = "Pick Up";
		icon = "\A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa";
	};
	class RB205_M_medic: RB205_M_intel
	{
		name = "Medic";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\Heal_ca.paa";
	};
	class RB205_M_rearm: RB205_M_intel
	{
		name = "Rearm";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa";
	};
	class RB205_M_refuel: RB205_M_intel
	{
		name = "Refuel";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\refuel_ca.paa";
	};
	class RB205_M_repair: RB205_M_intel
	{
		name = "Repair";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\repair_ca.paa";
	};

	/* LETTER */
	
	class RB205_M_letter_frame: RB205_M_dot
	{
		name = "Frame";
		icon = "RB205_tacticalMarker\data\letterFrame.paa";

		markerClass = "RB205_letter";
		size = 25;
		showEditorMarkerColor = 0;
	};
	class RB205_M_letter_a: RB205_M_dot
	{
		name = "Alpha | Aurek";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\a_ca.paa";

		markerClass = "RB205_letter";
		size = 18;
		showEditorMarkerColor = 0;
	};
	class RB205_M_letter_b: RB205_M_letter_a
	{
		name = "Bravo | Besh";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\b_ca.paa";
	};
	class RB205_M_letter_c: RB205_M_letter_a
	{
		name = "Charlie | Cresh";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\c_ca.paa";
	};
	class RB205_M_letter_d: RB205_M_letter_a
	{
		name = "Delta | Dorn";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\d_ca.paa";
	};
	class RB205_M_letter_e: RB205_M_letter_a
	{
		name = "Echo | Esk";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\e_ca.paa";
	};
	class RB205_M_letter_f: RB205_M_letter_a
	{
		name = "Foxtrot | Forn";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\f_ca.paa";
	};
	class RB205_M_letter_g: RB205_M_letter_a
	{
		name = "Golf | Grek";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\g_ca.paa";
	};
	class RB205_M_letter_h: RB205_M_letter_a
	{
		name = "Hotel | Herf";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\h_ca.paa";
	};
	class RB205_M_letter_i: RB205_M_letter_a
	{
		name = "India | Isk";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\i_ca.paa";
	};
	class RB205_M_letter_j: RB205_M_letter_a
	{
		name = "Juliett | Jenth";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\j_ca.paa";
	};
	class RB205_M_letter_k: RB205_M_letter_a
	{
		name = "Kilo | Krill";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\k_ca.paa";
	};
	class RB205_M_letter_l: RB205_M_letter_a
	{
		name = "Lima | Leth";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\l_ca.paa";
	};
	class RB205_M_letter_m: RB205_M_letter_a
	{
		name = "Mike | Mern";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\m_ca.paa";
	};
	class RB205_M_letter_n: RB205_M_letter_a
	{
		name = "November | Nern";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\n_ca.paa";
	};
	class RB205_M_letter_o: RB205_M_letter_a
	{
		name = "Oscar | Osk";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\o_ca.paa";
	};
	class RB205_M_letter_p: RB205_M_letter_a
	{
		name = "Papa | Peth";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\p_ca.paa";
	};
	class RB205_M_letter_q: RB205_M_letter_a
	{
		name = "Quebec | Qek";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\q_ca.paa";
	};
	class RB205_M_letter_r: RB205_M_letter_a
	{
		name = "Romeo | Resh";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\r_ca.paa";
	};
	class RB205_M_letter_s: RB205_M_letter_a
	{
		name = "Sierra | Senth";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\s_ca.paa";
	};
	class RB205_M_letter_t: RB205_M_letter_a
	{
		name = "Tango | Trill";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\t_ca.paa";
	};
	class RB205_M_letter_u: RB205_M_letter_a
	{
		name = "Uniform | Usk";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\u_ca.paa";
	};
	class RB205_M_letter_v: RB205_M_letter_a
	{
		name = "Victor | Vev";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\v_ca.paa";
	};
	class RB205_M_letter_w: RB205_M_letter_a
	{
		name = "Whiskey | Wesk";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\w_ca.paa";
	};
	class RB205_M_letter_x: RB205_M_letter_a
	{
		name = "X-Ray | Xesh";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\x_ca.paa";
	};
	class RB205_M_letter_y: RB205_M_letter_a
	{
		name = "Yankee | Yirt";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\y_ca.paa";
	};
	class RB205_M_letter_z: RB205_M_letter_a
	{
		name = "Zulu | Zerek";
		icon = "\A3\ui_f\data\igui\cfg\simpletasks\letters\z_ca.paa";
	};
};