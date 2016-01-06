#include "constants.hpp"

private [
	"_posZ",
	"_posY",
	"_posX",
	"_realPos",
	"_sentence",
	"_error"
];

SETVAR("isSmgrTracking",true);
[1] call smgr_fnc_consumePower;

_realPos = visiblePositionASL player;
_error = [_realPos] call smgr_fnc_gpsCalculateError;

_posX = (_realPos select 0) + 2*(random _error) -_error;
_posY = (_realPos select 1) + 2*(random _error) -_error;
_posZ = (_realPos select 2) + 2*(random _error) -_error;

_sentence = [ [_posX,_posY,_posZ], _error, round time ];

[_sentence] call smgr_fnc_gpsUpdateMemory;

sleep (1 + _error/5);

SETVAR("isSmgrTracking",false);