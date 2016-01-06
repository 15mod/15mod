_jet = _this select 0;
_fuelAction = _jet getVariable "fuel_Action";
_jet removeAction _fuelAction;
_hose = _this select 3;
_fuel = fuel _jet;
_fuelingText = "<t color=""#FF0000"">" + ("Fueling...") + "</t>";
_jet setVariable["fueling", true];

_dir = (getDir nimspots) - (getDir _jet);
_jet attachTo [nimspots];
_jet setDir -_dir;

if(_hose select 0 == 1)then{

	nimFuel1Use = 1;
	_fuelPos = (_jet modelToWorld (_jet selectionPosition "pointFuel")); //jet con point
	_pointHose = nimCar2 selectionPosition "fuelHose1Pos"; //default hose point
	_pointJet = nimCar2 worldToModel [(_fuelPos select 0), (_fuelPos select 1), (_fuelPos select 2)];

	if(!((_jet selectionPosition "pointFuel") select 0 == 0))then{  //only animate hose if plane's fuelPoint exists
		_dWide = (_pointJet select 0) - (_pointHose select 0);
		_dLong = (_pointJet select 1) - (_pointHose select 1);
		_dHigh = (_pointJet select 2) - (_pointHose select 2);
	
		nimCar2 animate["ani_hose1_wide", _dWide];
		nimCar2 animate["ani_hose1_long", _dLong];
		nimCar2 animate["ani_hose1_high", _dHigh];
		nimCar2 animate["ani_hose1B_wide", (_dWide * .75)];
		nimCar2 animate["ani_hose1B_long", (_dLong * .75)];
	};

	if(vehicle player == _jet) then{
		hintSilent format["Beginning fuel transfer"]; sleep 0.75;
		hintSilent format["Beginning fuel transfer."]; sleep 0.75;
		hintSilent format["Beginning fuel transfer.."]; sleep 0.75;
		hintSilent format["Beginning fuel transfer..."]; sleep 0.75;
	};

	_endFuel = _jet addAction[("<t color=""#9900FF"">" + ("End Fuel Transfer") + "</t>"), "\JDG_carrier\scr\sys_fuelEnd.sqf", [], 3, false, true, "", "(driver _target == _this) and (_target getVariable ""fueling"")"];

	while{_jet getVariable "fueling" and _fuel <= 1}do{
		if(vehicle player == _jet) then{
			hintSilent parseText(_fuelingText + "<br />JP-5 Level: " + format["%1", (_fuel * 100)]);
		};
		_fuel = _fuel + 0.001527;
		sleep 0.1;
		hint "";
	};
	
	if(_fuel > 1)then{_fuel = 1};
	if(vehicle player == _jet) then{hintSilent parseText(_fuelingText + "<br />JP-5 Level: " + format["%1", (_fuel * 100)])};
	waitUntil{!(_jet getVariable "fueling")};
	
	if(vehicle player == _jet) then{
		hintSilent format["Sealing fuel valves...\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent format["Sealing fuel valves..\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent format["Sealing fuel valves.\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent format["Sealing fuel valves\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent "";
	};

	nimCar2 animate["ani_hose1_wide", 0];
	nimCar2 animate["ani_hose1_long", 0];
	nimCar2 animate["ani_hose1_high", 0];
	nimCar2 animate["ani_hose1B_wide", 0];
	nimCar2 animate["ani_hose1B_long", 0];
	
	nimFuel1Use = 0;
};

if(_hose select 0 == 2)then{
	
	nimFuel2Use = 1;
	_fuelPos = (_jet modelToWorld (_jet selectionPosition "pointFuel")); //jet con point
	_pointHose = nimCar2 selectionPosition "fuelHose2Pos"; //default hose point
	_pointJet = nimCar2 worldToModel [(_fuelPos select 0), (_fuelPos select 1), (_fuelPos select 2)];

if(!((_jet selectionPosition "pointFuel") select 0 == 0))then{  //only animate hose if plane's fuelPoint exists
		_dWide = (_pointJet select 0) - (_pointHose select 0);
		_dLong = (_pointJet select 1) - (_pointHose select 1);
		_dHigh = (_pointJet select 2) - (_pointHose select 2);
	
		nimCar2 animate["ani_hose2_wide", _dWide];
		nimCar2 animate["ani_hose2_long", _dLong];
		nimCar2 animate["ani_hose2_high", _dHigh];
		nimCar2 animate["ani_hose2B_wide", (_dWide * .75)];
		nimCar2 animate["ani_hose2B_long", (_dLong * .75)];
	};

	if(vehicle player == _jet) then{
		hintSilent format["Beginning fuel transfer"]; sleep 0.75;
		hintSilent format["Beginning fuel transfer."]; sleep 0.75;
		hintSilent format["Beginning fuel transfer.."]; sleep 0.75;
		hintSilent format["Beginning fuel transfer..."]; sleep 0.75;
	};

	_endFuel = _jet addAction[("<t color=""#9900FF"">" + ("End Fuel Transfer") + "</t>"), "\JDG_carrier\scr\sys_fuelEnd.sqf", [], 0, false, true, "", "(driver _target == _this) and (_target getVariable ""fueling"")"];

	while{_jet getVariable "fueling" and _fuel <= 1}do{
		if(vehicle player == _jet) then{
			hintSilent parseText(_fuelingText + "<br />JP-5 Level: " + format["%1", (_fuel * 100)]);
		};
		_fuel = _fuel + 0.001527;
		sleep 0.1;
		hint "";
	};
	
	if(_fuel > 1)then{_fuel = 1};
		if(vehicle player == _jet) then{hintSilent parseText(_fuelingText + "<br />JP-5 Level: " + format["%1", (_fuel * 100)])};
	waitUntil{!(_jet getVariable "fueling")};
	
	if(vehicle player == _jet) then{
		hintSilent format["Sealing fuel valves...\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent format["Sealing fuel valves..\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent format["Sealing fuel valves.\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent format["Sealing fuel valves\nJP-5 Level: %1", (_fuel * 100)]; sleep 0.75;
		hintSilent "";
	};

	nimCar2 animate["ani_hose2_wide", 0];
	nimCar2 animate["ani_hose2_long", 0];
	nimCar2 animate["ani_hose2_high", 0];
	nimCar2 animate["ani_hose2B_wide", 0];
	nimCar2 animate["ani_hose2B_long", 0];
	
	nimFuel2Use = 0;
};

_jet setFuel _fuel;