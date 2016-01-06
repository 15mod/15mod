_newDir = getdir _this + 10;

_this setdir _newdir;

if ( surfaceiswater [getpos _this select 0, getpos _this select 1, getpos _this select 2]) then {

	_this setposASL [getpos _this select 0, getpos _this select 1, 0.01];
	
};