#include "script_component.hpp"

params [["_ctrl",controlNull]];

private _text = if ([] call FUNC(isAdminOrZeus)) then {
	LLSTRING(SENDBOXTITLEADMIN)
} else {
	LLSTRING(SENDBOXTITLEPLAYER)
};

_ctrl ctrlSetText _text
