#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_menuConfig",
	"_data",
	"_menuName",
	"_text",
	"_i",
	"_menuList"
];

_menuName = _this select 0;

_menuList = [];

_menuConfig = SMGR_CONFIG >> "CfgMenus" >> _menuName;
for "_i" from 0 to ((count _menuConfig)-1) do
{
	if (isClass (_menuConfig select _i)) then {
		_text = getText( _menuConfig select _i >> "text" );
		_data = getText( _menuConfig select _i >> "data" );
		[_menuList, [_text,_data] ] call bis_fnc_arrayPush;
	};
};

_menuList