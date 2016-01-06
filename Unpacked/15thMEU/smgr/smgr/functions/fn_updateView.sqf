#include "constants.hpp"

private [
	"_page",
	"_updateFunction",
	"_args"
];

_page = _this select 0;
_args = [_this, 1, []] call bis_fnc_param;

_updateFunction = getText( SMGR_CONFIG >> "CfgViews" >> _page >> "updateFunction" );

call compile format ["%1 call %2", _args, _updateFunction];