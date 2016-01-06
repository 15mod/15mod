private ["_plane", "_i", "_sleep", "_action"];
_plane = [_this, 0, ObjNull] call BIS_fnc_param;

_action = [_this, 2, -1] call BIS_fnc_param;
_plane removeAction _action;

// take one minute to repair
_i = 60;
_sleep = 1;

while {(_i > 0) and (alive _plane) and !(isEngineOn _plane)} do {
  titleText [format["Repairing ... %1 sec", _i], "PLAIN DOWN"];
  sleep _sleep;
  _i =_i - 1;
};

if (!(alive _plane) or (isEngineOn _plane)) exitWith {};

_plane setDamage 0;
titleText ["Repaired", "PLAIN DOWN"];

true
