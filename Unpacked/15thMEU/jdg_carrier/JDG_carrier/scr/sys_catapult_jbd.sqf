_JBD = _this select 0;
_phase = _this select 1;

if(_JBD == 1) then {
	soundOff = "JBD12up";		// These 2 lines alert other players to play the
	publicVariable "soundOff";	// sound effect, from "client_sounds.sqf"
	nimCar2 animate["ani_JBD1C",_phase];
	sleep 0.17;
	nimCar2 animate["ani_JBD1B",_phase];
	sleep 0.32;
	nimCar2 animate["ani_JBD1A",_phase];
};

if(_JBD == 2) then {
	soundOff = "JBD12up";
	publicVariable "soundOff";
	nimCar2 animate["ani_JBD2B",_phase];
	sleep 0.3;
	nimCar2 animate["ani_JBD2A",_phase];
	sleep 0.18;
	nimCar2 animate["ani_JBD2C",_phase];
};
	
if(_JBD == 3) then {
	soundOff = "JBD34up";
	publicVariable "soundOff";
	nimCar3 animate["ani_JBD3A",_phase];
	sleep 0.14;
	nimCar3 animate["ani_JBD3C",_phase];
	sleep 0.36;
	nimCar3 animate["ani_JBD3B",_phase];
};
	
if(_JBD == 4) then {
	soundOff = "JBD34up";
	publicVariable "soundOff";
	nimCar3 animate["ani_JBD4A",_phase];
	sleep 0.32;
	nimCar3 animate["ani_JBD4B",_phase];
};