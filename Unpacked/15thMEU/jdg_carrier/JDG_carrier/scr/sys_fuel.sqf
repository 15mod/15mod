// Script by JDog
// Controls fuel transfer actions for aircraft aboard Nimitz

getVector = compile preprocessFile "\JDG_carrier\scr\fnc_getVector.sqf";
_hose1pos = (nimCar2 selectionPosition "fuelHose1pos");
_hose2pos = (nimCar2 selectionPosition "fuelHose2pos");
nimFuel1Use = 0;
nimFuel2Use = 0;

while{true}do{
	while {vehicle player isKindOf "Air"} do
	{
		_jet = vehicle player;
		_jetPos = nimCar2 worldToModel (getPosASL _jet);
		_fuelAction = _jet getVariable "fuel_Action";
	
		if(_jetPos distance _hose1pos < 8 and nimFuel1Use == 0)then{
			_fuel1Dir = [_hose1pos, _jetPos] call getVector;
			_fuel1Dir = _fuel1Dir select 1;

			if(_fuel1Dir < 359 and _fuel1Dir > 180 and (isNil "_fuelAction") and (fuel _jet < 0.99)) then {
				_fuelAction1 = _jet addAction [("<t color=""#9900FF"">" + ("Begin Fuel Transfer") + "</t>"), "\JDG_carrier\scr\sys_fuelBegin.sqf", [1], 3, false, true, "", "driver _target == _this and ((getDir nimspots - getDir _target) > -40) and ((getDir nimspots - getDir _target) < 40)"];
				_jet setVariable["fuel_Action", _fuelAction1];
			};
		};
		
		if(_jetPos distance _hose2pos < 8 and nimFuel2Use == 0)then{
			_fuel2Dir = [_hose2pos, _jetPos] call getVector;
			_fuel2Dir = _fuel2Dir select 1;
		
			if(_fuel2Dir < 359 and _fuel2Dir > 180 and (isNil "_fuelAction") and (fuel _jet < 0.99)) then {
				_fuelAction2 = _jet addAction [("<t color=""#9900FF"">" + ("Begin Fuel Transfer") + "</t>"), "\JDG_carrier\scr\sys_fuelBegin.sqf", [2], 3, false, true, "", "driver _target == _this and ((getDir nimspots - getDir _target) > -40) and ((getDir nimspots - getDir _target) < 40)"];
				_jet setVariable["fuel_Action", _fuelAction2];
			};
		};
		
		if(_jetPos distance _hose1pos > 10 and _jetPos distance _hose2pos > 10) then{
			if !(isNil "_fuelAction") then {_jet removeAction _fuelAction; _jet setVariable["fuel_Action", nil]};
		};
	sleep 1;
	};
sleep 1;
};
