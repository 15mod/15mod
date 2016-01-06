/*******************************************************************************
* Project:          MOCAP
* Module:           fnc_DropWeapon.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_DropWeapon
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

if ((!isNil "_this") && {(typeName _this) == "OBJECT"} && {!isNull _this} && {(alive _this) && (local _this)}) then
{
    _this action ["DropWeapon", createVehicle ["GroundWeaponHolder", getPosATL _this, [], 0, "CAN_COLLIDE"], primaryWeapon _this];
    _this action ["DropWeapon", createVehicle ["GroundWeaponHolder", getPosATL _this, [], 0, "CAN_COLLIDE"], handgunWeapon _this];
    //sleep 1;
    //_this switchMove "";
};