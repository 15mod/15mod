private ["_boat", "_action", "_pos", "_boatRoom", "_nimspots"];

_boatRoom = ["JDG_carrier_deck_9"] call TTT_fnc_global;
_nimspots = ["nimspots"] call TTT_fnc_global;

_boat = [_this, 0, ObjNull] call BIS_fnc_param;
_action = [_this, 2, -1] call BIS_fnc_param;

_boatPos = _boatRoom modelToWorld(_boatRoom selectionPosition "boatWater");
if ((_boat == player) or ((_boatPos distance _boat) > 10)) exitWith {};

_boat removeAction _action;

_boatRoom animate ["ani_trolley", 9];
while{_boatRoom animationPhase "ani_trolley" < 7}do{sleep 0.5};
_boatRoom animate ["ani_trolleyRope", -7.5];
while{_boatRoom animationPhase "ani_trolleyRope" > -7.5}do{sleep 0.5};

while{_boatPos distance _boat > 3}do{sleep 0.5};
_boat enableSimulation false;
_boat setPosASL (_boatRoom modelToWorld(_boatRoom selectionPosition "boatSpawn"));
_boat setDir (getDir _nimspots);
sleep 1;

_boatRoom animate["ani_trolleyRope", 0];
_i = 0;
while{_i==0}do{
	if((_boatRoom animationPhase "ani_trolleyRope") == 0) then{_i = 1};
	_boat setPosASL (_boatRoom modelToWorld(_boatRoom selectionPosition "boatSpawn"));
	sleep 0.05;
};
sleep 1;
_boatRoom animate ["ani_trolley", 0];
while{_i==1}do{
	if((_boatRoom animationPhase "ani_trolley") == 0) then{_i = 0};
	_boat setPosASL (_boatRoom modelToWorld(_boatRoom selectionPosition "boatSpawn"));
	sleep 0.05;
};
_boat attachTo [_nimspots];
_boat enableSimulation true;

sleep 1;
{unassignVehicle _x} forEach (crew _boat);
deleteVehicle _boat;
true
