TFD_Melder_ownerPager1 = [];
TFD_Melder_ownerPager2 = [];
TFD_Melder_ownerPager3 = [];

_frequency = _this select 0;

lbClear 2103;
lbClear 2109;
ctrlSetText [2194, (str _frequency)];

i = 0;
e = 0;
{
	_items = items _x;
	
	if("tfd_pager1" in _items) then
	{
		TFD_Melder_ownerPager1 pushback _x;
	};
	if("tfd_pager2" in _items) then
	{
		TFD_Melder_ownerPager2 pushback _x;
	};
	if("tfd_pager3" in _items) then
	{
		TFD_Melder_ownerPager3 pushback _x;
	};
	
	switch(_frequency) do
	{
		case 1:
		{
			if("tfd_pager1" in _items) then
			{
				_x call TFD_Melder_fnc_addToList;
			};
			
		};
		case 2:
		{
			if("tfd_pager2" in _items) then
			{
				_x call TFD_Melder_fnc_addToList;
			};
		};
		case 3:
		{
			if("tfd_pager3" in _items) then
			{
				_x call TFD_Melder_fnc_addToList;
			};
		};
	};	
	
	

	
	
} forEach allPlayers;

