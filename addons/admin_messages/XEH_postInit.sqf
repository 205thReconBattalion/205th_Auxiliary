#include "script_component.hpp"

if (isServer) then {
	GVAR(admin_messages_channel) = radioChannelCreate [[0.9,0.1,0.1,1],"Admin","Admin",[],true];
	publicVariable QGVAR(admin_messages_channel);
};

if (hasInterface) then {
	[QGVAR(receiveMessage),{_this call FUNC(receiveMessage)}] call CBA_fnc_addEventHandler;
};
