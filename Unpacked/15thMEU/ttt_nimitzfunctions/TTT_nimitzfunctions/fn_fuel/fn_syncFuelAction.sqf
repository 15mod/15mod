private ["_unit", "_pos", "_msg", "_fuelspot", "_hose1Pos", "_hose2Pos",
	 "_nimspots", "_dir"];

_nimspots = ["nimspots"] call TTT_fnc_global;
_fuelspot = ["fuelspot"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;

_dir = getDir _nimspots;
_pos = position _unit;
_hose1Pos = _fuelspot modelToWorld(_fuelspot selectionPosition "fuelHose1pos");
// not used right now
_hose2Pos = _fuelspot modelToWorld(_fuelspot selectionPosition "fuelHose2pos");

_msg = "Begin Fuel Transfer" call TTT_fnc_colAct;

format["Adding action to %1", _unit] call BIS_fnc_log;
_activate = format[
	"driver _target == _this and
         _target distance %2 < 8 and
         fuel _target < 0.99",
	 // ((%1) animationPhase ""ani_hose1_wide"" == 0)",
	_fuelspot, _hose1Pos];

_unit addAction [ 
	_msg,
	TTT_fnc_fuelBegin,
	[1],
	3,
	false,
	true,
	"",
        _activate
];

format["Adding action to %1", _unit] call BIS_fnc_log;
_activate = format[
	"driver _target == _this and
         _target distance %2 < 8 and
         fuel _target < 0.99",
	 // ((%1) animationPhase ""ani_hose2_wide"" == 0)",
	_fuelspot, _hose2Pos];

_unit addAction [ 
	_msg,
	TTT_fnc_fuelBegin,
	[2],
	3,
	false,
	true,
	"",
        _activate
];

_unit setVariable ["fueling", false, true];
