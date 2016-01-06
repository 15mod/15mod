/*******************************************************************************
* Project:          MOCAP
* Module:           XEH_pre_ClientInit.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"

// =================================================================================================================
DC "[INF] [MOCAP_Code] XEH_pre_ClientInit...";

// RFE (client)
// -------------------------
MOCAP_fnc_OnHelloWorld = CFPPFLN("\MOCAP_Code\Client\RFE\fnc_OnHelloWorld.sqf")
// -------------------------

DC "[INF] [MOCAP_Code] XEH_pre_ClientInit complete";
// =================================================================================================================