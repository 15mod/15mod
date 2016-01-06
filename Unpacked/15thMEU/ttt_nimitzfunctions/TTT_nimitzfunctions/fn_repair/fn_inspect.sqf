private ["_unit", "_plane", "_sleep", "_i", "_dam"];
_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_plane = vehicle _unit;

if (isEngineOn _plane) exitWith {
  titleText ["Turn off the engine for inspection", "PLAIN DOWN"];
};

//sleep for 5 seconds
_i = 5;
_sleep = 1;

while {(_i > 0) and (alive _plane) and (vehicle _unit == _plane)} do {
  titleText ["Inspecting ...", "PLAIN DOWN"];
  sleep _sleep;
  _i = _i - 1;
};

if (!(alive _plane) or (vehicle _unit != _plane)) exitWith {};

_dam = damage _plane;
if (_dam == 0) then {
  titleText ["No damage", "PLAIN DOWN"];
};
if (_dam > 0 and _dam < 0.5) then {
  titleText ["Some damage", "PLAIN DOWN"];
};
if (_dam >= 0.5) then {
  titleText ["Massive damage", "PLAIN DOWN"];
};

if (_dam > 0) then {
  _msg = "Repair" call TTT_fnc_colAct;
  _plane addAction [_msg, TTT_fnc_repair];
};
true
