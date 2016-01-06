#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_wpAz",
	"_wpDist",
	"_wpName",
	"_openedForEdit",
	"_wpPos",
	"_wpIndex",
	"_waypoint"
];


smgrToolbarAction_0 = { ["WpList"] call smgr_fnc_displayPage; };
smgrToolbarAction_1 = {};
smgrToolbarAction_2 = {};

_openedForEdit = _this;

_wpIndex = count GETVAR("smgrWpList");
_wpName = "";
_wpPos = "";
_wpDist = "0";
_wpAz = "0";

if _openedForEdit then {
	_wpIndex = lbCurSel SMGR_IDC_WPLIST_LIST;
	_waypoint = GETVAR("smgrWpList") select _wpIndex;

	_wpName = _waypoint select 0;
	_wpPos = [_waypoint select 1] call smgr_fnc_positionToMapGrid;
};

smgrToolbarAction_3 = compile format ["[%1] call smgr_fnc_editWpSave;", _wpIndex];

["EditWp", [_wpIndex, _wpName, _wpPos, _wpDist, _wpAz] ] call smgr_fnc_updateView;