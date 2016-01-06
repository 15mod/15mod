#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_pos",
	"_ldTarget",
	"_isTargetPainted",
	"_dist",
	"_az",
	"_ele"
];

smgrToolbarAction_0 = { ["Datalink"] call smgr_fnc_displayPage; };
smgrToolbarAction_1 = {};
smgrToolbarAction_2 = {};
smgrToolbarAction_3 = { [] call smgr_fnc_ldlinkClear };

SETVAR("smgrOpMode", "STBY");

while { GETVAR("smgrEnabled") and (GETVAR("smgrCurrentPage") == "LDlink") } do {

	[1] call smgr_fnc_consumePower;

	_pos = getPosASL laserTarget player;
	_ele = 0;
	_az = 0;
	_dist = 0;

	_isTargetPainted = if ([_pos, [0,0,0]] call bis_fnc_areEqual) then {false} else {true};

	if _isTargetPainted then {
		SETVAR("isSmgrTracking",true);

		_ele = _pos select 2;
		_az = [position player, _pos] call bis_fnc_dirTo;
		_dist = [position player, _pos] call bis_fnc_distance2D;

		_ldTarget = [_pos, _az, _dist, _ele];
		SETVAR("smgrLDTarget", _ldTarget);
	};

	["LDlink",_isTargetPainted] call smgr_fnc_updateView;

	sleep 0.5;
	SETVAR("isSmgrTracking",false);
};