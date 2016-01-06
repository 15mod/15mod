#include "constants.hpp"
#include "ui_id.hpp"

private ["_lbData","_menuName","_menuListIdc"];

_menuName = _this select 0;
_menuListIdc = getNumber( SMGR_CONFIG >> "CfgMenus" >> _menuName >> "listBoxIdc" );

_lbData = lbData [_menuListIdc, lbCurSel _menuListIdc];
[_lbData] call smgr_fnc_displayPage;