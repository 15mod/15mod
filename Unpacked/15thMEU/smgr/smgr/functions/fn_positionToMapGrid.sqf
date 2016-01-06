#include "constants.hpp"

private [
    "_grid",
    "_northings",
    "_pos",
    "_eastings",
    "_yOffset",
    "_xOffset"
];

_pos = _this select 0;

_eastings = GRID_X_ORIGIN;
_northings = GRID_Y_ORIGIN;

if (_pos select 0 > 0) then {
    _eastings = round(_pos select 0) + GRID_X_ORIGIN;
};

if (_pos select 1 > 0) then {
    if GRID_Y_INVERTED then {
        _northings = GRID_Y_ORIGIN - round(_pos select 1);
    } else {
        _northings = round(_pos select 1) + GRID_Y_ORIGIN;
    };
};

switch true do
{
    case (_eastings < 10): {_eastings = format ["0000%1", _eastings];};
    case ((_eastings >= 10)and(_eastings < 100)): {_eastings = format ["000%1", _eastings];};
    case ((_eastings >= 100)and(_eastings < 1000)): {_eastings = format ["00%1", _eastings];};
    case ((_eastings >= 1000)and(_eastings < 10000)): {_eastings = format ["0%1", _eastings];};
    default {};
};


switch true do
{
    case (_northings < 10): {_northings = format ["0000%1", _northings];};
    case ((_northings >= 10)and(_northings < 100)): {_northings = format ["000%1", _northings];};
    case ((_northings >= 100)and(_northings < 1000)): {_northings = format ["00%1", _northings];};
    case ((_northings >= 1000)and(_northings < 10000)): {_northings = format ["0%1", _northings];};
    default {};
};

_grid = format ["%1%2", _eastings, _northings ];
_grid