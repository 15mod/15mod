private ["_unit", "_action", "_type", "_pos", "_boat", "_msg", "_activate", "_boatRoom", "_nimspots"];

_nimspots = ["nimspots"] call TTT_fnc_global;
_boatRoom = ["JDG_carrier_deck_9"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_action = [_this, 2, -1] call BIS_fnc_param;
_type = [_this, 3, ObjNull] call BIS_fnc_param;

_pos = _boatRoom modelToWorld(_boatRoom selectionPosition "boatSpawn");
if (_boatRoom getVariable "DavitInUse") exitWith {};
_boatRoom setVariable ["DavitInUse", true, true];

_boat = _type createVehicle _pos;
_boat setPosASL _pos;
_boat attachTo [_nimspots];

_msg = "Launch boat" call TTT_fnc_colAct;
_activate = format["_target distance %1 < 10", _pos];

_unit addAction [
	_msg,
	TTT_fnc_launchBoat,
	_boat,
	0,
	false,
	true,
	"",
        _activate
];
true
