private ["_unit", "_height", "_v", "_p"];

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_height = [_this, 1, 17.5] call BIS_fnc_param;

// doesn't help
// waitUntil {alive _unit};

(format["%1 will setPosASL", _unit]) call BIS_fnc_log;
_v = vehicle _unit;
_p = [getPos _v select 0, getPos _v select 1, _height];
_v setPosASL _p;

// watchdog, sometimes units spawn in water
[_v, _height] spawn {
  private ["_v", "_h", "_p"];
  _v = _this select 0;
  _h = _this select 1;
  sleep 15;
  _p = getPosASL _v;
  diag_log format ["syncOnShip: Checking %1 at %2", _v, _p];
  // check if _v is still in the water, 2meters
  if ( (_p select 2) < 2) then {
    _p = [_p select 0, _p select 1, _h];
    _v setPosASL _p;
    diag_log format ["syncOnShip: setting %1 to %2", _v, _h];
  };
};
