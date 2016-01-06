private ["_unit", "_activate", "_msg"];

_unit = [_this, 0, ObjNull] call BIS_fnc_param;

_activate = format [
	"((getPosASL _target) select 2 < 250)
	and ((_target distance %1) > 200)
	and ((_target distance %1) < 3500)
	and ([%1, _target] call BIS_fnc_relativeDirTo < 182)
	and ([%1, _target] call BIS_fnc_relativeDirTo > 164)", 
	"([""nimspots""] call TTT_fnc_global)"];

_msg = "IFLOLS" call TTT_fnc_colAct;
_unit addAction[_msg, TTT_fnc_iflolsCalc,
	[], 2, false, true, "", 
	_activate];

