private ["_pos1", "_pos2", "_m", "_opposite", "_elevation", "_ret"];
_p1 = _this select 0;
_p2 = _this select 1;

_vec = [];

_vec set[0, (_p2 select 0) - (_p1 select 0)];
_vec set[1, (_p2 select 1) - (_p1 select 1)];
_vec set[2, (_p2 select 2) - (_p1 select 2)];
	
_mag = sqrt (((_vec select 0)^2) + ((_vec select 1)^2) + ((_vec select 2)^2));
_vec = [((_vec select 0)/_mag), ((_vec select 1)/_mag), ((_vec select 2)/_mag)];
	
_mag = sqrt (((_vec select 0)^2) + ((_vec select 1)^2) + ((_vec select 2)^2));
_elev = asin ((_vec select 2) / _mag);
_dir = (360 + ((_vec select 0) atan2 (_vec select 1))) mod 360;
	
[_elev, _dir]