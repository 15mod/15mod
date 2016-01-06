//script by Gnat
//modified by JDog for Nimitz
//----------------------------------------
// Places object to chosen pre-determined point on model
// Usage;
// xx = [myJet,  "positionName"] execVM "nim_setObjPos.sqf";

_veh = _this select 0;
_posit = _this select 1;

_veh setposasl (nimspots modeltoworld (nimspots selectionposition _posit));
_veh setposasl [getPos _veh select 0, getPos _veh select 1, 18];
