/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_Call.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_Call
* Comments:         --//--
*******************************************************************************/

/*
[arguments, FUNCTION_ID, target(s), call_type] call MOCAP_fnc_Call;
or
[arguments, "function_name", target(s), call_type] call MOCAP_fnc_Call;

arguments:      any type passed to remote function
FUNCTION_ID:    SCALAR, registered function ID, see rfe.hpp
function_name:  STRING, registered function name, see rfe.hpp
target(s):      OBJECT or SCALAR, can be MOCAP_SERVER / NetID / object (player or vehicle)
call_type:      SCALAR, can be MOCAP_CALL or MOCAP_SPAWN

EXAMPLES:
    #include "rfe.hpp"
    ...
    ["Hello Server!", MOCAP_FID_REQUEST_HELLOWORLD, MOCAP_SERVER, MOCAP_CALL] call MOCAP_fnc_Call;
    ["Hello World!", MOCAP_FID_ON_HELLOWORLD, Soldier5, MOCAP_CALL] call MOCAP_fnc_Call;
    [format ["%1 is godlike.", name Civ10], MOCAP_FID_REQUEST_HELLOWORLD, MOCAP_SERVER, MOCAP_SPAWN] call MOCAP_fnc_Call;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

private
[
    "_arguments",
    "_functionID",
    "_targets",
    "_callType",
    "_functionName",
    "_owner",
    "_target",
    "_index"
];

//DF ["[INF] [MOCAP_fnc_Call] Call | _this: %1", _this];

if ((!isNil "_this") && {(typeName _this) == "ARRAY"} && {(count _this) == 4}) then
{
    _arguments = _this select 0;
    _functionID = _this select 1;
    _targets = _this select 2;
    _callType = _this select 3;

    if ((!isNil "_arguments") && (!isNil "_functionID") && (!isNil "_targets") && (!isNil "_callType")) then
    {
        call
        {
            if (((typeName _targets) == "SCALAR") && {_targets >= 61900}) exitWith
            {
                switch (_targets) do
                {
                    case MOCAP_ALLUNITS:
                    {
                        _targets = allUnits;
                    };
                    case MOCAP_PLAYABLEUNITS:
                    {
                        _targets = playableUnits + switchableUnits;
                    };
                    case MOCAP_ALLCLIENTS:
                    {
                        _targets = playableUnits + switchableUnits;

                        {
                            if (!isPlayer _x) then
                            {
                                _targets set [_forEachIndex, objNull];
                            };
                        } forEach _targets;

                        _targets = _targets - [objNull];
                    };
                };
            };

            if ((typeName _targets) != "ARRAY") exitWith
            {
                _targets = [_targets];
            };
        };

        if (((typeName _functionID) in ["SCALAR", "STRING"]) && ((typeName _callType) == "SCALAR")) then
        {
            _functionName = "";

            switch (typeName _functionID) do
            {
                case "SCALAR":
                {
                    _functionName = [MOCAP_registeredFIDs, _functionID] call MOCAP_fnc_FunctionByFID;
                };
                case "STRING":
                {
                    _index = (MOCAP_registeredFIDs select 1) find _functionID;

                    if (_index != NEGATIVE) then
                    {
                        _functionName = _functionID;
                        _functionID = (MOCAP_registeredFIDs select 0) select _index;
                    };
                };
            };

            if (_functionName != "") then
            {
                {
                    if (!isNil "_x") then
                    {
                        call
                        {
                            _owner = NEGATIVE;

                            if (isServer) exitWith
                            {
                                switch (typeName _x) do
                                {
                                    case "OBJECT":
                                    {
                                        if (!isNull _x) then
                                        {
                                            _owner = owner _x;
                                        };
                                    };
                                    case "SCALAR":
                                    {
                                        _owner = _x;
                                    };
                                    default
                                    {
                                        DF ["[WRN] [MOCAP_fnc_Call] Target is not an object or NetID | _arguments: %1 | _functionID: %2 | _functionName: %3| _targets: %4 | _callType: %5 | _x: %6", _arguments, _functionID, _functionName, _targets, _callType, _x];
                                    };
                                };

                                call
                                {
                                    if ((_owner in MOCAP_serverOwnerIDs) || isSingleplayer) exitWith
                                    {
                                        DF ["[INF] [MOCAP_fnc_Call] Calling local server function | _arguments: %1 | _functionID: %2 | _functionName: %3 | _targets: %4 | _callType: %5 | _x: %6 | _owner: %7", _arguments, _functionID, _functionName, _targets, _callType, _x, _owner];
                                        MOCAP_EXEC(_arguments, _functionName, _callType);
                                    };

                                    if (_owner > 2) exitWith
                                    {
                                        DF ["[INF] [MOCAP_fnc_Call] Calling remote client function | _arguments: %1 | _functionID: %2 | _functionName: %3 | _targets: %4 | _callType: %5 | _x: %6 | _owner: %7", _arguments, _functionID, _functionName, _targets, _callType, _x, _owner];
                                        MOCAP_packet = [_arguments, _functionID, _x, _callType];
                                        _owner publicVariableClient "MOCAP_packet";
                                    };

                                    DF ["[WRN] [MOCAP_fnc_Call] Target not found | _arguments: %1 | _functionID: %2 | _functionName: %3| _targets: %4 | _callType: %5 | _x: %6 | _owner: %7", _arguments, _functionID, _functionName, _targets, _callType, _x, _owner];
                                };
                            };

                            if (isPureClient) exitWith
                            {
                                _target = objNull;

                                switch (typeName _x) do
                                {
                                    case "OBJECT":
                                    {
                                        if (!isNull _x) then
                                        {
                                            _target = _x;
                                        }
                                        else
                                        {
                                            DF ["[WRN] [MOCAP_fnc_Call] Target is <NULL-OBJ> | _arguments: %1 | _functionID: %2 | _functionName: %3| _targets: %4 | _callType: %5 | _x: %6", _arguments, _functionID, _functionName, _targets, _callType, _x];
                                        };
                                    };
                                    case "SCALAR":
                                    {
                                        _owner = _x;
                                    };
                                    default
                                    {
                                        DF ["[WRN] [MOCAP_fnc_Call] Target is not an object or NetID | _arguments: %1 | _functionID: %2 | _functionName: %3| _targets: %4 | _callType: %5 | _x: %6", _arguments, _functionID, _functionName, _targets, _callType, _x];
                                    };
                                };

                                call
                                {
                                    if ((local _target) || (_owner > 2)) exitWith
                                    {
                                        DF ["[INF] [MOCAP_fnc_Call] Calling local client function | _arguments: %1 | _functionID: %2 | _functionName: %3 | _targets: %4 | _callType: %5 | _x: %6", _arguments, _functionID, _functionName, _targets, _callType, _x];
                                        MOCAP_EXEC(_arguments, _functionName, _callType);                                    
                                    };

                                    if (((!isNull _target) && {!local _target}) || (_owner in MOCAP_serverOwnerIDs)) exitWith
                                    {
                                        DF ["[INF] [MOCAP_fnc_Call] Calling remote server function | _arguments: %1 | _functionID: %2 | _functionName: %3 | _targets: %4 | _callType: %5 | _x: %6", _arguments, _functionID, _functionName, _targets, _callType, _x];
                                        MOCAP_packet = [_arguments, _functionID, _x, _callType];
                                        publicVariableServer "MOCAP_packet";
                                    };
                                };
                            };
                        };
                    }
                    else
                    {
                        DF ["[WRN] [MOCAP_fnc_Call] Target is not defined | _arguments: %1 | _functionID: %2 | _functionName: %3| _targets: %4 | _callType: %5 | _x: %6", _arguments, _functionID, _functionName, _targets, _callType, _x];
                    };
                } forEach _targets;
            }
            else
            {
                DF ["[WRN] [MOCAP_fnc_Call] Function is not registered | _arguments: %1 | _functionID: %2 | _targets: %3 | _callType: %4", _arguments, _functionID, _targets, _callType];
            };
        }
        else
        {
            DF ["[ERR] [MOCAP_fnc_Call] Invalid type of the given parameters | _arguments: %1 | _functionID: %2 | _targets: %3 | _callType: %4", _arguments, _functionID, _targets, _callType];
        };
    }
    else
    {
        DF ["[ERR] [MOCAP_fnc_Call] One or more parameters are not defined | _this: %1", _this];
    };
}
else
{
    DF ["[ERR] [MOCAP_fnc_Call] _this is invalid | _this: %1", _this];
};