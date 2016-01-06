private ["_unit", "_action", "_boat", "_boatRoom", "_msg"];

_boatRoom = ["JDG_carrier_deck_9"] call TTT_fnc_global;

_unit = [_this, 0, ObjNull] call BIS_fnc_param;
_action = [_this, 2, -1] call BIS_fnc_param;
_boat = [_this, 3, ObjNull] call BIS_fnc_param;

_unit removeAction _action;

_boat enableSimulation false;
detach _boat;
_boatRoom animate["ani_trolley", 9];
_i = 0;
while{_i==0}do{
	if((_boatRoom animationPhase "ani_trolley") == 9) then{_i = 1};
	_boat setPosASL (_boatRoom modelToWorld(_boatRoom selectionPosition "boatSpawn"));
	sleep 0.05;
};
sleep 1;
_boatRoom animate ["ani_trolleyRope", -7];
while{_i==1}do{
	if((_boatRoom animationPhase "ani_trolleyRope") == -7) then{_i = 0};
	_boat setPosASL (_boatRoom modelToWorld(_boatRoom selectionPosition "boatSpawn"));
	sleep 0.05;
};
sleep 1;
_boat enableSimulation true;
sleep 1;
_boatRoom animate ["ani_trolleyRope", 0];
while{_boatRoom animationPhase "ani_trolleyRope" < -2}do{sleep 0.5};
_boatRoom animate ["ani_trolley", 0];
while{_boatRoom animationPhase "ani_trolley" > 0}do{sleep 0.5};

_msg = "Recover boat" call TTT_fnc_colAct;
_pos = _boatRoom modelToWorld(_boatRoom selectionPosition "boatWater");
_activate = format ["_target distance %1 < 10", _pos];
_boat addAction [
	_msg,
	TTT_fnc_recoverBoat,
	_type,
	0,
	false,
	true,
	"",
        _activate
];

_boatRoom setVariable ["DavitInUse", false, true];
true
