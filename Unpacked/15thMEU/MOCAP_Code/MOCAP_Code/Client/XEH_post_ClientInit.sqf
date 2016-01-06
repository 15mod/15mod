/*******************************************************************************
* Project:          MOCAP
* Module:           XEH_post_ClientInit.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         --//--
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"

// =================================================================================================================
DC "[INF] [MOCAP_Code] XEH_post_ClientInit...";

// Get MOCAP_player before <player>
// -------------------------------
{
    if ((!isNull _x) && {(local _x) && (isPlayer _x)}) exitWith
    {
        MOCAP_player = _x;
        DF ["[INF] [XEH_post_ClientInit] Player found | _x: %1 | local: %2 | units: %3", _x, local _x, units (group MOCAP_player)];
    };
} forEach (playableUnits + switchableUnits);
// -------------------------------

DC "[INF] [MOCAP_Code] XEH_post_ClientInit complete";
// =================================================================================================================