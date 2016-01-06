#include "constants.hpp"

private [
	"_fom",
	"_timeOfLastFix",
	"_msf",
	"_formatedFOM"
];

_fom = _this select 0;
_timeOfLastFix = _this select 1;

_msf = round(time - _timeOfLastFix);

_formatedFOM = "";
switch ( GETVAR("smgrFOMDisplay") ) do {
    case true: {

    	_formatedFOM = format ["+%1m", _fom+1];

    };
    case false: {

    	switch (true) do {
    	    case (_msf < 60): { _formatedFOM = "<1min"; };
    	    case (_msf > 3600): { _formatedFOM = "OLD"; };
    	    default { _formatedFOM = format ["%1min", floor(_msf/60)]; };
    	};

    };

    default {};
};

_formatedFOM