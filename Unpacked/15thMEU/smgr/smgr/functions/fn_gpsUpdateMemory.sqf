#include "constants.hpp"

private ["_updatedMemory","_sentence"];

_sentence = _this select 0;

_updatedMemory = [ [_sentence], GETVAR("smgrGpsMemory") ] call bis_fnc_arrayPushStack;
SETVAR("smgrGpsMemory",_updatedMemory);