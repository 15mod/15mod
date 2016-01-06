#include "constants.hpp"
#include "ui_id.hpp"

private [
	"_markPos",
	"_mark",
	"_wpNames",
	"_markIndex",
	"_markName"
];

if ( GETVAR("isSmgrPoweredOn") ) then {

	[] call smgr_fnc_gpsGetSentence;

	_markPos = GPS_POS(0);
	_wpNames = [];
	{
		_wpNames set [count _wpNames, _x select 0];
	} forEach GETVAR("smgrWpLIst");

	_markIndex = 0;
	while { (format ["MARK-%1", _markIndex]) in _wpNames } do { _markIndex = _markIndex +1 };

	_markName = format ["MARK-%1", _markIndex];
	_mark = [_markName, _markPos];

	[count GETVAR("smgrWpLIst") ,_mark] call smgr_fnc_saveWp;

};