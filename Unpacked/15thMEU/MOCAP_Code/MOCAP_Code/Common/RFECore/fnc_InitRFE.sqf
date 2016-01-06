/*******************************************************************************
* Project:          Remote Function Execution System
* Module:           fnc_Init.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

/*
call MOCAP_fnc_ServerInit;
*/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"

MOCAP_registeredFIDs = MOCAP_REGISTERED_FIDs;
MOCAP_serverOwnerIDs = [0, 1, 2];

if (isMultiplayer) then
{
    MOCAP_packet = [];
    "MOCAP_packet" addPublicVariableEventHandler {(_this select 1) call MOCAP_fnc_Call;};
};