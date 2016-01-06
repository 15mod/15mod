#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_wpAz",
	"_wpDist",
	"_wpName",
	"_data",
	"_wpPos",
	"_this;",
	"_wpIndex",
	"_title"
];


_data = _this;

_wpIndex = _this select 0;
_wpName = _this select 1;
_wpPos = _this select 2;
_wpDist = _this select 3;
_wpAz = _this select 4;
_title = "";
switch true do {
    case (_wpIndex <= 9): { _title = format ["EDIT WP00%1", _wpIndex+1] };
    case (_wpIndex >= 10 and _wpIndex <= 99): { _title = format ["EDIT WP0%1", _wpIndex+1] };
    case (_wpIndex >= 100 and _wpIndex <= 999): { _title = format ["EDIT WP%1", _wpIndex+1] };
    default { _title = format ["EDIT WP%1", _wpIndex+1] };
};


(SMGR_DLG displayCtrl SMGR_IDC_EDITWP_NAME) ctrlSetText _wpName ;
(SMGR_DLG displayCtrl SMGR_IDC_EDITWP_POS) ctrlSetText _wpPos ;
(SMGR_DLG displayCtrl SMGR_IDC_EDITWP_AZ) ctrlSetText _wpAz ;
(SMGR_DLG displayCtrl SMGR_IDC_EDITWP_DIST) ctrlSetText _wpDist ;
(SMGR_DLG displayCtrl SMGR_IDC_EDITWP_TITLE) ctrlSetText _title ;