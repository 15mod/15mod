private [
	"_hasAlphaChars",
	"_chars",
	"_az",
	"_len",
	"_exception"
];


_az = _this;
_chars = toArray _az;
_len = count _chars;

_hasAlphaChars = false;
{ if (_x < 48 or _x > 57) then {_hasAlphaChars = true} } forEach _chars;

try {

	if (_len == 0) then {
		throw ["ERROR", "Azimuth cannot be empty"];
	};
	if (_hasAlphaChars) then {
		throw ["ERROR", "Azmiuth must only contain digits"];
	};
	if ((parseNumber _az) > 359) then {
		throw ["ERROR", "Azimuth must be between 0 and 359 degrees"];
	};

	true

} catch {

	_exception spawn smgr_fnc_displayPopup;

	false
};