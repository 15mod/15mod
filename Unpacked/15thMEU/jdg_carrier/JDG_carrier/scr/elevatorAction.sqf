// Script by JDog
// Operates elevators and their own guard safety cables when triggered by user scripts
// Usage:
// xx = [elevatorNumber,  0/1]execVM "\JDG_carrier\scr\elevatorAction.sqf";

_elevator = _this select 0;
_action = _this select 1;

switch(_elevator) do
	{
		case 1: {
		_elevator = (nimspots modeltoworld (nimspots selectionposition "E1")) nearestObject "JDG_carrier_geo_8";
		[_elevator,_action]execVM "\JDG_carrier\scr\elevator.sqf";
		};
		case 2: {
		_elevator = (nimspots modeltoworld (nimspots selectionposition "E2")) nearestObject "JDG_carrier_geo_10";
		[_elevator,_action]execVM "\JDG_carrier\scr\elevator.sqf";
		};	
		case 3: {
		_elevator = (nimspots modeltoworld (nimspots selectionposition "E3")) nearestObject "JDG_carrier_geo_14";
		[_elevator,_action]execVM "\JDG_carrier\scr\elevator.sqf";
		};
		case 4: {
		_elevator = (nimspots modeltoworld (nimspots selectionposition "E4")) nearestObject "JDG_carrier_geo_13";
		[_elevator,_action]execVM "\JDG_carrier\scr\elevator.sqf";
		};
		case 5: {
		_elevator = nimHang1;
		_action = _action + 2; //modify value for weapons elevator animations
		[_elevator,_action]execVM "\JDG_carrier\scr\elevator.sqf";
		};
	};