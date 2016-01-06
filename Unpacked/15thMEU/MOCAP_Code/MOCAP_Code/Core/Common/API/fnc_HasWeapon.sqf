/*******************************************************************************
* Project:          MOCAP
* Module:           fnc_HasWeapon.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_HasWeapon
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

private "_result";
_result = false;

if ((!isNil "_this") && {(typeName _this) == "OBJECT"} && {!isNull _this}) then
{
    _result = (((primaryWeapon _this) != "") || ((secondaryWeapon _this) != "") || ((handgunWeapon _this) != ""));
};

_result;