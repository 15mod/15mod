#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_tracking",
	"_powerLeft",
	"_autoCycle",
	"_dateTime"
];

_dateTime = _this select 0;
_tracking = _this select 1;
_autoCycle = _this select 2;
_powerLeft = _this select 3;

disableSerialization;

_day = if ((_dateTime select 2) < 10) then {
	format ["0%1", _dateTime select 2];
} else {
	_dateTime select 2;
};

_month = if ((_dateTime select 1) < 10) then {
	format ["0%1", _dateTime select 1];
} else {
	_dateTime select 1;
};

_hours = if ((_dateTime select 3) < 10) then {
	format ["0%1", _dateTime select 3];
} else {
	_dateTime select 3;
};

_munits = if ((_dateTime select 4) < 10) then {
	format ["0%1", _dateTime select 4];
} else {
	_dateTime select 4;
};

(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_DATE) ctrlSetText format["%1-%2-%3", _day, _month, _dateTime select 0];
(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_TIME) ctrlSetText format ["%1:%2", _hours, _munits];

(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_BATT) ctrlSetText format ["PWR:%1", _powerLeft];
if (_powerLeft < 50) then {
	(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_BATT) ctrlSetTextColor [1,0.9,0,1];
};
if (_powerLeft < 15) then {
	(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_BATT) ctrlSetTextColor [1,0,0,1];
};

(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_TRK) ctrlSetText "TRK";
if _tracking then {
	(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_TRK) ctrlSetTextColor [0,1,0,1];
} else {
	(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_TRK) ctrlSetTextColor [0.5,0.5,0.5,1];
};

(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_AUTO) ctrlSetText "AC";
if _autoCycle then {
	(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_AUTO) ctrlSetTextColor [0,1,1,1];
} else {
	(SMGR_DLG displayCtrl SMGR_IDC_INFOBAR_AUTO) ctrlSetTextColor [0.5,0.5,0.5,1];
};