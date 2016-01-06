#include "constants.hpp"
#include "ui_id.hpp"

private ["_listCtrl"];

disableSerialization;

_listCtrl = SMGR_DLG displayCtrl SMGR_IDC_WPLIST_LIST;

lbClear _listCtrl;
{
	_listCtrl lbAdd _x;
} forEach _this;