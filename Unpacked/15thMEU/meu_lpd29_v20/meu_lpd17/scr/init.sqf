// Original LHD placement script by ArMaTeC
// Adjust for Kuznetsov by Gnat
// Adjusted again for LPD-29 by Absolution

if (isServer) then {
	_lpdspawn = _this select 0;
	_lpddir = getdir _lpdspawn;
	_lpdspawn setpos[getposasl _lpdspawn select 0, getposasl _lpdspawn select 1, 0];
	_lpdspawnpoint = [getposasl _lpdspawn select 0, getposasl _lpdspawn select 1, 0];

	_XSin = sin(_lpddir);
	_XCos = cos(_lpddir);

	_vx = (_lpdspawnpoint select 0); // + (_XSin * 19.916) + (_XCos * 8.87891);
	_vy = (_lpdspawnpoint select 1); // + (_XCos * 19.916) - (_XSin * 8.87891);
	_vz = (_lpdspawnpoint select 2);

	_vxS1 = (_vx) + (_XSin * 35.51047) + (_XCos * 70.8505);
	_vyS1 = (_vy) + (_XCos * 0) - (_XSin * 79.25141);

	_vxS2 = (_vx) + (_XSin * 35.51047) + (_XCos * 70.8505);
	_vyS2 = (_vy) + (_XCos * 0) - (_XSin * 79.25141);

	_xx = 50 preloadObject "lpd_sec_aft";
	_xx = 50 preloadObject "lpd_sec_mid";
	_xx = 50 preloadObject "lpd_sec_bow";

	_dummy0 = "lpd_sec_mid" createvehicle _lpdspawnpoint;
	_dummy0 setdir _lpddir;
	_dummy1 = "lpd_sec_bow" createvehicle _lpdspawnpoint;
	_dummy1 setdir _lpddir;
	
	_dummy0 setpos [_vxS1, _vyS1, _vz];
	_dummy1 setpos [_vxS2, _vyS2, _vz];		

};