#include "Config.h"
#include "Common.h"

private ["_dir", "_posCat", "_posE3", "_posE4", "_posWires", "_ret",
	 "_jetOne", "_jetTwo", "_jets", "_nimspots", "_v", "_nim",
         "_helo"];

_dir = [_this, 0, 0] call BIS_fnc_param;
_nim = [_this, 1, ObjNull] call BIS_fnc_param;

_ret = [];
_nimspots = ["nimspots", _nim] call TTT_fnc_global;
_posCat = _nimspots modeltoworld (_nimspots selectionposition "C2");
format ["_posCat: %1", _posCat] call BIS_fnc_log;
_posE3 = _nimspots modeltoworld (_nimspots selectionposition "E3");
format ["_posE3: %1", _posE3] call BIS_fnc_log;
_posE4 = _nimspots modeltoworld (_nimspots selectionposition "E4");
_posWires = _nimspots modeltoworld (_nimspots selectionposition "WireCenter");

_jets = [] call TTT_fnc_planeTypes;
_jets call BIS_fnc_log;
_jetOne = _jets select 0;
_jetTwo = _jets select 1;
_jetOne call BIS_fnc_log;
_jetTwo call BIS_fnc_log;

_helo = [] call TTT_fnc_heloTypes;

[_dir, _posCat, _jetOne, _jetTwo] spawn {
  private ["_dir", "_pos", "_v", "_i"];
  _dir = _this select 0;
  _pos = _this select 1;
  _jetOne = _this select 2;
  _jetTwo = _this select 3;
  // starboard row
  _pos = CIRCLEPOS2(_pos, _dir + 80, 35);
  _v = [_jetOne, _pos, DECK, _dir - 90, true] call TTT_fnc_placeVehicle;
  [_v, "CAP"] call TTT_fnc_loadout;
  _i = 1;
  while {_i < 5} do {
    _pos = CIRCLEPOS2(getPos _v, _dir - 180, JETOFFSET_X);
    _v = [_jetOne, _pos, DECK, _dir - 90, true] call TTT_fnc_placeVehicle;
    [_v, "CAP"] call TTT_fnc_loadout;
    _i = _i + 1;
  };
};

[_dir, _posCat, _jetOne, _jetTwo] spawn {
  private ["_dir", "_pos", "_v", "_i", "_init"];
  _dir = _this select 0;
  _pos = _this select 1;
  _jetOne = _this select 2;
  _jetTwo = _this select 3;
  // first column
  _pos = CIRCLEPOS2(_pos, _dir, 98);
  _v = [_jetTwo, _pos, DECK, _dir + 135, true] call TTT_fnc_placeVehicle;
  _init = _v;
  [_v, "CAS"] call TTT_fnc_loadout;
  _i = 1;
  while {_i < 6} do {
    _pos = CIRCLEPOS2(getPos _v, _dir - 180, (JETOFFSET_Y - 4));
    _v = [_jetTwo, _pos, DECK, _dir + 135, true] call TTT_fnc_placeVehicle;
    [_v, "CAS"] call TTT_fnc_loadout;
    _i = _i + 1;
  };

  // second column
  _pos = CIRCLEPOS2(getPos _init, _dir + 110, JETOFFSET_X);
  _v = [_jetTwo, _pos, DECK, _dir - 160, true] call TTT_fnc_placeVehicle;
  [_v, "Strike"] call TTT_fnc_loadout;
  _i = 1;
  while {_i < 5} do {
    _pos = CIRCLEPOS2(getPos _v, _dir + 175, (JETOFFSET_Y - 2));
    _v = [_jetTwo, _pos, DECK, _dir - 150, true] call TTT_fnc_placeVehicle;
    [_v, "Strike"] call TTT_fnc_loadout;
    _i = _i + 1;
  };
};

// stern section
// enable respawn for them

_pos = CIRCLEPOS2(_posWires, _dir - 75, 26);
_v = [_helo, _pos, DECK, _dir + 90] call TTT_fnc_placeVehicle;
// hack to see if the helo still blows up
// [_v] spawn {
  // _this select 0 enableSimulation false;
  // sleep 1;
  // _this select 1 enableSimulation true;
// };
_ret = _ret + [_v];

_pos = CIRCLEPOS2(_posE3, _dir + 90, 2);
_v = [_jetTwo, _pos, DECK, _dir - 90] call TTT_fnc_placeVehicle;
[_v, "CAS"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = _posE4;
_v = [_jetOne, _pos, DECK, _dir + 90] call TTT_fnc_placeVehicle;
[_v, "StrikeLGB"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = CIRCLEPOS2(_posE3, _dir + 190, 38);
_v = [_jetTwo, _pos, DECK, _dir, true] call TTT_fnc_placeVehicle;
[_v, "Tanker"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = CIRCLEPOS2(_posE3, _dir + 192, 20);
_v = [_jetTwo, _pos, DECK, _dir, true] call TTT_fnc_placeVehicle;
[_v, "Tanker"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_ret
