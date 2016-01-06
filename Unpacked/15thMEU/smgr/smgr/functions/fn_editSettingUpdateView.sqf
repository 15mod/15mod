#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_values",
	"_row",
	"_currentValueIndex",
	"_variable",
	"_list"
];

_values = _this select 0;
_currentValueIndex = _this select 1;
_variable = _this select 2;

disableSerialization;

_list = SMGR_DLG displayCtrl SMGR_IDC_EDITSETTING_LIST;

lbClear SMGR_IDC_EDITSETTING_LIST;
{
	_row = _list lbAdd _x;
	_list lbSetData [_row, _variable];
} forEach _values;

_list lbSetCurSel _currentValueIndex;