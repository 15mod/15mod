#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_wpAz",
	"_wpDist",
	"_data",
	"_fom",
	"_wp",
	"_pos",
	"_ele",
	"_str",
	"_mode",
	"_time"
];

disableSerialization;

_data = _this;

_pos 	= 	_data select 0;
_str 	= 	_data select 1;
_ele 	= 	_data select 2;
_mode 	=  	_data select 3;
_fom 	= 	_data select 4;
_time 	= 	_data select 5;
_wp 	= 	_data select 6;
_wpAz 	= 	_data select 7;
_wpDist = 	_data select 8;

( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_POS ) 	ctrlSetText ( [_pos] call smgr_fnc_formatPosition );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_STR ) 	ctrlSetText ( [_str] call smgr_fnc_formatAngle );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_ELE ) 	ctrlSetText ( [_ele] call smgr_fnc_formatElevation );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_MODE ) 	ctrlSetText ( _mode );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_FOM ) 	ctrlSetText ( [_fom, _time] call smgr_fnc_formatFOM );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_WP ) 	ctrlSetText ( [_wp, GETVAR("smgrCurrentWp")] call smgr_fnc_formatWP );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_WPAZ ) 	ctrlSetText ( [_wpAz] call smgr_fnc_formatAngle );
( SMGR_DLG displayCtrl SMGR_IDC_NAVIGATION_WPDIST ) ctrlSetText ( [_wpDist] call smgr_fnc_formatDistance );