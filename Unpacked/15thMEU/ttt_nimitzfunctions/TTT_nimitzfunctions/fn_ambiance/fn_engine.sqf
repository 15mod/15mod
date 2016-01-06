private ["_mode", "_nim", "_mode"];

_mode = [_this, 0, true] call BIS_fnc_param;
_nim = [_this, 1, ObjNull] call BIS_fnc_param;

_engine = ["engine", _nim] call TTT_fnc_global;

_engine engineOn _mode;
true;
