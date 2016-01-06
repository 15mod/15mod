//script by Gnat
//modified by JDog for Nimitz
// modified by TeTeT
//----------------------------------------
// Places object to chosen pre-determined point on model
// Usage;
// xx = [myJet,  "positionName"] execVM "nim_setObjPos.sqf";

#define DECK 18

private ["_veh", "_posit", "_nimspots"];
_nimspots = ["nimspots"] call TTT_fnc_global;

_veh = [_this, 0, ObjNull] call BIS_fnc_param;
_posit = [_this, 1, ""] call BIS_fnc_param;

_veh setposasl (_nimspots modeltoworld (_nimspots selectionposition _posit));
_veh setposasl [getPos _veh select 0, getPos _veh select 1, DECK];
