private [
	"_hasAlphaChars",
	"_chars",
	"_pos",
	"_len",
	"_exception"
];

_pos = _this;
_chars = toArray _pos;
_len = count _chars;

_hasAlphaChars = false;
{ if (_x < 48 or _x > 57) then {_hasAlphaChars = true} } forEach _chars;

try {

	if (_hasAlphaChars) then {
		throw ["ERROR", "Position must only contain digits"];
	};
	if (_len < 2 or _len > 10) then {
		throw ["ERROR", "Position must be 2 to 10 digits long"];
	};
	if (_len mod 2 != 0) then {
		throw ["ERROR", "Position must contain an even number of digits"];
	};

	true

} catch {

	_exception spawn smgr_fnc_displayPopup;

	false
};