//written by JDog, modified by TeTeT

private ["_JBD", "_phase", "_sound", "_jbd1", "_jbd2", "_jbd3", "_jbd4"];

_jbd1 = ["JDG_carrier_deck_5"] call TTT_fnc_global;
_jbd2 = ["JDG_carrier_deck_4"] call TTT_fnc_global;
_jbd3 = ["JDG_carrier_deck_8"] call TTT_fnc_global;
_jbd4 = ["JDG_carrier_deck_10"] call TTT_fnc_global;

_JBD = [_this, 0, 1] call BIS_fnc_param;
_phase = [_this, 1, 0] call BIS_fnc_param;

if (_phase == 0) then {
  	_sound = "JBDdown";
} else {
	_sound = "JBDup";
};

if(_JBD == 1) then {
	_jbd1 say3D _sound;
	_jbd1 animate["ani_JBD1C",_phase];
	sleep 0.17;
	_jbd1 animate["ani_JBD1B",_phase];
	sleep 0.32;
	_jbd1 animate["ani_JBD1A",_phase];
};

if(_JBD == 2) then {
	_jbd2 say3D _sound;
	_jbd2 animate["ani_JBD2B",_phase];
	sleep 0.3;
	_jbd2 animate["ani_JBD2A",_phase];
	sleep 0.18;
	_jbd2 animate["ani_JBD2C",_phase];
};

if(_JBD == 3) then {
	_jbd3 say3D _sound;
	_jbd3 animate["ani_JBD3A",_phase];
	sleep 0.14;
	_jbd3 animate["ani_JBD3C",_phase];
	sleep 0.36;
	_jbd3 animate["ani_JBD3B",_phase];
};

if(_JBD == 4) then {
	_jbd4 say3D _sound;
	_jbd4 animate["ani_JBD4A",_phase];
	sleep 0.32;
	_jbd4 animate["ani_JBD4B",_phase];
};

