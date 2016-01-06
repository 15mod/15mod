#include "constants.hpp"

private [
	"_newpower",
	"_amount"
];


_amount = _this select 0;

_newpower = GETVAR("smgrPowerCharge") - _amount;
SETVAR("smgrPowerCharge", _newpower);

if (GETVAR("smgrPowerCharge") <= 0) then {
	[] spawn smgr_fnc_shutdown;
};