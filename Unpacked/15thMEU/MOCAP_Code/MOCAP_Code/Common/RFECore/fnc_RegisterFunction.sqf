/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_RegisterFunction.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_RegisterFunction
* Comments:         --//--
*******************************************************************************/

/*
result = ["function_name", FID] call MOCAP_fnc_RegisterFunction;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

private
[
    "_result",
    "_functionName",
    "_fid",
    "_registeredFIDs",
    "_functionNames",
    "_sizeOfRegisteredFIDs"
];

_result = false;

if ((!isNil "_this") && {(typeName _this) == "ARRAY"} && {(count _this) == 2}) then
{
    _functionName = _this select 0;
    _fid = _this select 1;

    if ((!isNil "_functionName") && (!isNil "_fid") && {((typeName _functionName) == "STRING") && ((typeName _fid) == "SCALAR")} && {(_functionName != "") && (_fid >= 0)}) then
    {
        _registeredFIDs = MOCAP_registeredFIDs select 0;
        _functionNames = MOCAP_registeredFIDs select 1;

        if (!(_functionName in _functionNames) && !(_fid in _registeredFIDs)) then
        {
            _sizeOfRegisteredFIDs = count _registeredFIDs;
            _registeredFIDs set [_sizeOfRegisteredFIDs, _fid];
            _functionNames set [_sizeOfRegisteredFIDs, _functionName];
            _result = true;
        };
    };
};

_result;