private ["_catNr", "_cat", "_jets", "_plane", "_endCat", "_catapult"];

_catNr = [_this, 0, "4"] call BIS_fnc_param;
_cat = format ["C%1", _catNr];
_endCat = format ["%1T", _cat];

_jets = [] call TTT_fnc_planeTypes;
_plane = _jets call BIS_fnc_selectRandom;

_v = [_plane, getPos _cat, DECK, getDir _cat] call TTT_fnc_placeVehicle;

_catapult = [ getPos _cat, _cat, _cat, _catNr ];

[_v, ObjNull, ObjNull, _catapult] call TTT_fnc_catapultLaunch;

sleep 10;
[_v, ObjNull, ObjNull, _catapult] call TTT_fnc_launch;
