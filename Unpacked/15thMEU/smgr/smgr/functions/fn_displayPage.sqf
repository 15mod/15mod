#include "constants.hpp"

private ["_page", "_args"];

_page = _this select 0;
_args = [_this, 1, []] call bis_fnc_param;

[ GETVAR("smgrCurrentPage") ] call smgr_fnc_hideView;
SETVAR("smgrCurrentPage", _page);

[ _page ] call smgr_fnc_setToolbarLabels;
[ _page ] call smgr_fnc_showView;
[ _page, _args ] spawn smgr_fnc_controller;