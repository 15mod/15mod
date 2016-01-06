#include "Config.h"

private ["_ret"];
_ret = JETS select STDPLANES;

if (isClass(configFile >> "CfgPatches" >> "JS_JC_FA18")) then {
  _ret = JETS select FA18PLANES;
};
// might be a config error that f4 is in vehicles, not in patches
if (isClass(configFile >> "CfgVehicles" >> "uns_f4")) then {
	_ret = JETS select UNSPLANES;
};

_ret
