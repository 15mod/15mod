#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_wpAz",
	"_wpDist",
	"_fom",
	"_time",
	"_wp",
	"_pos",
	"_ele",
	"_str",
	"_mode"
];


smgrToolbarAction_0 = { ["MainMenu"] call smgr_fnc_displayPage; };
smgrToolbarAction_1 = { ["prev"] call smgr_fnc_cycleWp };
smgrToolbarAction_2 = { ["next"] call smgr_fnc_cycleWp };
smgrToolbarAction_3 = { [] call smgr_fnc_cycleMode };

while { GETVAR("smgrEnabled") and (GETVAR("smgrCurrentPage") == "Navigation") } do {

	_mode = GETVAR("smgrOpMode");

	switch (_mode) do {
	    case "STBY": { SETVAR("smgrFOMDisplay", !GETVAR("smgrFOMDisplay") ); };
	    default { SETVAR("smgrFOMDisplay", true); };
	};

	_pos = GPS_POS(0);
	_str = [GPS_POS(1), GPS_POS(0)] call bis_fnc_dirTo;
	_ele = GPS_POS(0) select 2;
	_fom = GPS_FOM(0);
	_time = GPS_TIME(0);

	_wp = []; _wpAz = 0; _wpDist = 0;

	if (count GETVAR("smgrWpList") > 0) then {
		_wp = GETVAR("smgrWpList") select GETVAR("smgrCurrentWp");
		_wpAz = [GPS_POS(0), _wp select 1] call bis_fnc_dirTo;
		_wpDist = [GPS_POS(0), _wp select 1] call bis_fnc_distance2D;

		if (GETVAR("smgrAutoCyclehWp") == "ON") then {
			_cycleDist = call compile GETVAR("smgrAutoCyclehDist");
			if (_wpDist <= _cycleDist) then { ["next"] call smgr_fnc_cycleWp };
		};
	};

	["Navigation", [_pos,_str,_ele,_mode,_fom,_time,_wp,_wpAz,_wpDist] ]call smgr_fnc_updateView;

	sleep 0.5;
};