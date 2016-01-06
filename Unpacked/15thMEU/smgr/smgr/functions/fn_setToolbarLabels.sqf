#include "constants.hpp"

private [
	"_page",
	"_toolbarLabels"
];

_page = _this select 0;
_toolbarLabels = getArray(SMGR_CONFIG >> "CfgViews" >> _page >> "toolbarLabels");
["Toolbar", _toolbarLabels] call smgr_fnc_updateView;