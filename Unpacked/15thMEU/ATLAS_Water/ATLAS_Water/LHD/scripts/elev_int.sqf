/* Yanko MODIFIED VERSION */


_dir = _this select 1;

if (_dir == "raise")then{

	_object = _this select 0;
	_Vehs = nearestobjects [_object,[],25];
	{
		_x animate ["elev_int_rail",0];
		_x animate ["elev_int_rail_bottom",0];
	} forEach _Vehs;
	waitUntil {(_object animationphase "elev_int_rail_bottom" == 0)};
	{
		_x animate ["elev_int", 0];
	} forEach _Vehs;
	_Vehs = nearestobjects [_object,["Car","Man"],25];
	sleep 0.1;
	while {(_object animationphase "elev_int") < -0.1;} do {
		{_x setvelocity [0,0,0.1];}foreach _Vehs;
	};
	_Vehs = nearestobjects [_object,[],25];
	{
		_x animate ["elev_int_rail",-0.7];
		_x animate ["elev_int_rail_bottom",-0.7];
	} forEach _Vehs;
};

if (_dir == "lower")then{

	_object = _this select 0;
	_Vehs = nearestobjects [_object,[],25];
	{
		_x animate ["elev_int_rail",0];
		_x animate ["elev_int_rail_bottom",0];
	} forEach _Vehs;
	waitUntil {(_object animationphase "elev_int_rail_bottom" == 0)};
	{
		_x animate ["elev_int", -7.79];
	} forEach _Vehs;
	_Vehs = nearestobjects [_object,["Car","Man"],25];
	while {(_object animationphase "elev_int") > -7.5} do {
		{_x setvelocity [0,0,-0.5];}foreach _Vehs;
	};
	_Vehs = nearestobjects [_object,[],25];
	{
		_x animate ["elev_int_rail",-0.7];
		_x animate ["elev_int_rail_bottom",-0.7];
	} forEach _Vehs;
};
//null = [lhd8,'down']execVM "ATLAS_Water\LHD\scripts\elev.sqf";
//0 == up
//-any == down