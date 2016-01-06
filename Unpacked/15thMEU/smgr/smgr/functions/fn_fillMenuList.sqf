#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_data",
	"_text",
	"_idx",
	"_menuListIdc",
	"_menuItems"
];

_menuListIdc = _this select 0;
_menuItems = _this select 1;

lbClear _menuListIdc;
{
	_text  = _x select 0;
	_data = _x select 1;
	_idx = lbAdd [_menuListIdc, _text];
	lbSetData [_menuListIdc, _idx, _data];
} forEach _menuItems;
lbSetCurSel [_menuListIdc, 0];