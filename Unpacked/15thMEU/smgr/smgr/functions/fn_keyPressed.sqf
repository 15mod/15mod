#include "constants.hpp"

private ["_handled"];

_handled = false;

if ((_this select 1) in actionKeys smgrKeyOpenDlg) then {
	_handled = true;
	if ("ItemSMGR" in items player) then {
		if !(GETVAR("smgrHudOpened")) then {
			if (GETVAR("smgrDlgOpened")) then {
				closeDialog 0;
				SETVAR("smgrDlgOpened",false);
				SETVAR("smgrEnabled",false);
			} else {
				createDialog "RscSmgr";
				SETVAR("smgrDlgOpened",true);
				SETVAR("smgrEnabled",true);
			};
		};
	};
};

if ((_this select 1) in actionKeys smgrKeyOpenHud) then {
	_handled = true;
	if ("ItemSMGR" in items player) then {
		if !(GETVAR("smgrDlgOpened")) then {
			if (GETVAR("smgrHudOpened")) then {
				SmgrRscLayer cutText ["","PLAIN"];
				SETVAR("smgrHudOpened",false);
				SETVAR("smgrEnabled",false);
			} else {
				SmgrRscLayer cutRsc ['RscSmgrHUD', 'PLAIN', 0, true];
				SETVAR("smgrHudOpened",true);
				SETVAR("smgrEnabled",true);
			};
		};
	};
};

_handled