#include "constants.hpp"

private [
	"_page",
	"_args",
	"_controller",
	"_ctrl"
];


_page = _this select 0;
_args = [_this, 1, []] call bis_fnc_param;

_controller = getText( SMGR_CONFIG >> "CfgViews" >> _page >> "controller" );
call compile format ["%1 call %2", _args, _controller];