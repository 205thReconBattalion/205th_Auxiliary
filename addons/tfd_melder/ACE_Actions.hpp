class FME {
	displayName = $STR_TFD_Melder_FME;
	//condition = "side _player == resistance";
	condition = "'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player"; ///CHANGES!!!!
	exceptions[] = {"isNotInside"};
	statement = "_rsc = cutRsc ['melder_display', 'PLAIN']";
	icon = "\tfd_melder\data\melder.paa";
	
	class openFME {
		displayName = $STR_TFD_Melder_openFME;
		//condition = "side _player == resistance";
		condition = "'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player"; ///CHANGES!!!!
		exceptions[] = {"isNotInside"};
		statement = "call TFD_Melder_fnc_fme";
		icon = "\tfd_melder\data\melder.paa";
	}
	
	/*class showFME {
		displayName = $STR_TFD_Melder_showFME;
		//condition = "side _player == resistance";
		condition = "'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player"; ///CHANGES!!!!
		exceptions[] = {"isNotInside"};
		statement = "_rsc = cutRsc ['melder_display', 'PLAIN']";
		icon = "\tfd_melder\data\melder.paa";
	}*/
	
	/*class fmsReady {
		displayName = $STR_TFD_Melder_fms1;
		//condition = "side _player == resistance";
		condition = "'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player"; ///CHANGES!!!!
		exceptions[] = {"isNotInside"};
		statement = "[name player, 'ready'] call fnc_setFMS";
		icon = "#(rgb,8,8,3)color(0,0.95,0.07,1)";
	}
	
	class fmsConfirmed {
		displayName = $STR_TFD_Melder_confirm;
		//condition = "side _player == resistance";
		condition = "'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player"; ///CHANGES!!!!
		exceptions[] = {"isNotInside"};
		statement = "[name player, 'confirmed'] call fnc_setFMS";
		icon = "#(rgb,8,8,3)color(0.99,0.92,0.09,1)";
	}
	
	class fmsNotReady{
		displayName = $STR_TFD_Melder_fms6;
		//condition = "side _player == resistance";
		condition = "'tfd_pager1' in items _player or 'tfd_pager2' in items _player or 'tfd_pager3' in items _player"; ///CHANGES!!!!
		exceptions[] = {"isNotInside"};
		statement = "[name player, 'notready'] call fnc_setFMS";
		icon = "#(rgb,8,8,3)color(0.99,0.14,0.1,1)";
	}*/
	
}

class LS {
	displayName = $STR_TFD_Melder_ls;
	condition = "'tfd_ls1' in items _player or 'tfd_ls2' in items _player or 'tfd_ls3' in items _player"; ///CHANGES!!!!
	exceptions[] = {"isNotInside"};
	statement = "_rsc = cutRsc ['melder_display', 'PLAIN']";
	icon = "\tfd_melder\data\ls.paa";

	class openLS1{
		displayName = $STR_TFD_Melder_openls1;
		condition = "'tfd_ls1' in items _player";
		exceptions[] = {"isNotInside"};
		statement = "[1, _player] call TFD_Melder_fnc_ls";
		icon = "\tfd_melder\data\ls.paa";
	}
	class openLS2{
		displayName = $STR_TFD_Melder_openls2;
		condition = "'tfd_ls2' in items _player";
		exceptions[] = {"isNotInside"};
		statement = "[2, _player] call TFD_Melder_fnc_ls";
		icon = "\tfd_melder\data\ls.paa";
	}
	class openLS3{
		displayName = $STR_TFD_Melder_openls3;
		condition = "'tfd_ls3' in items _player";
		exceptions[] = {"isNotInside"};
		statement = "[3, _player] call TFD_Melder_fnc_ls";
		icon = "\tfd_melder\data\ls.paa";
	}
}
