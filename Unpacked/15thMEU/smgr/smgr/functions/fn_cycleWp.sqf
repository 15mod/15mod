#include "constants.hpp"

private [
	"_currentWpIndex",
	"_newIndex",
	"_wpListSize",
	"_cycleDir"
];


_cycleDir = _this select 0;

_currentWpIndex = GETVAR("smgrCurrentWp");
_wpListSize = count GETVAR("smgrWpList");

_newIndex = switch (_cycleDir) do {
    case "prev": { _currentWpIndex-1 };
    case "next": { _currentWpIndex+1 };
    default {};
};

if (_newIndex >= _wpListSize) then { _newIndex = 0 };
if (_newIndex < 0) then { _newIndex = _wpListSize - 1 };

SETVAR("smgrCurrentWp", _newIndex);