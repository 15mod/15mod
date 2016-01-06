// Script by JDog
// Positions and aligns aircraft on catapult prior to takeoff (automated version)
// Usage:
// None, mission-makers see "nim_cat.sqf"

_veh = vehicle(_this select 0);
_action = _this select 2;
_line = _this select 3;
_line = _line select 0;

_veh removeAction _action; // Remove "Lower Launch Bar"

// TS work around for teleporting problem
if (_veh distance nimspots > 200) exitWith {};

switch (_line) do // Position aircraft & raise JBD
{
	case 1: {
				_veh setVelocity [0,0,0];
				_xx = [_veh, "C1"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf";
				_xx = [_veh, "C1T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";
				sleep 1;
				_veh attachTo [nimspots];
				_veh setDir 355;
				[1,1]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; //animate JBD up
				nimCat1Use = 1;
				sleep 0.5;
				nimCat1FX = 1;
				_steamFX = [1]execVM "\JDG_carrier\scr\fx_steamStart.sqf";
				JDG_steamFX = 1;
				publicVariable "JDG_steamFX";
				publicVariable "nimCat1Use";
				publicVariable "nimCat1FX";
			};
	case 2: {
				_veh setVelocity [0,0,0];
				_xx = [_veh, "C2"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf";
				_xx = [_veh, "C2T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";
				sleep 1;
				_veh attachTo [nimspots];
				_veh setDir 358.3;
				[2,1]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; //animate JBD up
				nimCat2Use = 1;
				sleep 0.5;
				nimCat2FX = 1;
				_steamFX = [2]execVM "\JDG_carrier\scr\fx_steamStart.sqf";
				JDG_steamFX = 2;
				publicVariable "JDG_steamFX";
				publicVariable "nimCat2Use";
				publicVariable "nimCat2FX";
			};
	case 3: {
				_veh setVelocity [0,0,0];
				_xx = [_veh, "C3"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf";
				_xx = [_veh, "C3T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";
				sleep 1;
				_veh attachTo [nimSpots];
				_veh setDir 355.3;
				[3,1]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; //animate JBD up
				nimCat3Use = 1;
				sleep 0.5;
				nimCat3FX = 1;
				_steamFX = [3]execVM "\JDG_carrier\scr\fx_steamStart.sqf";
				JDG_steamFX = 3;
				publicVariable "JDG_steamFX";
				publicVariable "nimCat3Use";
				publicVariable "nimCat3FX";
			};
	case 4: {
				_veh setVelocity [0,0,0];
				_xx = [_veh, "C4"]execVM "\JDG_carrier\scr\nim_setObjPos.sqf";
				_xx = [_veh, "C4T"]execVM "\JDG_carrier\scr\nim_setObjDir.sqf";
				sleep 0.5;
				_veh attachTo [nimSpots];
				_veh setDir 0.2;
				[4,1]execVM "\JDG_carrier\scr\sys_catapult_jbd.sqf"; //animate JBD up
				nimCat4Use = 1;
				sleep 0.5;
				_steamFX = [4]execVM "\JDG_carrier\scr\fx_steamStart.sqf";
				nimCat4FX = 1;
				JDG_steamFX = 4;
				publicVariable "JDG_steamFX";
				publicVariable "nimCat4Use";
				publicVariable "nimCat4FX";
			};
};
sleep 4;

_enableLaunch = _veh addAction[("<t color=""#FFFF66"">" + ("Salute") + "</t>"), "\JDG_carrier\scr\sys_catapult_3.sqf", [_line], 5, false, true, "", "driver _target == _this"];

