/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_RequestHelloWorld.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_RequestHelloWorld
* Comments:         --//--
*******************************************************************************/

/*
"Hello World!" call MOCAP_fnc_RequestHelloWorld;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

private
[
    "_message",
    "_units"
];

_message = "Hello World!";

if ((!isNil "_this") && {(typeName _this) == "STRING"}) then
{
    _message = _this;
};

//DF ["[INF] [MOCAP_fnc_RequestHelloWorld] _this: %1 | _message: %2", _this, _message];

[_message, MOCAP_FID_ON_HELLOWORLD, MOCAP_ALLCLIENTS, MOCAP_CALL] call MOCAP_fnc_Call;