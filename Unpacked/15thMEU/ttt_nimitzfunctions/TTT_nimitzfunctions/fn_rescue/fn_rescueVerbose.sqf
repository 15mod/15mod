private ["_unit", "_boatSpawn", "_grp", "_all", "_boat", "_wp", "_pos", "_boatRoom"];

_boatRoom = ["JDG_carrier_deck_9"] call TTT_fnc_global;

_unit = _this select 0;

player groupChat "Help is on the way, stay calm.";
sleep 30;

_boatSpawn = _boatRoom modelToWorld (_boatRoom selectionposition "boatWater");
_grp = createGroup west;
_all = [_boatSpawn, 0, "B_Lifeboat", _grp] call BIS_fnc_spawnVehicle;
_boat = _all select 0;

_wp = _grp addWaypoint [position _unit, 2];
_wp setWaypointType "MOVE";

waitUntil { (leader _grp) distance _unit < 10 };

player groupChat "You've been rescued, stay calm.";
sleep 10;
cutText ["Moving to carrier", "BLACK IN", 10];

_pos = _boatRoom modelToWorld (_boatRoom selectionposition "boatSpawn");
_pos = [_pos select 0, _pos select 1, 8];
_unit setPosASL _pos;

{ deleteVehicle _x } forEach (crew _boat);
deleteVehicle _boat;

true;
