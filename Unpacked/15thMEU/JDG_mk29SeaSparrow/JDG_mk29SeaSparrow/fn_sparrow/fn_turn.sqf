private ["_sparrow"];

_sparrow = [_this, 0, ObjNull] call BIS_fnc_param;

hint format ["sparrow is %1", _sparrow];

_sparrow animate["Turret", 1];
