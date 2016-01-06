private ["_unit", "_brief", "_range", "_nimspots", "_boatRoom"];

_nimspots = ["nimspots"] call TTT_fnc_global;
_boatRoom = ["JDG_carrier_deck_9"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_brief = [_this, 1, true] call BIS_fnc_param;
_range = [_this, 2, 200] call BIS_fnc_param;

if (_unit isKindOf "Man") then {
  [_unit, _brief, _range, _nimspots, _boatRoom] spawn {
    private ["_unit", "_pos", "_brief", "_range", "_ship", "_boatRoom"];
    _unit = _this select 0;
    _brief = _this select 1;
    _range = _this select 2;
    _ship = _this select 3;
    _boatRoom = _this select 4;
    while {true} do {
      waitUntil { (_unit distance _ship < _range) and ((getPosASL _unit select 2) < 2) and
        (vehicle _unit == _unit)};
      if (_brief) then {
        player groupChat "Stay calm, help is on the way.";
        sleep 30;
        player groupChat "You've been rescued";
        _pos = _boatRoom modelToWorld (_boatRoom selectionposition "boatSpawn");
        _pos set [2, 7];
        _unit setPosASL _pos;
      } else {
        [_unit] call TTT_fnc_rescueVerbose;
      };
    };
  };
};
