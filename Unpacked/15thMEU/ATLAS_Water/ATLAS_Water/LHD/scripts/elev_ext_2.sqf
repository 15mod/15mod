/* Yanko MODIFIED VERSION */

_dir = _this select 1;
_vehs = "";

if (_dir == "raise")then{

	_object = _this select 0;
	_Vehs = nearestobjects [_object,[],9];
	{
		_x animate ["elev_ext_2_rail",0];
	} forEach _Vehs;
	waituntil{(_object animationphase "elev_ext_2_rail") == 0};
	{
		_x animate ["elev_ext_2",0];
	} forEach _Vehs;
	_Vehs = nearestobjects [_object,["Car","Man"],9];
	sleep 0.1;
	while {(_object animationphase "elev_ext_2") < 0} do {
	    {_x setvelocity [0,0,0.1];}foreach _Vehs;
	};
};

if (_dir == "lower")then{

	_object = _this select 0;
	_Vehs = nearestobjects [_object,["Car","Man"],9];
	_object animate ["elev_ext_2", -8.92];
	while {(_object animationphase "elev_ext_2") > -8.5} do {
		{_x setvelocity [0,0,-0.5];}foreach _Vehs;
	};
	_Vehs = nearestobjects [_object,[],9];
	{
		_x animate ["elev_ext_2_rail",-1.05];
	} forEach _Vehs;
};
//null = [lhd8,'down']execVM "ATLAS_Water\LHD\scripts\elev.sqf";