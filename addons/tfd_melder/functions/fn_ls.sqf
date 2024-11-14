//Create Control Center
//this addAction[localize "STR_TFD_Melder_ls",{[1/2/3, player] call TFD_Melder_fnc_ls}];

_caller = _this select 1;

//if((side _caller) == resistance OR (side _caller) == blufor) then
if('tfd_pager1' in items _caller or 'tfd_pager2' in items _caller or 'tfd_pager3' in items _caller or 'tfd_ls1' in items _caller or 'tfd_ls2' in items _caller or 'tfd_ls3' in items _caller) then
{
	createDialog "GUI_Leitstelle";
	[_this select 0] call TFD_Melder_fnc_getUnits;
	//call TFD_Melder_fnc_getUnits;
}
