_vehicle = _this select 0;
_wait = 0.5;

//Initiate Variables
	_gearDown = true;
	_vehicle setVariable ["HydraulicsFailure",false, false];
	_vehicle setVariable ["EngineFailure",false, false];
	_vehicle setVariable ["AvionicsFailure",false, false];

//Overall Event Handlers
_EHDamageIdx = _vehicle addEventHandler ["Dammaged",{
	if ((_this select 2) > 0.8 ) then {
		switch (_this select 1) do {
			case "mala vrtule": {_this select 0 setVariable ["HydraulicsFailure",true, true];};
			case "velka vrtule": {_this select 0 setVariable ["HydraulicsFailure",true, true];};
			case "motor": {_this select 0 setVariable ["EngineFailure",true, true];};
			case "elektronika": {_this select 0 setVariable ["AvionicsFailure",true, true];};
		};
	};
}];

while {(alive _vehicle)} do {
	if (player in (crew _vehicle)) then {
		// INFO // SINGLE // Gear Down
		if((_vehicle animationPhase "gear_nose_1" == 0) && !(_gearDown)) then {
			playSound ["cup_dws_info_geardown",true];
			_gearDown = true;
			sleep 3;
		};
		
		// INFO // SINGLE // Gear Up
		if((_vehicle animationPhase "gear_nose_1" == 1) && (_gearDown)) then {
			playSound ["cup_dws_info_gearup",true];
			_gearDown = false;
			sleep 3;
		};
	};
	
	if(player in (crew _vehicle)) then {sleep _wait;} else {sleep (_wait * 4);};
};

_vehicle removeAllEventHandlers "Dammaged";