#include "constants.hpp"
#include "ui_id.hpp"

disableSerialization;
uiNamespace setVariable ["smgrDialog",_this];
SETVAR("smgrEnabled",true);

[] call smgr_fnc_setMapGridParameters;

[] call smgr_fnc_initSettings;
DEFAULT_VAR("isSmgrPoweredOn", false)
DEFAULT_VAR("smgrCurrentPage", "MainMenu")
DEFAULT_VAR("smgrOpMode", "FIX")
DEFAULT_VAR("smgrGpsMemory", [])
DEFAULT_VAR("smgrWpList", [])
DEFAULT_VAR("smgrFOMDisplay", true)
DEFAULT_VAR("smgrCurrentWp",0)
DEFAULT_VAR("smgrLDTarget",[])
DEFAULT_VAR("smgrPowerCharge", SMGR_POWER_CHARGE)

if ( GETVAR("isSmgrPoweredOn") ) then {

	["Popup"] spawn smgr_fnc_hideView;
	[] spawn smgr_fnc_hideAllPages;
	//(SMGR_DLG displayCtrl SMGR_IDC_WALLPAPER) ctrlShow true;
	[ GETVAR("smgrCurrentPage") ] spawn smgr_fnc_displayPage;

} else {

	[] spawn smgr_fnc_shutdown;

};