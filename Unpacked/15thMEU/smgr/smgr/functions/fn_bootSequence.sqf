#include "constants.hpp"

private ["_bootProgress"];

SETVAR("isSmgrPoweredOn",true);

["BootScreen"] call smgr_fnc_showView;

for "_bootProgress" from 0 to SMGR_BOOT_TIME do
{
	["BootScreen", _bootProgress] call smgr_fnc_updateView;
	sleep 0.2;
};

["BootScreen"] call smgr_fnc_hideView;