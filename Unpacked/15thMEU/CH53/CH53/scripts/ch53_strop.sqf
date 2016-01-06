_vehicle = _this select 0;
_deployed = _this select 1;

if (_deployed) then {
	_vehicle vehicleRadio "dws_info_stropsdeployed";
	_vehicle animate ["Strop1_Empty", 0];
	_vehicle animate ["Strop2_Empty", 0];
} else {
	_vehicle vehicleRadio "dws_info_stropsretracted";
	_vehicle animate ["Strop1_Empty", 1];
	_vehicle animate ["Strop2_Empty", 1];
};