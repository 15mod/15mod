private ["_posX","_posY","_disXmod","_disYmod","_positions","_posZ","_endPos","_startPos"];

catSteamFX = compile preprocessFile "\JDG_carrier\scr\fx_steamCharge.sqf";
_positions = [];
_i = 0;
_line = _this select 0;
if(_line == 0)exitWith{};

switch(_line)do{
	case 1 : {_endPos = "C1T"; _startPos = "C1";};
	case 2 : {_endPos = "C2T"; _startPos = "C2";};
	case 3 : {_endPos = "C3T"; _startPos = "C3";};
	case 4 : {_endPos = "C4T"; _startPos = "C4";};
	};

_catEnd = nimspots selectionPosition _endPos;
_catStart = nimspots selectionPosition _startPos;
_disX = (_catEnd select 0) - (_catStart select 0);
_disY = (_catEnd select 1) - (_catStart select 1);
_disXmod = _disX / 20;
_disYmod = _disY / 20;

_posX = _catEnd select 0;
_posY = _catEnd select 1;
_posZ = (_catEnd select 2) + 0.5;

while{_i < 21}do{
	_positions set[count _positions, [_posX, _posY, _posZ]];
	_i = _i + 1;
	_posX = _posX - _disXmod;
	_posY = _posY - _disYmod;
};

{	
	[_x, _line]spawn catSteamFX;
	sleep 0.2;
}forEach _positions;