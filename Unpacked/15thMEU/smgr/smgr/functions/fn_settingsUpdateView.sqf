#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_listBox",
	"_text",
	"_row",
	"_value",
	"_settings",
	"_settingName"
];

disableSerialization;

_settings  = _this;

lnbClear SMGR_IDC_SETINGS_LIST;
_listBox = (SMGR_DLG displayCtrl SMGR_IDC_SETINGS_LIST);

{
	_settingName = _x select 0;
	_text = _x select 1;
	_value = _x select 2;

	_row = _listBox lnbAddRow [_text,_value];
	_listBox lnbSetData [[_row,1],_settingName];
	_listBox lnbSetColor [[_row,1], [1,0.9,0,1]];
} forEach _settings;