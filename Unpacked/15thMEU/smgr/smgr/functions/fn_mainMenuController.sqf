#include "constants.hpp"
#include "ui_id.hpp"

private ["_menuList"];

smgrToolBarAction_0 = {};
smgrToolBarAction_1 = {};
smgrToolBarAction_2 = {};
smgrToolBarAction_3 = { ["MainMenu"] call smgr_fnc_selectMenuEntry };

_menuList = ["MainMenu"] call smgr_fnc_getMenuItems;
["MainMenu", _menuList] call smgr_fnc_updateView;