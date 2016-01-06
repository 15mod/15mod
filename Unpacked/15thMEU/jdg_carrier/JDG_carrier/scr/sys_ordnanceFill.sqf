_veh = _this select 0;
_load = _veh getVariable "ordnanceLoad";

_dir = (getDir nimspots) - (getDir _veh);
_veh attachTo [nimspots];
_veh setDir -_dir;

if(_veh isKindOf "Air")then{
	_load = 0;
	_veh setVariable["arming", true];
	_ammoCart = _this select 3;
	_ammoCart = _ammoCart select 0;
	_ammoLoad = _ammoCart getVariable "ordnanceLoad";
	_ammoLoad = _ammoLoad - 1;
	while{_load < 100}do{
		if(vehicle player == _veh)then{
			switch(_load)do{
				case 0 :  {titleText ["Resupplying Ordnance.    0%", "PLAIN", 1]};
				case 10 : {titleText ["Resupplying Ordnance..  10%", "PLAIN", 1]};
				case 20 : {titleText ["Resupplying Ordnance... 20%", "PLAIN", 1]};
				case 30 : {titleText ["Resupplying Ordnance.   30%", "PLAIN", 1]};
				case 40 : {titleText ["Resupplying Ordnance..  40%", "PLAIN", 1]};
				case 50 : {titleText ["Resupplying Ordnance... 50%", "PLAIN", 1]};
				case 60 : {titleText ["Resupplying Ordnance.   60%", "PLAIN", 1]};
				case 70 : {titleText ["Resupplying Ordnance..  70%", "PLAIN", 1]};
				case 80 : {titleText ["Resupplying Ordnance... 80%", "PLAIN", 1]};
				case 90 : {titleText ["Resupplying Ordnance.   90%", "PLAIN", 1]};
			};
			};
		sleep 3;
		_load = _load + 10;
		titleText ["", "PLAIN", 1];
		};
	_veh setVariable["arming", false];
	if(!(_veh getVariable ["fueling", false]))then{	
		detach _veh;
	};
	if(vehicle player == _veh)then{titleText ["Ordnance Fully Resupplied", "PLAIN", 1];};
	_veh setVehicleAmmo 1;
	_ammoCart setVariable["ordnanceLoad", _ammoLoad];
	sleep 3;
	titleText ["", "PLAIN", 1];
};

// TS
// if(_veh isKindOf "TowingTractor")then{
if(_veh isKindOf "UGV")then{
	_action = _this select 2;
	_veh removeAction _action;
	
	while{_load < 5}do{
		if(vehicle player == _veh)then{
			hintSilent format["Resupplying Ordnance...\nCapacity: %1", (_load * 20)];
			_load = _load + 0.05;
			sleep 0.5;
			hint "";
			};
		};

	if(_load > 5)then{_load = 5};
	detach _veh;
	if(vehicle player == _veh)then{hint "Ordnance fully resupplied."};
	_veh setVariable["ordnanceLoad", _load];
	_resupply = _veh addAction[("<t color=""#FF0000"">" + ("Resupply Ordnance") + "</t>"), "\JDG_carrier\scr\sys_ordnanceFill.sqf", [], 1, false, true, "", "driver _target == _this and ((_target distance (nimHang1 modelToWorld (nimHang1 selectionPosition ""rearmPoint""))) < 1.5)"];
	sleep 3;
	hint "";
};

