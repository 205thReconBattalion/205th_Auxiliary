#include "script_component.hpp"
#include "..\gui\defines.hpp"

params [["_ctrl",controlNull]];

if !([] call FUNC(isAdminOrZeus)) exitWith {};

_ctrl ctrlSetPosition [MTI_ADMIN_MESSAGES_TITLE_X,MTI_ADMIN_MESSAGES_SENDBUTTON_Y_2];
_ctrl ctrlCommit 0;
 