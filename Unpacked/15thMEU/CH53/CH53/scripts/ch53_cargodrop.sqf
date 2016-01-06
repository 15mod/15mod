_vehicle = _this select 0;
_attached = _this select 1;
_anim = "cargo";
_type = "USEC_CargoContainer1";

if (_vehicle animationPhase "Cargo2" == 0) then {
	_anim = "cargo2";
	_type = "USEC_CargoContainer2";
};

//Cargo Disconnected
_vehicle animate ["strop1hide", 1];
_vehicle animate ["strop2hide", 1];
_vehicle animate ["strop2_2hide", 1];
_vehicle animate [_anim,1];
waitUntil{_vehicle animationPhase _anim == 1};
_vehicle vehicleRadio "dws_info_cargodetached";
_vehicle animate ["Strop1_Empty", 0];
_vehicle animate ["Strop2_Empty", 0];

_pos = getpos _vehicle;
_height = ((_pos select 2) - 10);
if (_height < 1 ) then {
	_height = 1;
};
_posplace = [(_pos select 0),(_pos select 1),_height];
_cargo = createVehicle [_type, _posplace, [], 0, "NONE"];
_cargo setpos _posplace;
_cargo setdir (getdir _vehicle);
