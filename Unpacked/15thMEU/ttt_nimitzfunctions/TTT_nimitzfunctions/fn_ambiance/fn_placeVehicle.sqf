#define SETALT(pos,alt) [(pos select 0), (pos select 1), alt]

private ["_veh", "_pos", "_alt", "_dir", "_fw", "_v"];


_veh = [_this, 0, ObjNull] call BIS_fnc_param;
_pos = [_this, 1, [0,0]] call BIS_fnc_param;
_alt = [_this, 2, 18] call BIS_fnc_param;
_dir = [_this, 3, 0] call BIS_fnc_param;
_fw = [_this, 4, false] call BIS_fnc_param;

_pos = SETALT(_pos, _alt);
_v = _veh createVehicle _pos;
_v allowDamage false;
_v setDir _dir;
if (_fw) then {
  [_v] spawn FA18_fnc_foldwing;
  [_v] spawn TTT_fnc_f4foldwing;
};
waitUntil {alive _v};
// doesn't work well :(
// maybe due to tight spacing?
//[_v, _alt] call TTT_fnc_syncOnShip;
_v setPosASL _pos;

// make aircraft carrier capable
[_v] call TTT_fnc_enableCVuse;

mySetPosASL = {
  private ["_o", "_p"];
  _o = _this select 0;
  _p = _this select 1;
  diag_log format ["placeVehicle mySetPosASL: Calling setPosASL on %1", _o];
  _o setPosASL _p;
};

// watchdog, sometimes units spawn in water
[_v, _alt] spawn {
  private ["_v", "_h", "_p"];
  _v = _this select 0;
  _h = _this select 1;
  sleep 30;
  _p = getPosASL _v;
  diag_log format ["placeVehicle: Checking %1 at pos %2", _v, _p];
  // check if _v is still in the water, 2meters
  if ( (_p select 2) < 2) then {
    _p = [_p select 0, _p select 1, _h];
    // _v setPosASL _p;
    [[_v, _p], "mySetPosASL", nil, false] spawn BIS_fnc_MP;
    diag_log format ["placeVehicle: Set height of %1 to %2", _v, _h];
    //desperate attempt to broadcast new position
    NimitzCrew = _v;
    publicVariable "NimitzCrew";
  };
};
// compatibility with builtin scripts
_v setVariable ["TTT_catHook", true, true];
_v allowDamage true;
_v setDamage 0;
_v
