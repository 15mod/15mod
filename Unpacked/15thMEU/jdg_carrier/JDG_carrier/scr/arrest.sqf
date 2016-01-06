_jet = _this select 0;
_jet removeEventHandler ["LandedTouchDown", 0];
_spd = speed _jet;
_snap = 0;

if(nimCableReady == 0)exitWith{};
nimCableReady = 0;
publicVariable "nimCableReady";

soundOff = "trap";
if(_spd > 280)then{_snap = 1; soundOff = "trapBreak";};

_vel = velocity _jet; //Velocity vectors when catching pendant
waitUntil{_jet distance jdgNimArrestor < 25}; //Allow aircraft to pass over
publicVariable "soundOff";
_animCable = [_jet]execVM "\JDG_carrier\scr\arrest2.sqf";
waitUntil{_jet distance jdgNimArrestor > 30}; //before calculating deceleration

while{_jet distance jdgNimArrestor < 120}do{
	// TS
	_vel2 = velocity _jet;
	_distance = _jet distance jdgNimArrestor;
	_distAdj = 1.2 - (_distance / 130);

	if((_distance > 115) and (_snap == 1))exitWith{_jet setVariable ["jdgHOOK", 0];}; //Exit if snapped
	if(_jet getVariable "jdgHOOK" == 0)exitWith{}; //Exit if stuck
	
	_nVel = [(_vel select 0) * _distAdj,
			(_vel select 1) * _distAdj,
			(_vel2 select 2) * 1];
					
	_jet setVelocity _nVel;
	sleep 0.1;
};

for [{_i=1},{_i<=7},{_i=_i+1}]do{
	if(_snap == 1)exitWith{_jet setVariable ["jdgHOOK", 0];}; //Exit if snapped
	if(_jet getVariable "jdgHOOK" == 0)exitWith{}; //Exit if stuck
	_jet setVelocity [(velocity _jet select 0)*0.8,(velocity _jet select 1)*0.8,(velocity _jet select 2)*1];
	sleep 0.1;
};

//Hold plane at 0 speed for 3 seconds to prevent unnecessary bolting off deck
while{_jet getVariable "jdgHOOK" == 1} do {
	if(_snap == 1)exitWith{_snap = 0}; //Exit & reset snap variable for next landings
	_jet setVelocity [(velocity _jet select 0)*0.0,(velocity _jet select 1)*0.0,(velocity _jet select 2)*1];
	sleep 0.1;
};

sleep 25;
nimCableReady = 1;  //reset cable to accept more landings
publicVariable "nimCableReady";
