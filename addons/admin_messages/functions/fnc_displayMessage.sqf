#include "script_component.hpp"
#include "..\gui\defines.hpp"

params [["_info",""],["_message",""]];

QGVAR(customChatLayer) cutRsc [QGVAR(rscCustomChat),"PLAIN",-1,true];
private _customChatTitleDisplay = uiNamespace getVariable [QGVAR(rscCustomChat),displayNull];
private _ctrlText = _customChatTitleDisplay displayCtrl MTI_ADMIN_MESSAGES_IDC_CUSTOMCHATTEXT;

_ctrlText ctrlSetStructuredText parseText format ["<t color='#E51919'>%1</t> %2",format [LLSTRING(CHANNEL),_info],_message];

private _textHeight = ctrlTextHeight _ctrlText;
/* private _textWidth = ctrlTextWidth _ctrlText; */

(ctrlPosition _ctrlText) params ["_origX","_origY","_origW","_origH"];

_ctrlText ctrlSetPosition [_origX,_origY - _textHeight,_origW,_textHeight];
_ctrlText ctrlCommit 0;


// add message to chat either way >> user can check chat history on map, if enabled
GVAR(channel) radioChannelAdd [player];
GVAR(channel) radioChannelSetCallsign format [LLSTRING(CHANNEL),_info];

player customChat [GVAR(channel), _message];
GVAR(channel) radioChannelRemove [player];
