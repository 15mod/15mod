// Script by JDog
// Operates elevators and their own guard safety cables when triggered by player actions
//
// Modified/Optimized by [24th STS]Phantom & [24th STS]WesMP

private ["_elevator","_vehs","_vehsPoint"];

_elevator = _this select 0;
_vehs = nearestObjects [_elevator, ["AllVehicles"], 20];

if(_this select 1 == 0) then{
	{_x allowDamage false} forEach _vehs;
	_elevator animate ["ani_ElevBarB", 0];
	waitUntil{_elevator animationPhase "ani_ElevBarB" == 0};
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	_elevator animate ["ani_Elev", 0];
	sleep 5;
	{_x setVelocity [-0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [-0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [-0.71,0,0]}forEach _vehs;
	waitUntil{_elevator animationPhase "ani_Elev" == 0};
	_elevator animate ["ani_ElevBarT", 0];
	{_x allowDamage true} forEach _vehs;

};


if(_this select 1 == 1) then{
	_elevator animate ["ani_ElevBarT", 1];
	waitUntil{_elevator animationPhase "ani_ElevBarT" == 1};
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	_elevator animate ["ani_Elev", -10.35];
	sleep 5;
	{_x setVelocity [-0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [-0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	waitUntil{_elevator animationPhase "ani_Elev" == -10.35};
	_elevator animate ["ani_ElevBarB", -1];
};

if(_this select 1 == 2) then{
	_vehsPoint = (nimHang1 modeltoworld (nimHang1 selectionPosition "E5Bottom"));
	_vehs = nearestObjects [_vehsPoint, ["AllVehicles"], 3];
	{
		if(_x isKindOf "B_UGV_01_F") then{
			_dir = getDir nimspots;
			_x setDir _dir;
			};
	}forEach _vehs;
	_elevator animate ["ani_Gate", -3.45];
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	_elevator animate ["ani_Elev", 0];
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	sleep 6;
	_elevator animate ["ani_JBD", 1];
};

if(_this select 1 == 3) then{
	_vehsPoint = (nimHang1 modeltoworld (nimHang1 selectionPosition "E5Top"));
	_vehs = nearestObjects [_vehsPoint, ["AllVehicles"], 3];
	{_x setVelocity [0.7,0,0]}forEach _vehs;
	_elevator animate ["ani_Elev", -15];
	sleep 1;
	_elevator animate ["ani_JBD", 0];
	sleep 5;
	{_x setVelocity [-0.71,0,0]}forEach _vehs;
	sleep 5;
	{_x setVelocity [0.71,0,0]}forEach _vehs;
	sleep 4;
	_elevator animate ["ani_Gate", 0];
	sleep 3;
	{
		if(_x isKindOf "B_UGV_01_F") then{
			_dir = getDir nimspots;
			_x setDir (_dir - 90);
			};
	}forEach _vehs;
};


