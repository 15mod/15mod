#include "constants.hpp"

private [
	"_position",
	"_gridE",
	"_formatedGrid",
	"_grid",
	"_gridN"
];

_position = _this select 0;
_grid = [_position] call smgr_fnc_positionToMapGrid;

_gridE = [_grid,0,4] call BIS_fnc_trimString;
_gridN = [_grid,5,9] call BIS_fnc_trimString;

_formatedGrid = "";

switch ( GETVAR("smgrCoordSystem") ) do {
    case "MGRS": {
    	_formatedGrid = format ["%1e %2n", _gridE, _gridN];
    };

    default {};
};

_formatedGrid