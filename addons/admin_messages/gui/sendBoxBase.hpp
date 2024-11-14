class RscText;
class RscTitle;
class RscEdit;
class RscButtonMenu;
class RscCombo;

class GVAR(sendBoxTitleBase): RscTitle {
	idc = -1;
	style = 0;

	onLoad = QUOTE(_this call FUNC(setTitle));

	text = "ERROR ";
	colorBackground[] = {
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
	};

	x = MTI_ADMIN_MESSAGES_TITLE_X;
	y = MTI_ADMIN_MESSAGES_TITLE_Y;
	w = MTI_ADMIN_MESSAGES_TOTAL_W;
	h = MTI_ADMIN_MESSAGES_ELEMENT_H;
};

class GVAR(sendBoxBGBase): RscText {
	idc = -1;

	colorBackground[] = {0, 0, 0, 0.700000};

	x = MTI_ADMIN_MESSAGES_TITLE_X;
	y = MTI_ADMIN_MESSAGES_EDITBOX_BG_Y;
	w = MTI_ADMIN_MESSAGES_TOTAL_W;
	h = MTI_ADMIN_MESSAGES_EDITBOX_BG_H;
};

class GVAR(sendBoxBase): RscEdit {
	idc = -1;
	style = 16;

	autocomplete = "";
	shadow = 0;
	font = "EtelkaMonospacePro";
	sizeEx = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

	onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(sendBoxCtrl),(_this select 0))]);
	onUnLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(sendBoxCtrl),nil)]);

	onKeyDown = QUOTE(if ((_this select 1) isEqualTo 28 && !(_this select 2) && !(_this select 3) && !(_this select 4)) then {call FUNC(sendMessage);};);

	x = MTI_ADMIN_MESSAGES_EDITBOX_X;
	y = MTI_ADMIN_MESSAGES_EDITBOX_Y;
	w = MTI_ADMIN_MESSAGES_EDITBOX_W;
	h = MTI_ADMIN_MESSAGES_EDITBOX_H;
};

class GVAR(sendBoxButtonBase): RscButtonMenu {
	idc = MTI_ADMIN_MESSAGES_IDC_SENDBUTTON;

	onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(sendBoxButtonCtrl),(_this select 0))]; _this call FUNC(setSendButtonPosition));
	onUnLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(sendBoxButtonCtrl),nil)]);

	text = CSTRING(SENDBOXBUTTON);
	action = QUOTE(call FUNC(sendMessage));

	x = MTI_ADMIN_MESSAGES_TITLE_X;
	y = MTI_ADMIN_MESSAGES_SENDBUTTON_Y;
	w = MTI_ADMIN_MESSAGES_TOTAL_W;
	h = MTI_ADMIN_MESSAGES_ELEMENT_H;
};

class GVAR(sendBoxListboxBase): RscCombo {
	idc = -1;

	font = "EtelkaMonospacePro";
	rowHeight = 10;
	/*sizeEx = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";*/

	onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(sendBoxListboxCtrl),(_this select 0))]; _this call FUNC(initListbox));
	onUnLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(sendBoxListboxCtrl),nil)]);
	onLBSelChanged = QUOTE(_this call FUNC(onRecipientChanged));

	x = MTI_ADMIN_MESSAGES_TITLE_X;
	y = MTI_ADMIN_MESSAGES_SENDBUTTON_Y;
	w = MTI_ADMIN_MESSAGES_TOTAL_W;
	h = MTI_ADMIN_MESSAGES_ELEMENT_H;
};
