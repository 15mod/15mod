#include "constants.hpp"

private [
	"_page",
	"_idc"
];

_page = _this select 0;
_idc = getNumber( SMGR_CONFIG >> "CfgViews" >> _page >> "idc" );

disableSerialization;
(SMGR_DLG displayCtrl _idc) ctrlShow true;