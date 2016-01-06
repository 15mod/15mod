private["_loadOld"];
_ammoCart = _this select 0;
_ammoLoad = _this select 1;

while{true}do{
	_load = _ammoCart getVariable "ordnanceLoad";
	if(!(_loadOld == _load))then{
		_ammoLoad setObjectTexture [1, ""];
		_ammoLoad setObjectTexture [2, ""];
		_ammoLoad setObjectTexture [3, ""];
		switch(_load)do{
			case 0 : {_ammoLoad setObjectTexture [0, ""];};
			case 1 : {_ammoLoad setObjectTexture [1, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 2 : {_ammoLoad setObjectTexture [2, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 3 : {_ammoLoad setObjectTexture [3, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 4 : {_ammoLoad setObjectTexture [3, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 5 : {_ammoLoad setObjectTexture [3, "\JDG_carrier\tex\mk82Cover.paa"]};
		};
	};
	
	_planes = nearestObjects[_ammoCart, ["Air"], 20];
	{
		_ammoAction = _x getVariable "ammo_Action";
		_arming = _x getVariable["arming", false];
		//Add action if conditions met
		if((_load > 0) and (isNil "_ammoAction") and (_x distance _ammoCart < 10))then{
			_ammoAction = _x addAction [("<t color=""#FF0000"">" + ("Resupply Ordnance") + "</t>"), "\JDG_carrier\scr\sys_ordnanceFill.sqf", [_ammoCart], 2, false, true, "", "driver _target == _this"];
			_x setVariable["ammo_Action", _ammoAction];
		};
		
		//Remove action if away/empty
		if(_x distance _ammoCart > 10 or _load == 0 or _arming)then{
			if !(isNil "_ammoAction") then {_x removeAction _ammoAction; _x setVariable["ammo_Action", nil]};
		};
	}forEach _planes;
	
	_loadOld = _load;
	sleep 1;
};



/*
_arming = _x getVariable["arming", false];
hint format ["%1", _arming];
*/