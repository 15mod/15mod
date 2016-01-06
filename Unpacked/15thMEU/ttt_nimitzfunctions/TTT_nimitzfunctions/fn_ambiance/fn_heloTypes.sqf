#include "Config.h"

private ["_ret"];
_ret = HELO;


if (isClass(configFile >> "CfgPatches" >> "Hueypack")) then {
    _ret = HUEYPACK_HELO;
};

if (isClass(configFile >> "CfgPatches" >> "Gunfighter")) then {
	_ret = MARINES_HELO;
};

if (isClass(configFile >> "CfgPatches" >> "uns_ch34")) then {
	_ret = UNSUNG_HELO;
};

_ret
