#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_item",
	"_nearestPlayer",
	"_menuList,",
	"_transferPeer",
	"_menuList"
];


smgrToolBarAction_0 = { ["MainMenu"] call smgr_fnc_displayPage };
smgrToolBarAction_1 = {};
smgrToolBarAction_2 = {};
smgrToolBarAction_3 = { ["Datalink"] call smgr_fnc_selectMenuEntry };

_menuList = [];

// P2P link to player
_nearestPlayer = nearestObjects [player, ["Man"], 3];
if (count _nearestPlayer > 1) then {
	_transferPeer = _nearestPlayer select 1;
	SETVAR("smgrTransferPeer",_transferPeer);
	_item = [format ["P2P %1", name _transferPeer], "P2Plink"];
	_menuList set [count _menuList, _item];
};

// Link to laser designator
if ("Laserdesignator" in weapons player) then {
	_item = ["Laser Designator", "LDlink"];
	_menuList set [count _menuList, _item];
};

["Datalink", _menuList] call smgr_fnc_updateView;