#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_power",
	"_powerPercent"
];


smgrToolbarAction_0 = { ["MainMenu"] call smgr_fnc_displayPage };
smgrToolbarAction_1 = {};
smgrToolbarAction_2 = {};
smgrToolbarAction_3 = {};

_power = GETVAR("smgrPowerCharge");
_powerPercent = round( _power / SMGR_POWER_CHARGE * 1000 ) / 10;

["Status", [_power, _powerPercent]] call smgr_fnc_updateView;