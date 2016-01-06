_vehicle = _this select 0;
_containerArray = nearestObjects [(_vehicle modeltoworld [0,0,-10]), ["USEC_CargoContainer1","USEC_CargoContainer2"], 10];
_container = _containerArray select 0;
_anim = "cargo";
_type = "USEC_CargoContainer1";

//Cargo Connected
_vehicle animate ["Strop1_Empty", 1];
_vehicle animate ["Strop2_Empty", 1];
waitUntil{_vehicle animationPhase "Strop2_Empty" == 1};
_vehicle vehicleRadio "dws_info_cargoattached";
_vehicle animate ["strop1hide", 0];
_vehicle animate ["strop2hide", 0];
_vehicle animate ["strop2_2hide", 0];
if (_container isKindOf "USEC_CargoContainer2") then {
	_anim = "cargo2";
	_type = "USEC_CargoContainer2";
};

_vehicle animate [_anim,0];
deletevehicle _container;

waitUntil{(_vehicle animationPhase _anim ==0)};

//Monitor Cargo
_pos = getpos _vehicle;
_alt = _pos select 2;
_dir = getdir _vehicle;

while {(_alt > 8) and (_vehicle animationPhase _anim ==0)} do {
	_pos = getpos _vehicle;
	_alt = _pos select 2;
	sleep 0.2;
};
 if (_vehicle animationPhase _anim ==0) then {
	_vehicle animate ["strop1hide", 1];
	_vehicle animate ["strop2hide", 1];
	_vehicle animate ["strop2_2hide", 1];
	_vehicle animate [_anim,1];
	waitUntil{(_vehicle animationPhase _anim ==1)};
	_vehicle vehicleRadio "dws_info_cargodetached";
	_vehicle animate ["Strop1_Empty", 0];
	_vehicle animate ["Strop2_Empty", 0];

	_pos = getpos _vehicle;
	_posplace = [(_pos select 0),(_pos select 1),1];
	_cargo = createVehicle [_type, _posplace, [], 0, "NONE"];
	_cargo setpos _posplace;
	_cargo setdir (getdir _vehicle);
};