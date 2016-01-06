#include "constants.hpp"

private [
	"_i",
	"_j",
	"_xOrigin",
	"_gridStepY",
	"_yStep",
	"_yOrigin",
	"_xOffset",
	"_yOffset",
	"_gridOrigin",
	"_yInverted"
];


_gridOrigin = mapGridPosition [0,0];
_xOrigin = [_gridOrigin,0,2] call BIS_fnc_trimString;
_yOrigin = [_gridOrigin,3,5] call BIS_fnc_trimString;

//is Y inverted ?
_gridStepY = mapGridPosition [0,100];
_yStep = [_gridStepY,3,5] call BIS_fnc_trimString;
_yInverted = false;
if ((parseNumber _yOrigin) > (parseNumber _yStep)) then {
	_yInverted = true;
};

//find map origin (bottom left) coords
_i = 1; _j = 1;
while {mapGridPosition [0,-_i] == _gridOrigin} do { _i = _i + 1; };
if _yInverted then { _i = 0 - _i; };
_yOffset = (parseNumber _yOrigin) * 100 + _i;

while {mapGridPosition [-_j,0] == _gridOrigin} do { _j = _j + 1; };
_xOffset = (parseNumber _xOrigin) * 100 + _j; //Assume X is never inverted

//set vars
missionNamespace setVariable ["smgrMapFormat","MGRS"];
missionNamespace setVariable ["smgrMapXOffset",_xOffset];
missionNamespace setVariable ["smgrMapYOffset",_yOffset];
missionNamespace setVariable ["smgrMapYInverted",_yInverted];
