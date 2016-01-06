/*******************************************************************************
* Project:          MOCAP
* Module:           XEH_pre_CommonInit.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"

// =================================================================================================================
DC "[INF] [MOCAP_Code] XEH_pre_CommonInit...";

// Machine type
// ------------
/*
isClient - Player-controlled machine or listenserver
isPureClient - Player-controlled machine only
isHeadless - Headless client
isListenserver - Client + server on the same machine
isDedicated - Dedicated server
isSingleplayer - Singleplayer or Editor
isMultiplayer - Server and/or client is in multiplayer mode
*/

MOCAP_machineType = if (isDedicated) then {MACHINETYPE_DEDICATED} else {NEGATIVE};
isClient = if (!isServer || (isServer && !isDedicated)) then {MOCAP_machineType = MACHINETYPE_CLIENT; true} else {false};
isPureClient = if (!isServer) then {MOCAP_machineType = MACHINETYPE_PURECLIENT; true} else {false};

// [HEADLESS_DEBUG]
isHeadless = if (!(hasInterface || isDedicated)) then {MOCAP_machineType = MACHINETYPE_HEADLESS; true} else {false};
//isHeadless = true;

isListenserver = if (isServer && !isDedicated) then {MOCAP_machineType = MACHINETYPE_LISTENSERVER; true} else {false};
isSingleplayer = !isMultiplayer;
// ------------

// RFE (common, core part)
// ----------------------------
#include "\MOCAP_Code\Common\RFECore\fnc_InitRFE.sqf"
MOCAP_fnc_FunctionByFID = CFPPFLN("\MOCAP_Code\Common\RFECore\fnc_FunctionByFID.sqf")
MOCAP_fnc_Call = CFPPFLN("\MOCAP_Code\Common\RFECore\fnc_Call.sqf")
MOCAP_fnc_RegisterFunction = CFPPFLN("\MOCAP_Code\Common\RFECore\fnc_RegisterFunction.sqf")
MOCAP_fnc_UnregisterFunction = CFPPFLN("\MOCAP_Code\Common\RFECore\fnc_UnregisterFunction.sqf")
// ----------------------------

// RFE (common, user functions)
// ----------------------------

// ----------------------------

// <player> replacement
MOCAP_player = objNull;

DC "[INF] [MOCAP_Code] XEH_pre_CommonInit complete";
// =================================================================================================================