#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_variable",
	"_value"
];

_value = lbText [SMGR_IDC_EDITSETTING_LIST, lbCurSel SMGR_IDC_EDITSETTING_LIST];
_variable = lbData [SMGR_IDC_EDITSETTING_LIST, lbCurSel SMGR_IDC_EDITSETTING_LIST];

SETVAR(_variable, _value);

["Settings"] call smgr_fnc_displayPage;