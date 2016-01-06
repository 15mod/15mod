/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_FunctionByFID.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_FunctionByFID
* Comments:         --//--
*******************************************************************************/

/*
function_name = [fid_storage, fid] call MOCAP_fnc_FunctionByFID;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

private
[
    "_result",
    "_fidStorage",
    "_fid",
    "_registeredFIDs",
    "_functionNames",
    "_index",
    "_functionName"
];

_result = "";

if ((!isNil "_this") && {(typeName _this) == "ARRAY"} && {(count _this) == 2}) then
{
    _fidStorage = _this select 0;
    _fid = _this select 1;

    if ((!isNil "_fidStorage") && (!isNil "_fid") && {((typeName _fidStorage) == "ARRAY") && ((typeName _fid) == "SCALAR")}) then
    {
        _registeredFIDs = _fidStorage select 0;
        _functionNames = _fidStorage select 1;

        if ((!isNil "_registeredFIDs") && (!isNil "_functionNames") && {((typeName _registeredFIDs) == "ARRAY") && ((typeName _functionNames) == "ARRAY")}) then
        {
            _index = _registeredFIDs find _fid;

            if ((_index >= NULL) && (_index < (count _functionNames))) then
            {
                _functionName = _functionNames select _index;

                if ((typeName _functionName) == "STRING") then
                {
                    _result = _functionName;
                };
            };
        };
    };
};

_result;