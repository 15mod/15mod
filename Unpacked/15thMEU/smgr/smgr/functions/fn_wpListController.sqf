#include "constants.hpp"
#include "ui_id.hpp"

private ["_text","_list"];

smgrToolbarAction_0 = { ["MainMenu"] call smgr_fnc_displayPage; };
smgrToolbarAction_1 = {
	private["_idx","_curWp"];
	_idx = lbCurSel SMGR_IDC_WPLIST_LIST;
	_curWp = GETVAR("smgrCurrentWp");
	[_idx] call smgr_fnc_deleteWp;
	if ( _idx <= _curWp ) then { ["prev"] call smgr_fnc_cycleWp; };
};
smgrToolbarAction_2 = { ["EditWp", true] call smgr_fnc_displayPage; };
smgrToolbarAction_3 = { ["EditWp", false] call smgr_fnc_displayPage; };

_list = [];
{

	_text = [_x, _foreachIndex] call smgr_fnc_formatWp;
	_list set [count _list, _text];

} forEach GETVAR("smgrWpList");

["WpList", _list] call smgr_fnc_updateView;