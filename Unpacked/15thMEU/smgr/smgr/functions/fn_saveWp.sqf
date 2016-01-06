#include "constants.hpp"

private [
	"_index",
	"_wp",
	"_wpList"
];

_index = _this select 0;
_wp = _this select 1;

_wpList = GETVAR("smgrWpList");
_wpList set [_index,_wp];

SETVAR("smgrWpList", _wpList);