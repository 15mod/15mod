#include "constants.hpp"
#include "ui_id.hpp"

if ( GETVAR("isSmgrPoweredOn") ) then {

	[] call smgr_fnc_shutdown;

} else {

	if (GETVAR("smgrPowerCharge") > 0) then {

		[] spawn smgr_fnc_runGpsLoop;

		ctrlShow [SMGR_IDC_WALLPAPER,true];
		[] call smgr_fnc_bootSequence;
		[] spawn smgr_fnc_displayInfobar;
		[] call smgr_fnc_displayToolbar;
		["MainMenu"] call smgr_fnc_displayPage;

	};
};