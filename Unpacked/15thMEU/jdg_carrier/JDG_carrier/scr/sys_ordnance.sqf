// Script by JDog
// Initializes action/ability of towing tractors to retrieve ammo from munitions room and deliver to aircraft

// TS
if (isNil "nimTractors") then {
 nimTractors = [];
};

// TS _vehs = nearestObjects[nimspots, ["TowingTractor"], 200];
_vehs = nimTractors;
	{
		_load = _x getVariable "ordnanceLoad";
		
		if(isNil("_load"))then{
			_x setVariable["ordnanceLoad", 0];
			};
		if(_x getVariable "ordnanceLoad" > 5)then{
			_x setVariable["ordnanceLoad", 5];
			};
		_ammoLoad = "JDG_ammoLoad" createVehicle position _x;
		_ammoLoad attachTo [_x, [0.32,-.6,.22]];
		
		switch(_load)do{
			case 0 : {_ammoLoad setObjectTexture [0, ""];};
			case 1 : {_ammoLoad setObjectTexture [1, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 2 : {_ammoLoad setObjectTexture [2, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 3 : {_ammoLoad setObjectTexture [3, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 4 : {_ammoLoad setObjectTexture [3, "\JDG_carrier\tex\mk82Cover.paa"]};
			case 5 : {_ammoLoad setObjectTexture [3, "\JDG_carrier\tex\mk82Cover.paa"]};
		};
		
		_resupply = _x addAction[("<t color=""#FF0000"">" + ("Resupply Ordnance") + "</t>"), "\JDG_carrier\scr\sys_ordnanceFill.sqf", [], 1, false, true, "", "driver _target == _this and ((_target distance (nimHang1 modelToWorld (nimHang1 selectionPosition ""rearmPoint""))) < 1.5)"];
		_rearmArea = [_x, _ammoLoad]execVM "\JDG_carrier\scr\sys_ordnanceRearm.sqf";
	}forEach _vehs;
