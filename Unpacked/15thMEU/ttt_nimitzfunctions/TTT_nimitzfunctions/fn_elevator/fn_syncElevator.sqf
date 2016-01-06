// Script by JDog
// modified by TeTeT
// Operates elevators and their own guard safety cables when triggered by user scripts
// Usage:
// xx = [elevatorNumber,  0/1]execVM "\JDG_carrier\scr\elevatorAction.sqf";

private ["_elevator", "_action", "_nimspots"];

_elevator = [_this, 0, ObjNull] call BIS_fnc_param;
_action = [_this, 1, 1] call BIS_fnc_param;

if (_elevator == 5) then {
  // weapons elevator is special case
  _action = _action + 2;
};
[_elevator, _action] call TTT_fnc_elevator;

