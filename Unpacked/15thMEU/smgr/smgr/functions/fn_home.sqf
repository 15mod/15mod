#include "constants.hpp"
#include "ui_id.hpp"

if ( GETVAR("isSmgrPoweredOn") ) then {

	if !( ctrlShown (SMGR_DLG displayCtrl SMGR_IDC_BOOT_SCREEN) ) then {

		["MainMenu"] call smgr_fnc_displayPage;

	};
};