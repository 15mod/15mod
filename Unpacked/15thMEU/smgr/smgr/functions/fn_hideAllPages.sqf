#include "constants.hpp"

private [
	"_view",
	"_cfgViews",
	"_i",
	"_baseClass"
];

_cfgViews = SMGR_CONFIG >> "CfgViews";

for "_i" from 0 to ((count _cfgViews) - 1) do {
	_view = configName (_cfgViews select _i);
	_baseClass = inheritsFrom (_cfgViews select _i);
	if ( configName _baseClass == "Page" ) then {
		[_view] call smgr_fnc_hideView;
	};

};