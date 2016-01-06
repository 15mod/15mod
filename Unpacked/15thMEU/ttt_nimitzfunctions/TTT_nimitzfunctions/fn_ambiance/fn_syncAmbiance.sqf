private ["_nim", "_dir"];

_nim = [_this, 0, ObjNull] call BIS_fnc_param;
_dir = getDir _nim;

if (isServer) then {
  if (_flightdeck) then {
    [_dir, _x] spawn TTT_fnc_flightdeck;
  };
  if (_hangar) then {
    [_dir, _x] spawn TTT_fnc_hangar;
  };
  if (_tractor) then {
    [_dir, _x] spawn TTT_fnc_tractor;
  };
  if (_crew) then {
    [_dir, _x] spawn TTT_fnc_crew;
  };
};
// briefing is called for the textures, so on any client
if (_brief) then {
  [_dir, _x] spawn TTT_fnc_briefing;
};
true
