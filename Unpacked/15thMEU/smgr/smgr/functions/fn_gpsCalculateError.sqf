private ["_pos","_error"];

_pos = _this select 0;
_error = 0;

if ((_pos select 2) < 0) then {
	_error = 2*round(abs(_pos select 2));
};

_error