/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_OnHelloWorld.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_OnHelloWorld
* Comments:         --//--
*******************************************************************************/

/*
"Hello World!" call MOCAP_fnc_OnHelloWorld;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

private "_message";

_message = "Hello World!";

if ((!isNil "_this") && {(typeName _this) == "STRING"}) then
{
    _message = _this;
};

//GF ["[MOCAP_fnc_OnHelloWorld] %1", _message];
//HF ["[MOCAP_fnc_OnHelloWorld]\n%1", _message];
//DF ["[INF] [MOCAP_fnc_OnHelloWorld] _this: %1 | _message: %2", _this, _message];