private [
	"_grid",
	"_len",
	"_eastings",
	"_northings",
	"_position",
	"_posX"
];


_grid = _this select 0;

_len = count( toArray _grid );

_eastings = [_grid, 0, _len/2-1] call bis_fnc_trimString;
_northings = [_grid, _len/2, _len-1] call bis_fnc_trimString;

if (count(toArray _eastings) > 5) then { _eastings = [_eastings, 0, 4] call bis_fnc_trimString; };
if (count(toArray _northings) > 5) then { _northings = [_northings, 0, 4] call bis_fnc_trimString; };

while { count(toArray _eastings) < 5 } do { _eastings = _eastings + "5"; };
while { count(toArray _northings) < 5 } do { _northings = _northings + "5"; };

_posX = [_eastings] call smgr_fnc_eastingsToX;
_posY = [_northings] call smgr_fnc_northingsToY;

_position = [_posX,_posY,0];

_position