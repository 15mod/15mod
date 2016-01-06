private ["_posX","_posY","_disXmod","_disYmod","_posZ",
	"_endPos","_startPos","_nimspots", "_pos",
	"_cat1", "_cat2", "_cat3", "_cat4",
	"_catEnd", "_catStart"
        ];

_nimspots = ["nimspots"] call TTT_fnc_global;

_line = _this select 0;
if(_line == 0)exitWith{};

_cat1 = ["JDG_carrier_deck_5"] call TTT_fnc_global;
_cat2 = ["JDG_carrier_deck_4"] call TTT_fnc_global;
_cat3 = ["JDG_carrier_deck_8"] call TTT_fnc_global;
_cat4 = ["JDG_carrier_deck_10"] call TTT_fnc_global;

switch(_line)do{
	case 1 : {_endPos = "C1T"; _startPos = "C1"; _cat1 say3D "steam";};
	case 2 : {_endPos = "C2T"; _startPos = "C2"; _cat2 say3D "steam";};
	case 3 : {_endPos = "C3T"; _startPos = "C3"; _cat3 say3D "steam";};
	case 4 : {_endPos = "C4T"; _startPos = "C4"; _cat4 say3D "steam";};
};

_catEnd = _nimspots selectionPosition _endPos;
_catStart = _nimspots selectionPosition _startPos;
_disX = (_catEnd select 0) - (_catStart select 0);
_disY = (_catEnd select 1) - (_catStart select 1);
_disXmod = _disX / 20;
_disYmod = _disY / 20;

_posX = _catEnd select 0;
_posY = _catEnd select 1;
_posZ = (_catEnd select 2) + 0.5;

_i = 0;
while{_i < 21}do{
	_pos = [_posX, _posY, _posZ];
	[_pos, _line] spawn TTT_fnc_steamCharge;
	_i = _i + 1;
	_posX = _posX - _disXmod;
	_posY = _posY - _disYmod;
};
