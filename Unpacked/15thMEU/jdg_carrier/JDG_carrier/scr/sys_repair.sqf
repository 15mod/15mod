while{true}do{
	_planes = nearestObjects [nimspots, ["Air"], 150];
	{
		if((!isEngineOn _x) and (getPosASL _x select 2 < 9) and (getDammage _x > 0))then{
				_x setDammage (getDammage _x - 0.15);
				if(vehicle player == _x)then{hintSilent format["In Hangar Bay Repair Zone...\nArmor Status: %1", 100 - round(getDammage _x * 100)]};
				};
		sleep 5;
		if(vehicle player == _x)then{hintSilent ""};
	}forEach _planes;
};


/*-----------Version to refuel, rearm, and repair all in hangar bay--------

while{true}do{
	_planes = nearestObjects [nimspots, ["Air"], 150];
	{
		_pilot = driver _x;
		if(getPosASL _x select 2 < 9)then{
			if((!isEngineOn _x) and (getDammage _x > 0 or fuel _x < 1))then{
				_x setDammage (getDammage _x - 0.15);
				_x setFuel (fuel _x + 0.15);
				if(_pilot == player)then{hintSilent format["In Hangar Bay Repair Zone...\nArmor Status: %1\nFuel Status: %2", 100 - round(getDammage _x * 100), round(fuel _x * 100)]};
				};
			if((getDammage _x == 0) and (fuel _x == 1))then{
				_x setVehicleAmmo 1;
				if(_pilot == player)then{hintSilent "In Hangar Bay Repair Zone...\nArmor Status: 100\nFuel Status: 100\nOrdnance Status: 100 "};
				};
			};
	}forEach _planes;
	sleep 5;
	if(_pilot == player)then{hintSilent ""};
};