#define VLAUNCH 60

// enable catapult function for planes
private ["_plane", "_logic", "_catapults", "_catapult", "_catPos", "_i",
  "_nimspots", "_name", "_carrier"];

_plane = [_this, 0, ObjNull] call BIS_fnc_param;
_logic = [_this, 1, ObjNull] call BIS_fnc_param;

_catapults = [];

// slightly hackish solution
if (isNil "TTT_NimitzCarriers") then {
  _i = 1;
  {
    _nimspots = ["nimspots"] call TTT_fnc_global;
    _catPos = _nimspots modeltoworld (_nimspots selectionposition _x);
    _catapult = [_catPos, format["Catapult %1", _i], _x, _i];
    _catapults = _catapults + [ _catapult ];
    _i = _i + 1;
  } forEach [ "C1", "C2", "C3", "C4" ];
} else {
  {
    _carrier = _x;
    format ["Syncing catapult for %1", _carrier] call BIS_fnc_log;
    _i = 1;
    {
      _nimspots = ["nimspots", _carrier] call TTT_fnc_global;
      _name = vehicleVarName _carrier;
      _catPos = _nimspots modeltoworld (_nimspots selectionposition _x);
      _catapult = [_catPos, format["Catapult %1 %2", _i, _name], _x, _i];
      _catapults = _catapults + [ _catapult ];
      _i = _i + 1;
    } forEach [ "C1", "C2", "C3", "C4" ];
  } forEach TTT_NimitzCarriers;
};

{
  [_plane, _logic, _x] call TTT_fnc_addCatapultAction;
} forEach _catapults;

// need to calculate weight for modified cat launch by Yanko
_weightToggle = _logic getVariable "Weight";
if (isNil "_weightToggle" ) then {
    _weightToggle = false;
};

if (_weightToggle) then {
  _plane setVariable ["TTT_calcweight", true];
  // [_plane] call Yanko_fnc_calcWeight;
} else {
  _plane setVariable ["TTT_vLaunch", VLAUNCH];
};
