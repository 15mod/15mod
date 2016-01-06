// Script by JDog
// Positions and aligns aircraft on catapult prior to takeoff
// Usage:
// xx = [myJet,  catapultLine]execVM "\JDG_carrier\scr\nim_cat.sqf";

_veh = vehicle(_this select 0);
_line = _this select 1;

switch (_line) do
{
	case 1: {_xx = [_veh, "C1"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf"; _xx = [_veh, "C1T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";};
	case 2: {_xx = [_veh, "C2"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf"; _xx = [_veh, "C2T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";};
	case 3: {_xx = [_veh, "C3"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf"; _xx = [_veh, "C3T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";};
	case 4: {_xx = [_veh, "C4"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf"; _xx = [_veh, "C4T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";};
};