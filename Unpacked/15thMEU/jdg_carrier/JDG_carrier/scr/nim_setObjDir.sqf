// Script by JDog
// Makes unit face pre-determined point of Nimitz
// Usage:
// xx = [myjet, "PosName"]execVM "nim_setObjDir.sqf";

_veh = _this select 0;
_posit = _this select 1;

_tgt = (nimspots modeltoworld (nimspots selectionposition _posit));

_dir = [_veh, _tgt] call BIS_fnc_DirTo;
_veh setDir _dir;