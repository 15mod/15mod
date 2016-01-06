_boat = _this select 0;
_player = _this select 2;

_height = (getPosASL _boat) select 2;
_player setPosASL[getpos _player select 0, getpos _player select 1, _height];