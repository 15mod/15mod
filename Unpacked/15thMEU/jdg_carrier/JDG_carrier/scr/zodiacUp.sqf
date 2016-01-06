nimCRRCbusy = 1;
publicVariable "nimCRRCbusy";
_boatPos = nimCar3 modelToWorld(nimCar3 selectionPosition "boatWater");
// TS
// badly broken for multiplayer now
_crrc = vehicle player; // nearestObject[_boatPos, "Zodiac"];
if ((_crrc == player) or ((_boatPos distance _crrc) > 10))   exitWith {};
// end

nimCar3 animate ["ani_trolley", 9];
while{nimCar3 animationPhase "ani_trolley" < 7}do{sleep 0.5};
nimCar3 animate ["ani_trolleyRope", -7.5];
while{nimCar3 animationPhase "ani_trolleyRope" > -7.5}do{sleep 0.5};

while{_boatPos distance _crrc > 3}do{sleep 0.5};
_crrc enableSimulation false;
_crrc setPosASL (nimCar3 modelToWorld(nimCar3 selectionPosition "boatSpawn"));
_crrc setDir (getDir nimspots);
sleep 1;

nimCar3 animate["ani_trolleyRope", 0];
_i = 0;
while{_i==0}do{
	if((nimCar3 animationPhase "ani_trolleyRope") == 0) then{_i = 1};
	_crrc setPosASL (nimCar3 modelToWorld(nimCar3 selectionPosition "boatSpawn"));
	sleep 0.05;
};
sleep 1;
nimCar3 animate ["ani_trolley", 0];
while{_i==1}do{
	if((nimCar3 animationPhase "ani_trolley") == 0) then{_i = 0};
	_crrc setPosASL (nimCar3 modelToWorld(nimCar3 selectionPosition "boatSpawn"));
	sleep 0.05;
};
_crrc attachTo [nimspots];
_crrc enableSimulation true;

// TS
// { unassignVehicle _x; _x setPos (getPos _crrc); } forEach crew _crrc;
// sleep 2;
// deleteVehicle _crrc;
// end

nimCRRCready = 1;
nimCRRCbusy = 0;
publicVariable "nimCRRCready";
publicVariable "nimCRRCbusy";

