#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_pos",
	"_wpPos",
	"_relPos",
	"_name",
	"_dist",
	"_az",
	"_index"
];

_index = _this select 0;

_name = ctrlText SMGR_IDC_EDITWP_NAME;
_pos = ctrlText SMGR_IDC_EDITWP_POS;
_dist = ctrlText SMGR_IDC_EDITWP_DIST;
_az = ctrlText SMGR_IDC_EDITWP_AZ;

if (_name == "") then { _name = _pos };

_wpPos = [];

if (_pos == "") then {

	if (_az call smgr_fnc_validateInputAzimuth) then {
		if (_dist call smgr_fnc_validateInputDistance) then {

			_relPos = [player, parseNumber _dist, parseNumber _az] call bis_fnc_relPos;
			_wpPos = [round(_relpos select 0), round(_relpos select 1), 0];

			[_index, [_name,_wpPos]] call smgr_fnc_saveWp;
			["Wplist"] call smgr_fnc_displayPage;

		};
	};

} else {

	if (_pos call smgr_fnc_validateInputPosition) then {

		_wpPos = [_pos] call smgr_fnc_mapGridToPosition;

		[_index, [_name,_wpPos]] call smgr_fnc_saveWp;
		["Wplist"] call smgr_fnc_displayPage;

	};

};
