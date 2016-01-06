#include "constants.hpp"

private [
	"_base",
	"_pos2Grid",
	"_posY",
	"_northings",
	"_pos",
	"_step",
	"_pos2GridNorthings"
];

_northings = _this select 0;
_base = [_this, 1, 0] call bis_fnc_param;
_step = [_this, 2, 32768] call bis_fnc_param;

if (!GRID_Y_INVERTED and (parseNumber _northings <= 0)) exitWith {0};
if (GRID_Y_INVERTED and (parseNumber _northings >= GRID_Y_ORIGIN)) exitWith {0};

_pos = [0, _base+_step, 0];

_pos2Grid = [_pos] call smgr_fnc_positionToMapGrid;
_pos2GridNorthings =  [_pos2Grid, 5, 9] call bis_fnc_trimString;

//["%1 >> %2 - %3", _base+_step, parseNumber _pos2GridNorthings, parseNumber _northings] call bis_fnc_logFormat;

_posY = 0;

if ((parseNumber _pos2GridNorthings) > (parseNumber _northings)) then {

	if GRID_Y_INVERTED then {
		_posY = [_northings, _base+_step, ceil(_step/2)] call smgr_fnc_northingsToY;
	} else {
		_posY = [_northings, _base, ceil(_step/2)] call smgr_fnc_northingsToY;
	};

} else { if ((parseNumber _pos2GridNorthings) < (parseNumber _northings)) then {

	if GRID_Y_INVERTED then {
		_posY = [_northings, _base, ceil(_step/2)] call smgr_fnc_northingsToY;
	} else {
		_posY = [_northings, _base+_step, ceil(_step/2)] call smgr_fnc_northingsToY;
	};

} else {

	_posY = _pos select 1;

}; };

_posY