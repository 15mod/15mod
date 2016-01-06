/*******************************************************************************
* Project:          MOCAP
* Module:           fnc_PlayAnimation.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_PlayAnimation
* Comments:         --//--
*******************************************************************************/

//[player, "MOCAP_Man_Act_Rfl_Stroke_DirectCurve", 201] call MOCAP_fnc_PlayAnimation;
//[cursorTarget, "MOCAP_Man_Act_Rfl_Stroke_DirectCurve", 201] call MOCAP_fnc_PlayAnimation;

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\rfe.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

private
[
    "_unit",
    "_animation",
    "_type"
];

if ((!isNil "_this") && {((typeName _this) == "ARRAY")} && {(count _this) == 3}) then
{
    _unit = _this select 0;
    _animation = _this select 1;
    _type = _this select 2;

    if ((!isNil "_unit") && (!isNil "_animation") && (!isNil "_type") && {((typeName _unit) == "OBJECT") && ((typeName _animation) == "STRING") && ((typeName _type) == "SCALAR")} && {(!isNull _unit) && (_animation != "")} && {alive _unit}) then
    {
        if (local _unit) then
        {
            switch (_type) do
            {
                case MOCAP_PLAYTYPE_PLAYACTION:
                {
                    _unit playAction _animation;
                };
                case MOCAP_PLAYTYPE_PLAYACTION_NOW:
                {
                    _unit playActionNow _animation;
                };
                case MOCAP_PLAYTYPE_SWITCHACTION:
                {
                    _unit switchAction _animation;
                };
            };
        }
        else
        {
            [_this, MOCAP_FID_PLAY_ANIMATION, _unit, MOCAP_CALL] call MOCAP_fnc_Call;
        };
    }
    else
    {
        DF ["[ERR] [MOCAP_fnc_PlayAnimation] arguments are invalid"];
    };
}
else
{
    DF ["[ERR] [MOCAP_fnc_PlayAnimation] _this is invalid"];
};