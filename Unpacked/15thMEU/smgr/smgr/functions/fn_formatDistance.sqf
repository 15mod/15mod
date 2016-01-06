#include "constants.hpp"
private [
    "_unitsSettings",
    "_dist",
    "_isALtitude",
    "_unit"
];

_dist = _this select 0;
_unit = GETVAR("smgrUnitsDist");

switch _unit do
{
    case "Metric":
    {
    	_dist = format ["%1m", round( _dist )];
    };
    case "English":
    {
    	_dist = round( _dist * 1.0936133);
    	if ( _dist < 1760) then {
    		_dist = format ["%1yrd", _dist ];
    	} else {
    		_dist = _dist / 1760;
    		_dist = (round( _dist * 100))/100;
    		_dist = format ["%1mi", _dist ];
    	};
    };
    case "Nautical":
    {
    	_dist = _dist / 1849.1;
    	_dist = (round( _dist * 100))/100;
    	_dist = format ["%1 NM", _dist ];

    };

    default {};
};

_dist