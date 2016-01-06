// Script by JDog
// Operates elevators and their own guard safety cables when triggered by player actions
//
// Modified/Optimized by [24th STS]Phantom & [24th STS]WesMP

#define DECK 17.5

private ["_elevator","_vehs"];

_elevator = _this select 0;

// support for elevators 1 to 4, but not weapons elevator
if (_this select 1 < 2) then {
  _elevator say3D "elevator";
};

_vehs = nearestObjects [_elevator, ["AllVehicles"], 20];

_fnc_force = {
  private ["_veh", "_ele", "_phase", "_basePos", "_pos", "_mode", "_factor"];
  _veh = _this select 0;
  _ele = _this select 1;
  _phase = _this select 2;
  _mode = _this select 3;

  // special case for helicopters that don't seem to like the setVelocity
  /** commented out, causes more problems
  if (_veh isKindOf "helicopter") then {
    _basePos = getPosASL _veh;
    _veh enableSimulation false;
    while {_ele animationPhase "ani_Elev" != _phase and alive _veh} do {
      _pos = _basePos;
      _pos set [2, DECK + (_ele animationPhase "ani_Elev")];
      _veh setPosASL _pos;
      sleep 0.01;
    };
    _veh enableSimulation true;
    _veh setVelocity [0,0,1];
  } else {
  **/
    while {_ele animationPhase "ani_Elev" != _phase and alive _veh} do {
      // bump vehicle so it stays on the elevator
      // 0.33318 is the elevator speed
      if (_mode == "up") then {
        _veh setVelocity [0, 0, 0.33318];
      } else {
        _veh setVelocity [0, 0, -0.33318];
      };
      sleep 1;
    };
  // };
};

if(_this select 1 == 0) then {
	{_x allowDamage false} forEach _vehs;
	_elevator animate ["ani_ElevBarB", 0];
	waitUntil{_elevator animationPhase "ani_ElevBarB" >= 0};
  {[_x, _elevator, 0, "up"] spawn _fnc_force} forEach _vehs;
	_elevator animate ["ani_Elev", 0];
	waitUntil{_elevator animationPhase "ani_Elev" >= 0};
	_elevator animate ["ani_ElevBarT", 0];
	{_x allowDamage true} forEach _vehs;
};

if(_this select 1 == 1) then {
	{_x allowDamage false} forEach _vehs;
	_elevator animate ["ani_ElevBarT", 1];
	waitUntil{_elevator animationPhase "ani_ElevBarT" >= 1};
  {[_x, _elevator, -10.35, "down"] spawn _fnc_force} forEach _vehs;
	_elevator animate ["ani_Elev", -10.35];
	waitUntil{_elevator animationPhase "ani_Elev" <= -10.35};
	_elevator animate ["ani_ElevBarB", -1];
	{_x allowDamage true} forEach _vehs;
};

if(_this select 1 == 2) then{
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
};


