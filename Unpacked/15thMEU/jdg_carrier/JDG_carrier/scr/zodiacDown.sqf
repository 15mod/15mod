nimCRRCready = 0;
nimCRRCbusy = 1;
publicVariable "nimCRRCready";
publicVariable "nimCRRCbusy";

// TS
_crrc = nimBoat; // nearestObject[nimCRRCspawn, "Zodiac"];

_crrc enableSimulation false;
detach _crrc;
nimCar3 animate["ani_trolley", 9];
_i = 0;
while{_i==0}do{
	if((nimCar3 animationPhase "ani_trolley") == 9) then{_i = 1};
	_crrc setPosASL (nimCar3 modelToWorld(nimCar3 selectionPosition "boatSpawn"));
	sleep 0.05;
};
sleep 1;
nimCar3 animate ["ani_trolleyRope", -7];
while{_i==1}do{
	if((nimCar3 animationPhase "ani_trolleyRope") == -7) then{_i = 0};
	_crrc setPosASL (nimCar3 modelToWorld(nimCar3 selectionPosition "boatSpawn"));
	sleep 0.05;
};
sleep 1;
_crrc enableSimulation true;
sleep 1;
nimCar3 animate ["ani_trolleyRope", 0];
while{nimCar3 animationPhase "ani_trolleyRope" < -2}do{sleep 0.5};
nimCar3 animate ["ani_trolley", 0];
while{nimCar3 animationPhase "ani_trolley" > 0}do{sleep 0.5};

nimCRRCbusy = 0;
publicVariable "nimCRRCbusy";
// TS
nimBoat = ObjNull;
publicVariable "nimBoat";
