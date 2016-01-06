#include "constants.hpp"

private [
	"_values",
	"_stgConfig",
	"_variable",
	"_i",
	"_cfgSettings"
];

_cfgSettings = SMGR_CONFIG >> "CfgSettings";
for "_i" from 0 to ((count _cfgSettings)-1) do
{
	_stgConfig = _cfgSettings select _i;

	_variable = getText(_stgConfig >> "variable");
	_values = getArray(_stgConfig >> "values");

	DEFAULT_VAR(_variable, _values select 0);
};