// Modified by TeTeT
// Script by JDog
// Makes unit face pre-determined point of Nimitz
// Usage:
// xx = [myjet, "PosName"]execVM "nim_setObjDir.sqf"

private ["_veh", "_posit", "_nimspots"];

_nimspots = ["nimspots"] call TTT_fnc_global;

_veh = [_this, 0, ObjNull] call BIS_fnc_param;
_posit = [_this, 1, ""] call BIS_fnc_param;

_tgt = (_nimspots modeltoworld (_nimspots selectionposition _posit));

_dir = [_veh, _tgt] call BIS_fnc_DirTo;
_veh setDir _dir
