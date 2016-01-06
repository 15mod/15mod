/*******************************************************************************
* Project:          MOCAP
* Module:           fnc_KeyAntispam.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_KeyAntispam
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

if ((!isNil "_this") && (!isNull player) && {(typeName _this) == "SCALAR"} && {_this >= 0}) then
{
    player setVariable ["MOCAP_lockControls", true, false];

    _this spawn
    {
        sleep _this;
        player setVariable ["MOCAP_lockControls", false, false];
    };
}
else
{
    DF ["[ERR] [MOCAP_fnc_KeyAntispam] _this is invalid"];
};