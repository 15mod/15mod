private ["_plane", "_msg", "_activate"];

_plane = [_this, 0, ObjNull] call BIS_fnc_param;

// add tailhook action to the plane, if it has none
// some planes like the F/A-18 have their own hook system, which is disabled below
if (_plane isKindOf "JS_JC_FA18") then {
	waitUntil {_plane animationphase "init_done_switch" == 1};
	_plane animate ["tailhook_action_switch", 1];
};

// addAction from JDG
_activate = format [
	"((getPosASL _target) select 2 > 20)
	and (speed _target > 150)
	and (speed _target < 500)
	and (_target distance %1 < 5000)
	and ([%1, _target] call BIS_fnc_relativeDirTo < 250)
	and ([%1, _target] call BIS_fnc_relativeDirTo > 110)", "([""nimspots""] call TTT_fnc_global)"];

_msg = "Tailhook Down" call TTT_fnc_colAct;
_plane addAction[_msg,
       TTT_fnc_arrest,
       [], 5, false, true, "",
       _activate];

