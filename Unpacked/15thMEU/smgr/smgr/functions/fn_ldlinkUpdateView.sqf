#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_pos",
	"_dist",
	"_az",
	"_ele",
	"_LdTarget",
	"_isTargetPainted"
];

_isTargetPainted = _this;

disableSerialization;

if _isTargetPainted then {

	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlShow true;

	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlSetText "ACQUIRING TARGET";
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlSetTextColor [0,1,0,1];

} else {

	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlSetText "WAITING FOR TARGET";
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlSetTextColor [1,0,0,1];

	if ( ctrlShown (SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ) then {
		(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlShow false;
	} else {
		(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_STATUS) ctrlShow true;
	};

};

_LdTarget = GETVAR("smgrLDTarget");

if (count _LdTarget > 0) then {

	_pos = _LdTarget select 0;
	_az = _LdTarget select 1;
	_dist = _LdTarget select 2;
	_ele = _LdTarget select 3;


	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_POS) ctrlSetText ( [_pos] call smgr_fnc_formatPosition );
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_AZ) ctrlSetText ( [_az] call smgr_fnc_formatAngle );
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_ELE) ctrlSetText ( [_ele] call smgr_fnc_formatElevation );
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_DIST) ctrlSetText ( [_dist] call smgr_fnc_formatDistance );

} else {

	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_POS) ctrlSetText "---- ----";
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_AZ) ctrlSetText "---";
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_ELE) ctrlSetText "---";
	(SMGR_DLG displayCtrl SMGR_IDC_LDLINK_DIST) ctrlSetText "---";

};