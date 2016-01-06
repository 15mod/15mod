// ****************************************************************
// Script file for Armed Assault
// Created by: TODO: Author Name
// ****************************************************************

_T = _this select 0;
_P = _this select 1;
_axisToffset = (_this select 2) + [0];
_axisPoffset = (_this select 3) + [0];
_wheelPoffset = (_this select 4) + [0];

_axisclass = "RoadCone";
_Taxis = _axisclass createvehicle (position _T);
_Paxis = _axisclass createvehicle (position _T);
_Pwheel = _axisclass createvehicle (position _T);



while {true} do {
	_aTpos = _T modelToWorld _axisToffset;
	_aPpos = _P modelToWorld _axisPoffset;
	_wheelPpos = _P modelToWorld _wheelPoffset;
	_Taxis setpos [_aTpos select 0, _aTpos select 1, 5];
	_Paxis setpos [_aPpos select 0, _aPpos select 1, 5];
	_Pwheel setpos [_wheelPpos select 0, _wheelPpos select 1, 5];
	_dx = (_aTpos select 0) - (_wheelPpos select 0);
	_dy = (_aTpos select 1) - (_wheelPpos select 1);
	_dirdeg = _dx atan2 _dy;
	_P setdir _dirdeg;
	
	_dx_axis = (_aTpos select 0) - (_aPpos select 0);
	_dy_axis = (_aTpos select 1) - (_aPpos select 1);
	_dirdeg_axis = _dx_axis atan2 _dy_axis;
	_d_axis = sqrt(_dx_axis^2 + _dy_axis^2);
	_speed = 10*_d_axis;
	_vel = velocity _P;	
	_P setVelocity [(sin _dirdeg_axis*_speed),(cos _dirdeg_axis*_speed),(_vel select 2)];
		
	if(driver _T == player) then {
		helih setpos getpos _P;
		_hd = vectorDir helih;
		hintsilent format["dx: %1\ndy: %2\ndirdeg: %3\nd_axis: %4\ndirdeg_axis: %5\ndx: %1\ndy: %2\ndz: %3\n", _dx, _dy, _dirdeg, _d_axis, _dirdeg_axis,_hd select 0,_hd select 1, _hd select 2];
	};
	sleep 0.01;
		
	
	if (!alive(_P) or !alive(_T)) exitWith{player sidechat "Vehicle died"};
		
}