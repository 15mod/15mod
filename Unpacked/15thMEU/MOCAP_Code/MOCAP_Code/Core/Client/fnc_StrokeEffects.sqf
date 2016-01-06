/*******************************************************************************
* Project:          MOCAP
* Module:           fnc_StrokeEffects.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_StrokeEffects
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

private ["_unit"];


_unit = _this select 0;

if (player == _unit) then 
{
    addCamShake [8,2,80];			// Camshake

    [3] spawn bis_fnc_bloodeffect;		// Bloodsplash

    "dynamicBlur" ppEffectEnable true;	// Blur Creation
    "dynamicBlur" ppEffectAdjust [5];
    "dynamicBlur" ppEffectCommit 0; 

    "dynamicBlur" ppEffectEnable true;	// Blur removal
    "dynamicBlur" ppEffectAdjust [0];
    "dynamicBlur" ppEffectCommit 2; 
};