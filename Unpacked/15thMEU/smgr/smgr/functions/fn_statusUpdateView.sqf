#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_power",
	"_powerPercent"
];


_power = _this select 0;
_powerPercent = _this select 1;

(SMGR_DLG displayCtrl SMGR_IDC_STATUS_POWER) ctrlSetText (format ["BATTERY : %1", _powerPercent, _power] + "%");