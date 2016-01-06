#include "constants.hpp"
#include "ui_id.hpp"

if ("Laserbatteries" in magazines player) then {

	[] call smgr_fnc_shutdown;
	SETVAR("smgrPowerCharge", SMGR_POWER_CHARGE);
	player removeMagazine "Laserbatteries";
	[] spawn {
		hint "Replacing batteries...";
		sleep 5;
		hint "";
		[] call smgr_fnc_PowerOnOff;
	};

} else {

	[] spawn {
		hint "No batteries found.";
		sleep 3;
		hint "";
	};

};