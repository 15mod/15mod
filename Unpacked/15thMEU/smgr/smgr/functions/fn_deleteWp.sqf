#include "constants.hpp"

private [
	"_newWpList",
	"_indexOfWpToDelete"
];

_indexOfWpToDelete = _this select 0;

_newWpList = [GETVAR("smgrWpList"), _indexOfWpToDelete] call bis_fnc_removeIndex;

SETVAR("smgrWpList", _newWpList);

["WpList"] call smgr_fnc_controller;