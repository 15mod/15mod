#include "Common.h"
#include "Config.h"

private ["_dir", "_posCat", "_posE3", "_posE4", "_posWires", "_ret",
	 "_jets", "_jetOne", "_jetTwo", "_nimspots", "_v", "_nim"];
_dir = [_this, 0, 0] call BIS_fnc_param;
_nim = [_this, 1, ObjNull] call BIS_fnc_param;

_ret = [];
_nimspots = ["nimspots", _nim] call TTT_fnc_global;
_posCat = _nimspots modeltoworld (_nimspots selectionposition "C2");
_posE3 = _nimspots modeltoworld (_nimspots selectionposition "E3");
_posE4 = _nimspots modeltoworld (_nimspots selectionposition "E4");
_posWires = _nimspots modeltoworld (_nimspots selectionposition "WireCenter");

_jets = [] call TTT_fnc_planeTypes;
_jets call BIS_fnc_log;
_jetOne = _jets select 0;
_jetTwo = _jets select 1;

_pos = CIRCLEPOS2(_posWires, _dir - 90, 5);
_v = [_jetOne, _pos, HANGAR, _dir + 90, true] call TTT_fnc_placeVehicle;
[_v, "Empty"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = CIRCLEPOS2(getPos _v, _dir, JETOFFSET_X);
_v = [_jetOne, _pos, HANGAR, _dir + 90, true] call TTT_fnc_placeVehicle;
[_v, "Empty"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = CIRCLEPOS2(getPos _v, _dir, JETOFFSET_X * 2);
_v = [_jetTwo, _pos, HANGAR, _dir + 90, true] call TTT_fnc_placeVehicle;
[_v, "Empty"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = CIRCLEPOS2(getPos _v, _dir, JETOFFSET_X);
_v = [_jetTwo, _pos, HANGAR, _dir + 90, true] call TTT_fnc_placeVehicle;
[_v, "Empty"] call TTT_fnc_loadout;
_ret = _ret + [_v];

_pos = CIRCLEPOS2(_posCat, _dir - 180, 20);
_v = [_jetOne, _pos, HANGAR, _dir - 180, true] call TTT_fnc_placeVehicle;
[_v, "Empty"] call TTT_fnc_loadout;
_ret = _ret + [_v];

// disabled as players can get stuck in it due to simulation false
// _pos = CIRCLEPOS2(_posWires, _dir - 180, 81);
// _v = [SPEEDBOAT, _pos, STERN, _dir - 90] call TTT_fnc_placeVehicle;
// _v enableSimulation false;
_ret
