/*******************************************************************************
* Project:          MOCAP
* Module:           XEH_pre_ServerInit.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"

// Server pre init
// =================================================================================================================
DC "[INF] [MOCAP_Code] XEH_pre_ServerInit...";

// RFE (Server)
// -------------------------
MOCAP_fnc_RequestHelloWorld = CFPPFLN("\MOCAP_Code\Server\RFE\fnc_RequestHelloWorld.sqf")
// -------------------------

DC "[INF] [MOCAP_Code] XEH_pre_ServerInit complete";
// =================================================================================================================