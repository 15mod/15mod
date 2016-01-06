#include "constants.hpp"

private [
	"_labelName",
	"_wpLabel",
	"_wp",
	"_index",
	"_labelindex"
];

_wp = _this select 0;
_index = _this select 1;

if (count _wp == 0) exitWith { "NO WP" };

_labelName = _wp select 0;
_labelindex = switch true do {
    case (_index <= 9): { format ["00%1", _index+1] };
    case (_index >= 10 and _index <= 99): { format ["0%1", _index+1] };
    case (_index >= 100): { format ["%1", _index+1] };

    default { str (_index+1) };
};

_wpLabel = format ["WP%1 %2", _labelindex, _labelName];

_wpLabel