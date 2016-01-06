private [
	"_pos2Grid",
	"_posX",
	"_eastings",
	"_base",
	"_pos",
	"_pos2GridEastings",
	"_step"
];

_eastings = _this select 0;
_base = [_this, 1, 0] call bis_fnc_param;
_step = [_this, 2, 32768] call bis_fnc_param;

if (parseNumber _eastings <= 0) exitWith {0};

_pos = [_base+_step, 0, 0];

_pos2Grid = [_pos] call smgr_fnc_positionToMapGrid;
_pos2GridEastings =  [_pos2Grid, 0, 4] call bis_fnc_trimString;

//["%1 >> %2 - %3", _base+_step, parseNumber _pos2GridEastings, parseNumber _eastings] call bis_fnc_logFormat;

_posX = 0;

if ((parseNumber _pos2GridEastings) > (parseNumber _eastings)) then {

	_posX = [_eastings, _base, ceil(_step/2)] call smgr_fnc_eastingsToX;

} else { if ((parseNumber _pos2GridEastings) < (parseNumber _eastings)) then {

	_posX = [_eastings, _base+_step, ceil(_step/2)] call smgr_fnc_eastingsToX;

} else {

	_posX = _pos select 0;

}; };

_posX