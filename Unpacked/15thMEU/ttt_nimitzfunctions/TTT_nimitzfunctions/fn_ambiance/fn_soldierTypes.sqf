#include "Config.h"

private ["_ret"];
_ret = SOLDIERS_STD;

if (isClass(configFile >> "CfgVehicles" >> "FUTARM_PILOT_MT")) then {
  _ret = SOLDIERS_FUTARM;
}; 

if (isClass(configFile >> "CfgVehicles" >> "FDC_GRAPE")) then {
  _ret = SOLDIERS_FDC;
};

_ret
