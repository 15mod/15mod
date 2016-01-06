#include "constants.hpp"

private ["_trackingRate"];

while { GETVAR("isSmgrPoweredOn") } do
{
	if ( count GETVAR("smgrGpsMemory") == 0 ) then {
		[] call smgr_fnc_gpsGetSentence;
	};

	switch ( GETVAR("smgrOpMode") ) do {
	    case "FIX": {
	    	[] call smgr_fnc_gpsGetSentence;
			SETVAR("smgrOpMode","STBY");
	    };
	    case "CONT": {
	    	[] call smgr_fnc_gpsGetSentence;
	    };
	    case "STBY": {};
	    default {};
	};

	_trackingRate = call compile GETVAR("smgrTrackingRate");
	sleep _trackingRate;
};