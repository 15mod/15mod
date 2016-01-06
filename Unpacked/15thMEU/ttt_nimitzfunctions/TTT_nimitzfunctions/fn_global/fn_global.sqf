// helper method to not call global variables directly anymore
// eventually the global variables will be moved to nimspots

private ["_g", "_ret", "_idx", "_d", "_currentDistance", "_i", "_carrier"];

_ret = ObjNull;

_g = [_this, 0, ""] call BIS_fnc_param;
_ship = [_this, 1, ObjNull] call BIS_fnc_param;

if (isNull _ship) then {
  // _ret = call compile _g;
  // format["Serving global: %1 = %2", _g, _ret] call BIS_fnc_log;
  // need to find the carrier, if more than one

  // counter race condition during mission init
  if (isNil "TTT_NimitzCarriers") then {
     waitUntil {!isNil "TTT_NimitzCarriers"};
    // TTT_NimitzCarriers = [];
  };
  if (count TTT_NimitzCarriers == 0) then {
    "No TTT_NimitzCarrier defined!!" call BIS_fnc_log;
    _ret = ObjNull;
  };
  if (count TTT_NimitzCarriers == 1) then {
    _ret = (TTT_NimitzCarriers select 0) getVariable _g;
    if (isNil "_ret") then {
      format ["_g not found: %1", _g] call BIS_fnc_log;
    };
  };
  if (count TTT_NimitzCarriers > 1) then {
    _idx = 0;
    _d = player distance (TTT_NimitzCarriers select _idx);
    _i = 0;
    {
      _currentDistance = player distance _x;
      if (_currentDistance < _d) then {
        _d = _currentDistance;
        _idx = _i;
      };
      _i = _i + 1;
    } forEach TTT_NimitzCarriers;
    // format ["idx is: %1", _idx] call BIS_fnc_log;
    _carrier = TTT_NimitzCarriers select _idx;
    _ret = _carrier getVariable _g;
  };
  // format["Serving found local: %1 = %2", _g, _ret] call BIS_fnc_log;
} else {
  _ret = _ship getVariable _g;
  // format["Serving local ship: %1 = %2 (%3)", _g, _ret, _ship] call BIS_fnc_log;
};
// unclear how that can be the case, but getting errors about it:
if (isNil "_ret") then {
  _ret = ObjNull;
};
_ret
