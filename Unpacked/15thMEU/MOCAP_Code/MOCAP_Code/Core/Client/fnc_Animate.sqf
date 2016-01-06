/*******************************************************************************
* Project:          MOCAP
* Module:           fnc_Animate.sqf
* Project version:  [1.0.0] 23.08.2014
* Module version:   [1]     23.08.2014
* Author:           Crazy Brains Studio
* Function:         MOCAP_fnc_Animate
* Comments:         --//--
*******************************************************************************/

#include "\MOCAP_Code\defines.hpp"
#include "\MOCAP_Code\Core\defines.hpp"

private
[
    "_unit",
    "_target",
    "_animationAssetID",
    "_animationAssets",
    "_animationDamage",
    "_animationDistance",
    "_animationAngle",
    "_weaponDropChance",
    "_punchVelocity",
    "_animationAsset",
    "_unitActionName",
    "_unitActionTime",
    "_unitAdditionalDelay",
    "_preyActionName",
    "_preyActionTime",
    "_preyAdditionalDelay",
    "_relativeDirection"
];
//diag_log str _this;
if ((!isNil "_this") && {(typeName _this) == "ARRAY"} && {(count _this) == 3}) then
{
    _unit = _this select 0;
    _target = _this select 1;
    _animationAssetID = _this select 2;

    if ((!isNil "_unit") && (!isNil "_target") && (!isNil "_animationAssetID") && {((typeName _unit) == "OBJECT") && ((typeName _target) == "OBJECT") && ((typeName _animationAssetID) == "SCALAR")} && {!isNull _unit} && {(alive _unit) && (_unit isKindOf "CAManBase") && (_unit == (vehicle _unit)) && !(_unit getVariable ["MOCAP_animationInProgress", false]) && (isNull (attachedTo _unit))}) then
    {
        _unit setVariable ["MOCAP_animationInProgress", true, false];

        _animationAssets = [];
        _animationDamage = NULL;
        _animationDistance = NULL;
        _animationAngle = NULL;
        _weaponDropChance = NULL;
        _punchVelocity = NULL;
        _unitAdditionalDelay = NULL;
        _preyAdditionalDelay = NULL;

        // Assets
        // -----------------------------------------
        switch (_animationAssetID) do
        {
            // Knock using rifle
            case MOCAP_PUNCHTYPE_WEAP_RIFLE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Rfl_Stroke_DirectCurve", 1.7, 1.5, "", -1, -1,
                        (random (MOCAP_RFL_STROKE_DAMMAGE_MAX - MOCAP_RFL_STROKE_DAMMAGE_MIN)) + MOCAP_RFL_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_RFL_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_RFL_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ],
                    [
                        "MOCAP_Man_Act_Rfl_Stroke_RightCurve", 1.7, 1.5, "", -1, -1,
                        (random (MOCAP_RFL_STROKE_DAMMAGE_MAX - MOCAP_RFL_STROKE_DAMMAGE_MIN)) + MOCAP_RFL_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_RFL_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_RFL_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };

            // Knock using pistol
            case MOCAP_PUNCHTYPE_WEAP_PISTOL:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Pstl_Stroke_RightCurve", 1.2, 1.0, "", -1, -1,
                        (random (MOCAP_PSTL_STROKE_DAMMAGE_MAX - MOCAP_PSTL_STROKE_DAMMAGE_MIN)) + MOCAP_PSTL_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_PSTL_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_PSTL_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ],
                    [
                        "MOCAP_Man_Act_Pstl_Stroke_LeftCurve", 1.6, 1.4, "", -1, -1,
                        (random (MOCAP_PSTL_STROKE_DAMMAGE_MAX - MOCAP_PSTL_STROKE_DAMMAGE_MIN)) + MOCAP_PSTL_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_PSTL_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_PSTL_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };
            // Knock using launcher
            case MOCAP_PUNCHTYPE_WEAP_LAUNCHER:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Lnr_Stroke_DirectCurve", 1.2, 1.0, "", -1, -1,
                        (random (MOCAP_RPG_STROKE_DAMMAGE_MAX - MOCAP_RPG_STROKE_DAMMAGE_MIN)) + MOCAP_RPG_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_RPG_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_RPG_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };
            // Knock using hands
            case MOCAP_PUNCHTYPE_WEAP_NONE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct", 1.0, 0.8, "", -1, -1,
                        (random (MOCAP_NONE_STROKE_DAMMAGE_MAX - MOCAP_NONE_STROKE_DAMMAGE_MIN)) + MOCAP_NONE_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_NONE_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_NONE_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ],
                    [
                        "MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct", 1.0, 0.8, "", -1, -1,
                        (random (MOCAP_NONE_STROKE_DAMMAGE_MAX - MOCAP_NONE_STROKE_DAMMAGE_MIN)) + MOCAP_NONE_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_NONE_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_NONE_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };
            // Knock using melee
            /*case MOCAP_PUNCHTYPE_WEAP_MELEE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct", 1.0, 0.8, "", -1, -1,
                        (random (MOCAP_NONE_STROKE_DAMMAGE_MAX - MOCAP_NONE_STROKE_DAMMAGE_MIN)) + MOCAP_NONE_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_NONE_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_NONE_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ],
                    [
                        "MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct", 1.0, 0.8, "", -1, -1,
                        (random (MOCAP_NONE_STROKE_DAMMAGE_MAX - MOCAP_NONE_STROKE_DAMMAGE_MIN)) + MOCAP_NONE_STROKE_DAMMAGE_MIN,
                        999,
                        MOCAP_NONE_STROKE_DAMMAGE_DISTANCE,
                        MOCAP_NONE_STROKE_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };*/
            // Kick wearing rifle
            case MOCAP_PUNCHTYPE_LEG_WEAP_RIFLE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Rfl_Push_Kick_LeftLeg", 1, 1.0, "", -1, -1,
                        (random (MOCAP_LEGS_PUNCH_DAMMAGE_MAX - MOCAP_LEGS_PUNCH_DAMMAGE_MIN)) + MOCAP_LEGS_PUNCH_DAMMAGE_MIN,
                        999,
                        MOCAP_LEGS_PUNCH_DAMMAGE_DISTANCE,
                        MOCAP_LEGS_PUNCH_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };

            // Kick wearing pistol
            case MOCAP_PUNCHTYPE_LEG_WEAP_PISTOL:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Pstl_Push_Kick_LeftLeg", 1, 1.0, "", -1, -1,
                        (random (MOCAP_LEGS_PUNCH_DAMMAGE_MAX - MOCAP_LEGS_PUNCH_DAMMAGE_MIN)) + MOCAP_LEGS_PUNCH_DAMMAGE_MIN,
                        999,
                        MOCAP_LEGS_PUNCH_DAMMAGE_DISTANCE,
                        MOCAP_LEGS_PUNCH_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };
            // Kick wearing launcher
            case MOCAP_PUNCHTYPE_LEG_WEAP_LAUNCHER:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Lnr_Push_Kick_LeftLeg", 1, 1.0, "", -1, -1,
                        (random (MOCAP_LEGS_PUNCH_DAMMAGE_MAX - MOCAP_LEGS_PUNCH_DAMMAGE_MIN)) + MOCAP_LEGS_PUNCH_DAMMAGE_MIN,
                        999,
                        MOCAP_LEGS_PUNCH_DAMMAGE_DISTANCE,
                        MOCAP_LEGS_PUNCH_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };
            // Kick wearing nothing
            case MOCAP_PUNCHTYPE_LEG_WEAP_NONE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg", 1, 1.0, "", -1, -1,
                        (random (MOCAP_LEGS_PUNCH_DAMMAGE_MAX - MOCAP_LEGS_PUNCH_DAMMAGE_MIN)) + MOCAP_LEGS_PUNCH_DAMMAGE_MIN,
                        999,
                        MOCAP_LEGS_PUNCH_DAMMAGE_DISTANCE,
                        MOCAP_LEGS_PUNCH_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };
            // Kick wearing melee
            /*case MOCAP_PUNCHTYPE_LEG_WEAP_MELEE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg", 1, 1.0, "", -1, -1,
                        (random (MOCAP_LEGS_PUNCH_DAMMAGE_MAX - MOCAP_LEGS_PUNCH_DAMMAGE_MIN)) + MOCAP_LEGS_PUNCH_DAMMAGE_MIN,
                        999,
                        MOCAP_LEGS_PUNCH_DAMMAGE_DISTANCE,
                        MOCAP_LEGS_PUNCH_DAMMAGE_ANGLE,
                        MOCAP_TARGET_WEAPON_LOOSE_CHANCE,
                        MOCAP_LEGS_PUNCH_VELOCITY
                    ]
                ];
            };*/
            // Grab: player - stands, target - stands
            case MOCAP_BACK_GRAB_AERC_PERC:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_Naked_Choke_No_Contr", 8, 8,
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Naked_Choke_No_Contr", 8, 8,
                        1,
                        MOCAP_BACK_GRAB_DISTANCE,
                        MOCAP_BACK_GRAB_AERC_PERC_DISTANCE,
                        MOCAP_BACK_GRAB_ANGLE,
                        1,
                        0
                    ]
                ];
            };
            case MOCAP_BACK_GRAB_AKNL_PERC:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_Legs_Neck_Twist_No_Contr", 4.3, 4.3,
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Prey_Grabbed_Legs_Neck_Twist_No_Contr", 4.3, 4.3,
                        1,
                        MOCAP_BACK_GRAB_DISTANCE,
                        MOCAP_BACK_GRAB_AKNL_PERC_DISTANCE,
                        MOCAP_BACK_GRAB_ANGLE,
                        1,
                        0
                    ]
                ];
            };
            case MOCAP_BACK_GRAB_AKNL_PKNL:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Grabbed_OnBack_Naked_Choke_No_Contr", 9.68, 9.68,
                        "MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grabbed_OnBack_Naked_Choke_No_Contr", 9.68, 9.68,
                        1,
                        MOCAP_BACK_GRAB_DISTANCE,
                        MOCAP_BACK_GRAB_AKNL_PKNL_DISTANCE,
                        MOCAP_BACK_GRAB_ANGLE,
                        1,
                        0
                    ]
                ];
            };
            case MOCAP_BACK_GRAB_AERC_PKNL:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Stay_CombatPace_Un_Atacker_Grab_ByLeftLeg_Neck_Twist_No_Contr", 2.46, 2.46,
                        "MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Prey_Grab_ByLeftLeg_Neck_Twist_No_Contr", 2.46, 2.46,
                        1,
                        MOCAP_BACK_GRAB_DISTANCE,
                        MOCAP_BACK_GRAB_AERC_PKNL_DISTANCE,
                        MOCAP_BACK_GRAB_ANGLE,
                        1,
                        0
                    ]
                ];
            };
            case MOCAP_BACK_GRAB_AKNL_PPNE:
            {
                _animationAssets =
                [
                    [
                        "MOCAP_Man_Act_Idle_Kneel_CombatPace_Un_Atacker_Lying_Neck_Twist_No_Contr", 4.0, 3.6,
                        "MOCAP_Man_Act_Idle_Prone_CivPace_Un_Prey_Lying_Neck_Twist_No_Contr", 4.0, 3.6,
                        1,
                        MOCAP_BACK_GRAB_DISTANCE,
                        MOCAP_BACK_GRAB_AKNL_PPNE_DISTANCE,
                        MOCAP_BACK_GRAB_ANGLE,
                        1,
                        0
                    ]
                ];
            };
        };
        // -----------------------------------------

        if ((count _animationAssets) > 0) then
        {
            _animationAsset = _animationAssets select (floor (random (count _animationAssets)));
            _unitActionName = _animationAsset select 0;
            _unitActionTime = _animationAsset select 1;
            _unitAdditionalDelay = _animationAsset select 2;
            _preyActionName = _animationAsset select 3;
            _preyActionTime = _animationAsset select 4;
            _preyAdditionalDelay = _animationAsset select 5;
            _animationDamage = _animationAsset select 6;
            _animationInitiateDistance = _animationAsset select 7;
            _animationDistance = _animationAsset select 8;
            _animationAngle = _animationAsset select 9;
            _weaponDropChance = _animationAsset select 10;
            _punchVelocity = _animationAsset select 11;

            // Debug
            //HF ["UNIT:\n%1\n\nTARGET:\n%2\n\nASSET ID:\n%3\n\n_unitActionName:\n%4\n\n_unitActionTime:\n%5\n\n_unitAdditionalDelay:\n%6\n\n_preyActionName:\n%7\n\n_preyActionTime:\n%8\n\n_preyAdditionalDelay:\n%9", _unit, _target, _animationAssetID, _unitActionName, _unitActionTime, _unitAdditionalDelay, _preyActionName, _preyActionTime, _preyAdditionalDelay];

            call
            {
                if (_preyActionName == "") exitWith
                {
                    [_unit, _unitActionName, MOCAP_PLAYTYPE_PLAYACTION_NOW] call MOCAP_fnc_PlayAnimation;
                    sleep _unitAdditionalDelay;
                    if ((!isNull _unit) && (!isNull _target) && {(alive _unit) && (alive _target)}) then
                    {
                        _dir = [_unit, _target] call BIS_fnc_relativeDirTo;

                        if (((_target distance _unit) <= _animationDistance) && (abs (180-(_dir+180)%360) < _animationAngle) && (_target isKindOf "CAManBase")) then
                        {
                            // Need to simulate hit or kill by player to unit
                            //if ((damage _target) + _animationDamage) >= 1) then {
                            //Тут пуля
                            //    _current = currentWeapon player;
                            //    player addWeapon "mocap_killer";
                            //    player selectWeapon "mocap_killer"; player switchMove "";
                            //    player forceWeaponFire ["mocap_killer", "mocap_killer"];
                            //    player selectWeapon _current; player switchMove "";
                            //    player removeWeapon "mocap_killer";
                            //} else {
                                _target setDamage ((damage _target) + _animationDamage);
                            //};
                            [[_target], "MOCAP_fnc_StrokeEffects"] spawn BIS_fnc_MP;
                            if (((random 1) < _weaponDropChance) && (_target call MOCAP_fnc_HasWeapon)) then
                            {
                                // Need to change to serverside function
                                if (local _target) then
                                {
                                    _target call MOCAP_fnc_DropWeapon;
                                }
                                else
                                {
                                    // BIS_fnc_packet
                                    [_target, "MOCAP_fnc_DropWeapon", _target, false, false] call BIS_fnc_MP;
                                };
                            };
                        };
                    };
                };

                _relativeDirection = [_target, _unit] call BIS_fnc_RelativeDirTo;
                if ((!isNull _target) && {(alive _target) && (_target isKindOf "CAManBase") && (_target == (vehicle _target)) && ((_unit distance _target) <= _animationInitiateDistance) && (_relativeDirection >= (180 - _animationAngle)) && (_relativeDirection <= (180 + _animationAngle)) && ((abs ((getDir _unit) - (getDir _target))) <= _animationAngle * 1.2) && (isNull (attachedTo _target))}) exitWith
                {
                    _unit setDir (getDir _target);
                    _unit setPos (_target modelToWorld [0, -_animationDistance, 0]);
                    sleep 0.01;
                    _target attachTo [_unit, [0, _animationDistance, 0]];
                    sleep 0.01;
                    [_unit, _unitActionName, MOCAP_PLAYTYPE_PLAYACTION_NOW] call MOCAP_fnc_PlayAnimation;
                    [_target, _preyActionName, MOCAP_PLAYTYPE_PLAYACTION_NOW] call MOCAP_fnc_PlayAnimation;
                    sleep _unitAdditionalDelay;
                    detach _target;
                    if ((alive _unit) && (alive _target)) then {
                        //hint "now!";
                        _target setDamage ((damage _target) + 1);
                        //_current = currentWeapon player;
                        //        player addWeapon "MOCAP_FakeWeapon";
                        //        player selectWeapon "MOCAP_FakeWeapon"; player switchMove "";
                        //        player forceWeaponFire ["MOCAP_FakeWeapon", "MOCAP_FakeWeapon"];
                        //        player selectWeapon _current; player switchMove "";
                        //        player removeWeapon "MOCAP_FakeWeapon";
                    };
                };
            };
        }
        else
        {
            DF ["[WRN] [MOCAP_fnc_Animate] Non-existent animation asset has been given | _animationAssetID: %1", _animationAssetID];
        };

        _unit setVariable ["MOCAP_animationInProgress", false, false];
    }
    else
    {
        DF ["[ERR] [MOCAP_fnc_Animate] arguments are invalid"];
    };
}
else
{
    DF ["[ERR] [MOCAP_fnc_Animate] _this is invalid"];
};