#include "constants.hpp"

private [
    "_angleM",
    "_angle",
    "_angleD",
    "_formatedAngle"
];

_angle = _this select 0;

_formatedAngle = "---";

if (_angle > 0) Then {

    switch ( GETVAR("smgrUnitsAngle") ) do
    {
        case "Degrees":
        {
    		_angleD = floor _angle;
    		_angleM = round ((_angle - (floor _angle))*60);
    	    _formatedAngle = format ["%1 °", _angleD, _angleM]
        };
        case "Mils":
        {
    	    _angle = floor(_angle * 17.777777778);
    	    _formatedAngle = format ["%1 Mil-µ", _angle];
        };

        default {};
    };

};

_formatedAngle