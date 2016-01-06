private ["_unit", "_nimspots", "_activate", "_msg"];

_nimspots = ["nimspots"] call TTT_fnc_global;

_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (_unit isKindOf "Man") then {
	_activate = format["(_target distance %1 < 180) and 
		(speed _target == 0) and 
		(vehicle _target isKindOf ""Plane"")", position _nimspots];
	_msg = "Inspect plane" call TTT_fnc_colAct;
	_unit addAction [_msg, TTT_fnc_inspect, ObjNull,
	      0, false, true, "", _activate
		      ];
};

true;
