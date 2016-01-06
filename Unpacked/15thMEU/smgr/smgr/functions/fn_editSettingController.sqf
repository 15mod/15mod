#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_settingName",
	"_values",
	"_currentValueIndex",
	"_variable",
	"_currentValue"
];

smgrToolbarAction_0 = {};
smgrToolbarAction_1 = {};
smgrToolbarAction_2 = {};
smgrToolbarAction_3 = { [] call smgr_fnc_editSettingSave };

_settingName = lnbData [SMGR_IDC_SETINGS_LIST, [lnbCurSelRow SMGR_IDC_SETINGS_LIST,1]];
_currentValue = lnbText [SMGR_IDC_SETINGS_LIST, [lnbCurSelRow SMGR_IDC_SETINGS_LIST,1]];

_values = getArray( SMGR_CONFIG >> "CfgSettings" >> _settingName >> "values" );
_variable = getText( SMGR_CONFIG >> "CfgSettings" >> _settingName >> "variable" );

_currentValueIndex = 0;
{
	_currentValueIndex = _foreachIndex;
	if (_currentValue == _x) exitWith {};
} forEach _values;

[ "EditSetting", [_values, _currentValueIndex, _variable]] call smgr_fnc_updateView;