/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_UnregisterFunction.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_UnregisterFunction
* Comments:         --//--
*******************************************************************************/

/*
result = "function_name" call MOCAP_fnc_UnregisterFunction;
result = FID call MOCAP_fnc_UnregisterFunction;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

private
[
    "_result",
    "_registeredFIDs",
    "_functionNames",
    "_index"
];

_result = false;

if (!isNil "_this") then
{
    _registeredFIDs = MOCAP_registeredFIDs select 0;
    _functionNames = MOCAP_registeredFIDs select 1;
    _index = NEGATIVE;

    switch (typeName _this) do
    {
        case "SCALAR":
        {
            _index = _registeredFIDs find _this;
        };
        case "STRING":
        {
            _index = _functionNames find _this;
        };
    };

    if (_index != NEGATIVE) then
    {
        _registeredFIDs set [_index, objNull];
        _functionNames set [_index, objNull];
        _registeredFIDs = _registeredFIDs - [objNull];
        _functionNames = _functionNames - [objNull];
        MOCAP_registeredFIDs set [0, _registeredFIDs];
        MOCAP_registeredFIDs set [1, _functionNames];
        _result = true;
    };
};

_result;