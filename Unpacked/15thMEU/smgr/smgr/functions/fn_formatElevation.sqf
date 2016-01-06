#include "constants.hpp"

private ["_ele","_formatedEle"];

_ele = _this select 0;
_formatedEle = "";

switch ( GETVAR("smgrUnitsElev") ) do
{
    case "Meters":
    {
	    _formatedEle = format ["%1m MSL", round(_ele)];
    };
    case "Feet":
    {
	    _ele = round(_ele * 3.2808399);
	    _formatedEle  = format ["%1ft MSL", _ele];
    };

    default {};
};

_formatedEle