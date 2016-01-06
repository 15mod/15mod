private [
	"_hasAlphaChars",
	"_chars",
	"_dist",
	"_len",
	"_exception"
];


_dist = _this;
_chars = toArray _dist;
_len = count _chars;

_hasAlphaChars = false;
{ if (_x < 48 or _x > 57) then {_hasAlphaChars = true} } forEach _chars;

try {

	if (_len == 0) then {
		throw ["ERROR", "Distance cannot be empty"];
	};
	if (_hasAlphaChars) then {
		throw ["ERROR", "Distance must only contain digits"];
	};

	true

} catch {

	_exception spawn smgr_fnc_displayPopup;

	false
};