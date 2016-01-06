#include "constants.hpp"

private [
	"_tracking",
	"_dateTime",
	"_autoCycle",
	"_powerLeft"
];

["Infobar"] call smgr_fnc_showView;

while { true } do {
	_dateTime = date;
	_tracking = GETVAR("isSmgrTracking");
	_autoCycle = if ( GETVAR("smgrAutoCyclehWp") == "ON" ) then {true} else {false};
	_powerLeft = round( GETVAR("smgrPowerCharge") / SMGR_POWER_CHARGE * 100 );

	["Infobar", [_dateTime, _tracking, _autoCycle, _powerLeft]] call smgr_fnc_updateView;

	sleep 0.5;
};