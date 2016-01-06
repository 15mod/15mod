#define FOLDER 0
#define PAPER1 1
#define WHITEBOARD 6
#define SCREEN 7
#define MAP 8

private ["_photos", "_photo", "_nimHang4", "_nim"];

_nim = [_this, 1, ObjNull] call BIS_fnc_param;

_nimHang4 = ["nimHang4", _nim] call TTT_fnc_global;

// from old init
switch(worldName) do {
	case "utes": {_nimHang4 setObjectTexture [MAP, "\JDG_carrier\tex\mapUtes.paa"]};
	case "Chernarus": {_nimHang4 setObjectTexture [MAP, "\JDG_carrier\tex\mapChernarus.paa"]};
	case "Altis": {_nimHang4 setObjectTexture [MAP, "\JDG_carrier\tex\mapboard_altis_co.paa"]};
	case "Stratis": {_nimHang4 setObjectTexture [MAP, "\JDG_carrier\tex\mapboard_stratis_co.paa"]};
};

_photos = [ "\TTT_NimitzFunctions\img_ambiance\nimitz003-026836.paa",
	    "\TTT_NimitzFunctions\img_ambiance\nimitz007-0876003.paa",
	    "\TTT_NimitzFunctions\img_ambiance\nimitz003-026836.paa",
	    "\TTT_NimitzFunctions\img_ambiance\nimitz004-026896.paa" ];

_photo = _photos select 1;
_nimHang4 setObjectTexture [SCREEN, _photo];

_photo = _photos select 3;
_nimHang4 setObjectTexture [WHITEBOARD, _photo];

_photo = _photos select 0;
_nimHang4 setObjectTexture [FOLDER, _photo];

_photo = _photos select 2;
_nimHang4 setObjectTexture [PAPER1, _photo];

_photo = _photos select 0;
_nimHang4 setObjectTexture [PAPER1, _photo];

_photo = _photos select 3;
_nimHang4 setObjectTexture [PAPER1, _photo];

true
